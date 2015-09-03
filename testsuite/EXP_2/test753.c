#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MAX;
static uint16_t x36 = 7573U;
uint64_t x49 = 241LLU;
int32_t x50 = INT32_MAX;
static uint16_t x162 = 494U;
int8_t x165 = INT8_MAX;
int8_t x200 = INT8_MIN;
uint32_t x209 = UINT32_MAX;
int64_t x212 = INT64_MIN;
volatile int64_t t8 = -14105LL;
uint8_t x214 = 17U;
int32_t x226 = INT32_MIN;
int8_t x251 = INT8_MIN;
volatile int64_t t13 = -2499LL;
uint16_t x381 = UINT16_MAX;
int32_t x415 = -1;
uint32_t x471 = 10U;
uint32_t x537 = 13U;
int32_t x540 = -308;
int8_t x604 = 0;
int64_t x674 = INT64_MAX;
int64_t x734 = INT64_MAX;
static volatile uint64_t x737 = 13979951684029522LLU;
volatile uint8_t x754 = 15U;
volatile int32_t x758 = INT32_MIN;
int8_t x770 = 9;
static volatile int32_t x772 = INT32_MAX;
volatile uint64_t t36 = 199219623LLU;
int16_t x829 = INT16_MAX;
int32_t x831 = -380587329;
int32_t x834 = INT32_MAX;
volatile int64_t x835 = -1LL;
volatile uint64_t t38 = UINT64_MAX;
volatile uint64_t x855 = 1511678LLU;
static int32_t t41 = 29;
volatile uint32_t t42 = 60113025U;
volatile int16_t x1026 = 21;
volatile int64_t t48 = INT64_MAX;
static volatile int32_t t50 = INT32_MAX;
int32_t x1105 = 6458183;
int8_t x1107 = INT8_MIN;
volatile int8_t x1108 = INT8_MAX;
static uint32_t x1111 = 4U;
static int32_t x1136 = INT32_MIN;
uint16_t x1156 = 7U;
uint32_t x1165 = 171U;
volatile int32_t x1188 = -2075937;
static int64_t x1210 = 7640046986LL;
int8_t x1212 = INT8_MIN;
int32_t t59 = 411584;
uint8_t x1218 = 1U;
static int16_t x1257 = INT16_MAX;
static int16_t x1259 = 87;
int64_t t63 = 132593952LL;
volatile int32_t x1334 = -1;
int8_t x1347 = -1;
uint16_t x1369 = 3U;
int64_t x1396 = INT64_MIN;
static volatile int64_t t68 = 4924539675LL;
int32_t x1459 = -1;
int32_t x1460 = INT32_MAX;
uint64_t x1473 = 526LLU;
static int16_t x1476 = 500;
int64_t x1486 = 1LL;
int16_t x1525 = 47;
volatile int32_t x1574 = INT32_MAX;
int64_t t73 = 139LL;
uint8_t x1586 = 1U;
volatile uint8_t x1588 = 1U;
volatile int64_t x1601 = 819104636669152510LL;
int64_t x1602 = INT64_MAX;
volatile int64_t t76 = 13463717645LL;
static int32_t x1668 = -1;
int32_t x1676 = 206377308;
int32_t x1683 = -34;
static volatile int32_t t80 = -92759;
int64_t t81 = 65411853802190LL;
static uint8_t x1777 = 13U;
int8_t x1791 = INT8_MIN;
volatile int32_t x1797 = 1360217;
uint8_t x1834 = UINT8_MAX;
int32_t x1848 = -1;
volatile int32_t x1868 = -1;
int16_t x1903 = INT16_MIN;
volatile uint64_t t94 = UINT64_MAX;
static int32_t t95 = INT32_MAX;
uint64_t x1917 = 879496633LLU;
int8_t x1979 = 1;


void f0(void) {
	static int32_t x2 = INT32_MAX;
	int32_t x3 = -1;
	int8_t x4 = -2;
	volatile int32_t t0 = 1226;

	t0 = ((x1<<(x2%x3))|x4);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x33 = INT8_MAX;
	uint16_t x34 = UINT16_MAX;
	int8_t x35 = -1;
	static volatile int32_t t1 = -841679650;

	t1 = ((x33<<(x34%x35))|x36);

	if (t1 != 7679) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x41 = 12429487966LLU;
	uint8_t x42 = 45U;
	uint16_t x43 = 722U;
	volatile uint64_t x44 = 87371074257239LLU;
	volatile uint64_t t2 = 783249622592073375LLU;

	t2 = ((x41<<(x42%x43))|x44);

	if (t2 != 6767730973616914775LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint8_t x51 = 63U;
	int8_t x52 = INT8_MIN;
	volatile uint64_t t3 = 5666096284LLU;

	t3 = ((x49<<(x50%x51))|x52);

	if (t3 != 18446744073709551586LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x53 = INT16_MAX;
	uint16_t x54 = 2U;
	static volatile int32_t x55 = INT32_MIN;
	static int32_t x56 = 524750404;
	int32_t t4 = 2735;

	t4 = ((x53<<(x54%x55))|x56);

	if (t4 != 524812284) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x161 = 7118236451LLU;
	int32_t x163 = -1;
	int64_t x164 = INT64_MIN;
	uint64_t t5 = 0LLU;

	t5 = ((x161<<(x162%x163))|x164);

	if (t5 != 9223372043973012259LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x166 = 1U;
	uint64_t x167 = 520418058229LLU;
	int64_t x168 = -1LL;
	volatile int64_t t6 = 129LL;

	t6 = ((x165<<(x166%x167))|x168);

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x197 = 1521U;
	static uint64_t x198 = 62704617074423LLU;
	uint16_t x199 = 3U;
	int32_t t7 = -3748;

	t7 = ((x197<<(x198%x199))|x200);

	if (t7 != -60) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x210 = 3U;
	static int32_t x211 = INT32_MIN;

	t8 = ((x209<<(x210%x211))|x212);

	if (t8 != -9223372032559808520LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x213 = 245519;
	static volatile uint8_t x215 = 15U;
	uint64_t x216 = 2768465673663736993LLU;
	volatile uint64_t t9 = 13999827LLU;

	t9 = ((x213<<(x214%x215))|x216);

	if (t9 != 2768465673664265405LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x225 = 26788760548LLU;
	uint64_t x227 = 1LLU;
	uint16_t x228 = 463U;
	uint64_t t10 = 1288401625698315LLU;

	t10 = ((x225<<(x226%x227))|x228);

	if (t10 != 26788760559LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x241 = 38973292588739986LL;
	volatile int8_t x242 = -1;
	int16_t x243 = -1;
	int8_t x244 = 45;
	int64_t t11 = -74LL;

	t11 = ((x241<<(x242%x243))|x244);

	if (t11 != 38973292588740031LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint16_t x249 = 995U;
	uint32_t x250 = 7U;
	int8_t x252 = 29;
	volatile int32_t t12 = 547479469;

	t12 = ((x249<<(x250%x251))|x252);

	if (t12 != 127389) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x273 = 13;
	uint64_t x274 = UINT64_MAX;
	volatile int8_t x275 = -5;
	static volatile int64_t x276 = INT64_MIN;

	t13 = ((x273<<(x274%x275))|x276);

	if (t13 != -9223372036854775600LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x289 = 3204427374645676LLU;
	int16_t x290 = INT16_MIN;
	int8_t x291 = -1;
	uint8_t x292 = 21U;
	volatile uint64_t t14 = 217521091LLU;

	t14 = ((x289<<(x290%x291))|x292);

	if (t14 != 3204427374645693LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x313 = UINT16_MAX;
	static volatile uint8_t x314 = 3U;
	int16_t x315 = -1;
	int64_t x316 = -8426094130347964LL;
	static volatile int64_t t15 = -12363927087763525LL;

	t15 = ((x313<<(x314%x315))|x316);

	if (t15 != -8426094130298881LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x329 = 103U;
	static int16_t x330 = 0;
	volatile int32_t x331 = 856968;
	int32_t x332 = 2838878;
	int32_t t16 = -345898342;

	t16 = ((x329<<(x330%x331))|x332);

	if (t16 != 2838911) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x382 = 4U;
	int8_t x383 = -1;
	int32_t x384 = INT32_MIN;
	static int32_t t17 = -7498203;

	t17 = ((x381<<(x382%x383))|x384);

	if (t17 != -2147418113) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x413 = 179U;
	int32_t x414 = INT32_MIN;
	uint64_t x416 = 969568LLU;
	static uint64_t t18 = 7LLU;

	t18 = ((x413<<(x414%x415))|x416);

	if (t18 != 969715LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x469 = 15362U;
	static volatile int32_t x470 = 10321238;
	static int8_t x472 = 0;
	static int32_t t19 = -153;

	t19 = ((x469<<(x470%x471))|x472);

	if (t19 != 3932672) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x497 = INT16_MAX;
	int64_t x498 = -220823696LL;
	int8_t x499 = 1;
	int32_t x500 = INT32_MIN;
	volatile int32_t t20 = 82870;

	t20 = ((x497<<(x498%x499))|x500);

	if (t20 != -2147450881) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x501 = 6912397567LL;
	int32_t x502 = -1;
	static uint32_t x503 = UINT32_MAX;
	int16_t x504 = -1;
	int64_t t21 = -197LL;

	t21 = ((x501<<(x502%x503))|x504);

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x538 = -1;
	int32_t x539 = -1;
	uint32_t t22 = 6669U;

	t22 = ((x537<<(x538%x539))|x540);

	if (t22 != 4294966989U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x577 = 31644LLU;
	static int16_t x578 = 58;
	int32_t x579 = INT32_MAX;
	static volatile int32_t x580 = INT32_MIN;
	uint64_t t23 = 3836648069457LLU;

	t23 = ((x577<<(x578%x579))|x580);

	if (t23 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x589 = 194455952LLU;
	int64_t x590 = INT64_MAX;
	int8_t x591 = -1;
	static int64_t x592 = 606891539550LL;
	static volatile uint64_t t24 = 2407833299889246822LLU;

	t24 = ((x589<<(x590%x591))|x592);

	if (t24 != 606926274014LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x601 = 4363480844620277LLU;
	uint8_t x602 = 4U;
	int8_t x603 = INT8_MIN;
	volatile uint64_t t25 = 444876LLU;

	t25 = ((x601<<(x602%x603))|x604);

	if (t25 != 69815693513924432LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x653 = 4526996304459LLU;
	int64_t x654 = INT64_MIN;
	volatile int8_t x655 = -1;
	static int16_t x656 = INT16_MIN;
	volatile uint64_t t26 = 45476756009380417LLU;

	t26 = ((x653<<(x654%x655))|x656);

	if (t26 != 18446744073709531723LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x661 = 28U;
	int32_t x662 = INT32_MIN;
	volatile uint32_t x663 = 1U;
	volatile int8_t x664 = INT8_MIN;
	static int32_t t27 = 38;

	t27 = ((x661<<(x662%x663))|x664);

	if (t27 != -100) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x673 = 2U;
	int8_t x675 = 1;
	int8_t x676 = -7;
	volatile int32_t t28 = -482119742;

	t28 = ((x673<<(x674%x675))|x676);

	if (t28 != -5) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x681 = 38U;
	int8_t x682 = -4;
	uint64_t x683 = 11LLU;
	int16_t x684 = INT16_MIN;
	static volatile int32_t t29 = 1832302;

	t29 = ((x681<<(x682%x683))|x684);

	if (t29 != -32692) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x705 = 64791587837145LLU;
	uint8_t x706 = 1U;
	volatile int8_t x707 = INT8_MIN;
	uint16_t x708 = 615U;
	uint64_t t30 = 68062939604LLU;

	t30 = ((x705<<(x706%x707))|x708);

	if (t30 != 129583175674871LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x733 = UINT32_MAX;
	volatile int16_t x735 = -1;
	int32_t x736 = INT32_MAX;
	volatile uint32_t t31 = UINT32_MAX;

	t31 = ((x733<<(x734%x735))|x736);

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x738 = 7U;
	int16_t x739 = 14696;
	int32_t x740 = -197319;
	uint64_t t32 = 466920301777LLU;

	t32 = ((x737<<(x738%x739))|x740);

	if (t32 != 18446744073709485369LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x753 = 54;
	int16_t x755 = INT16_MIN;
	int64_t x756 = -327620053879893LL;
	static int64_t t33 = -3LL;

	t33 = ((x753<<(x754%x755))|x756);

	if (t33 != -327620053224533LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x757 = INT16_MAX;
	int32_t x759 = INT32_MIN;
	volatile int8_t x760 = -1;
	volatile int32_t t34 = 33696914;

	t34 = ((x757<<(x758%x759))|x760);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x769 = 804500632234LLU;
	int8_t x771 = INT8_MAX;
	static uint64_t t35 = 3LLU;

	t35 = ((x769<<(x770%x771))|x772);

	if (t35 != 411904543555583LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x797 = UINT64_MAX;
	int8_t x798 = 59;
	volatile int64_t x799 = 2492956530562LL;
	uint64_t x800 = 986973112657248581LLU;

	t36 = ((x797<<(x798%x799))|x800);

	if (t36 != 18280795681759953221LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x830 = 1;
	volatile uint8_t x832 = 59U;
	volatile int32_t t37 = 2;

	t37 = ((x829<<(x830%x831))|x832);

	if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x833 = UINT64_MAX;
	int16_t x836 = INT16_MIN;

	t38 = ((x833<<(x834%x835))|x836);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x853 = UINT32_MAX;
	static volatile int8_t x854 = 8;
	volatile uint64_t x856 = 3669426745817759198LLU;
	uint64_t t39 = 102LLU;

	t39 = ((x853<<(x854%x855))|x856);

	if (t39 != 3669426749814341598LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x901 = 84137292;
	int16_t x902 = -1;
	uint64_t x903 = UINT64_MAX;
	int8_t x904 = -1;
	int32_t t40 = 37217;

	t40 = ((x901<<(x902%x903))|x904);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x913 = 7;
	int8_t x914 = INT8_MIN;
	int16_t x915 = -1;
	int32_t x916 = -183;

	t41 = ((x913<<(x914%x915))|x916);

	if (t41 != -177) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x917 = 1596U;
	int32_t x918 = -54580792;
	static uint32_t x919 = 238U;
	volatile int16_t x920 = INT16_MIN;

	t42 = ((x917<<(x918%x919))|x920);

	if (t42 != 4294960064U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1025 = UINT32_MAX;
	volatile int64_t x1027 = INT64_MIN;
	volatile uint8_t x1028 = UINT8_MAX;
	static uint32_t t43 = 543798U;

	t43 = ((x1025<<(x1026%x1027))|x1028);

	if (t43 != 4292870399U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x1041 = UINT64_MAX;
	int16_t x1042 = -1;
	int8_t x1043 = -1;
	uint8_t x1044 = 1U;
	static uint64_t t44 = UINT64_MAX;

	t44 = ((x1041<<(x1042%x1043))|x1044);

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1049 = INT8_MAX;
	uint16_t x1050 = UINT16_MAX;
	volatile int32_t x1051 = -1;
	volatile int32_t x1052 = 2;
	volatile int32_t t45 = -6266;

	t45 = ((x1049<<(x1050%x1051))|x1052);

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint32_t x1061 = 22400393U;
	uint32_t x1062 = UINT32_MAX;
	int8_t x1063 = -1;
	uint16_t x1064 = UINT16_MAX;
	volatile uint32_t t46 = 1U;

	t46 = ((x1061<<(x1062%x1063))|x1064);

	if (t46 != 22413311U) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x1065 = 0U;
	int32_t x1066 = INT32_MIN;
	int16_t x1067 = INT16_MIN;
	volatile int64_t x1068 = INT64_MAX;
	volatile int64_t t47 = INT64_MAX;

	t47 = ((x1065<<(x1066%x1067))|x1068);

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1069 = INT64_MAX;
	int64_t x1070 = INT64_MIN;
	int64_t x1071 = INT64_MIN;
	uint32_t x1072 = UINT32_MAX;

	t48 = ((x1069<<(x1070%x1071))|x1072);

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x1089 = 63141;
	int8_t x1090 = -2;
	volatile int16_t x1091 = -1;
	volatile int16_t x1092 = INT16_MAX;
	volatile int32_t t49 = 82;

	t49 = ((x1089<<(x1090%x1091))|x1092);

	if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x1101 = 771391;
	uint32_t x1102 = 7534487U;
	uint8_t x1103 = 2U;
	int32_t x1104 = INT32_MAX;

	t50 = ((x1101<<(x1102%x1103))|x1104);

	if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x1106 = INT64_MIN;
	int32_t t51 = 3800;

	t51 = ((x1105<<(x1106%x1107))|x1108);

	if (t51 != 6458239) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x1109 = 12U;
	int64_t x1110 = INT64_MAX;
	volatile int32_t x1112 = INT32_MAX;
	volatile uint32_t t52 = 117172U;

	t52 = ((x1109<<(x1110%x1111))|x1112);

	if (t52 != 2147483647U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x1133 = 848U;
	static uint8_t x1134 = 0U;
	uint8_t x1135 = 1U;
	volatile int32_t t53 = 5280;

	t53 = ((x1133<<(x1134%x1135))|x1136);

	if (t53 != -2147482800) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x1153 = 1;
	volatile uint64_t x1154 = UINT64_MAX;
	uint64_t x1155 = 99LLU;
	volatile int32_t t54 = 2;

	t54 = ((x1153<<(x1154%x1155))|x1156);

	if (t54 != 32775) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x1166 = 3U;
	int8_t x1167 = INT8_MIN;
	uint64_t x1168 = 54909864LLU;
	volatile uint64_t t55 = 6840LLU;

	t55 = ((x1165<<(x1166%x1167))|x1168);

	if (t55 != 54910968LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x1181 = INT32_MAX;
	uint16_t x1182 = 1343U;
	volatile int64_t x1183 = -1LL;
	int64_t x1184 = -507454680LL;
	volatile int64_t t56 = 5007870LL;

	t56 = ((x1181<<(x1182%x1183))|x1184);

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x1185 = 23U;
	int32_t x1186 = 69131;
	volatile int16_t x1187 = -1;
	static volatile int32_t t57 = 35993884;

	t57 = ((x1185<<(x1186%x1187))|x1188);

	if (t57 != -2075937) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x1209 = 10474U;
	int32_t x1211 = -1;
	volatile int32_t t58 = 6800825;

	t58 = ((x1209<<(x1210%x1211))|x1212);

	if (t58 != -22) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x1213 = UINT16_MAX;
	int16_t x1214 = INT16_MIN;
	int16_t x1215 = INT16_MIN;
	uint8_t x1216 = 4U;

	t59 = ((x1213<<(x1214%x1215))|x1216);

	if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x1217 = 7408768U;
	uint8_t x1219 = 2U;
	uint32_t x1220 = 13U;
	volatile uint32_t t60 = 312062572U;

	t60 = ((x1217<<(x1218%x1219))|x1220);

	if (t60 != 14817549U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x1233 = UINT32_MAX;
	int16_t x1234 = INT16_MAX;
	volatile int8_t x1235 = -42;
	int64_t x1236 = -100079960895762LL;
	int64_t t61 = 9612923959LL;

	t61 = ((x1233<<(x1234%x1235))|x1236);

	if (t61 != -100077032964114LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x1258 = 0;
	int16_t x1260 = -430;
	int32_t t62 = 21126;

	t62 = ((x1257<<(x1258%x1259))|x1260);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x1309 = 1997U;
	volatile int16_t x1310 = 0;
	int64_t x1311 = -1LL;
	int64_t x1312 = INT64_MIN;

	t63 = ((x1309<<(x1310%x1311))|x1312);

	if (t63 != -9223372036854773811LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x1333 = 38153LL;
	static volatile int8_t x1335 = -1;
	uint32_t x1336 = 17713344U;
	static volatile int64_t t64 = -106LL;

	t64 = ((x1333<<(x1334%x1335))|x1336);

	if (t64 != 17751497LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x1337 = UINT16_MAX;
	uint8_t x1338 = UINT8_MAX;
	int64_t x1339 = -22LL;
	int8_t x1340 = 40;
	volatile int32_t t65 = -17352;

	t65 = ((x1337<<(x1338%x1339))|x1340);

	if (t65 != 536862760) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x1345 = INT8_MAX;
	static uint32_t x1346 = UINT32_MAX;
	static int64_t x1348 = INT64_MIN;
	int64_t t66 = -27640294017963LL;

	t66 = ((x1345<<(x1346%x1347))|x1348);

	if (t66 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x1370 = 143U;
	uint16_t x1371 = 10U;
	int64_t x1372 = -1LL;
	int64_t t67 = 775822949LL;

	t67 = ((x1369<<(x1370%x1371))|x1372);

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x1393 = INT8_MAX;
	static int32_t x1394 = INT32_MIN;
	uint8_t x1395 = 1U;

	t68 = ((x1393<<(x1394%x1395))|x1396);

	if (t68 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x1457 = INT16_MAX;
	volatile uint8_t x1458 = 0U;
	int32_t t69 = INT32_MAX;

	t69 = ((x1457<<(x1458%x1459))|x1460);

	if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x1474 = INT8_MIN;
	int8_t x1475 = -4;
	volatile uint64_t t70 = 107665LLU;

	t70 = ((x1473<<(x1474%x1475))|x1476);

	if (t70 != 1022LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x1485 = INT8_MAX;
	uint8_t x1487 = 90U;
	int16_t x1488 = -1;
	volatile int32_t t71 = -991638726;

	t71 = ((x1485<<(x1486%x1487))|x1488);

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x1526 = 5U;
	int8_t x1527 = INT8_MIN;
	int32_t x1528 = INT32_MAX;
	volatile int32_t t72 = INT32_MAX;

	t72 = ((x1525<<(x1526%x1527))|x1528);

	if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x1573 = 1534;
	int8_t x1575 = -1;
	int64_t x1576 = 788887362654627560LL;

	t73 = ((x1573<<(x1574%x1575))|x1576);

	if (t73 != 788887362654627838LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x1577 = 1031707308U;
	uint32_t x1578 = UINT32_MAX;
	static int32_t x1579 = INT32_MAX;
	uint8_t x1580 = UINT8_MAX;
	uint32_t t74 = 3377U;

	t74 = ((x1577<<(x1578%x1579))|x1580);

	if (t74 != 2063414783U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x1585 = UINT64_MAX;
	uint32_t x1587 = 179483U;
	volatile uint64_t t75 = UINT64_MAX;

	t75 = ((x1585<<(x1586%x1587))|x1588);

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x1603 = INT64_MAX;
	static volatile uint8_t x1604 = 5U;

	t76 = ((x1601<<(x1602%x1603))|x1604);

	if (t76 != 819104636669152511LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x1665 = INT16_MAX;
	static uint8_t x1666 = 0U;
	uint32_t x1667 = 1059537U;
	volatile int32_t t77 = 128042606;

	t77 = ((x1665<<(x1666%x1667))|x1668);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x1673 = UINT64_MAX;
	int16_t x1674 = -1;
	int64_t x1675 = -1LL;
	uint64_t t78 = UINT64_MAX;

	t78 = ((x1673<<(x1674%x1675))|x1676);

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x1681 = 1U;
	int8_t x1682 = 11;
	int8_t x1684 = INT8_MAX;
	volatile int32_t t79 = -5;

	t79 = ((x1681<<(x1682%x1683))|x1684);

	if (t79 != 2175) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x1685 = 27;
	int32_t x1686 = -1;
	uint32_t x1687 = UINT32_MAX;
	static int32_t x1688 = -420;

	t80 = ((x1685<<(x1686%x1687))|x1688);

	if (t80 != -417) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x1693 = 3865;
	int64_t x1694 = INT64_MIN;
	int32_t x1695 = -1;
	int64_t x1696 = INT64_MIN;

	t81 = ((x1693<<(x1694%x1695))|x1696);

	if (t81 != -9223372036854771943LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x1717 = UINT16_MAX;
	int8_t x1718 = 4;
	int32_t x1719 = INT32_MAX;
	int8_t x1720 = INT8_MIN;
	volatile int32_t t82 = -367511252;

	t82 = ((x1717<<(x1718%x1719))|x1720);

	if (t82 != -16) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x1729 = 0;
	uint16_t x1730 = 0U;
	static int16_t x1731 = 54;
	static int16_t x1732 = INT16_MIN;
	int32_t t83 = 250695443;

	t83 = ((x1729<<(x1730%x1731))|x1732);

	if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x1778 = -1;
	int16_t x1779 = 1;
	int16_t x1780 = -37;
	int32_t t84 = 122385725;

	t84 = ((x1777<<(x1778%x1779))|x1780);

	if (t84 != -33) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x1789 = INT8_MAX;
	int32_t x1790 = INT32_MIN;
	volatile int64_t x1792 = -1LL;
	int64_t t85 = 164LL;

	t85 = ((x1789<<(x1790%x1791))|x1792);

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x1793 = 5;
	int16_t x1794 = INT16_MAX;
	volatile int8_t x1795 = 3;
	volatile uint32_t x1796 = 0U;
	uint32_t t86 = 188U;

	t86 = ((x1793<<(x1794%x1795))|x1796);

	if (t86 != 10U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x1798 = 3U;
	volatile uint8_t x1799 = 16U;
	volatile int64_t x1800 = -26578LL;
	int64_t t87 = -2205921811430495031LL;

	t87 = ((x1797<<(x1798%x1799))|x1800);

	if (t87 != -25874LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x1825 = 1619257LL;
	int16_t x1826 = INT16_MAX;
	int16_t x1827 = 7;
	int32_t x1828 = INT32_MIN;
	int64_t t88 = -136225958451820LL;

	t88 = ((x1825<<(x1826%x1827))|x1828);

	if (t88 != -2145864391LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x1833 = INT16_MAX;
	int8_t x1835 = -19;
	static uint8_t x1836 = 7U;
	volatile int32_t t89 = 0;

	t89 = ((x1833<<(x1834%x1835))|x1836);

	if (t89 != 8388359) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x1845 = UINT8_MAX;
	int16_t x1846 = -16298;
	static int64_t x1847 = -1LL;
	int32_t t90 = 160407629;

	t90 = ((x1845<<(x1846%x1847))|x1848);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x1857 = INT8_MAX;
	int8_t x1858 = 19;
	uint64_t x1859 = 3540623450LLU;
	uint32_t x1860 = 37U;
	volatile uint32_t t91 = 35890U;

	t91 = ((x1857<<(x1858%x1859))|x1860);

	if (t91 != 66584613U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x1865 = UINT64_MAX;
	int64_t x1866 = INT64_MAX;
	int8_t x1867 = 6;
	volatile uint64_t t92 = UINT64_MAX;

	t92 = ((x1865<<(x1866%x1867))|x1868);

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x1869 = INT32_MAX;
	volatile int32_t x1870 = 15825898;
	int8_t x1871 = -1;
	uint64_t x1872 = 6LLU;
	volatile uint64_t t93 = 245429LLU;

	t93 = ((x1869<<(x1870%x1871))|x1872);

	if (t93 != 2147483647LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x1901 = 50316783888LLU;
	int32_t x1902 = 0;
	uint64_t x1904 = UINT64_MAX;

	t94 = ((x1901<<(x1902%x1903))|x1904);

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x1909 = 5U;
	volatile int8_t x1910 = 41;
	int64_t x1911 = -1LL;
	int32_t x1912 = INT32_MAX;

	t95 = ((x1909<<(x1910%x1911))|x1912);

	if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x1918 = 2U;
	int16_t x1919 = INT16_MAX;
	volatile uint8_t x1920 = 0U;
	uint64_t t96 = 41083LLU;

	t96 = ((x1917<<(x1918%x1919))|x1920);

	if (t96 != 3517986532LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x1941 = INT16_MAX;
	static uint64_t x1942 = UINT64_MAX;
	int32_t x1943 = INT32_MAX;
	volatile int32_t x1944 = INT32_MIN;
	volatile int32_t t97 = 2692697;

	t97 = ((x1941<<(x1942%x1943))|x1944);

	if (t97 != -2147221512) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x1949 = 3U;
	int16_t x1950 = -1139;
	int32_t x1951 = -1;
	uint32_t x1952 = 316842U;
	volatile uint32_t t98 = 418198U;

	t98 = ((x1949<<(x1950%x1951))|x1952);

	if (t98 != 316843U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x1977 = INT16_MAX;
	volatile int64_t x1978 = INT64_MIN;
	int16_t x1980 = -1;
	int32_t t99 = 3;

	t99 = ((x1977<<(x1978%x1979))|x1980);

	if (t99 != -1) { NG(); } else { ; }
	
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

