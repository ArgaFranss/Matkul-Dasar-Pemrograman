// // START

// INPUT jumlah_hari
// WHILE jumlah_hari < 1 OR jumlah_hari > 7
//     INPUT jumlah_hari
// END WHILE

// INPUT jumlah_produk
// WHILE jumlah_produk < 1 OR jumlah_produk > 10
//     INPUT jumlah_produk
// END WHILE

// total_keseluruhan = 0
// seluruh_unit = 0
// nilai_tertinggi = 0
// hari_tertinggi = 0

// FOR hari = 1 TO jumlah_hari
//     total_harian = 0

//     FOR produk = 1 TO jumlah_produk

//         INPUT jumlah_unit
//         WHILE jumlah_unit < 0 OR jumlah_unit > 1000
//             INPUT jumlah_unit
//         END WHILE

//         INPUT harga_satuan
//         WHILE harga_satuan <= 0
//             INPUT harga_satuan
//         END WHILE

//         subtotal = jumlah_unit * harga_satuan
//         total_harian = total_harian + subtotal
//         seluruh_unit = seluruh_unit + jumlah_unit

//     END FOR

//     total_keseluruhan = total_keseluruhan + total_harian

//     IF total_harian > nilai_tertinggi THEN
//         nilai_tertinggi = total_harian
//         hari_tertinggi = hari
//     END IF

// END FOR

// rata_rata_harian = total_keseluruhan / jumlah_hari
// rata_rata_data_produk = total_keseluruhan / (jumlah_hari * jumlah_produk)

// OUTPUT seluruh_unit
// OUTPUT total_keseluruhan
// OUTPUT rata_rata_harian
// OUTPUT rata_rata_data_produk
// OUTPUT hari_tertinggi
// OUTPUT nilai_tertinggi

// END