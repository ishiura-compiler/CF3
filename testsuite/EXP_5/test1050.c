#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x42 = 49246274LL;
int8_t x45 = 3;
int64_t x256 = INT64_MIN;
int32_t t4 = 2;
int8_t x317 = INT8_MIN;
volatile int32_t t5 = 1;
int8_t x414 = 0;
volatile uint8_t x524 = UINT8_MAX;
int8_t x541 = INT8_MAX;
volatile int8_t x601 = INT8_MAX;
int16_t x604 = 63;
volatile int32_t x633 = 40357;
int8_t x639 = 3;
int32_t t11 = 115767779;
static volatile uint32_t x677 = 6460596U;
uint32_t x679 = 31U;
static int8_t x722 = 11;
uint8_t x724 = UINT8_MAX;
int8_t x895 = 7;
uint16_t x930 = UINT16_MAX;
uint32_t x944 = 476U;
uint8_t x1094 = UINT8_MAX;
uint16_t x1095 = 10U;
int8_t x1096 = INT8_MAX;
uint64_t x1152 = 1LLU;
volatile int32_t t19 = 259055;
volatile int16_t x1157 = -1984;
int8_t x1186 = 30;
static uint16_t x1224 = UINT16_MAX;
int32_t t22 = 0;
int32_t x1273 = INT32_MIN;
int32_t t23 = 73063;
int8_t x1289 = -9;
uint8_t x1290 = UINT8_MAX;
int16_t x1375 = 1;
int16_t x1418 = 4;
volatile uint64_t x1500 = UINT64_MAX;
int32_t t30 = -9;
static volatile int8_t x1674 = 3;
uint32_t x1675 = 31U;
static volatile int32_t x1777 = -1163810;
uint32_t x1794 = UINT32_MAX;
int8_t x2049 = INT8_MIN;
volatile int32_t x2309 = INT32_MIN;
int64_t x2316 = -405245308LL;
int32_t t37 = 0;
int32_t x2401 = -1;
static uint64_t x2402 = 25569459LLU;
int32_t x2544 = -3552;


void f0(void) {
	uint32_t x41 = 213U;
	static volatile uint8_t x43 = 1U;
	int32_t x44 = -1;
	int32_t t0 = -1;

	t0 = (x41<=((x42>>x43)*x44));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x46 = 0U;
	int8_t x47 = 1;
	static int64_t x48 = INT64_MIN;
	volatile int32_t t1 = 2064;

	t1 = (x45<=((x46>>x47)*x48));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x185 = 9U;
	uint16_t x186 = UINT16_MAX;
	uint8_t x187 = 10U;
	static int16_t x188 = 0;
	int32_t t2 = -606582440;

	t2 = (x185<=((x186>>x187)*x188));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x253 = 6231U;
	uint8_t x254 = 1U;
	volatile uint16_t x255 = 20U;
	int32_t t3 = -42;

	t3 = (x253<=((x254>>x255)*x256));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x289 = -19740910;
	static uint32_t x290 = 5U;
	volatile uint8_t x291 = 26U;
	int16_t x292 = -1;

	t4 = (x289<=((x290>>x291)*x292));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x318 = 202570778LL;
	int16_t x319 = 11;
	int8_t x320 = INT8_MAX;

	t5 = (x317<=((x318>>x319)*x320));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x413 = -35570LL;
	static uint8_t x415 = 3U;
	int8_t x416 = 38;
	int32_t t6 = 729040;

	t6 = (x413<=((x414>>x415)*x416));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x521 = INT8_MAX;
	uint64_t x522 = 1483915120121000LLU;
	static uint8_t x523 = 11U;
	volatile int32_t t7 = 77;

	t7 = (x521<=((x522>>x523)*x524));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x542 = INT16_MAX;
	uint8_t x543 = 4U;
	int16_t x544 = -4334;
	static int32_t t8 = -1089444;

	t8 = (x541<=((x542>>x543)*x544));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x602 = UINT64_MAX;
	uint8_t x603 = 4U;
	volatile int32_t t9 = 473;

	t9 = (x601<=((x602>>x603)*x604));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x634 = 153394023928814976LLU;
	uint16_t x635 = 1U;
	static int8_t x636 = -1;
	volatile int32_t t10 = -1;

	t10 = (x633<=((x634>>x635)*x636));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x637 = 19U;
	static uint32_t x638 = UINT32_MAX;
	volatile int32_t x640 = 324612;

	t11 = (x637<=((x638>>x639)*x640));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x678 = 749110U;
	int64_t x680 = 279753699835752071LL;
	volatile int32_t t12 = 7890;

	t12 = (x677<=((x678>>x679)*x680));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x721 = -266;
	int8_t x723 = 3;
	int32_t t13 = 543;

	t13 = (x721<=((x722>>x723)*x724));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x893 = INT8_MIN;
	volatile uint32_t x894 = UINT32_MAX;
	volatile int64_t x896 = 112LL;
	static int32_t t14 = -65358;

	t14 = (x893<=((x894>>x895)*x896));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x929 = 167996637073584730LLU;
	int8_t x931 = 0;
	static uint16_t x932 = 80U;
	static int32_t t15 = 534;

	t15 = (x929<=((x930>>x931)*x932));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x941 = INT16_MAX;
	uint8_t x942 = 1U;
	int8_t x943 = 2;
	static int32_t t16 = -54021;

	t16 = (x941<=((x942>>x943)*x944));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x1061 = 6517U;
	volatile int32_t x1062 = INT32_MAX;
	int16_t x1063 = 7;
	uint64_t x1064 = 3LLU;
	volatile int32_t t17 = 13548182;

	t17 = (x1061<=((x1062>>x1063)*x1064));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x1093 = INT8_MAX;
	volatile int32_t t18 = -8262452;

	t18 = (x1093<=((x1094>>x1095)*x1096));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x1149 = INT16_MIN;
	uint64_t x1150 = UINT64_MAX;
	static int32_t x1151 = 0;

	t19 = (x1149<=((x1150>>x1151)*x1152));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1158 = INT8_MAX;
	uint8_t x1159 = 1U;
	int16_t x1160 = -3945;
	volatile int32_t t20 = 110;

	t20 = (x1157<=((x1158>>x1159)*x1160));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x1185 = UINT8_MAX;
	uint8_t x1187 = 0U;
	volatile int16_t x1188 = -1;
	int32_t t21 = -1170;

	t21 = (x1185<=((x1186>>x1187)*x1188));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1221 = INT32_MAX;
	uint8_t x1222 = 2U;
	int8_t x1223 = 2;

	t22 = (x1221<=((x1222>>x1223)*x1224));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x1274 = INT16_MAX;
	volatile int16_t x1275 = 7;
	int8_t x1276 = 2;

	t23 = (x1273<=((x1274>>x1275)*x1276));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x1291 = 21U;
	uint64_t x1292 = 246224LLU;
	static volatile int32_t t24 = -11934413;

	t24 = (x1289<=((x1290>>x1291)*x1292));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x1305 = INT16_MIN;
	volatile int8_t x1306 = INT8_MAX;
	int8_t x1307 = 1;
	int16_t x1308 = INT16_MIN;
	int32_t t25 = 580449872;

	t25 = (x1305<=((x1306>>x1307)*x1308));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1373 = 68578340U;
	uint32_t x1374 = 107276068U;
	int16_t x1376 = INT16_MIN;
	volatile int32_t t26 = 13390888;

	t26 = (x1373<=((x1374>>x1375)*x1376));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1381 = INT16_MIN;
	uint32_t x1382 = UINT32_MAX;
	int32_t x1383 = 16;
	uint16_t x1384 = UINT16_MAX;
	int32_t t27 = -30;

	t27 = (x1381<=((x1382>>x1383)*x1384));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1417 = INT64_MAX;
	uint8_t x1419 = 1U;
	volatile int64_t x1420 = -23062LL;
	int32_t t28 = -57119;

	t28 = (x1417<=((x1418>>x1419)*x1420));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1497 = 47336199;
	int8_t x1498 = INT8_MAX;
	uint8_t x1499 = 0U;
	int32_t t29 = 1;

	t29 = (x1497<=((x1498>>x1499)*x1500));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1553 = INT64_MIN;
	int64_t x1554 = 5LL;
	uint16_t x1555 = 46U;
	uint32_t x1556 = 6U;

	t30 = (x1553<=((x1554>>x1555)*x1556));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1673 = -1LL;
	volatile int8_t x1676 = INT8_MIN;
	volatile int32_t t31 = -15212591;

	t31 = (x1673<=((x1674>>x1675)*x1676));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1677 = -16598734899039LL;
	uint64_t x1678 = 8725LLU;
	int8_t x1679 = 3;
	uint16_t x1680 = UINT16_MAX;
	int32_t t32 = 0;

	t32 = (x1677<=((x1678>>x1679)*x1680));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x1778 = 3447986503527222362LLU;
	static int8_t x1779 = 8;
	volatile uint8_t x1780 = 1U;
	int32_t t33 = -89;

	t33 = (x1777<=((x1778>>x1779)*x1780));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1793 = 3;
	volatile uint16_t x1795 = 1U;
	static int16_t x1796 = -2;
	volatile int32_t t34 = 2;

	t34 = (x1793<=((x1794>>x1795)*x1796));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x2050 = 20185U;
	uint32_t x2051 = 25U;
	int16_t x2052 = INT16_MIN;
	int32_t t35 = 63838493;

	t35 = (x2049<=((x2050>>x2051)*x2052));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2310 = 3U;
	int8_t x2311 = 1;
	volatile uint16_t x2312 = 7091U;
	static int32_t t36 = 3800;

	t36 = (x2309<=((x2310>>x2311)*x2312));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x2313 = -1;
	uint16_t x2314 = UINT16_MAX;
	uint8_t x2315 = 6U;

	t37 = (x2313<=((x2314>>x2315)*x2316));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x2403 = 0;
	volatile uint32_t x2404 = 469U;
	volatile int32_t t38 = 536618531;

	t38 = (x2401<=((x2402>>x2403)*x2404));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x2541 = 82820U;
	uint16_t x2542 = 481U;
	volatile uint8_t x2543 = 0U;
	static volatile int32_t t39 = -230133;

	t39 = (x2541<=((x2542>>x2543)*x2544));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2701 = INT8_MIN;
	uint32_t x2702 = 52U;
	int8_t x2703 = 2;
	volatile int64_t x2704 = -542802860245151LL;
	int32_t t40 = -3887;

	t40 = (x2701<=((x2702>>x2703)*x2704));

	if (t40 != 0) { NG(); } else { ; }
	
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


    return 0;
}

