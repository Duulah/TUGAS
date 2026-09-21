const tombolTema = document.getElementById("tombol-tema");
const urutanTema = ["sistem", "terang", "gelap"];
const labelTema = {
    sistem: "Ikuti perangkat",
    terang: "Mode terang",
    gelap: "Mode gelap"
};

let temaAktif = localStorage.getItem("tema");
if (!urutanTema.includes(temaAktif)) {
    temaAktif = "sistem";
}

function terapkanTema(tema) {
    if (tema === "sistem") {
        document.documentElement.removeAttribute("data-tema");
    } else {
        document.documentElement.setAttribute("data-tema", tema);
    }
    localStorage.setItem("tema", tema);
    tombolTema.textContent = labelTema[tema];
}

terapkanTema(temaAktif);

tombolTema.addEventListener("click", function () {
    const posisi = urutanTema.indexOf(temaAktif);
    temaAktif = urutanTema[(posisi + 1) % urutanTema.length];
    terapkanTema(temaAktif);
});