#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x10 = INT64_MIN;
uint64_t x33 = 986629225622LLU;
int8_t x46 = 0;
int64_t x48 = -11317807385791LL;
static uint64_t t2 = 101311LLU;
uint16_t x90 = 9U;
static volatile uint16_t x92 = UINT16_MAX;
int8_t x112 = INT8_MAX;
uint16_t x127 = 111U;
int32_t x186 = -183769775;
volatile int64_t t10 = -437LL;
int32_t x250 = INT32_MIN;
static int8_t x252 = INT8_MIN;
uint64_t x273 = 14456304571LLU;
uint8_t x293 = 4U;
static int8_t x295 = INT8_MIN;
static volatile int16_t x317 = INT16_MAX;
static int16_t x319 = 8;
uint32_t x328 = 499U;
static int8_t x341 = 13;
int64_t t20 = -110034054LL;
uint8_t x365 = 0U;
volatile int8_t x417 = 3;
int32_t x419 = 1495;
volatile int64_t t24 = 17LL;
static uint8_t x433 = UINT8_MAX;
volatile int8_t x443 = 1;
int64_t x445 = INT64_MAX;
volatile uint32_t x522 = 0U;
int64_t x559 = INT64_MIN;
int64_t t33 = -136684695846317834LL;
static int8_t x579 = INT8_MAX;
static uint16_t x584 = 224U;
volatile uint64_t x625 = 6LLU;
int64_t x628 = 232743285818LL;
uint64_t t40 = 23965744013681LLU;
static uint32_t x956 = UINT32_MAX;
int8_t x985 = INT8_MAX;
uint8_t x999 = 23U;
uint32_t x1036 = 763098637U;
volatile uint32_t x1041 = 404084U;
int64_t x1059 = INT64_MIN;
int32_t t55 = 147;
int32_t x1081 = 13;
int32_t x1082 = -1;
static volatile int32_t t56 = -3008925;
uint16_t x1233 = 419U;
int16_t x1235 = 0;
volatile int32_t x1282 = INT32_MIN;
static volatile int64_t x1291 = -1857410LL;
uint8_t x1294 = UINT8_MAX;
volatile uint64_t t63 = 29935630017334498LLU;
volatile int32_t t65 = -92;
uint16_t x1327 = 2U;
int64_t x1328 = INT64_MIN;
int64_t x1340 = -1LL;
int16_t x1362 = INT16_MIN;
int8_t x1363 = 12;
int16_t x1364 = INT16_MAX;
int8_t x1416 = INT8_MAX;
uint64_t x1449 = UINT64_MAX;
int8_t x1450 = INT8_MAX;
volatile int16_t x1457 = 0;
int32_t x1458 = INT32_MIN;
uint16_t x1460 = 7U;
int32_t x1542 = INT32_MIN;
volatile int32_t x1571 = 0;
volatile uint32_t t84 = 1U;
static int64_t x1608 = INT64_MIN;
int64_t t86 = -65634434LL;
uint64_t x1649 = UINT64_MAX;
uint8_t x1651 = 1U;
volatile uint32_t x1677 = 2037248691U;
static int32_t x1710 = 23;
volatile uint32_t t91 = 32U;
uint64_t x1742 = 11LLU;
uint16_t x1749 = 16747U;
static uint8_t x1750 = 3U;
static uint16_t x1751 = 2U;
static volatile int32_t x1765 = INT32_MAX;
int8_t x1818 = INT8_MAX;
uint32_t x1829 = UINT32_MAX;
uint8_t x1849 = 16U;
uint16_t x1850 = 27U;


void f0(void) {
	int16_t x9 = 1;
	volatile uint32_t x11 = UINT32_MAX;
	static uint64_t x12 = UINT64_MAX;
	uint64_t t0 = 1656651009906255559LLU;

	t0 = ((x9>>(x10&x11))%x12);

	if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x34 = 22U;
	int32_t x35 = 1302;
	int16_t x36 = -1;
	uint64_t t1 = 0LLU;

	t1 = ((x33>>(x34&x35))%x36);

	if (t1 != 235230LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x45 = 107784473521068LLU;
	uint16_t x47 = 53U;

	t2 = ((x45>>(x46&x47))%x48);

	if (t2 != 107784473521068LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x89 = INT32_MAX;
	volatile uint16_t x91 = 171U;
	int32_t t3 = 1;

	t3 = ((x89>>(x90&x91))%x92);

	if (t3 != 63) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x105 = 81271233607577LLU;
	volatile int8_t x106 = 25;
	static uint16_t x107 = UINT16_MAX;
	static uint32_t x108 = 241592U;
	volatile uint64_t t4 = 22963519644369LLU;

	t4 = ((x105>>(x106&x107))%x108);

	if (t4 != 6151LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x109 = 1;
	static int16_t x110 = 3;
	static int16_t x111 = INT16_MIN;
	int32_t t5 = -192;

	t5 = ((x109>>(x110&x111))%x112);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x125 = 1992882901068LLU;
	int64_t x126 = 47LL;
	static uint8_t x128 = UINT8_MAX;
	volatile uint64_t t6 = 306534554240971595LLU;

	t6 = ((x125>>(x126&x127))%x128);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint32_t x149 = 776U;
	int8_t x150 = 5;
	int16_t x151 = -1;
	volatile uint64_t x152 = 58804463791LLU;
	volatile uint64_t t7 = 116254292413LLU;

	t7 = ((x149>>(x150&x151))%x152);

	if (t7 != 24LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x161 = 711964474U;
	int16_t x162 = 1;
	int8_t x163 = INT8_MIN;
	int64_t x164 = INT64_MIN;
	volatile int64_t t8 = 73037262746396564LL;

	t8 = ((x161>>(x162&x163))%x164);

	if (t8 != 711964474LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x185 = 58386;
	uint64_t x187 = 12LLU;
	volatile int8_t x188 = -13;
	volatile int32_t t9 = -4519470;

	t9 = ((x185>>(x186&x187))%x188);

	if (t9 != 3) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x213 = 40LL;
	static volatile uint32_t x214 = 102U;
	int64_t x215 = INT64_MIN;
	int64_t x216 = -101248142LL;

	t10 = ((x213>>(x214&x215))%x216);

	if (t10 != 40LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x233 = 61LLU;
	uint16_t x234 = 3454U;
	int64_t x235 = INT64_MIN;
	int16_t x236 = INT16_MIN;
	uint64_t t11 = 11229654LLU;

	t11 = ((x233>>(x234&x235))%x236);

	if (t11 != 61LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x237 = UINT16_MAX;
	static uint8_t x238 = 2U;
	int8_t x239 = -1;
	static int16_t x240 = -32;
	volatile int32_t t12 = -46346189;

	t12 = ((x237>>(x238&x239))%x240);

	if (t12 != 31) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x249 = 1U;
	static int32_t x251 = 52262;
	int32_t t13 = -2;

	t13 = ((x249>>(x250&x251))%x252);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x274 = 403U;
	static int16_t x275 = INT16_MIN;
	static uint8_t x276 = 9U;
	volatile uint64_t t14 = 4793LLU;

	t14 = ((x273>>(x274&x275))%x276);

	if (t14 != 4LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x294 = 3U;
	int16_t x296 = -9;
	static volatile int32_t t15 = -19088760;

	t15 = ((x293>>(x294&x295))%x296);

	if (t15 != 4) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x318 = INT32_MIN;
	int8_t x320 = INT8_MAX;
	volatile int32_t t16 = 696;

	t16 = ((x317>>(x318&x319))%x320);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x321 = 15U;
	uint32_t x322 = 10U;
	static int64_t x323 = INT64_MIN;
	uint8_t x324 = UINT8_MAX;
	volatile int32_t t17 = -3581406;

	t17 = ((x321>>(x322&x323))%x324);

	if (t17 != 15) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x325 = 1U;
	uint16_t x326 = 1U;
	uint8_t x327 = 1U;
	volatile uint32_t t18 = 146303U;

	t18 = ((x325>>(x326&x327))%x328);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint64_t x342 = 70805189315373294LLU;
	static int8_t x343 = 2;
	int64_t x344 = INT64_MIN;
	static volatile int64_t t19 = -366301601LL;

	t19 = ((x341>>(x342&x343))%x344);

	if (t19 != 3LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x345 = INT8_MAX;
	static uint16_t x346 = 92U;
	uint16_t x347 = 3U;
	int64_t x348 = INT64_MAX;

	t20 = ((x345>>(x346&x347))%x348);

	if (t20 != 127LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x366 = INT16_MIN;
	volatile uint8_t x367 = 6U;
	uint64_t x368 = 123271175120967665LLU;
	volatile uint64_t t21 = 2293824037LLU;

	t21 = ((x365>>(x366&x367))%x368);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x373 = 155306803439266LLU;
	uint8_t x374 = 15U;
	static int16_t x375 = -1;
	volatile int8_t x376 = INT8_MAX;
	volatile uint64_t t22 = 1715515304680948305LLU;

	t22 = ((x373>>(x374&x375))%x376);

	if (t22 != 85LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x389 = 3U;
	uint32_t x390 = 2U;
	uint8_t x391 = UINT8_MAX;
	uint32_t x392 = 1693U;
	volatile uint32_t t23 = 6683U;

	t23 = ((x389>>(x390&x391))%x392);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x418 = INT64_MIN;
	int64_t x420 = -1LL;

	t24 = ((x417>>(x418&x419))%x420);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x429 = 17979LLU;
	int32_t x430 = INT32_MIN;
	int32_t x431 = INT32_MAX;
	uint64_t x432 = 81LLU;
	static volatile uint64_t t25 = 1157382714LLU;

	t25 = ((x429>>(x430&x431))%x432);

	if (t25 != 78LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x434 = 20U;
	int8_t x435 = INT8_MIN;
	volatile uint32_t x436 = UINT32_MAX;
	volatile uint32_t t26 = 7669U;

	t26 = ((x433>>(x434&x435))%x436);

	if (t26 != 255U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x441 = 52858LLU;
	int32_t x442 = INT32_MIN;
	int32_t x444 = -1;
	static uint64_t t27 = 6869440606255216641LLU;

	t27 = ((x441>>(x442&x443))%x444);

	if (t27 != 52858LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x446 = 719908961LLU;
	int32_t x447 = INT32_MIN;
	int16_t x448 = -1;
	static int64_t t28 = 45883714002066LL;

	t28 = ((x445>>(x446&x447))%x448);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x493 = 196974612294491767LL;
	uint8_t x494 = 36U;
	int16_t x495 = -1;
	int32_t x496 = INT32_MAX;
	volatile int64_t t29 = -5LL;

	t29 = ((x493>>(x494&x495))%x496);

	if (t29 != 2866357LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x497 = 14U;
	uint64_t x498 = 0LLU;
	uint32_t x499 = UINT32_MAX;
	int8_t x500 = -1;
	int32_t t30 = 222943;

	t30 = ((x497>>(x498&x499))%x500);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x521 = 17;
	int8_t x523 = INT8_MAX;
	volatile int32_t x524 = INT32_MIN;
	volatile int32_t t31 = 2660;

	t31 = ((x521>>(x522&x523))%x524);

	if (t31 != 17) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x537 = 1345082LLU;
	static uint16_t x538 = 0U;
	static int32_t x539 = 1;
	static volatile uint64_t x540 = 2828819LLU;
	volatile uint64_t t32 = 59113619473583417LLU;

	t32 = ((x537>>(x538&x539))%x540);

	if (t32 != 1345082LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x557 = INT64_MAX;
	int8_t x558 = 44;
	int8_t x560 = INT8_MIN;

	t33 = ((x557>>(x558&x559))%x560);

	if (t33 != 127LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x577 = 1438646874LL;
	int64_t x578 = INT64_MIN;
	int64_t x580 = INT64_MAX;
	int64_t t34 = -131LL;

	t34 = ((x577>>(x578&x579))%x580);

	if (t34 != 1438646874LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x581 = 5U;
	int64_t x582 = INT64_MIN;
	uint16_t x583 = 374U;
	static int32_t t35 = -46686;

	t35 = ((x581>>(x582&x583))%x584);

	if (t35 != 5) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x593 = 1U;
	volatile int16_t x594 = 2;
	int64_t x595 = INT64_MIN;
	volatile int8_t x596 = INT8_MAX;
	volatile int32_t t36 = 96127580;

	t36 = ((x593>>(x594&x595))%x596);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x605 = 1;
	uint32_t x606 = 115720884U;
	int32_t x607 = INT32_MIN;
	uint16_t x608 = 20510U;
	volatile int32_t t37 = -213511841;

	t37 = ((x605>>(x606&x607))%x608);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x609 = INT8_MAX;
	int16_t x610 = INT16_MIN;
	uint16_t x611 = 13U;
	uint16_t x612 = 60U;
	volatile int32_t t38 = -231;

	t38 = ((x609>>(x610&x611))%x612);

	if (t38 != 7) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x626 = 17LLU;
	int8_t x627 = -1;
	volatile uint64_t t39 = 2LLU;

	t39 = ((x625>>(x626&x627))%x628);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x653 = 434406910774LLU;
	int64_t x654 = INT64_MIN;
	uint32_t x655 = 1U;
	int16_t x656 = INT16_MIN;

	t40 = ((x653>>(x654&x655))%x656);

	if (t40 != 434406910774LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x705 = UINT64_MAX;
	int16_t x706 = 1;
	int16_t x707 = INT16_MIN;
	volatile int32_t x708 = 11360;
	static volatile uint64_t t41 = 29183LLU;

	t41 = ((x705>>(x706&x707))%x708);

	if (t41 != 1855LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x725 = UINT64_MAX;
	int16_t x726 = INT16_MIN;
	int16_t x727 = INT16_MAX;
	volatile uint32_t x728 = 38U;
	volatile uint64_t t42 = 1280397LLU;

	t42 = ((x725>>(x726&x727))%x728);

	if (t42 != 35LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x785 = 1237U;
	int64_t x786 = INT64_MIN;
	static volatile int32_t x787 = INT32_MAX;
	static volatile int16_t x788 = 588;
	uint32_t t43 = 206827U;

	t43 = ((x785>>(x786&x787))%x788);

	if (t43 != 61U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x797 = 12U;
	int8_t x798 = INT8_MIN;
	int16_t x799 = 47;
	int64_t x800 = INT64_MIN;
	int64_t t44 = -115153330936158008LL;

	t44 = ((x797>>(x798&x799))%x800);

	if (t44 != 12LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x865 = 121795882885130290LL;
	uint8_t x866 = 8U;
	int64_t x867 = -1LL;
	volatile int16_t x868 = INT16_MIN;
	volatile int64_t t45 = -2853574LL;

	t45 = ((x865>>(x866&x867))%x868);

	if (t45 != 31016LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x881 = 185U;
	static int8_t x882 = 0;
	uint64_t x883 = 2770414154515LLU;
	static uint16_t x884 = 8292U;
	int32_t t46 = -812097179;

	t46 = ((x881>>(x882&x883))%x884);

	if (t46 != 185) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x949 = 3U;
	volatile int64_t x950 = INT64_MIN;
	uint32_t x951 = 2312U;
	int32_t x952 = INT32_MAX;
	volatile int32_t t47 = -5045;

	t47 = ((x949>>(x950&x951))%x952);

	if (t47 != 3) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x953 = UINT32_MAX;
	static volatile int8_t x954 = 1;
	int8_t x955 = -1;
	volatile uint32_t t48 = 240U;

	t48 = ((x953>>(x954&x955))%x956);

	if (t48 != 2147483647U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x977 = 24134LL;
	static uint32_t x978 = 35U;
	static int8_t x979 = INT8_MIN;
	static volatile uint16_t x980 = 11376U;
	volatile int64_t t49 = 10724LL;

	t49 = ((x977>>(x978&x979))%x980);

	if (t49 != 1382LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x986 = INT64_MAX;
	int16_t x987 = 1;
	volatile uint16_t x988 = 1U;
	static volatile int32_t t50 = 6859;

	t50 = ((x985>>(x986&x987))%x988);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x993 = UINT16_MAX;
	volatile uint8_t x994 = 26U;
	uint32_t x995 = 27905U;
	static volatile int64_t x996 = INT64_MAX;
	volatile int64_t t51 = -206821333LL;

	t51 = ((x993>>(x994&x995))%x996);

	if (t51 != 65535LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x997 = 11311LL;
	int32_t x998 = -11417312;
	static int16_t x1000 = 1318;
	static volatile int64_t t52 = -16213LL;

	t52 = ((x997>>(x998&x999))%x1000);

	if (t52 != 767LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint64_t x1033 = 927LLU;
	int32_t x1034 = 18;
	volatile int8_t x1035 = 3;
	uint64_t t53 = 2495342318LLU;

	t53 = ((x1033>>(x1034&x1035))%x1036);

	if (t53 != 231LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x1042 = INT64_MIN;
	static int64_t x1043 = INT64_MAX;
	uint16_t x1044 = 70U;
	uint32_t t54 = 40721U;

	t54 = ((x1041>>(x1042&x1043))%x1044);

	if (t54 != 44U) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x1057 = UINT16_MAX;
	volatile uint32_t x1058 = 39U;
	static volatile int16_t x1060 = INT16_MAX;

	t55 = ((x1057>>(x1058&x1059))%x1060);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x1083 = 0U;
	int16_t x1084 = 454;

	t56 = ((x1081>>(x1082&x1083))%x1084);

	if (t56 != 13) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x1085 = UINT16_MAX;
	volatile int32_t x1086 = INT32_MIN;
	volatile int32_t x1087 = INT32_MAX;
	int16_t x1088 = INT16_MIN;
	volatile int32_t t57 = 572559;

	t57 = ((x1085>>(x1086&x1087))%x1088);

	if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x1149 = INT16_MAX;
	uint8_t x1150 = 58U;
	int8_t x1151 = -49;
	int16_t x1152 = -9704;
	int32_t t58 = 238595;

	t58 = ((x1149>>(x1150&x1151))%x1152);

	if (t58 != 31) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x1229 = INT16_MAX;
	volatile uint32_t x1230 = 199294910U;
	static int64_t x1231 = INT64_MIN;
	int16_t x1232 = 10;
	volatile int32_t t59 = -137697209;

	t59 = ((x1229>>(x1230&x1231))%x1232);

	if (t59 != 7) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x1234 = INT32_MIN;
	uint64_t x1236 = 6855328058LLU;
	volatile uint64_t t60 = 5772813398385LLU;

	t60 = ((x1233>>(x1234&x1235))%x1236);

	if (t60 != 419LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x1281 = UINT16_MAX;
	uint8_t x1283 = UINT8_MAX;
	int16_t x1284 = -12;
	volatile int32_t t61 = 1;

	t61 = ((x1281>>(x1282&x1283))%x1284);

	if (t61 != 3) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x1289 = 15;
	int8_t x1290 = 7;
	uint8_t x1292 = 29U;
	int32_t t62 = 30941;

	t62 = ((x1289>>(x1290&x1291))%x1292);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x1293 = 6114155974652776552LLU;
	int16_t x1295 = 1;
	volatile uint16_t x1296 = 775U;

	t63 = ((x1293>>(x1294&x1295))%x1296);

	if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x1309 = INT32_MAX;
	int8_t x1310 = INT8_MAX;
	int16_t x1311 = INT16_MIN;
	static volatile uint32_t x1312 = 6158725U;
	uint32_t t64 = 199814096U;

	t64 = ((x1309>>(x1310&x1311))%x1312);

	if (t64 != 4247347U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x1321 = 1;
	static uint64_t x1322 = 608889012238LLU;
	static uint32_t x1323 = 300U;
	int16_t x1324 = INT16_MIN;

	t65 = ((x1321>>(x1322&x1323))%x1324);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x1325 = 14U;
	int16_t x1326 = -1;
	volatile int64_t t66 = 35918478217502050LL;

	t66 = ((x1325>>(x1326&x1327))%x1328);

	if (t66 != 3LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x1337 = 570409135LLU;
	uint8_t x1338 = 3U;
	volatile int32_t x1339 = -1;
	volatile uint64_t t67 = 719679LLU;

	t67 = ((x1337>>(x1338&x1339))%x1340);

	if (t67 != 71301141LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x1357 = 937U;
	uint8_t x1358 = 23U;
	uint8_t x1359 = 10U;
	int32_t x1360 = INT32_MIN;
	static volatile int32_t t68 = 233908;

	t68 = ((x1357>>(x1358&x1359))%x1360);

	if (t68 != 234) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x1361 = INT64_MAX;
	int64_t t69 = 38173536LL;

	t69 = ((x1361>>(x1362&x1363))%x1364);

	if (t69 != 7LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x1373 = INT8_MAX;
	uint8_t x1374 = 3U;
	int8_t x1375 = -33;
	uint32_t x1376 = 494446751U;
	uint32_t t70 = 1314839U;

	t70 = ((x1373>>(x1374&x1375))%x1376);

	if (t70 != 15U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x1389 = 45;
	uint8_t x1390 = 11U;
	static int32_t x1391 = INT32_MIN;
	uint64_t x1392 = UINT64_MAX;
	volatile uint64_t t71 = 207150837088719515LLU;

	t71 = ((x1389>>(x1390&x1391))%x1392);

	if (t71 != 45LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x1413 = INT64_MAX;
	volatile uint32_t x1414 = 26U;
	uint64_t x1415 = 478441139LLU;
	int64_t t72 = 110333640806LL;

	t72 = ((x1413>>(x1414&x1415))%x1416);

	if (t72 != 7LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x1417 = INT8_MAX;
	int16_t x1418 = 25;
	int8_t x1419 = -54;
	volatile int64_t x1420 = -1LL;
	int64_t t73 = 4726195111770381LL;

	t73 = ((x1417>>(x1418&x1419))%x1420);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x1445 = 101U;
	int32_t x1446 = 442126;
	volatile uint32_t x1447 = 15U;
	static uint64_t x1448 = UINT64_MAX;
	volatile uint64_t t74 = 398728LLU;

	t74 = ((x1445>>(x1446&x1447))%x1448);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x1451 = INT16_MIN;
	int8_t x1452 = INT8_MIN;
	static uint64_t t75 = 3529LLU;

	t75 = ((x1449>>(x1450&x1451))%x1452);

	if (t75 != 127LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x1453 = UINT32_MAX;
	int64_t x1454 = INT64_MIN;
	uint32_t x1455 = UINT32_MAX;
	int32_t x1456 = -1;
	volatile uint32_t t76 = 46935U;

	t76 = ((x1453>>(x1454&x1455))%x1456);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x1459 = UINT16_MAX;
	volatile int32_t t77 = 16416528;

	t77 = ((x1457>>(x1458&x1459))%x1460);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x1485 = UINT64_MAX;
	uint64_t x1486 = UINT64_MAX;
	int8_t x1487 = 0;
	uint16_t x1488 = UINT16_MAX;
	static uint64_t t78 = 0LLU;

	t78 = ((x1485>>(x1486&x1487))%x1488);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x1529 = 13613U;
	uint8_t x1530 = 13U;
	int16_t x1531 = INT16_MIN;
	int16_t x1532 = -1;
	volatile uint32_t t79 = 1371755U;

	t79 = ((x1529>>(x1530&x1531))%x1532);

	if (t79 != 13613U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x1533 = INT32_MAX;
	static uint8_t x1534 = 2U;
	int64_t x1535 = -164179295LL;
	uint32_t x1536 = 6621U;
	volatile uint32_t t80 = 5U;

	t80 = ((x1533>>(x1534&x1535))%x1536);

	if (t80 != 2023U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x1541 = 497648;
	static volatile uint8_t x1543 = 1U;
	int8_t x1544 = INT8_MIN;
	volatile int32_t t81 = -17943254;

	t81 = ((x1541>>(x1542&x1543))%x1544);

	if (t81 != 112) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint64_t x1565 = UINT64_MAX;
	int64_t x1566 = INT64_MIN;
	int8_t x1567 = INT8_MAX;
	int64_t x1568 = INT64_MIN;
	uint64_t t82 = 27845LLU;

	t82 = ((x1565>>(x1566&x1567))%x1568);

	if (t82 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x1569 = 2000LLU;
	static int16_t x1570 = -6;
	int64_t x1572 = -1LL;
	uint64_t t83 = 510808724674679LLU;

	t83 = ((x1569>>(x1570&x1571))%x1572);

	if (t83 != 2000LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x1589 = 619012U;
	int64_t x1590 = INT64_MIN;
	uint8_t x1591 = 1U;
	int16_t x1592 = -60;

	t84 = ((x1589>>(x1590&x1591))%x1592);

	if (t84 != 619012U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x1605 = 31083848LLU;
	static volatile uint32_t x1606 = 1428U;
	int32_t x1607 = INT32_MIN;
	volatile uint64_t t85 = 66552897LLU;

	t85 = ((x1605>>(x1606&x1607))%x1608);

	if (t85 != 31083848LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x1633 = INT64_MAX;
	static int8_t x1634 = INT8_MAX;
	static uint32_t x1635 = 1073561250U;
	volatile int64_t x1636 = INT64_MIN;

	t86 = ((x1633>>(x1634&x1635))%x1636);

	if (t86 != 536870911LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x1650 = INT32_MAX;
	uint16_t x1652 = 119U;
	uint64_t t87 = 24270618566LLU;

	t87 = ((x1649>>(x1650&x1651))%x1652);

	if (t87 != 42LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x1657 = UINT64_MAX;
	uint8_t x1658 = 7U;
	volatile uint64_t x1659 = UINT64_MAX;
	uint8_t x1660 = UINT8_MAX;
	volatile uint64_t t88 = 14LLU;

	t88 = ((x1657>>(x1658&x1659))%x1660);

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x1678 = 13U;
	int8_t x1679 = INT8_MAX;
	int16_t x1680 = 1;
	static uint32_t t89 = 2175134U;

	t89 = ((x1677>>(x1678&x1679))%x1680);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x1709 = 60U;
	static int64_t x1711 = INT64_MIN;
	static volatile int32_t x1712 = INT32_MIN;
	static int32_t t90 = 0;

	t90 = ((x1709>>(x1710&x1711))%x1712);

	if (t90 != 60) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x1725 = 19992U;
	uint8_t x1726 = 3U;
	uint64_t x1727 = 8330921319479LLU;
	static uint32_t x1728 = 8U;

	t91 = ((x1725>>(x1726&x1727))%x1728);

	if (t91 != 3U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x1741 = 0;
	int16_t x1743 = INT16_MIN;
	int64_t x1744 = -1123751551009LL;
	volatile int64_t t92 = 18959134447513LL;

	t92 = ((x1741>>(x1742&x1743))%x1744);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x1752 = -83;
	volatile int32_t t93 = -3;

	t93 = ((x1749>>(x1750&x1751))%x1752);

	if (t93 != 36) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x1766 = UINT64_MAX;
	uint16_t x1767 = 14U;
	int8_t x1768 = INT8_MIN;
	volatile int32_t t94 = -22814;

	t94 = ((x1765>>(x1766&x1767))%x1768);

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x1777 = 0;
	uint8_t x1778 = 10U;
	uint64_t x1779 = 2600596067121LLU;
	static int32_t x1780 = 4067;
	volatile int32_t t95 = -54468;

	t95 = ((x1777>>(x1778&x1779))%x1780);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x1813 = INT32_MAX;
	static uint16_t x1814 = 4U;
	int32_t x1815 = INT32_MAX;
	int8_t x1816 = 5;
	int32_t t96 = 873468502;

	t96 = ((x1813>>(x1814&x1815))%x1816);

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x1817 = 5749301420595492221LLU;
	volatile int32_t x1819 = -28483;
	uint8_t x1820 = UINT8_MAX;
	volatile uint64_t t97 = 2LLU;

	t97 = ((x1817>>(x1818&x1819))%x1820);

	if (t97 != 2LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x1830 = INT64_MIN;
	int64_t x1831 = INT64_MAX;
	int32_t x1832 = INT32_MIN;
	uint32_t t98 = 1U;

	t98 = ((x1829>>(x1830&x1831))%x1832);

	if (t98 != 2147483647U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x1851 = -187084;
	static int8_t x1852 = -1;
	volatile int32_t t99 = -53486;

	t99 = ((x1849>>(x1850&x1851))%x1852);

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

