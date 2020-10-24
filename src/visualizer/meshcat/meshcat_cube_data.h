/*
 * Copyright 2020 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MESHCAT_CUBE_DATA_H
#define MESHCAT_CUBE_DATA_H

#include <string>

static const char* meshcat_cube_data =
    "# cube.obj\n"
    "#\n"
    "\n"
    "o cube\n"
    "mtllib cube.mtl\n"
    "\n"
    "v -0.500000 -0.500000 0.500000\n"
    "v 0.500000 -0.500000 0.500000\n"
    "v -0.500000 0.500000 0.500000\n"
    "v 0.500000 0.500000 0.500000\n"
    "v -0.500000 0.500000 -0.500000\n"
    "v 0.500000 0.500000 -0.500000\n"
    "v -0.500000 -0.500000 -0.500000\n"
    "v 0.500000 -0.500000 -0.500000\n"
    "\n"
    "vt 0.000000 0.000000\n"
    "vt 1.000000 0.000000\n"
    "vt 0.000000 1.000000\n"
    "vt 1.000000 1.000000\n"
    "\n"
    "vn 0.000000 0.000000 1.000000\n"
    "vn 0.000000 1.000000 0.000000\n"
    "vn 0.000000 0.000000 -1.000000\n"
    "vn 0.000000 -1.000000 0.000000\n"
    "vn 1.000000 0.000000 0.000000\n"
    "vn -1.000000 0.000000 0.000000\n"
    "\n"
    "g cube\n"
    "usemtl cube\n"
    "s 1\n"
    "f 1 / 1 / 1 2 / 2 / 1 3 / 3 / 1\n"
    "f 3 / 3 / 1 2 / 2 / 1 4 / 4 / 1\n"
    "s 2\n"
    "f 3 / 1 / 2 4 / 2 / 2 5 / 3 / 2\n"
    "f 5 / 3 / 2 4 / 2 / 2 6 / 4 / 2\n"
    "s 3\n"
    "f 5 / 4 / 3 6 / 3 / 3 7 / 2 / 3\n"
    "f 7 / 2 / 3 6 / 3 / 3 8 / 1 / 3\n"
    "s 4\n"
    "f 7 / 1 / 4 8 / 2 / 4 1 / 3 / 4\n"
    "f 1 / 3 / 4 8 / 2 / 4 2 / 4 / 4\n"
    "s 5\n"
    "f 2 / 1 / 5 8 / 2 / 5 4 / 3 / 5\n"
    "f 4 / 3 / 5 8 / 2 / 5 6 / 4 / 5\n"
    "s 6\n"
    "f 7 / 1 / 6 1 / 2 / 6 5 / 3 / 6\n"
    "f 5 / 3 / 6 1 / 2 / 6 3 / 4 / 6\n";

static std::string texture_data_broken_robot =
    "data:image/"
    "png;base64,iVBORw0KGgoAAAANSUhEUgAAAKsAAADVCAMAAAAfHvCaAAAAGFBMVEVYn%"
    "2BH%2F%2F%2F%2Bex%2B3U5vd7s%2Bfq8%"
    "2Fs0itq72PMLUPvtAAASvklEQVR4AbXBC0JqCQxEwT5Jd7L%2FHc8FdR4g%2BEGtEr8u%"
    "2FBHxu7otdzd%2FQPyqlmRp1Pw%"
    "2B8aukDfRa1fw28ZtWy4sa89vEb7LCi0zx28RvqgkvouW3id%2FU8pbtWmv5beJXRWNrRmp%"
    "2BnfhlHXZm%2BQPi95Vk%2FoD4fZbMHxC%2FryTzB8Tva435A%2BL3rcb8AfH7VjJ%2FQPy%"
    "2BHYk%2FIH5facwfEL8iaZcrnKyn%2BAPi57K2VL2WF1hJ%"
    "2FAHxQ2tJrg6HteXVjPkD4ge6V3J1%2BF97zhx%"
    "2BnXhWb8nacKXlnYPErxNPyfqw4ZYKVuUZdfhd4hmxunY73NICgfWMOvwm8ZQ1pMvlDZdaCi"
    "c98kjV4beIp8ScpLvsSvhflzqQmqVLB281v0E8pc2bdNne8EayNTPNSbt02PBj4intcKltb%"
    "2FNibY%2BLf9aSO%"
    "2FyMeMo6XMva3g0vwrWsxvyMeEoc3knZ2g53ZaXa8DzxlHa4J23Jae5aycXTxFPa4WRdXAtd"
    "sivckZXG4TniKWtOSlre6y7LG651Wxq5OzxDPGUVIKNwX6ekCv%"
    "2B0ddglVPMM8ZQ10FJ4LGVvOEuXRl7OqnmGeEor4Ck%2BtnI1ZEvjDa%"
    "2FcPEM8ZQVY4RO9VqUlN%2F84PEM8JQ50cUgXH2mrKlyq5RniOQ4vVjPLHdu86OKGi2eIr%"
    "2BgNV6JwljmYO6zlbJsbWp4hPtVrjYpLLV7UHIp7rOVkixtaniE%"
    "2BU5I2Nc2FKJytZhTuiac5rLnh4hniEzUbDjXhn3g5W0nNA1aAKm7YPEN8bMecrZYLWl70hk"
    "cyBay5YfMM8aHI4aR7xAUVHyirOdhAmRsqniE%2BtOKsRjIXtDzmmRGHVmDFDRfPEB%"
    "2BJzMmO01xScdYnVRs6vPHMFG9W4ZrMM8RHouWw43DNhlDWiSVZY3nDoWYc3qzDNZlniPe6w"
    "4uoOFjcKhPXuJNWyG6VqjSuhm7%"
    "2BiZorUfEM8U5J8nKyMw0tcZLwPxdRtTlUcUgVdGlml0uZ4pqKZ4hr5VUnpSXdUgVa4hA5vH"
    "ERV1Tp9XhdJTWHksYd%"
    "2Ftdarql4hrjQiaPiYLclNSeebVYz5o0W7Ghsa9blmlFtx01rxP8yy5XIPEP8L1W7bjWHlbz"
    "hRTwjzXrCK1f3qqSEyBysLVtayKp40yqurcITxJtUgavVHNob%"
    "2FinZTWt5VVvWVKvJSttQCkRjb%2FA4vLK5thOeIN6sm9ai5cTFhYRDy%"
    "2FyTGpdU0hxkaZvWUrZluTmLims14QniVbywClqgeouT9IZXNWoupGzNqHa3y5LGVYBnipbC"
    "SVxcq1meIN54oRXsbEk26S3NmBcZ807K3gon2ZLcxF5tPMVJprlWE54g3nihtbRHm7WjkbxT"
    "HSCWwj1r2U4HSMmdQEmWwonNtah4gnhjA9ZSaohmpnpDjWRptDwS25LcQGsc2Bla5sTFtZV4"
    "gnixpWmIVWpgRuVwsiV5q7kv0JJcNVIFapydUrHTQKa5IfMEcRKrurSQ0qhsmVR4kea%"
    "2B7pIr9NqSrRltWlaxomUgVVyLxBPEYeUGygtszew2KfOBclVpVN2ctCXNidZaaKWmONhc6r"
    "KaJwi6xuGkRmWpAkRa7outF9XN%2F7LlmbJmpiCyvBxk%"
    "2FtnSqHmGWGk5i2ZcaWBLau5KKHt3Ce%2FsaLMz46VG4cTFm%"
    "2FaMOzxFUYWztjzhkNI43JPyYvPAegPxzFRpOYmWF1WywrPUag5xjRapqqxxubijvYFVaC%"
    "2Fv7YSDpzxjzlbhpKXxhqcpWshqtECk0Yys6m5utZdD1LCuCifhfyVOapqsxhyiQMmSm58QN"
    "dZheZGV5FqwueXiZBUga28DvRte1NQCpQVSUkFqPbIr%"
    "2FIxg7arwJqqEg6e5Vuas1Zytyw1ka5uT9ajKI87WbksaLT8mbkXFyWqaa2rOVuFVStUNpGr"
    "DoSTPmDfWdlby8kPiHQtoa0vLpXU4WzX%"
    "2FS5W2gWxtOHQ24U3CSUmu8BPinR2XVSFyuNAOZ9Fyae1qDu2qcF8suRKeJt7pcW1zaE9xwc"
    "VZq7nWtpeTrQ0PrEeq8CTxnsWrlbThELra5ixqbsXWNoeq6nBft6TlOeK9VnG2lfb4TKOOlp"
    "OouKPsWg4pb3Nf1uMGusP3iDtKDaTcgMuWvL1FmZOouCtlbwJs1Yb7SuN2Nd8k7mgvXV4OKW"
    "ALiGkVJ14eyPqQQG9Vc0dWGnn5LnFPTW1z1gW0OdSyag5aHsvaroVs1YZL2dKMt1nzXeKula"
    "s52QLanGy3xq4a87Eu2yHZ2uZNWzPjDbDmu8R9a8m7iQNscbKyy%2BWS%"
    "2BUzWtqp7qzpA1jPj8KKK7xIPZG2NVWTTSbpKbs5cfEF6y64qV6ctqcKbdvgm8VhSlnWwJbu"
    "aV3LzRb11onFt%2BKcVvkl8one7u3bD%2FzJuXnRt%2BFTXVHOWqubQ4rvEEyI1L1Z2h8%"
    "2B0eRHLKiBqvkk8IePmxZq1lk%"
    "2B0w0nJUHKIlm8ST8ioeVEFtFwbPhA3h8gcdpZV803iCRkVL7Y42bK2w0NlDqXlpJRV803iG"
    "ZYrnFRxlqwO3eEuN4dSOGlVme8Sz7C37QZqeZPekl0b3nMBreKsp1bNN4lnWIEtF1Vc6i1bV"
    "ZtwxQX0NC9UrfBN4hk7zaHLNrey1kgVLljATnO2rmj5JvEMqzlrF%2B%"
    "2BFXitcsAArnFkdLd8knrFqPmFzyQq0xUm0tJZvEs8oAR0eix0u1ARSqg70NNHyTeIZUqgZ8"
    "5gdLlgcMjOSRlBqvkk8wwOSp3moJlyoCYfeKkmBVvgm8YyaUJJ5zOJSTXMWSgus%"
    "2BC7xjJpA%2BMiquVATXiUcSuGbxDNqmk%"
    "2BUxtW82WmurMI3iWd4wifaHo1rNxx2miul8E3iGTXhc4nH0lQ1O80VK3yTeEYNX5SspbEnX"
    "FmFbxLPqGm%2BrsvWFFdK4ZvEM2rCt6RmzCWL7xLP2Anfs2M3Fyy%"
    "2BSzyjpvmqDoed5YrFd4ln7DRftHI19BRXSuGbxDN6wtdEqjF4lisS3yWeEYUvWlkDNeZKTf"
    "gm8ZFu7mqFr%"
    "2FKMYae4lFH4JvGBVLgraghf09uQMZdabr5JfKC2q1zV3IgarOLLPMWllptvEo%"
    "2B1e7dkq5ZrLkip%2BKqa4lLk5ZvEY15INay9XIqXVGS%"
    "2BqsdcirzclYVa7hAPbQFVnJSaC9HCapavqjGXIjXvbNmSxi7eE4%"
    "2BsA21OumwuSQUJX1ZjLsVabqR6t7tUlrThhnjEC%"
    "2FFy6AKbCy45zdftmEutKm5UcSgHspY7XBEPVAFVHLoCUXPFkr3hi2wutba44QDr5iyeqQ3%"
    "2FiAccqOLQDhAV17pG0jZfUuZS5OJaGYiWF%2B2ypOV%"
    "2F4q5UQZtDu4G2xK10aeTlC1bhUslciQpYh7PSQtau8ErcVYZ4gXYDcUXLe1lrvBU%"
    "2B0VoutFRcWQWo4qwdTlYSr8Q9caDMwc3BDgl3xZpRb%"
    "2FORnuVCJHNlla2oOYmLQ8q7Ll6Ie6pgDaQKSCl8IF3WqAgPrbgU2VxpV1kje2EdoOWGlsOJ"
    "uKMd1g14OdjNp1YjNY%2B0m0s15kYgJVlaFxBVOETuAOK9eEELrDmUli%"
    "2Fo8oy94S4Xl2LzQGukEFU46RptQLy3BWWgHSBTvEp32eGRtjTjSriQBKLlShUPrSRcnK2qt"
    "IB4Zw3tQNRAbF5FB0vhoS57JFXzZmUtuLiy5gNlTTixlkgB8Y4byhAX0HJ4Y%"
    "2FcmWkjz0NrSaMNJ5EiNi3%"
    "2FSpPlIayqA3UBcIG5tQTuwBcQOJx3AsrSzxHJ4bKs9U5xoqWnK4U17%"
    "2BUzPFLQ4iQ3iRtxQC3gBK5xZJjOutcaSpeYjsUZqKFmGOLxIaflU1jI2ZzuLuLGuLe2yBlr"
    "LC1tdWg7ZmWal8KHeGtXG0gLLSdZyha%2BoKYdDl7WIGxpbI7lSicyLqFkH2rVZF%"
    "2BwUnymNXNu8WUkVLqSaB6IpIGWXF3Ft1UC6rRq3mhc7TRXgLS2lrKb5VEoz6nCSrtE2V6p4"
    "aMeQ8tJaxLU4nGU9o%2BXVTrMF%2BLBgjYqvSNkjL%"
    "2BDxhmut5tDb3CF1uwJoEdday6vMTHjVs7GA3g3QU8tXxZJc6Q23yhxWckPCtZW1nLgQ12KF"
    "F5Ed3pQ0U7yKp%2Fi6YM%"
    "2FI4dZOA3FRRdvhSmaWMxtxI3JzVlP8k9qsVFWdbVvTfENCjcytUoBW46XscE3DizLi1o6KQ"
    "4%2FDlZRsWSfBCt%2BSdHGrzGHFOtjFtUgNNJQR78Qjr%"
    "2BVwzV4I65SazPJzrQbKq6bl5kapU7bbRryXLo3c3LATYIfMEs3yc1bA44bScqumvJ21jLgr"
    "hHdSktNWkONR%"
    "2BLmULMnbpQm3pOWkZxHf0R7NKKykDr9iq3ptuexOuJQRZ5lCfE96K5Ct5iNpe118WQKxVeG"
    "CxnYDmUL8iUjb2%"
    "2BXmexIu9Di9XtgpxJ9wcehuOzwt1gJx4ynEM9K9tS5X7fLempP2dmnDczwjTlLYi%"
    "2FiCnHXSe9LWic9k3qvlRTltLU%2Bp2lE1sKUG8bm2DiNpNBpJu5vwwuEdLa%"
    "2FWy6p4JL27Dg%"
    "2B0pUBsQHxu67C1Vb2dpLlU5h3bG87aS0vNXWtJtip0bbjDhqgB8TkvH1g115qttnfDoW0oN"
    "e%"
    "2B1Rs0hlqVRc8cSmYP4XBUfUXHNlQ5tqzkpNaXmHVV4lVpq1NxjhYP43JqP2FwracOh7OZQD"
    "uXmRmu5sjMO75SWE%2FE5F4%"
    "2F09s5wI5abQ0rFoVxZNTes7e7wvy053NpwJj7n4kVCDt29teWypJHFOy0VJ6sN0CrK4dpak"
    "mv5pxQeEZ8rQ%2B9alnU2knyo2k64Ix4vh5I5sVNarqW3u8z%"
    "2F4mkeEZ8LrCxXtbfWu9t8qqQK0DKHVtEubrWm%2BZ9VPCS%"
    "2BJN1828oB4gqwalrFtUjNP3bzkPg7sdXAyhyssF4upWb5Z8c8Jv5QWmpgVRxUsGoulMw%"
    "2FPQqPiZ%2Fp8JGVOLQWKAW6%2BCcyF2qGD4gfibe2ead5lXEDpQAu0rv8r2WgtZxl1Twm%"
    "2Ftls1HxHK7HDjZV51VIgWmBlSeMKr%2BxseZYXq%"
    "2BUx8aY0MxrvVnUC4XNxgYtrJY15taMmNlAztd0lhxfW6MChC1rFY%"
    "2BLVjlwzKutVdfhE7xjKXEiX3CuHFzWG0lLycogUXnTtxuaws6DiMfFK09kZQ9K1VSvJ3oRH"
    "slIFWuGftdzQUoWzlYONinBILRdaC8TTYPO%2F3nBFnKxLG2um%"
    "2BKfXOrg6vBdLrvJSCm9SJpy0RtucrMRq1Zy1woUy0B4HbN60ex0uiEN0KLk1xZXs2paKW9F"
    "IqrJrzP%2Fs5k17tJz0GE%"
    "2FxohwulGElOUTmTRWl5oI4lKRRsTPhVpIdc6sl10IsFW9WXNpROPH0TkGAVnFpx5a63WSKN"
    "5HVXBKwc1btEffsNO8kvBObS5lZTnaUMXFYqbnUltwg75h%"
    "2FusMVATXleWW7qk1Xb8KLVfiKlsIlj9Sc1FhFtjITboSTlSp8QMCO5JU11bb1ZlQdIHL4ip"
    "rmktWROclqGlaWmvsSPiRAIy3lcAhk05vsWgfbU3xFVFyRWTUvSqqa2S7zHEFmRikt7yS18k"
    "xxFj6yY67UbNu86U6qIApPEUSasZb7Ek0DqXh5LHa4lDFWc6kd4uUpgsiaKR6pKQ61uHmsZr"
    "myk1ZxpQ1oeYoAzaG4ry1zsuXisVJxpeQdc60N2DxFgGckc1ePixdpHkjVjrnS0kpc6u5SwM"
    "tTBKxkybUJN3bUfCaulsMVTVvNP%2BmyNQVe7tjlE%"
    "2BJFb1mSLVfV9jaHHS2fiao15sqOd4pL29ArbxXvldV8TPwv6XVV6YXtGTefiiqaMRei2TFX"
    "KpzUONxKFWo%"
    "2BJt5J0ltlzQxfsCqimSpv86KmrHApBbXA2s2NuKPwMfFQvOELWgvsnEjVQMYtc2UXqjm0xI"
    "0yq%"
    "2FAx8T0JtyJz8DiekWpjxWoupRqqOamp5VJPsXJt9256wz3iW8oOt1xNaWah3NZJZK7UAg6H"
    "Lo%"
    "2B5tFPgke2SreUe8R1rO9xayTpALFaa2Z3mUhyo4qQ6I67MbLlsyyfFPeI71m7ey0orw2pL2"
    "56WuFILVHOI41mu1IyK3u0q28094nvCXQHLtqyF9Gq5tA7E4bAViRsrNW%"
    "2FCXeK3lDTVVoBI4ZIDVHFYpbTcyIbPiF%2FTSbPT3SUtl6qAuDl4W8UzxC%"
    "2Fz6CRciALUcijT4inil%2FV2p4pLtUDcwCol8xTxF8KlKg5VQGtb4jniz7UbWAcox%"
    "2BJJ4s%2B5OLiAVnuKJ4m%2FtuawBURbszxL%2FLF4OXgh9s7yNPHHqjisgVLLPE%"
    "2F8rXYD7UCrVsXzxN%2Bq4uAGrFj8gPhTXRzKwGprmh8Qf2rlot2AvSp%"
    "2BQvyl1nikAlprh58Qf0lqolGBarX8iPhLZWBVqnVsfkb8pTaHcru61PyM%"
    "2BEtrDq2UW8sPib%2FUChBvbIcfEn%"
    "2FKxWGrpeWnxJ9qVYDyVPgp8bfa2qRmmh8Tf21lq5qfE38uveE3%2FAdr385%2FSVd%"
    "2FMAAAAABJRU5ErkJggg%3D%3D";
static std::string texture_data_256x256 =
    "data:image/png;base64,R0lGODlhAAEAAaIAAP///wAAAA8PD/"
    "Dw8PT09B0dHeLi4gsLCyH5BAAAAAAALAAAAAAAAQABAAP/GLrc/jBKKAa4OOvNu//"
    "cIExkaZIVqK7ser7wmbZ0vYpxrjez7f+"
    "ZnVDXAxppuKHSVDw6VcsoyvKsfpLSLI9q7W60YEbT28WGs2Oy9RxOq51m9tL9Psq19Povfhf"
    "m9T59Un+"
    "ASCOCSoSFLYhzXItGfI0wipBQk36Plj6SmEyamzaeO5WhIYejlKCmjKkxpawZna4RsLEYtKq"
    "3NbO5Dra7vjKrux69wgvAt8glyqzHzM6szFPFLdDI0qbUE9qb2MLem9wS4pDgvuaQ5LXE1hv"
    "oueqL7BTu77Ko9cn3+Lj7W/yBiEdrXiGAAQUa0wfQICCEYvr5I+jKoR6I/BQuxBjA/"
    "2Idjh0l4qOYyuMbkCbJkByVkgxKke9Wemrp5aXGDjIx0exi8yY8hvt2ruEo9EnOSUWf9PSZj"
    "yjMd0uZXjjaKKmTqFKpIrJqx6nUphi5GsHKVKsgsUDI+jTbB+"
    "0PtTfZ3nEbyOvXqUDr0RVl965cOXtrwNX4l01gGoMVFj5zuFXYp8UWt4FcLLFAyWAas7A8MS"
    "87zS76fsWMh3Iw0Vk9kwN96fFdvKilch6pmhtrELNj1qZ2+0Nua6TRmF4We+3uaMNj/"
    "Y58PFvyacXjNg/3fFt0wtPTVQ+1fFfwQdvHXVecXV54S91vfY/S20P6WOsdvb7w/"
    "ln5gufXjb98v2J+ev/7dRagP/WZEl8i/"
    "x3E0QEEzEfAAQs2OJ8AFFZo4YUYZqjhhhxqWIABA4Qo4ogklmjiiSimaKIBBXTo4oswuvihi"
    "jTWaOONOOaoY4osxujjjzDOuOOQRA7QI5BIJnnhfAA8GKGDEHLE5IFDtHcKSFP2V1KCelA5R"
    "JYD6oblfF6SwmUdZe4ApmuvpanDmhBZ+"
    "dOYbWrJ0plvuJkDnAjJqYGeMfDZEJ5qAAqDoEERqpKdoyCql6JeGPqCo59BWgajnlC6mqVWS"
    "HqCprZxWoWnJoDKm6hGYYqJqciRqeokrDrnKp1+"
    "vboVqnDYikis1M0qpa9x4noEqSXwqh2wEBlrHrL/"
    "CCmLH7MAOesftPtIuyW19Vh7J7bsaDuTsJHoKoi3OoELBLEkkIuUuXuI24e6VbHLibt3wHsr"
    "t+TYe5a8NqA7gb5t8csLvXIAPJfAhtA6GsGMIXwNw2cYDJjDLPgrgcSGUXwDxGFg3DC+"
    "3Hg8GcjUiJyZxipYHIHJpZHMDMvCuYwMzODJLAzN7KE8EMdg4CxfnQqnFiZwPGvhM4I2+"
    "3J0lTpfUXQWS2eSdC5Rmzk1LVUT0fRGvwLNZq1Bl/"
    "V0zle7knUOfoKF0dmvbI3T2FGwrYvXa5e9Ld3J2v2t3pnyva7fsAJ+"
    "L97NQvnka05yVOTiOh6p5OM/Csn45Co6Dvnl/"
    "5hnjrnklHdeouWah14h556XHiJIDBqOUerzFRiKyg+kHcTQzNFeme3qwY1067jDpzvTTLr+"
    "ze9S8/71wr0rl7yBxFttfLCC7xv88q83r/"
    "X0xwudvWzUD9+9eNsb9z164y8C+y9udyC8Jecn9Nr651iPdvocwG++/G1jDz3hierfJ/1/"
    "wt/c3le+QrQvIv4bVPQClsD+8e9RDYTgAysVQQpOcFMVxOAFQ5VBDm7wVB0E4Qdb9bz/"
    "LfBgISQh2MLnE/sZUIAvkN0/WIidAiqIhuSx4UN0iCYYDiOFshphEAmIQ/"
    "7w8CNHLJQPPwHEXgnRiUTc3wqleBcXAuKAGSmhAv+"
    "feCwtOnCKJvSiBMG4xSiGkYxfrGISF7VGl7TxUm/"
    "kSRxHtcRmAFADVuxSHashRguicYxqLKKABEmgOabKkEpB5LD22I07zo6QYoIkVBQZLkqOxZL"
    "twuRbNNkvRpbDkTOkovZEyT1J1s6Ut0Nl7jjJF1X6jpWCgeXDZOkYUorPlcpbnYTukjiIsO4"
    "1ogumhUhnus6BTpiZI2Yxl8lMxh0TmZdTZjOJ9ExoQo5JvUTIL7+"
    "SzcJxcVnfpNoJJzbOgpXzY+HE2jlHlk6zrfNk7+xZPGPWzlTILYagBAAWF3DPH9azUfOs2T/"
    "7NtC/FTRwBx3cH7MVULIldFcN/dlCuxX/"
    "0d1NNF8VBd5Dx5XR4l00ZB113kdLFtLrbfRdJZ1fSve00gEir2sjHeJL63ZSctbUnDdFZ0xn"
    "1lJ89nRSP2ViTiMWVDsWtVhHbWRS/"
    "7XUdjR1ZU+NXT73qYB+CnWnN4sq+"
    "rTqAKsadagd4yoCwSpPstITq0oTaxbRKk6zCpSt6nSrQ+"
    "HqTrlKdKZ5s6tF8epNut7NrwDVq0YBS1DCGtSwCEWsQvkaLbUqQIb69OTFHBsSygbAq3xULE"
    "QF61HGVouykKXqZUE7VclClbMi9SxDUWtSzXKUtSqFLUtl69JR5tW1KKTtoUhrWcwqVbdABe"
    "5VVUtR4X4Vt/XirXGRutzfDiIXp8/VKXEx2txPWjYBADs=";
static std::string texture_data_4x4 =
    "data:image/png;base64,R0lGODlhBAAEALMAAP///wAAAA8PD/"
    "Dw8PT09B0dHeLi4gsLCwAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACwAAAAABAAEAAAEClCYYg"
    "YtkgIxRAQAOw==";

#endif  // MESHCAT_CUBE_DATA_H