async function fetchAndValidateData() {
  try {
    let t = await fetch(
      "http://software.diu.edu.bd:8006/dashboard/studentSGPAGraph",
      {
        headers: {
          accept: "application/json, text/plain, */*",
          accesstoken: JSON.parse(localStorage.authentication).accessToken,
          "content-type": "application/json",
        },
        referrer: "http://studentportal.diu.edu.bd/",
        referrerPolicy: "strict-origin-when-cross-origin",
        body: null,
        method: "GET",
        mode: "cors",
        credentials: "omit",
      }
    );
    if (!t.ok) throw Error("Network response was not ok");
    let a = await t.json();
    Array.isArray(a)
      ? console.log(a)
      : (console.log("Received data is not an array, retrying..."),
        await fetchAndValidateData());
  } catch (e) {
    console.error("Error occurred:", e.message),
      console.log("Retrying fetch..."),
      await fetchAndValidateData();
  }
}
fetchAndValidateData();
