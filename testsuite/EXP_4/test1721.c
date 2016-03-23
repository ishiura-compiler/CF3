
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = UINT32_MAX;
uint8_t x14 = UINT8_MAX;
uint8_t x17 = 0U;
uint8_t x20 = UINT8_MAX;
volatile uint32_t t3 = 30U;
int32_t x21 = -1;
int64_t x23 = -1LL;
volatile uint16_t x42 = 4539U;
uint8_t x44 = 124U;
int16_t x59 = INT16_MAX;
uint16_t x60 = UINT16_MAX;
static int32_t x72 = -1;
static uint64_t x75 = UINT64_MAX;
volatile int32_t x84 = 33397506;
int16_t x111 = 6;
uint16_t x112 = 7U;
uint32_t x117 = 23741U;
volatile int32_t x118 = INT32_MAX;
uint8_t x119 = UINT8_MAX;
uint32_t t15 = 42263U;
uint16_t x149 = 10905U;
static int32_t x159 = INT32_MIN;
int16_t x175 = 5005;
static int16_t x198 = INT16_MAX;
int64_t x207 = -239402964413755LL;
volatile int32_t t25 = -55157;
static int32_t x253 = -363144496;
uint32_t x256 = 1U;
int32_t x263 = -735;
int16_t x279 = -1;
int64_t x287 = INT64_MAX;
uint16_t x296 = 6U;
uint32_t x302 = 120200U;
volatile int8_t x337 = INT8_MAX;
static int32_t x338 = 322204;
int64_t x339 = INT64_MAX;
int8_t x340 = INT8_MIN;
volatile int32_t t41 = -2;
uint64_t t42 = 5449674297616LLU;
volatile int16_t x355 = -1196;
int64_t x356 = 0LL;
int64_t x362 = INT64_MAX;
int64_t x364 = INT64_MIN;
volatile int64_t t44 = -72LL;
uint32_t x366 = UINT32_MAX;
int16_t x385 = 3052;
int32_t t47 = 1521;
int64_t x393 = INT64_MAX;
static uint64_t x394 = 16655478LLU;
volatile uint64_t x425 = 62561424LLU;
int16_t x428 = INT16_MIN;
volatile int32_t t51 = 247744;
volatile int32_t x439 = -1;
volatile uint16_t x451 = 1U;
volatile int8_t x453 = -1;
int8_t x472 = -1;
uint8_t x496 = 5U;
uint8_t x505 = 17U;
uint32_t x509 = UINT32_MAX;
uint16_t x512 = 0U;
volatile uint32_t x517 = UINT32_MAX;
static int64_t x521 = -227113LL;
int16_t x525 = INT16_MAX;
static int16_t x528 = 1;
int16_t x529 = INT16_MAX;
int64_t x532 = -1LL;
uint8_t x539 = UINT8_MAX;
volatile int32_t t64 = -17355;
uint32_t x550 = UINT32_MAX;
uint64_t x554 = UINT64_MAX;
static int32_t x557 = INT32_MAX;
volatile int8_t x577 = INT8_MAX;
volatile int32_t t71 = -3636804;
uint8_t x593 = 4U;
volatile uint16_t x594 = 1588U;
int16_t x629 = INT16_MAX;
uint64_t x631 = UINT64_MAX;
volatile uint64_t t76 = 346504024LLU;
uint16_t x658 = UINT16_MAX;
int8_t x660 = INT8_MAX;
static int64_t x677 = -1LL;
static int32_t x679 = INT32_MAX;
uint16_t x690 = 5886U;
volatile int64_t t84 = -4917LL;
uint8_t x698 = 0U;
static int8_t x704 = -20;
uint16_t x715 = 988U;
static uint64_t t89 = UINT64_MAX;
int32_t x723 = 10;
int64_t x728 = INT64_MIN;
uint8_t x732 = 29U;
volatile int32_t x757 = 49;
int8_t x771 = INT8_MAX;
uint64_t x778 = UINT64_MAX;
uint64_t x796 = UINT64_MAX;
int8_t x800 = 5;
volatile uint32_t x804 = UINT32_MAX;
int32_t x811 = -1958091;
volatile uint16_t x814 = UINT16_MAX;
int64_t x821 = -1670LL;
uint64_t t105 = 164LLU;
uint64_t x839 = 5363073001532756165LLU;
volatile uint32_t x853 = 1134143U;
int32_t x854 = 3840;
static uint32_t t110 = 10U;
int8_t x881 = INT8_MIN;
static int32_t x886 = INT32_MAX;
volatile int64_t t115 = INT64_MAX;
int64_t x897 = 65279LL;
uint64_t x906 = 2065320584275LLU;
static int16_t x973 = INT16_MAX;
static int8_t x978 = 1;
int32_t x980 = 1276583;
volatile int8_t x982 = 51;
static volatile int16_t x983 = 13567;
int8_t x993 = -27;
uint8_t x997 = 5U;
static int32_t x999 = -1;
volatile int32_t t124 = -4;
int64_t x1008 = INT64_MIN;
int64_t x1016 = 618481989LL;
int64_t x1024 = 0LL;
int32_t t129 = 684649818;
int32_t t130 = -223496295;
uint8_t x1046 = UINT8_MAX;
uint32_t x1057 = UINT32_MAX;
static int16_t x1070 = INT16_MAX;
uint32_t t137 = 199U;
int32_t x1081 = -1;
int16_t x1087 = 1;
static uint64_t t139 = 6570627821LLU;
int64_t t140 = 1246LL;
int16_t x1097 = INT16_MAX;
volatile uint64_t t141 = 173360777181771812LLU;
int32_t x1117 = INT32_MAX;
uint64_t x1118 = UINT64_MAX;
volatile int8_t x1127 = INT8_MAX;
volatile int32_t t145 = -693;
volatile uint8_t x1131 = 30U;
static volatile int32_t t148 = INT32_MAX;
uint8_t x1150 = UINT8_MAX;
volatile uint64_t x1152 = 1756889746501295380LLU;
volatile uint32_t t149 = 6U;
static int32_t t150 = 1587;
int8_t x1173 = INT8_MIN;
volatile uint32_t t152 = 547545U;
static int8_t x1185 = 0;
volatile int64_t x1189 = -1LL;
int64_t t155 = 677089616756602800LL;
int16_t x1204 = -3;
volatile uint32_t x1208 = UINT32_MAX;
volatile int32_t t159 = -7;
uint32_t x1223 = 521116U;
volatile int64_t x1249 = 18LL;
static volatile uint64_t t166 = 54747531481588LLU;
int32_t t168 = -3118;
volatile int64_t t169 = 44838LL;
uint64_t x1281 = 523670607944LLU;
int8_t x1282 = INT8_MAX;
static volatile uint64_t t172 = 40824312LLU;
uint32_t x1292 = UINT32_MAX;
uint8_t x1326 = UINT8_MAX;
static int32_t x1329 = 0;
int32_t x1346 = INT32_MAX;
int32_t t182 = INT32_MAX;
uint8_t x1356 = 3U;
int64_t x1357 = INT64_MAX;
uint16_t x1359 = 113U;
int32_t x1371 = INT32_MAX;
int64_t x1372 = INT64_MAX;
uint32_t x1374 = 4069680U;
uint8_t x1376 = UINT8_MAX;
uint16_t x1396 = 128U;
static uint16_t x1405 = 44U;
int32_t x1408 = -1;
int16_t x1417 = -1;
volatile int16_t x1419 = -100;
int32_t t192 = 905438;
uint32_t x1433 = UINT32_MAX;
volatile uint64_t x1435 = UINT64_MAX;
int32_t x1441 = INT32_MAX;
volatile uint64_t t194 = 1LLU;
int64_t x1449 = INT64_MIN;
static volatile int32_t x1470 = INT32_MAX;
uint64_t x1480 = 5675178722154159318LLU;
int64_t x1485 = -20266970LL;


void f0(void) {
    	int8_t x1 = INT8_MAX;
	volatile uint16_t x3 = 13U;
	static int64_t x4 = -1620051089LL;
	uint32_t t0 = 506760433U;

    t0 = (x1|(x2>>(x3>x4)));

    if (t0 != 2147483647U) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint8_t x9 = 6U;
	uint16_t x10 = 68U;
	uint8_t x11 = 0U;
	int16_t x12 = -1;
	static volatile int32_t t1 = -13410623;

    t1 = (x9|(x10>>(x11>x12)));

    if (t1 != 38) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x13 = UINT8_MAX;
	uint8_t x15 = 95U;
	volatile int8_t x16 = 0;
	volatile int32_t t2 = 7;

    t2 = (x13|(x14>>(x15>x16)));

    if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x18 = UINT32_MAX;
	static int64_t x19 = INT64_MAX;

    t3 = (x17|(x18>>(x19>x20)));

    if (t3 != 2147483647U) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x22 = INT64_MAX;
	volatile int16_t x24 = INT16_MAX;
	volatile int64_t t4 = -2354830267906901LL;

    t4 = (x21|(x22>>(x23>x24)));

    if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x41 = 8;
	static int32_t x43 = -1;
	int32_t t5 = 716;

    t5 = (x41|(x42>>(x43>x44)));

    if (t5 != 4539) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x57 = 75LLU;
	static volatile uint64_t x58 = UINT64_MAX;
	static volatile uint64_t t6 = UINT64_MAX;

    t6 = (x57|(x58>>(x59>x60)));

    if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint64_t x69 = 34LLU;
	uint64_t x70 = 15322606663478LLU;
	int32_t x71 = -1;
	uint64_t t7 = 1684379152724138991LLU;

    t7 = (x69|(x70>>(x71>x72)));

    if (t7 != 15322606663478LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x73 = INT16_MAX;
	uint32_t x74 = 663U;
	int16_t x76 = -17;
	static uint32_t t8 = 255774993U;

    t8 = (x73|(x74>>(x75>x76)));

    if (t8 != 32767U) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x77 = 1495;
	static int32_t x78 = INT32_MAX;
	int8_t x79 = INT8_MIN;
	int8_t x80 = INT8_MAX;
	int32_t t9 = INT32_MAX;

    t9 = (x77|(x78>>(x79>x80)));

    if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x81 = INT32_MAX;
	volatile uint16_t x82 = 1U;
	uint32_t x83 = 25526510U;
	volatile int32_t t10 = INT32_MAX;

    t10 = (x81|(x82>>(x83>x84)));

    if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x89 = UINT32_MAX;
	int32_t x90 = 190479398;
	static volatile int16_t x91 = INT16_MIN;
	volatile uint16_t x92 = UINT16_MAX;
	uint32_t t11 = UINT32_MAX;

    t11 = (x89|(x90>>(x91>x92)));

    if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x97 = INT16_MIN;
	int32_t x98 = INT32_MAX;
	int32_t x99 = INT32_MIN;
	static int16_t x100 = 0;
	volatile int32_t t12 = -21575;

    t12 = (x97|(x98>>(x99>x100)));

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint32_t x109 = UINT32_MAX;
	static int8_t x110 = INT8_MAX;
	uint32_t t13 = UINT32_MAX;

    t13 = (x109|(x110>>(x111>x112)));

    if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x113 = 441041;
	int16_t x114 = INT16_MAX;
	int64_t x115 = INT64_MIN;
	uint16_t x116 = 1U;
	int32_t t14 = -1058331980;

    t14 = (x113|(x114>>(x115>x116)));

    if (t14 != 458751) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x120 = 4425;

    t15 = (x117|(x118>>(x119>x120)));

    if (t15 != 2147483647U) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x129 = INT8_MIN;
	uint64_t x130 = UINT64_MAX;
	uint32_t x131 = UINT32_MAX;
	int16_t x132 = INT16_MAX;
	uint64_t t16 = UINT64_MAX;

    t16 = (x129|(x130>>(x131>x132)));

    if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x137 = INT8_MIN;
	static uint8_t x138 = 26U;
	int8_t x139 = INT8_MAX;
	static int8_t x140 = -1;
	volatile int32_t t17 = 2639;

    t17 = (x137|(x138>>(x139>x140)));

    if (t17 != -115) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x141 = -1;
	static uint32_t x142 = 355667U;
	uint32_t x143 = UINT32_MAX;
	int8_t x144 = INT8_MIN;
	uint32_t t18 = UINT32_MAX;

    t18 = (x141|(x142>>(x143>x144)));

    if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x150 = UINT8_MAX;
	uint64_t x151 = UINT64_MAX;
	static volatile uint32_t x152 = UINT32_MAX;
	volatile int32_t t19 = -1871;

    t19 = (x149|(x150>>(x151>x152)));

    if (t19 != 11007) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x157 = INT8_MAX;
	static volatile int8_t x158 = 4;
	uint32_t x160 = 1U;
	int32_t t20 = -9642;

    t20 = (x157|(x158>>(x159>x160)));

    if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x161 = 10743920461370LLU;
	volatile uint64_t x162 = 9568LLU;
	int8_t x163 = -32;
	static int8_t x164 = INT8_MAX;
	uint64_t t21 = 0LLU;

    t21 = (x161|(x162>>(x163>x164)));

    if (t21 != 10743920469882LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x173 = 130178LLU;
	uint8_t x174 = 0U;
	int64_t x176 = INT64_MIN;
	uint64_t t22 = 2989367941167401478LLU;

    t22 = (x173|(x174>>(x175>x176)));

    if (t22 != 130178LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x177 = INT8_MAX;
	uint64_t x178 = 40199LLU;
	uint16_t x179 = 116U;
	static int32_t x180 = INT32_MIN;
	volatile uint64_t t23 = 89316861820451LLU;

    t23 = (x177|(x178>>(x179>x180)));

    if (t23 != 20223LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x197 = -12;
	int64_t x199 = INT64_MAX;
	int32_t x200 = 82845611;
	static int32_t t24 = 57304;

    t24 = (x197|(x198>>(x199>x200)));

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x205 = UINT16_MAX;
	uint8_t x206 = 28U;
	uint32_t x208 = UINT32_MAX;

    t25 = (x205|(x206>>(x207>x208)));

    if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x217 = INT16_MAX;
	int32_t x218 = INT32_MAX;
	int16_t x219 = INT16_MIN;
	int16_t x220 = INT16_MIN;
	volatile int32_t t26 = INT32_MAX;

    t26 = (x217|(x218>>(x219>x220)));

    if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x233 = 51692161;
	int64_t x234 = INT64_MAX;
	int32_t x235 = INT32_MIN;
	int16_t x236 = -69;
	int64_t t27 = INT64_MAX;

    t27 = (x233|(x234>>(x235>x236)));

    if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x249 = 1LL;
	uint32_t x250 = 45604U;
	int64_t x251 = INT64_MAX;
	int64_t x252 = INT64_MIN;
	int64_t t28 = -14738LL;

    t28 = (x249|(x250>>(x251>x252)));

    if (t28 != 22803LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x254 = 5630LL;
	volatile int32_t x255 = -1;
	volatile int64_t t29 = -4362LL;

    t29 = (x253|(x254>>(x255>x256)));

    if (t29 != -363144449LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x257 = 76467U;
	volatile uint32_t x258 = 0U;
	volatile int16_t x259 = -619;
	int64_t x260 = 1870005943093746LL;
	volatile uint32_t t30 = 60532U;

    t30 = (x257|(x258>>(x259>x260)));

    if (t30 != 76467U) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x261 = 1;
	int32_t x262 = 193;
	uint8_t x264 = 2U;
	static volatile int32_t t31 = -7198269;

    t31 = (x261|(x262>>(x263>x264)));

    if (t31 != 193) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint16_t x265 = UINT16_MAX;
	uint64_t x266 = UINT64_MAX;
	uint8_t x267 = 0U;
	int16_t x268 = -194;
	uint64_t t32 = 1207584LLU;

    t32 = (x265|(x266>>(x267>x268)));

    if (t32 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x273 = 28;
	static int64_t x274 = INT64_MAX;
	static uint8_t x275 = 1U;
	int16_t x276 = INT16_MIN;
	volatile int64_t t33 = 264249797499797963LL;

    t33 = (x273|(x274>>(x275>x276)));

    if (t33 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x277 = 9165;
	volatile int8_t x278 = 2;
	int16_t x280 = INT16_MIN;
	volatile int32_t t34 = 110;

    t34 = (x277|(x278>>(x279>x280)));

    if (t34 != 9165) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x285 = -795;
	int64_t x286 = INT64_MAX;
	uint64_t x288 = 1904853477174303386LLU;
	int64_t t35 = -2710185680404433421LL;

    t35 = (x285|(x286>>(x287>x288)));

    if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x293 = UINT64_MAX;
	static uint32_t x294 = 320372899U;
	int32_t x295 = INT32_MAX;
	volatile uint64_t t36 = UINT64_MAX;

    t36 = (x293|(x294>>(x295>x296)));

    if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x301 = 11U;
	int64_t x303 = INT64_MAX;
	static int32_t x304 = INT32_MAX;
	volatile uint32_t t37 = 1560983535U;

    t37 = (x301|(x302>>(x303>x304)));

    if (t37 != 60111U) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x313 = 531658155083826LL;
	int16_t x314 = 1191;
	int8_t x315 = INT8_MAX;
	int16_t x316 = INT16_MAX;
	int64_t t38 = 8950915940541LL;

    t38 = (x313|(x314>>(x315>x316)));

    if (t38 != 531658155084983LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x321 = UINT16_MAX;
	int64_t x322 = 116702973371820627LL;
	uint32_t x323 = UINT32_MAX;
	int8_t x324 = 49;
	volatile int64_t t39 = -34943923161073LL;

    t39 = (x321|(x322>>(x323>x324)));

    if (t39 != 58351486685937663LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x329 = 0;
	volatile uint32_t x330 = 727669U;
	static volatile uint16_t x331 = 481U;
	static int32_t x332 = -282;
	volatile uint32_t t40 = 47U;

    t40 = (x329|(x330>>(x331>x332)));

    if (t40 != 363834U) { NG(); } else { ; }
	
}

void f41(void) {
    

    t41 = (x337|(x338>>(x339>x340)));

    if (t41 != 161151) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x345 = INT64_MIN;
	volatile uint64_t x346 = 1873893740311963990LLU;
	static uint64_t x347 = UINT64_MAX;
	volatile int64_t x348 = INT64_MIN;

    t42 = (x345|(x346>>(x347>x348)));

    if (t42 != 10160318907010757803LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x353 = UINT32_MAX;
	int64_t x354 = INT64_MAX;
	int64_t t43 = INT64_MAX;

    t43 = (x353|(x354>>(x355>x356)));

    if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x361 = UINT8_MAX;
	volatile int64_t x363 = -1LL;

    t44 = (x361|(x362>>(x363>x364)));

    if (t44 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x365 = INT32_MIN;
	int64_t x367 = INT64_MIN;
	static int16_t x368 = -1;
	uint32_t t45 = UINT32_MAX;

    t45 = (x365|(x366>>(x367>x368)));

    if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x373 = INT8_MIN;
	volatile int16_t x374 = 0;
	static int64_t x375 = INT64_MIN;
	uint8_t x376 = 30U;
	int32_t t46 = -10898;

    t46 = (x373|(x374>>(x375>x376)));

    if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x386 = 99U;
	volatile uint32_t x387 = UINT32_MAX;
	static int32_t x388 = 83686723;

    t47 = (x385|(x386>>(x387>x388)));

    if (t47 != 3069) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x389 = INT8_MIN;
	uint64_t x390 = UINT64_MAX;
	static volatile uint32_t x391 = 31U;
	int8_t x392 = 0;
	volatile uint64_t t48 = UINT64_MAX;

    t48 = (x389|(x390>>(x391>x392)));

    if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x395 = 59670LLU;
	uint8_t x396 = 7U;
	volatile uint64_t t49 = 2476LLU;

    t49 = (x393|(x394>>(x395>x396)));

    if (t49 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint16_t x426 = 19U;
	uint8_t x427 = UINT8_MAX;
	volatile uint64_t t50 = 431136LLU;

    t50 = (x425|(x426>>(x427>x428)));

    if (t50 != 62561433LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x433 = INT16_MIN;
	int32_t x434 = 510569162;
	int8_t x435 = 35;
	int64_t x436 = -385130500657LL;

    t51 = (x433|(x434>>(x435>x436)));

    if (t51 != -10907) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x437 = 7U;
	static uint8_t x438 = 3U;
	static volatile int8_t x440 = -13;
	volatile int32_t t52 = 22533;

    t52 = (x437|(x438>>(x439>x440)));

    if (t52 != 7) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x445 = INT32_MAX;
	uint16_t x446 = 4U;
	int64_t x447 = INT64_MIN;
	static int8_t x448 = -1;
	static volatile int32_t t53 = INT32_MAX;

    t53 = (x445|(x446>>(x447>x448)));

    if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x449 = 0;
	static volatile uint8_t x450 = UINT8_MAX;
	int32_t x452 = -1;
	volatile int32_t t54 = 2893690;

    t54 = (x449|(x450>>(x451>x452)));

    if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x454 = INT32_MAX;
	uint8_t x455 = 50U;
	volatile uint8_t x456 = 11U;
	int32_t t55 = 13;

    t55 = (x453|(x454>>(x455>x456)));

    if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x469 = INT8_MIN;
	uint16_t x470 = 1U;
	int8_t x471 = INT8_MIN;
	int32_t t56 = -52363797;

    t56 = (x469|(x470>>(x471>x472)));

    if (t56 != -127) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x493 = INT64_MIN;
	volatile int16_t x494 = 2333;
	static int64_t x495 = -42221634LL;
	volatile int64_t t57 = 3264510721838LL;

    t57 = (x493|(x494>>(x495>x496)));

    if (t57 != -9223372036854773475LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x506 = 1U;
	int64_t x507 = INT64_MIN;
	static uint64_t x508 = 198LLU;
	volatile int32_t t58 = 1545;

    t58 = (x505|(x506>>(x507>x508)));

    if (t58 != 17) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x510 = 6147U;
	int32_t x511 = -33083849;
	uint32_t t59 = UINT32_MAX;

    t59 = (x509|(x510>>(x511>x512)));

    if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint16_t x518 = 17607U;
	static uint64_t x519 = 119166165LLU;
	uint32_t x520 = UINT32_MAX;
	uint32_t t60 = UINT32_MAX;

    t60 = (x517|(x518>>(x519>x520)));

    if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x522 = 144;
	int32_t x523 = INT32_MAX;
	uint8_t x524 = 9U;
	int64_t t61 = -665954461154792LL;

    t61 = (x521|(x522>>(x523>x524)));

    if (t61 != -227105LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x526 = 4272114341LLU;
	uint16_t x527 = 6040U;
	uint64_t t62 = 1886LLU;

    t62 = (x525|(x526>>(x527>x528)));

    if (t62 != 2136080383LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x530 = INT64_MAX;
	int8_t x531 = 1;
	int64_t t63 = 386961533LL;

    t63 = (x529|(x530>>(x531>x532)));

    if (t63 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x537 = 0U;
	int8_t x538 = 44;
	volatile int16_t x540 = INT16_MAX;

    t64 = (x537|(x538>>(x539>x540)));

    if (t64 != 44) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint8_t x545 = UINT8_MAX;
	static int8_t x546 = 1;
	uint64_t x547 = 10555379LLU;
	int16_t x548 = INT16_MIN;
	int32_t t65 = -105883;

    t65 = (x545|(x546>>(x547>x548)));

    if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x549 = 84451252655710LL;
	int64_t x551 = INT64_MIN;
	int32_t x552 = INT32_MAX;
	int64_t t66 = 5069964190179694LL;

    t66 = (x549|(x550>>(x551>x552)));

    if (t66 != 84451941941247LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x553 = 0;
	static uint8_t x555 = 60U;
	int32_t x556 = -7095;
	volatile uint64_t t67 = 0LLU;

    t67 = (x553|(x554>>(x555>x556)));

    if (t67 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x558 = 5U;
	static uint16_t x559 = 29U;
	volatile int64_t x560 = INT64_MIN;
	int32_t t68 = INT32_MAX;

    t68 = (x557|(x558>>(x559>x560)));

    if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x561 = -16687284;
	int32_t x562 = INT32_MAX;
	int64_t x563 = INT64_MIN;
	volatile int16_t x564 = 619;
	int32_t t69 = -371751220;

    t69 = (x561|(x562>>(x563>x564)));

    if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x569 = -1LL;
	static int64_t x570 = INT64_MAX;
	static volatile int8_t x571 = -1;
	int32_t x572 = INT32_MAX;
	volatile int64_t t70 = -218126LL;

    t70 = (x569|(x570>>(x571>x572)));

    if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x578 = 3;
	int16_t x579 = INT16_MIN;
	volatile uint8_t x580 = 1U;

    t71 = (x577|(x578>>(x579>x580)));

    if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x581 = -1LL;
	static int32_t x582 = 1151469;
	int64_t x583 = -1LL;
	int64_t x584 = -1LL;
	int64_t t72 = -13327LL;

    t72 = (x581|(x582>>(x583>x584)));

    if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x589 = 3482809837907107922LL;
	uint32_t x590 = 75794U;
	int64_t x591 = -1LL;
	int64_t x592 = 172638321397LL;
	int64_t t73 = 1354477868LL;

    t73 = (x589|(x590>>(x591>x592)));

    if (t73 != 3482809837907175506LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x595 = 25U;
	uint16_t x596 = 8U;
	int32_t t74 = -58;

    t74 = (x593|(x594>>(x595>x596)));

    if (t74 != 798) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x613 = -34;
	int32_t x614 = 1618;
	uint32_t x615 = UINT32_MAX;
	int32_t x616 = -1;
	volatile int32_t t75 = -19864;

    t75 = (x613|(x614>>(x615>x616)));

    if (t75 != -34) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint64_t x630 = 1406316017892853LLU;
	int32_t x632 = -18239622;

    t76 = (x629|(x630>>(x631>x632)));

    if (t76 != 703158008971263LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x637 = INT16_MIN;
	uint8_t x638 = UINT8_MAX;
	int16_t x639 = 3;
	int16_t x640 = INT16_MAX;
	static int32_t t77 = 283459;

    t77 = (x637|(x638>>(x639>x640)));

    if (t77 != -32513) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x641 = 8452;
	uint8_t x642 = UINT8_MAX;
	uint16_t x643 = UINT16_MAX;
	int32_t x644 = -1;
	volatile int32_t t78 = 5350505;

    t78 = (x641|(x642>>(x643>x644)));

    if (t78 != 8575) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x657 = 201195LLU;
	static int16_t x659 = INT16_MIN;
	volatile uint64_t t79 = 387524LLU;

    t79 = (x657|(x658>>(x659>x660)));

    if (t79 != 262143LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x665 = 1416U;
	uint8_t x666 = 17U;
	int16_t x667 = 29;
	static volatile uint32_t x668 = 15673U;
	static uint32_t t80 = 75877U;

    t80 = (x665|(x666>>(x667>x668)));

    if (t80 != 1433U) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x669 = 7;
	uint32_t x670 = UINT32_MAX;
	int16_t x671 = INT16_MIN;
	int64_t x672 = INT64_MIN;
	uint32_t t81 = 208424665U;

    t81 = (x669|(x670>>(x671>x672)));

    if (t81 != 2147483647U) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x673 = -1;
	uint16_t x674 = 6U;
	static int16_t x675 = -455;
	volatile int32_t x676 = INT32_MIN;
	volatile int32_t t82 = 0;

    t82 = (x673|(x674>>(x675>x676)));

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x678 = UINT64_MAX;
	volatile uint8_t x680 = 100U;
	volatile uint64_t t83 = UINT64_MAX;

    t83 = (x677|(x678>>(x679>x680)));

    if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x689 = 113725197270737LL;
	volatile int64_t x691 = 2341488697614830763LL;
	static volatile int8_t x692 = -1;

    t84 = (x689|(x690>>(x691>x692)));

    if (t84 != 113725197271039LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x693 = INT32_MIN;
	volatile int8_t x694 = INT8_MAX;
	int64_t x695 = -1LL;
	static int64_t x696 = -26221612309LL;
	volatile int32_t t85 = 10093;

    t85 = (x693|(x694>>(x695>x696)));

    if (t85 != -2147483585) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x697 = 13756951992LLU;
	int16_t x699 = -1;
	uint64_t x700 = 133611590149145460LLU;
	uint64_t t86 = 1506047LLU;

    t86 = (x697|(x698>>(x699>x700)));

    if (t86 != 13756951992LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x701 = 0U;
	int8_t x702 = 3;
	uint32_t x703 = 6585640U;
	int32_t t87 = 13698977;

    t87 = (x701|(x702>>(x703>x704)));

    if (t87 != 3) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x713 = -1;
	static uint32_t x714 = UINT32_MAX;
	static uint16_t x716 = UINT16_MAX;
	static uint32_t t88 = UINT32_MAX;

    t88 = (x713|(x714>>(x715>x716)));

    if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x717 = UINT64_MAX;
	uint8_t x718 = 6U;
	int32_t x719 = -3;
	int8_t x720 = INT8_MAX;

    t89 = (x717|(x718>>(x719>x720)));

    if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x721 = 34U;
	int8_t x722 = 7;
	int16_t x724 = 0;
	int32_t t90 = 8873;

    t90 = (x721|(x722>>(x723>x724)));

    if (t90 != 35) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x725 = INT16_MAX;
	uint16_t x726 = UINT16_MAX;
	uint32_t x727 = UINT32_MAX;
	volatile int32_t t91 = 36;

    t91 = (x725|(x726>>(x727>x728)));

    if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x729 = 60U;
	int16_t x730 = 1308;
	uint8_t x731 = 1U;
	volatile int32_t t92 = -2908;

    t92 = (x729|(x730>>(x731>x732)));

    if (t92 != 1340) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x758 = 96677LL;
	int16_t x759 = INT16_MIN;
	volatile int8_t x760 = -1;
	volatile int64_t t93 = -1646748018856LL;

    t93 = (x757|(x758>>(x759>x760)));

    if (t93 != 96693LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x761 = INT16_MIN;
	static uint32_t x762 = UINT32_MAX;
	int32_t x763 = 0;
	uint64_t x764 = 61070218589942219LLU;
	static uint32_t t94 = UINT32_MAX;

    t94 = (x761|(x762>>(x763>x764)));

    if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x769 = 353;
	int8_t x770 = INT8_MAX;
	int8_t x772 = INT8_MAX;
	volatile int32_t t95 = -1;

    t95 = (x769|(x770>>(x771>x772)));

    if (t95 != 383) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x773 = -27;
	uint32_t x774 = 118611466U;
	int32_t x775 = 46402;
	uint32_t x776 = UINT32_MAX;
	uint32_t t96 = 404U;

    t96 = (x773|(x774>>(x775>x776)));

    if (t96 != 4294967279U) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x777 = -189;
	uint8_t x779 = 44U;
	uint8_t x780 = UINT8_MAX;
	uint64_t t97 = UINT64_MAX;

    t97 = (x777|(x778>>(x779>x780)));

    if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint8_t x785 = UINT8_MAX;
	uint64_t x786 = UINT64_MAX;
	int32_t x787 = INT32_MIN;
	int8_t x788 = 25;
	static volatile uint64_t t98 = UINT64_MAX;

    t98 = (x785|(x786>>(x787>x788)));

    if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x793 = INT16_MIN;
	uint32_t x794 = 15165303U;
	uint32_t x795 = UINT32_MAX;
	uint32_t t99 = 7603U;

    t99 = (x793|(x794>>(x795>x796)));

    if (t99 != 4294961015U) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x797 = 0;
	uint64_t x798 = UINT64_MAX;
	int32_t x799 = 28;
	volatile uint64_t t100 = 53941599168264050LLU;

    t100 = (x797|(x798>>(x799>x800)));

    if (t100 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x801 = INT8_MIN;
	static uint64_t x802 = UINT64_MAX;
	uint32_t x803 = 2218270U;
	uint64_t t101 = UINT64_MAX;

    t101 = (x801|(x802>>(x803>x804)));

    if (t101 != UINT64_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x805 = 289637220LLU;
	uint64_t x806 = UINT64_MAX;
	volatile int8_t x807 = INT8_MAX;
	uint32_t x808 = 1U;
	static volatile uint64_t t102 = 362081675383211571LLU;

    t102 = (x805|(x806>>(x807>x808)));

    if (t102 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x809 = INT16_MIN;
	uint64_t x810 = 5582051708787LLU;
	int32_t x812 = -70549024;
	volatile uint64_t t103 = 92LLU;

    t103 = (x809|(x810>>(x811>x812)));

    if (t103 != 18446744073709537209LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint16_t x813 = UINT16_MAX;
	uint8_t x815 = 13U;
	volatile uint16_t x816 = 7798U;
	volatile int32_t t104 = 9;

    t104 = (x813|(x814>>(x815>x816)));

    if (t104 != 65535) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint64_t x822 = 479009989058206567LLU;
	volatile int32_t x823 = INT32_MAX;
	int8_t x824 = INT8_MIN;

    t105 = (x821|(x822>>(x823>x824)));

    if (t105 != 18446744073709551099LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x829 = INT32_MAX;
	int16_t x830 = 21;
	static int32_t x831 = INT32_MAX;
	static int32_t x832 = 184;
	volatile int32_t t106 = INT32_MAX;

    t106 = (x829|(x830>>(x831>x832)));

    if (t106 != INT32_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x833 = -2;
	static uint64_t x834 = UINT64_MAX;
	uint8_t x835 = 12U;
	uint64_t x836 = UINT64_MAX;
	uint64_t t107 = UINT64_MAX;

    t107 = (x833|(x834>>(x835>x836)));

    if (t107 != UINT64_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x837 = -4;
	uint8_t x838 = 35U;
	volatile int32_t x840 = -1;
	int32_t t108 = 6857;

    t108 = (x837|(x838>>(x839>x840)));

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x845 = -1;
	uint64_t x846 = UINT64_MAX;
	volatile int32_t x847 = 446;
	volatile uint64_t x848 = 39LLU;
	static volatile uint64_t t109 = UINT64_MAX;

    t109 = (x845|(x846>>(x847>x848)));

    if (t109 != UINT64_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x855 = INT32_MIN;
	static int16_t x856 = INT16_MAX;

    t110 = (x853|(x854>>(x855>x856)));

    if (t110 != 1134399U) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x865 = 4000U;
	volatile uint64_t x866 = UINT64_MAX;
	static uint64_t x867 = 3948332LLU;
	static uint32_t x868 = UINT32_MAX;
	volatile uint64_t t111 = UINT64_MAX;

    t111 = (x865|(x866>>(x867>x868)));

    if (t111 != UINT64_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x873 = UINT16_MAX;
	uint32_t x874 = 232515U;
	static uint64_t x875 = 2590LLU;
	uint8_t x876 = 1U;
	static uint32_t t112 = 452U;

    t112 = (x873|(x874>>(x875>x876)));

    if (t112 != 131071U) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x877 = 8529573U;
	uint64_t x878 = 1621278LLU;
	static int16_t x879 = INT16_MIN;
	static uint16_t x880 = 71U;
	uint64_t t113 = 39203LLU;

    t113 = (x877|(x878>>(x879>x880)));

    if (t113 != 10141631LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x882 = INT64_MAX;
	uint32_t x883 = 53802U;
	volatile int32_t x884 = INT32_MAX;
	volatile int64_t t114 = -679030193836346898LL;

    t114 = (x881|(x882>>(x883>x884)));

    if (t114 != -1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x885 = INT64_MAX;
	int16_t x887 = INT16_MAX;
	static int8_t x888 = 6;

    t115 = (x885|(x886>>(x887>x888)));

    if (t115 != INT64_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x898 = 30987097LL;
	static uint8_t x899 = 0U;
	volatile uint64_t x900 = 308699967LLU;
	static int64_t t116 = 1487409928042LL;

    t116 = (x897|(x898>>(x899>x900)));

    if (t116 != 30998527LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint16_t x905 = UINT16_MAX;
	int8_t x907 = -1;
	int8_t x908 = INT8_MIN;
	static volatile uint64_t t117 = 520093174097347LLU;

    t117 = (x905|(x906>>(x907>x908)));

    if (t117 != 1032660320255LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint32_t x933 = UINT32_MAX;
	int8_t x934 = 28;
	int64_t x935 = INT64_MIN;
	uint8_t x936 = UINT8_MAX;
	volatile uint32_t t118 = UINT32_MAX;

    t118 = (x933|(x934>>(x935>x936)));

    if (t118 != UINT32_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x974 = 5050U;
	volatile uint32_t x975 = 2U;
	volatile uint8_t x976 = UINT8_MAX;
	int32_t t119 = 40749;

    t119 = (x973|(x974>>(x975>x976)));

    if (t119 != 32767) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x977 = 46U;
	int32_t x979 = INT32_MIN;
	static volatile int32_t t120 = 309479;

    t120 = (x977|(x978>>(x979>x980)));

    if (t120 != 47) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x981 = INT32_MIN;
	int16_t x984 = INT16_MAX;
	volatile int32_t t121 = 4;

    t121 = (x981|(x982>>(x983>x984)));

    if (t121 != -2147483597) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x989 = INT16_MIN;
	int16_t x990 = INT16_MAX;
	int32_t x991 = INT32_MAX;
	uint64_t x992 = 0LLU;
	volatile int32_t t122 = 1081818;

    t122 = (x989|(x990>>(x991>x992)));

    if (t122 != -16385) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x994 = 24339LLU;
	int16_t x995 = -1;
	int16_t x996 = 1;
	static uint64_t t123 = 129454481889468258LLU;

    t123 = (x993|(x994>>(x995>x996)));

    if (t123 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x998 = INT8_MAX;
	static uint32_t x1000 = 13U;

    t124 = (x997|(x998>>(x999>x1000)));

    if (t124 != 63) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x1005 = -35;
	int16_t x1006 = INT16_MAX;
	uint32_t x1007 = 23U;
	static volatile int32_t t125 = 5458;

    t125 = (x1005|(x1006>>(x1007>x1008)));

    if (t125 != -1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x1009 = 1698;
	uint32_t x1010 = UINT32_MAX;
	int32_t x1011 = 475757;
	int8_t x1012 = INT8_MIN;
	uint32_t t126 = 2367739U;

    t126 = (x1009|(x1010>>(x1011>x1012)));

    if (t126 != 2147483647U) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x1013 = -1;
	static uint32_t x1014 = UINT32_MAX;
	int16_t x1015 = -1;
	volatile uint32_t t127 = UINT32_MAX;

    t127 = (x1013|(x1014>>(x1015>x1016)));

    if (t127 != UINT32_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x1017 = UINT64_MAX;
	int32_t x1018 = 104;
	int32_t x1019 = INT32_MIN;
	int64_t x1020 = -1LL;
	uint64_t t128 = UINT64_MAX;

    t128 = (x1017|(x1018>>(x1019>x1020)));

    if (t128 != UINT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x1021 = -1;
	uint16_t x1022 = 945U;
	volatile uint32_t x1023 = 95162U;

    t129 = (x1021|(x1022>>(x1023>x1024)));

    if (t129 != -1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint8_t x1025 = UINT8_MAX;
	static int16_t x1026 = 4940;
	static uint16_t x1027 = 1247U;
	static int64_t x1028 = 128589566804477LL;

    t130 = (x1025|(x1026>>(x1027>x1028)));

    if (t130 != 5119) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x1033 = INT8_MAX;
	int16_t x1034 = INT16_MAX;
	static int8_t x1035 = INT8_MAX;
	volatile int16_t x1036 = INT16_MAX;
	volatile int32_t t131 = -672684;

    t131 = (x1033|(x1034>>(x1035>x1036)));

    if (t131 != 32767) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x1037 = 8354U;
	static uint64_t x1038 = 435LLU;
	int64_t x1039 = INT64_MAX;
	int8_t x1040 = 2;
	uint64_t t132 = 88589LLU;

    t132 = (x1037|(x1038>>(x1039>x1040)));

    if (t132 != 8443LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x1041 = INT32_MIN;
	int32_t x1042 = 750508090;
	int8_t x1043 = -1;
	int8_t x1044 = -16;
	volatile int32_t t133 = 3754;

    t133 = (x1041|(x1042>>(x1043>x1044)));

    if (t133 != -1772229603) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x1045 = INT64_MIN;
	int32_t x1047 = INT32_MIN;
	static uint8_t x1048 = 0U;
	volatile int64_t t134 = 1LL;

    t134 = (x1045|(x1046>>(x1047>x1048)));

    if (t134 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x1058 = 3U;
	int8_t x1059 = INT8_MIN;
	int32_t x1060 = INT32_MIN;
	volatile uint32_t t135 = UINT32_MAX;

    t135 = (x1057|(x1058>>(x1059>x1060)));

    if (t135 != UINT32_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x1061 = INT64_MIN;
	uint16_t x1062 = UINT16_MAX;
	uint16_t x1063 = 133U;
	int16_t x1064 = INT16_MAX;
	int64_t t136 = -314LL;

    t136 = (x1061|(x1062>>(x1063>x1064)));

    if (t136 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x1069 = 3U;
	volatile int16_t x1071 = 53;
	int8_t x1072 = -1;

    t137 = (x1069|(x1070>>(x1071>x1072)));

    if (t137 != 16383U) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x1082 = 28;
	static uint8_t x1083 = UINT8_MAX;
	int8_t x1084 = 1;
	int32_t t138 = -17;

    t138 = (x1081|(x1082>>(x1083>x1084)));

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x1085 = 7432850784802LLU;
	uint32_t x1086 = UINT32_MAX;
	uint8_t x1088 = 12U;

    t139 = (x1085|(x1086>>(x1087>x1088)));

    if (t139 != 7434588389375LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x1093 = INT64_MIN;
	static uint32_t x1094 = 3622680U;
	uint8_t x1095 = UINT8_MAX;
	uint32_t x1096 = UINT32_MAX;

    t140 = (x1093|(x1094>>(x1095>x1096)));

    if (t140 != -9223372036851153128LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x1098 = UINT64_MAX;
	int32_t x1099 = 1632;
	int32_t x1100 = -6378;

    t141 = (x1097|(x1098>>(x1099>x1100)));

    if (t141 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x1101 = 61U;
	volatile uint64_t x1102 = 2562LLU;
	uint8_t x1103 = 7U;
	uint64_t x1104 = UINT64_MAX;
	static volatile uint64_t t142 = 3106785266LLU;

    t142 = (x1101|(x1102>>(x1103>x1104)));

    if (t142 != 2623LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x1105 = -1;
	uint32_t x1106 = UINT32_MAX;
	uint8_t x1107 = 6U;
	int64_t x1108 = INT64_MIN;
	volatile uint32_t t143 = UINT32_MAX;

    t143 = (x1105|(x1106>>(x1107>x1108)));

    if (t143 != UINT32_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x1119 = 70311LLU;
	int16_t x1120 = INT16_MAX;
	uint64_t t144 = 12520LLU;

    t144 = (x1117|(x1118>>(x1119>x1120)));

    if (t144 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x1125 = -1;
	volatile int16_t x1126 = 832;
	int32_t x1128 = INT32_MIN;

    t145 = (x1125|(x1126>>(x1127>x1128)));

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x1129 = INT32_MIN;
	uint64_t x1130 = 44558170LLU;
	static int8_t x1132 = INT8_MIN;
	volatile uint64_t t146 = 32023218411437LLU;

    t146 = (x1129|(x1130>>(x1131>x1132)));

    if (t146 != 18446744071584347053LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x1137 = INT64_MIN;
	uint16_t x1138 = 409U;
	uint16_t x1139 = 4856U;
	static int64_t x1140 = -1LL;
	static int64_t t147 = 1097021258LL;

    t147 = (x1137|(x1138>>(x1139>x1140)));

    if (t147 != -9223372036854775604LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int32_t x1145 = INT32_MAX;
	int32_t x1146 = 15;
	int32_t x1147 = INT32_MIN;
	int8_t x1148 = -21;

    t148 = (x1145|(x1146>>(x1147>x1148)));

    if (t148 != INT32_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x1149 = 793485U;
	int64_t x1151 = -1LL;

    t149 = (x1149|(x1150>>(x1151>x1152)));

    if (t149 != 793599U) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x1165 = INT16_MIN;
	uint8_t x1166 = UINT8_MAX;
	int64_t x1167 = INT64_MIN;
	volatile int64_t x1168 = -1LL;

    t150 = (x1165|(x1166>>(x1167>x1168)));

    if (t150 != -32513) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x1174 = UINT64_MAX;
	int32_t x1175 = INT32_MAX;
	int8_t x1176 = INT8_MIN;
	static uint64_t t151 = UINT64_MAX;

    t151 = (x1173|(x1174>>(x1175>x1176)));

    if (t151 != UINT64_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x1177 = 1;
	uint32_t x1178 = 22U;
	int64_t x1179 = INT64_MIN;
	static int16_t x1180 = 7777;

    t152 = (x1177|(x1178>>(x1179>x1180)));

    if (t152 != 23U) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x1181 = INT64_MIN;
	static uint16_t x1182 = 2582U;
	uint8_t x1183 = 101U;
	static int64_t x1184 = INT64_MAX;
	volatile int64_t t153 = 1869301041347215174LL;

    t153 = (x1181|(x1182>>(x1183>x1184)));

    if (t153 != -9223372036854773226LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x1186 = 3;
	uint32_t x1187 = UINT32_MAX;
	uint32_t x1188 = UINT32_MAX;
	int32_t t154 = 15;

    t154 = (x1185|(x1186>>(x1187>x1188)));

    if (t154 != 3) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint16_t x1190 = 0U;
	static uint64_t x1191 = 2068LLU;
	static uint8_t x1192 = 3U;

    t155 = (x1189|(x1190>>(x1191>x1192)));

    if (t155 != -1LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x1193 = INT16_MIN;
	uint8_t x1194 = 1U;
	uint32_t x1195 = 139814484U;
	uint16_t x1196 = UINT16_MAX;
	volatile int32_t t156 = 60416969;

    t156 = (x1193|(x1194>>(x1195>x1196)));

    if (t156 != -32768) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x1197 = UINT32_MAX;
	static uint64_t x1198 = 3243588897778LLU;
	uint32_t x1199 = 22905862U;
	static int16_t x1200 = INT16_MIN;
	uint64_t t157 = 1075040393835385642LLU;

    t157 = (x1197|(x1198>>(x1199>x1200)));

    if (t157 != 3246995275775LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x1201 = 23023U;
	int32_t x1202 = INT32_MAX;
	uint64_t x1203 = UINT64_MAX;
	int32_t t158 = -6;

    t158 = (x1201|(x1202>>(x1203>x1204)));

    if (t158 != 1073741823) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint8_t x1205 = UINT8_MAX;
	uint8_t x1206 = 3U;
	int64_t x1207 = INT64_MIN;

    t159 = (x1205|(x1206>>(x1207>x1208)));

    if (t159 != 255) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x1209 = -183;
	volatile uint8_t x1210 = 5U;
	uint8_t x1211 = UINT8_MAX;
	int64_t x1212 = -31925855541LL;
	volatile int32_t t160 = 568235;

    t160 = (x1209|(x1210>>(x1211>x1212)));

    if (t160 != -181) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x1213 = INT16_MIN;
	static int16_t x1214 = INT16_MAX;
	uint8_t x1215 = 31U;
	int32_t x1216 = INT32_MAX;
	int32_t t161 = 2875;

    t161 = (x1213|(x1214>>(x1215>x1216)));

    if (t161 != -1) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x1217 = 0;
	uint8_t x1218 = UINT8_MAX;
	static int32_t x1219 = 3462685;
	int64_t x1220 = -1LL;
	volatile int32_t t162 = 1471431;

    t162 = (x1217|(x1218>>(x1219>x1220)));

    if (t162 != 127) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x1221 = -1;
	uint32_t x1222 = UINT32_MAX;
	int8_t x1224 = -27;
	volatile uint32_t t163 = UINT32_MAX;

    t163 = (x1221|(x1222>>(x1223>x1224)));

    if (t163 != UINT32_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x1229 = INT64_MIN;
	int32_t x1230 = 11150510;
	int16_t x1231 = 1;
	int16_t x1232 = INT16_MIN;
	volatile int64_t t164 = 4016278201LL;

    t164 = (x1229|(x1230>>(x1231>x1232)));

    if (t164 != -9223372036849200553LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x1241 = 357;
	volatile int8_t x1242 = INT8_MAX;
	int16_t x1243 = INT16_MIN;
	int32_t x1244 = INT32_MIN;
	int32_t t165 = -1;

    t165 = (x1241|(x1242>>(x1243>x1244)));

    if (t165 != 383) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x1250 = 172985519257825292LLU;
	int16_t x1251 = 448;
	volatile int8_t x1252 = 0;

    t166 = (x1249|(x1250>>(x1251>x1252)));

    if (t166 != 86492759628912662LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x1257 = INT32_MIN;
	int32_t x1258 = INT32_MAX;
	static volatile int8_t x1259 = -3;
	static int16_t x1260 = 10;
	int32_t t167 = 460516;

    t167 = (x1257|(x1258>>(x1259>x1260)));

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x1261 = INT8_MIN;
	int8_t x1262 = INT8_MAX;
	int32_t x1263 = INT32_MIN;
	int64_t x1264 = -1LL;

    t168 = (x1261|(x1262>>(x1263>x1264)));

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x1265 = INT64_MIN;
	static uint16_t x1266 = 39U;
	volatile int32_t x1267 = INT32_MIN;
	static int32_t x1268 = INT32_MIN;

    t169 = (x1265|(x1266>>(x1267>x1268)));

    if (t169 != -9223372036854775769LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x1269 = -1;
	static int64_t x1270 = INT64_MAX;
	static volatile int8_t x1271 = -21;
	static volatile int64_t x1272 = INT64_MIN;
	volatile int64_t t170 = 270LL;

    t170 = (x1269|(x1270>>(x1271>x1272)));

    if (t170 != -1LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x1277 = 64U;
	uint16_t x1278 = UINT16_MAX;
	uint32_t x1279 = 57U;
	uint32_t x1280 = 447U;
	volatile int32_t t171 = 1502362;

    t171 = (x1277|(x1278>>(x1279>x1280)));

    if (t171 != 65535) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x1283 = 4178LLU;
	int16_t x1284 = INT16_MIN;

    t172 = (x1281|(x1282>>(x1283>x1284)));

    if (t172 != 523670607999LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x1289 = 8U;
	int32_t x1290 = 40371;
	int64_t x1291 = INT64_MIN;
	volatile int32_t t173 = 285653173;

    t173 = (x1289|(x1290>>(x1291>x1292)));

    if (t173 != 40379) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x1301 = 188;
	int64_t x1302 = INT64_MAX;
	uint16_t x1303 = UINT16_MAX;
	int8_t x1304 = INT8_MAX;
	volatile int64_t t174 = 85LL;

    t174 = (x1301|(x1302>>(x1303>x1304)));

    if (t174 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x1305 = -1967;
	volatile int64_t x1306 = 988806926066LL;
	int8_t x1307 = 0;
	int16_t x1308 = 11;
	int64_t t175 = -4140067251LL;

    t175 = (x1305|(x1306>>(x1307>x1308)));

    if (t175 != -269LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x1313 = UINT8_MAX;
	static uint64_t x1314 = 261743353596009613LLU;
	static int8_t x1315 = INT8_MIN;
	int8_t x1316 = -1;
	uint64_t t176 = 8108597686LLU;

    t176 = (x1313|(x1314>>(x1315>x1316)));

    if (t176 != 261743353596009727LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x1317 = INT32_MIN;
	int32_t x1318 = 15139;
	static uint32_t x1319 = UINT32_MAX;
	static uint32_t x1320 = 184144802U;
	static int32_t t177 = 6437105;

    t177 = (x1317|(x1318>>(x1319>x1320)));

    if (t177 != -2147476079) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x1325 = INT64_MIN;
	static volatile int8_t x1327 = INT8_MIN;
	uint8_t x1328 = 19U;
	int64_t t178 = -942741LL;

    t178 = (x1325|(x1326>>(x1327>x1328)));

    if (t178 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x1330 = 1698U;
	int8_t x1331 = INT8_MIN;
	static uint64_t x1332 = 36LLU;
	uint32_t t179 = 0U;

    t179 = (x1329|(x1330>>(x1331>x1332)));

    if (t179 != 849U) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x1333 = INT32_MIN;
	uint8_t x1334 = 39U;
	static uint8_t x1335 = 1U;
	int8_t x1336 = INT8_MIN;
	int32_t t180 = 534759684;

    t180 = (x1333|(x1334>>(x1335>x1336)));

    if (t180 != -2147483629) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x1341 = -2;
	volatile int32_t x1342 = 24003360;
	int64_t x1343 = INT64_MIN;
	volatile int64_t x1344 = INT64_MAX;
	static volatile int32_t t181 = 12;

    t181 = (x1341|(x1342>>(x1343>x1344)));

    if (t181 != -2) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x1345 = 1U;
	int16_t x1347 = INT16_MIN;
	static int32_t x1348 = -1;

    t182 = (x1345|(x1346>>(x1347>x1348)));

    if (t182 != INT32_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1349 = -1;
	int64_t x1350 = 56622687289690LL;
	uint32_t x1351 = 1U;
	volatile int64_t x1352 = -1LL;
	int64_t t183 = -969714867756LL;

    t183 = (x1349|(x1350>>(x1351>x1352)));

    if (t183 != -1LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x1353 = INT8_MIN;
	volatile int8_t x1354 = INT8_MAX;
	int8_t x1355 = 1;
	int32_t t184 = -709733961;

    t184 = (x1353|(x1354>>(x1355>x1356)));

    if (t184 != -1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x1358 = 63644LLU;
	static uint8_t x1360 = 63U;
	static volatile uint64_t t185 = 98980715LLU;

    t185 = (x1357|(x1358>>(x1359>x1360)));

    if (t185 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x1369 = INT32_MAX;
	int8_t x1370 = INT8_MAX;
	volatile int32_t t186 = INT32_MAX;

    t186 = (x1369|(x1370>>(x1371>x1372)));

    if (t186 != INT32_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint64_t x1373 = 7196LLU;
	volatile uint32_t x1375 = 404873U;
	volatile uint64_t t187 = 973200083264LLU;

    t187 = (x1373|(x1374>>(x1375>x1376)));

    if (t187 != 2038940LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x1389 = 456861U;
	int16_t x1390 = 1159;
	int32_t x1391 = -1;
	volatile int64_t x1392 = INT64_MIN;
	uint32_t t188 = 1U;

    t188 = (x1389|(x1390>>(x1391>x1392)));

    if (t188 != 457439U) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x1393 = INT32_MAX;
	uint64_t x1394 = UINT64_MAX;
	uint8_t x1395 = 22U;
	static volatile uint64_t t189 = UINT64_MAX;

    t189 = (x1393|(x1394>>(x1395>x1396)));

    if (t189 != UINT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x1406 = 0U;
	int8_t x1407 = 18;
	volatile int32_t t190 = 1007940807;

    t190 = (x1405|(x1406>>(x1407>x1408)));

    if (t190 != 44) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1413 = -1LL;
	int16_t x1414 = 125;
	uint32_t x1415 = 898135U;
	uint64_t x1416 = 93784261713000928LLU;
	int64_t t191 = -3052LL;

    t191 = (x1413|(x1414>>(x1415>x1416)));

    if (t191 != -1LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint8_t x1418 = 0U;
	int8_t x1420 = 1;

    t192 = (x1417|(x1418>>(x1419>x1420)));

    if (t192 != -1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x1434 = UINT64_MAX;
	static uint16_t x1436 = 8U;
	volatile uint64_t t193 = 521929302976177163LLU;

    t193 = (x1433|(x1434>>(x1435>x1436)));

    if (t193 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x1442 = 5440403482368569LLU;
	volatile int32_t x1443 = -1;
	static int64_t x1444 = INT64_MIN;

    t194 = (x1441|(x1442>>(x1443>x1444)));

    if (t194 != 2720202504536063LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x1450 = INT8_MAX;
	volatile int32_t x1451 = INT32_MIN;
	int16_t x1452 = -1;
	int64_t t195 = 33614LL;

    t195 = (x1449|(x1450>>(x1451>x1452)));

    if (t195 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1469 = -3666009;
	uint8_t x1471 = 12U;
	uint32_t x1472 = 23276U;
	int32_t t196 = 145540;

    t196 = (x1469|(x1470>>(x1471>x1472)));

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1473 = -1LL;
	uint16_t x1474 = 10213U;
	uint64_t x1475 = 870LLU;
	uint16_t x1476 = 1U;
	static volatile int64_t t197 = -544161066001101LL;

    t197 = (x1473|(x1474>>(x1475>x1476)));

    if (t197 != -1LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1477 = 0;
	uint16_t x1478 = 31U;
	int64_t x1479 = -1LL;
	int32_t t198 = 60;

    t198 = (x1477|(x1478>>(x1479>x1480)));

    if (t198 != 15) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x1486 = 0U;
	uint32_t x1487 = 176755664U;
	static int64_t x1488 = INT64_MIN;
	int64_t t199 = -7879623064114337LL;

    t199 = (x1485|(x1486>>(x1487>x1488)));

    if (t199 != -20266970LL) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

