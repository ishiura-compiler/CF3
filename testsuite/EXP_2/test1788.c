#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x59 = 44;
int32_t t0 = 546;
int16_t x71 = INT16_MIN;
int64_t x143 = INT64_MAX;
volatile int32_t t3 = -17;
uint8_t x201 = 26U;
int16_t x202 = -1;
int64_t x205 = -1LL;
volatile int32_t t6 = 1;
static int64_t x231 = INT64_MIN;
static uint32_t x275 = 18157482U;
static int16_t x326 = INT16_MAX;
int32_t t11 = 70285;
int64_t x361 = INT64_MIN;
volatile int32_t x362 = 1213;
int16_t x403 = INT16_MIN;
volatile uint8_t x404 = 1U;
static int32_t t14 = 2034495;
int8_t x434 = 5;
uint8_t x448 = 0U;
int16_t x485 = INT16_MAX;
int64_t x521 = 2701LL;
static uint32_t x590 = 302U;
static volatile uint16_t x612 = 1U;
int64_t x618 = INT64_MIN;
volatile int32_t t24 = -200;
int32_t t26 = -157550507;
uint8_t x707 = UINT8_MAX;
uint16_t x758 = 0U;
static uint16_t x760 = 4U;
uint16_t x762 = 1779U;
int8_t x763 = -1;
volatile uint16_t x808 = 15U;
int8_t x822 = INT8_MIN;
uint64_t x877 = 573439444022LLU;
volatile int32_t t32 = 119;
int16_t x897 = -1;
int16_t x926 = INT16_MIN;
volatile int32_t t34 = -486205;
static int16_t x957 = 77;
volatile int32_t x990 = -1;
static volatile int64_t x1093 = -1LL;
int32_t x1099 = -14;
int32_t t40 = -18451796;
int32_t t41 = -50959050;
static int32_t t42 = -1788597;
volatile int64_t x1207 = INT64_MIN;
static uint8_t x1257 = UINT8_MAX;
static volatile uint8_t x1260 = 0U;
volatile int64_t x1282 = INT64_MAX;
uint8_t x1341 = UINT8_MAX;
uint8_t x1358 = UINT8_MAX;
static uint16_t x1371 = UINT16_MAX;
volatile int32_t t51 = 108647;
static int16_t x1389 = INT16_MIN;
volatile uint8_t x1391 = UINT8_MAX;
uint16_t x1433 = 0U;
uint32_t x1480 = 6U;
volatile int32_t t55 = 390541;
static int32_t x1481 = INT32_MIN;
int32_t x1518 = -1;
int32_t x1519 = INT32_MIN;
volatile int32_t t60 = -1011445;
static int64_t x1621 = -1LL;
static uint8_t x1624 = 2U;
int8_t x1668 = 3;
volatile int32_t t63 = 90;
volatile int8_t x1683 = -1;
int16_t x1789 = 12984;
uint16_t x1790 = 6675U;
uint16_t x1797 = 197U;
static volatile int64_t x1799 = 2680616847331460LL;
volatile int32_t x1804 = 9;
int8_t x1837 = INT8_MAX;
int32_t x1862 = -26994;
volatile int32_t t71 = 445;
uint32_t x1878 = UINT32_MAX;
int8_t x1907 = -1;
int8_t x1974 = INT8_MAX;
uint16_t x1983 = 12638U;
volatile int8_t x1984 = 2;
static volatile int16_t x2017 = INT16_MIN;
int8_t x2020 = 16;
uint64_t x2041 = UINT64_MAX;
uint64_t x2043 = UINT64_MAX;
int64_t x2069 = -11064377328LL;
volatile int8_t x2071 = 0;
int32_t x2116 = 0;
static int32_t x2131 = INT32_MAX;
uint64_t x2159 = UINT64_MAX;
uint16_t x2269 = UINT16_MAX;
int16_t x2289 = INT16_MIN;
int32_t t84 = -232;
uint16_t x2341 = 1828U;
static uint8_t x2396 = 26U;
int32_t x2482 = -1;
int32_t t91 = -333813;
int8_t x2529 = -1;
uint8_t x2532 = 15U;
volatile int32_t t94 = 951;
uint64_t x2574 = 116540LLU;
int16_t x2576 = 0;
int16_t x2616 = 0;
volatile uint8_t x2646 = 108U;
uint8_t x2647 = 42U;


void f0(void) {
	static int8_t x57 = 5;
	int32_t x58 = -1;
	volatile uint16_t x60 = 1U;

	t0 = ((x57==(x58&x59))>>x60);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x65 = 1;
	uint8_t x66 = UINT8_MAX;
	volatile uint32_t x67 = UINT32_MAX;
	int16_t x68 = 0;
	volatile int32_t t1 = -102035054;

	t1 = ((x65==(x66&x67))>>x68);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x69 = INT64_MIN;
	int16_t x70 = INT16_MAX;
	int64_t x72 = 1LL;
	int32_t t2 = 29514;

	t2 = ((x69==(x70&x71))>>x72);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x141 = 85905119LLU;
	volatile int32_t x142 = -1;
	static uint8_t x144 = 11U;

	t3 = ((x141==(x142&x143))>>x144);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x203 = INT32_MIN;
	volatile int8_t x204 = 3;
	volatile int32_t t4 = 436868551;

	t4 = ((x201==(x202&x203))>>x204);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x206 = INT16_MIN;
	static int16_t x207 = INT16_MAX;
	uint64_t x208 = 0LLU;
	volatile int32_t t5 = 102;

	t5 = ((x205==(x206&x207))>>x208);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x209 = -38LL;
	uint64_t x210 = 2793852739024LLU;
	static uint32_t x211 = 302U;
	int8_t x212 = 0;

	t6 = ((x209==(x210&x211))>>x212);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x229 = 68291349060LLU;
	static uint16_t x230 = 20482U;
	int16_t x232 = 0;
	int32_t t7 = 19;

	t7 = ((x229==(x230&x231))>>x232);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x273 = 92894754127294LL;
	uint16_t x274 = UINT16_MAX;
	uint8_t x276 = 0U;
	int32_t t8 = 66617751;

	t8 = ((x273==(x274&x275))>>x276);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x325 = -84056850;
	int32_t x327 = INT32_MAX;
	int64_t x328 = 14LL;
	int32_t t9 = 4;

	t9 = ((x325==(x326&x327))>>x328);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x349 = INT8_MAX;
	volatile uint16_t x350 = UINT16_MAX;
	static int16_t x351 = -1;
	uint16_t x352 = 9U;
	static volatile int32_t t10 = 1394;

	t10 = ((x349==(x350&x351))>>x352);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x353 = -13067866252851534LL;
	uint32_t x354 = UINT32_MAX;
	static uint32_t x355 = UINT32_MAX;
	int8_t x356 = 2;

	t11 = ((x353==(x354&x355))>>x356);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x363 = INT8_MAX;
	int8_t x364 = 0;
	volatile int32_t t12 = 342661;

	t12 = ((x361==(x362&x363))>>x364);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x401 = INT64_MAX;
	uint16_t x402 = UINT16_MAX;
	int32_t t13 = -3652957;

	t13 = ((x401==(x402&x403))>>x404);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x413 = INT32_MIN;
	volatile int16_t x414 = INT16_MIN;
	static int16_t x415 = -1;
	uint16_t x416 = 6U;

	t14 = ((x413==(x414&x415))>>x416);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x433 = INT16_MIN;
	volatile uint64_t x435 = 58565211LLU;
	static int8_t x436 = 1;
	volatile int32_t t15 = -338;

	t15 = ((x433==(x434&x435))>>x436);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x441 = INT16_MAX;
	int32_t x442 = INT32_MIN;
	uint64_t x443 = 108LLU;
	volatile int32_t x444 = 1;
	volatile int32_t t16 = 174;

	t16 = ((x441==(x442&x443))>>x444);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x445 = INT8_MIN;
	static int16_t x446 = 55;
	uint16_t x447 = UINT16_MAX;
	volatile int32_t t17 = -1;

	t17 = ((x445==(x446&x447))>>x448);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x473 = 4;
	static volatile int8_t x474 = -1;
	int8_t x475 = INT8_MIN;
	uint32_t x476 = 23U;
	volatile int32_t t18 = 1;

	t18 = ((x473==(x474&x475))>>x476);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x486 = 28945216538418LLU;
	int8_t x487 = -18;
	static int8_t x488 = 1;
	int32_t t19 = -764;

	t19 = ((x485==(x486&x487))>>x488);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x497 = UINT64_MAX;
	volatile int16_t x498 = -7830;
	int64_t x499 = -69826497250154228LL;
	int8_t x500 = 1;
	int32_t t20 = 511956;

	t20 = ((x497==(x498&x499))>>x500);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x522 = INT32_MAX;
	int64_t x523 = INT64_MIN;
	uint8_t x524 = 1U;
	int32_t t21 = 0;

	t21 = ((x521==(x522&x523))>>x524);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x589 = -978;
	int64_t x591 = INT64_MIN;
	uint16_t x592 = 25U;
	int32_t t22 = -12379;

	t22 = ((x589==(x590&x591))>>x592);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x609 = INT8_MAX;
	volatile int16_t x610 = -2645;
	volatile int64_t x611 = INT64_MAX;
	int32_t t23 = 313;

	t23 = ((x609==(x610&x611))>>x612);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x617 = 856108U;
	uint64_t x619 = UINT64_MAX;
	uint32_t x620 = 3U;

	t24 = ((x617==(x618&x619))>>x620);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x637 = INT16_MIN;
	int32_t x638 = INT32_MAX;
	uint64_t x639 = 518445347LLU;
	volatile uint16_t x640 = 2U;
	static volatile int32_t t25 = 13431269;

	t25 = ((x637==(x638&x639))>>x640);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x641 = -1;
	static int64_t x642 = -1LL;
	int64_t x643 = INT64_MAX;
	int8_t x644 = 26;

	t26 = ((x641==(x642&x643))>>x644);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x705 = 1U;
	int16_t x706 = -3323;
	volatile uint16_t x708 = 6U;
	int32_t t27 = 53;

	t27 = ((x705==(x706&x707))>>x708);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x757 = -1;
	uint8_t x759 = 0U;
	volatile int32_t t28 = 4;

	t28 = ((x757==(x758&x759))>>x760);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x761 = INT16_MIN;
	uint8_t x764 = 1U;
	volatile int32_t t29 = 2;

	t29 = ((x761==(x762&x763))>>x764);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x805 = INT16_MAX;
	static int16_t x806 = -30;
	volatile uint8_t x807 = 81U;
	static volatile int32_t t30 = -652036;

	t30 = ((x805==(x806&x807))>>x808);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x821 = INT32_MIN;
	static volatile int64_t x823 = -1680376429LL;
	uint8_t x824 = 12U;
	volatile int32_t t31 = 1450;

	t31 = ((x821==(x822&x823))>>x824);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x878 = INT64_MIN;
	volatile int16_t x879 = 7;
	static uint8_t x880 = 1U;

	t32 = ((x877==(x878&x879))>>x880);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x898 = -1LL;
	int32_t x899 = INT32_MAX;
	static uint16_t x900 = 14U;
	int32_t t33 = -25195504;

	t33 = ((x897==(x898&x899))>>x900);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x925 = 30714U;
	static int64_t x927 = INT64_MIN;
	static uint8_t x928 = 0U;

	t34 = ((x925==(x926&x927))>>x928);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x937 = 1U;
	uint16_t x938 = 2U;
	int16_t x939 = 0;
	uint16_t x940 = 7U;
	static volatile int32_t t35 = 130123381;

	t35 = ((x937==(x938&x939))>>x940);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x958 = 241714644;
	volatile uint16_t x959 = 58U;
	int8_t x960 = 4;
	int32_t t36 = -35455390;

	t36 = ((x957==(x958&x959))>>x960);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x961 = UINT32_MAX;
	int64_t x962 = INT64_MIN;
	int8_t x963 = INT8_MAX;
	uint8_t x964 = 4U;
	static int32_t t37 = -4669;

	t37 = ((x961==(x962&x963))>>x964);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x989 = INT64_MIN;
	static uint32_t x991 = UINT32_MAX;
	uint64_t x992 = 1LLU;
	volatile int32_t t38 = -237635051;

	t38 = ((x989==(x990&x991))>>x992);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x1094 = 0;
	int64_t x1095 = -1LL;
	uint8_t x1096 = 3U;
	volatile int32_t t39 = -2353;

	t39 = ((x1093==(x1094&x1095))>>x1096);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1097 = INT8_MIN;
	uint16_t x1098 = UINT16_MAX;
	uint32_t x1100 = 0U;

	t40 = ((x1097==(x1098&x1099))>>x1100);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x1173 = INT16_MIN;
	uint16_t x1174 = UINT16_MAX;
	uint32_t x1175 = 1408115U;
	volatile int8_t x1176 = 0;

	t41 = ((x1173==(x1174&x1175))>>x1176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x1185 = INT64_MIN;
	uint16_t x1186 = UINT16_MAX;
	static int32_t x1187 = INT32_MAX;
	uint8_t x1188 = 1U;

	t42 = ((x1185==(x1186&x1187))>>x1188);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1205 = -26;
	volatile uint16_t x1206 = 178U;
	volatile uint8_t x1208 = 1U;
	volatile int32_t t43 = 656291782;

	t43 = ((x1205==(x1206&x1207))>>x1208);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x1237 = INT16_MIN;
	int64_t x1238 = -3LL;
	int16_t x1239 = INT16_MAX;
	volatile uint16_t x1240 = 21U;
	volatile int32_t t44 = -4;

	t44 = ((x1237==(x1238&x1239))>>x1240);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x1258 = UINT32_MAX;
	int32_t x1259 = INT32_MIN;
	int32_t t45 = 2;

	t45 = ((x1257==(x1258&x1259))>>x1260);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1273 = INT16_MIN;
	static int16_t x1274 = 2636;
	uint8_t x1275 = 12U;
	uint32_t x1276 = 6U;
	volatile int32_t t46 = 77811;

	t46 = ((x1273==(x1274&x1275))>>x1276);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1281 = INT64_MAX;
	static int16_t x1283 = INT16_MIN;
	uint64_t x1284 = 2LLU;
	static int32_t t47 = 175577108;

	t47 = ((x1281==(x1282&x1283))>>x1284);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x1313 = INT16_MAX;
	int16_t x1314 = INT16_MIN;
	int64_t x1315 = INT64_MIN;
	static uint64_t x1316 = 1LLU;
	int32_t t48 = 30105654;

	t48 = ((x1313==(x1314&x1315))>>x1316);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x1342 = 80212442LL;
	int16_t x1343 = INT16_MIN;
	volatile uint8_t x1344 = 6U;
	volatile int32_t t49 = 1;

	t49 = ((x1341==(x1342&x1343))>>x1344);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x1357 = -60;
	int16_t x1359 = INT16_MAX;
	volatile int32_t x1360 = 0;
	int32_t t50 = -158;

	t50 = ((x1357==(x1358&x1359))>>x1360);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x1369 = -189;
	static uint8_t x1370 = UINT8_MAX;
	uint32_t x1372 = 0U;

	t51 = ((x1369==(x1370&x1371))>>x1372);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x1390 = INT16_MIN;
	int8_t x1392 = 0;
	static volatile int32_t t52 = 49071;

	t52 = ((x1389==(x1390&x1391))>>x1392);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x1413 = 25U;
	uint16_t x1414 = UINT16_MAX;
	int32_t x1415 = 26;
	uint8_t x1416 = 14U;
	int32_t t53 = -5720677;

	t53 = ((x1413==(x1414&x1415))>>x1416);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x1434 = -1;
	static int32_t x1435 = -29;
	volatile uint8_t x1436 = 5U;
	int32_t t54 = -113819;

	t54 = ((x1433==(x1434&x1435))>>x1436);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x1477 = 1;
	int16_t x1478 = INT16_MIN;
	static uint32_t x1479 = UINT32_MAX;

	t55 = ((x1477==(x1478&x1479))>>x1480);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x1482 = INT32_MIN;
	int32_t x1483 = -17790;
	int8_t x1484 = 0;
	volatile int32_t t56 = -285;

	t56 = ((x1481==(x1482&x1483))>>x1484);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x1517 = UINT8_MAX;
	uint16_t x1520 = 20U;
	volatile int32_t t57 = 45103;

	t57 = ((x1517==(x1518&x1519))>>x1520);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x1529 = UINT64_MAX;
	uint32_t x1530 = 180352U;
	int16_t x1531 = INT16_MIN;
	uint8_t x1532 = 10U;
	int32_t t58 = -1;

	t58 = ((x1529==(x1530&x1531))>>x1532);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x1537 = INT32_MIN;
	uint16_t x1538 = UINT16_MAX;
	int64_t x1539 = INT64_MIN;
	volatile uint16_t x1540 = 2U;
	int32_t t59 = 12;

	t59 = ((x1537==(x1538&x1539))>>x1540);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x1617 = 3U;
	uint32_t x1618 = UINT32_MAX;
	int16_t x1619 = INT16_MIN;
	uint64_t x1620 = 2LLU;

	t60 = ((x1617==(x1618&x1619))>>x1620);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x1622 = -1;
	int16_t x1623 = INT16_MIN;
	int32_t t61 = 19;

	t61 = ((x1621==(x1622&x1623))>>x1624);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x1665 = -1835;
	int16_t x1666 = -1;
	volatile int64_t x1667 = INT64_MIN;
	volatile int32_t t62 = -36457;

	t62 = ((x1665==(x1666&x1667))>>x1668);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x1669 = 76U;
	static uint32_t x1670 = UINT32_MAX;
	uint32_t x1671 = 77U;
	uint8_t x1672 = 11U;

	t63 = ((x1669==(x1670&x1671))>>x1672);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x1681 = INT64_MIN;
	volatile uint8_t x1682 = 3U;
	int8_t x1684 = 2;
	static int32_t t64 = -86558;

	t64 = ((x1681==(x1682&x1683))>>x1684);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x1769 = 1517LL;
	uint16_t x1770 = 2U;
	volatile int8_t x1771 = INT8_MIN;
	uint32_t x1772 = 19U;
	int32_t t65 = 9796068;

	t65 = ((x1769==(x1770&x1771))>>x1772);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x1791 = -1;
	uint8_t x1792 = 1U;
	int32_t t66 = -57;

	t66 = ((x1789==(x1790&x1791))>>x1792);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x1798 = INT16_MIN;
	uint8_t x1800 = 1U;
	static int32_t t67 = 224554905;

	t67 = ((x1797==(x1798&x1799))>>x1800);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x1801 = 15U;
	int32_t x1802 = INT32_MAX;
	uint16_t x1803 = UINT16_MAX;
	int32_t t68 = 1;

	t68 = ((x1801==(x1802&x1803))>>x1804);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x1833 = INT32_MIN;
	static int32_t x1834 = INT32_MAX;
	uint32_t x1835 = 1186282643U;
	uint16_t x1836 = 12U;
	int32_t t69 = 145;

	t69 = ((x1833==(x1834&x1835))>>x1836);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x1838 = 3;
	int32_t x1839 = 924380630;
	volatile uint16_t x1840 = 1U;
	int32_t t70 = -2216;

	t70 = ((x1837==(x1838&x1839))>>x1840);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x1861 = INT64_MIN;
	static uint16_t x1863 = 535U;
	static volatile int16_t x1864 = 31;

	t71 = ((x1861==(x1862&x1863))>>x1864);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x1877 = UINT16_MAX;
	int64_t x1879 = -1657LL;
	uint8_t x1880 = 0U;
	int32_t t72 = -2;

	t72 = ((x1877==(x1878&x1879))>>x1880);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x1905 = -1;
	static int32_t x1906 = 430260237;
	uint8_t x1908 = 11U;
	static int32_t t73 = 4033593;

	t73 = ((x1905==(x1906&x1907))>>x1908);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x1973 = INT64_MAX;
	static int16_t x1975 = 937;
	static int64_t x1976 = 1LL;
	volatile int32_t t74 = 34451458;

	t74 = ((x1973==(x1974&x1975))>>x1976);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x1981 = INT8_MAX;
	uint16_t x1982 = 8302U;
	int32_t t75 = -810747595;

	t75 = ((x1981==(x1982&x1983))>>x1984);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x2018 = -370391;
	uint64_t x2019 = 29LLU;
	volatile int32_t t76 = 57;

	t76 = ((x2017==(x2018&x2019))>>x2020);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x2042 = -1;
	volatile int8_t x2044 = 4;
	volatile int32_t t77 = 148;

	t77 = ((x2041==(x2042&x2043))>>x2044);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x2070 = 10879LLU;
	uint8_t x2072 = 0U;
	volatile int32_t t78 = -28847152;

	t78 = ((x2069==(x2070&x2071))>>x2072);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x2097 = INT64_MAX;
	int32_t x2098 = -24;
	uint32_t x2099 = 22445639U;
	volatile int8_t x2100 = 0;
	volatile int32_t t79 = 176;

	t79 = ((x2097==(x2098&x2099))>>x2100);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x2113 = -1LL;
	int32_t x2114 = 451310007;
	volatile int16_t x2115 = INT16_MIN;
	volatile int32_t t80 = -10;

	t80 = ((x2113==(x2114&x2115))>>x2116);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x2129 = INT8_MIN;
	int16_t x2130 = -123;
	int64_t x2132 = 25LL;
	volatile int32_t t81 = -327;

	t81 = ((x2129==(x2130&x2131))>>x2132);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x2157 = -1;
	static volatile uint16_t x2158 = UINT16_MAX;
	int16_t x2160 = 0;
	volatile int32_t t82 = -1244527;

	t82 = ((x2157==(x2158&x2159))>>x2160);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x2270 = -4LL;
	int8_t x2271 = INT8_MIN;
	volatile int32_t x2272 = 4;
	volatile int32_t t83 = -1;

	t83 = ((x2269==(x2270&x2271))>>x2272);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x2290 = -1;
	volatile int32_t x2291 = -1;
	int16_t x2292 = 4;

	t84 = ((x2289==(x2290&x2291))>>x2292);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x2342 = INT64_MIN;
	int64_t x2343 = INT64_MAX;
	int16_t x2344 = 2;
	int32_t t85 = 0;

	t85 = ((x2341==(x2342&x2343))>>x2344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x2369 = 11U;
	int32_t x2370 = INT32_MIN;
	volatile int8_t x2371 = INT8_MIN;
	int8_t x2372 = 8;
	static volatile int32_t t86 = 60213;

	t86 = ((x2369==(x2370&x2371))>>x2372);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x2393 = UINT64_MAX;
	int32_t x2394 = INT32_MAX;
	int32_t x2395 = INT32_MAX;
	volatile int32_t t87 = -252;

	t87 = ((x2393==(x2394&x2395))>>x2396);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x2481 = INT64_MAX;
	int8_t x2483 = INT8_MIN;
	uint16_t x2484 = 2U;
	static volatile int32_t t88 = -853050773;

	t88 = ((x2481==(x2482&x2483))>>x2484);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x2505 = -1;
	int16_t x2506 = -1;
	static volatile int16_t x2507 = INT16_MIN;
	static uint8_t x2508 = 4U;
	volatile int32_t t89 = -3;

	t89 = ((x2505==(x2506&x2507))>>x2508);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x2513 = INT8_MIN;
	uint16_t x2514 = 7U;
	volatile uint64_t x2515 = 1169473LLU;
	uint8_t x2516 = 3U;
	static int32_t t90 = 9;

	t90 = ((x2513==(x2514&x2515))>>x2516);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x2517 = -1;
	uint8_t x2518 = 14U;
	static volatile uint16_t x2519 = UINT16_MAX;
	static uint8_t x2520 = 14U;

	t91 = ((x2517==(x2518&x2519))>>x2520);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x2530 = UINT16_MAX;
	static int64_t x2531 = INT64_MIN;
	volatile int32_t t92 = 27166;

	t92 = ((x2529==(x2530&x2531))>>x2532);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x2537 = 1593369765904LLU;
	static int8_t x2538 = 3;
	int64_t x2539 = INT64_MIN;
	volatile uint8_t x2540 = 2U;
	int32_t t93 = -1;

	t93 = ((x2537==(x2538&x2539))>>x2540);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x2541 = INT16_MAX;
	int16_t x2542 = -1;
	int32_t x2543 = -1;
	static int16_t x2544 = 2;

	t94 = ((x2541==(x2542&x2543))>>x2544);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x2549 = -6;
	volatile int16_t x2550 = -1;
	uint16_t x2551 = 1U;
	int8_t x2552 = 3;
	volatile int32_t t95 = -6299;

	t95 = ((x2549==(x2550&x2551))>>x2552);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x2573 = 5U;
	volatile uint32_t x2575 = 528751154U;
	int32_t t96 = -134532;

	t96 = ((x2573==(x2574&x2575))>>x2576);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x2593 = 4U;
	uint32_t x2594 = UINT32_MAX;
	volatile uint8_t x2595 = 9U;
	int16_t x2596 = 1;
	volatile int32_t t97 = -124;

	t97 = ((x2593==(x2594&x2595))>>x2596);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x2613 = -1LL;
	volatile int32_t x2614 = INT32_MIN;
	int32_t x2615 = INT32_MAX;
	int32_t t98 = 14;

	t98 = ((x2613==(x2614&x2615))>>x2616);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x2645 = 6270U;
	static int16_t x2648 = 0;
	volatile int32_t t99 = -5;

	t99 = ((x2645==(x2646&x2647))>>x2648);

	if (t99 != 0) { NG(); } else { ; }
	
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


    return 0;
}

