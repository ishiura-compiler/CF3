#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t t0 = 26U;
uint8_t x63 = 9U;
uint32_t x141 = 72U;
int32_t x142 = INT32_MIN;
int32_t x144 = 0;
static uint64_t x205 = 3404904106LLU;
uint16_t x209 = UINT16_MAX;
int8_t x210 = INT8_MAX;
uint16_t x212 = 5U;
volatile int32_t t9 = 3;
static int8_t x215 = 0;
static volatile uint32_t t10 = UINT32_MAX;
int8_t x233 = 3;
static uint32_t t12 = 769412204U;
volatile uint64_t t15 = 9919981064925688LLU;
uint8_t x333 = 29U;
static int16_t x335 = -1;
int8_t x443 = 0;
static uint64_t t19 = 62284LLU;
uint32_t x568 = 8U;
uint16_t x571 = 83U;
uint32_t x589 = 202100U;
uint32_t x592 = 38321U;
uint64_t t23 = 5335474376838LLU;
static int8_t x594 = -1;
volatile uint64_t t24 = UINT64_MAX;
volatile uint32_t x619 = 27782U;
int32_t x620 = INT32_MIN;
static uint64_t t25 = UINT64_MAX;
int16_t x624 = INT16_MIN;
uint64_t x625 = 25632312818649672LLU;
volatile uint64_t t27 = 29371508054525262LLU;
static int64_t x645 = INT64_MAX;
int16_t x646 = 1045;
volatile int64_t t28 = 23359035290026117LL;
static int32_t x659 = INT32_MAX;
static volatile uint64_t t30 = 63244858LLU;
volatile uint32_t x885 = 966U;
int8_t x888 = INT8_MIN;
volatile uint32_t t33 = 2771691U;
int64_t x901 = INT64_MAX;
static uint64_t x902 = 13076LLU;
int16_t x904 = 7;
uint64_t t34 = 68244LLU;
int32_t t35 = 0;
int8_t x980 = INT8_MAX;
static volatile uint32_t x1021 = 886U;
uint32_t t38 = 1700365U;
int16_t x1056 = -3822;
static int8_t x1104 = INT8_MAX;
volatile uint64_t x1158 = 506377362LLU;
uint32_t x1160 = 178159U;
int16_t x1183 = INT16_MIN;
int32_t x1201 = INT32_MAX;
int8_t x1274 = 2;
int8_t x1275 = 18;
int8_t x1276 = -6;
volatile uint32_t t51 = 51526U;
int16_t x1341 = INT16_MAX;
int16_t x1343 = INT16_MIN;
volatile uint64_t x1353 = UINT64_MAX;
int32_t x1354 = -1;
int8_t x1365 = INT8_MAX;
uint8_t x1366 = UINT8_MAX;
uint64_t x1413 = 14436206429LLU;
uint64_t t57 = 7525786LLU;
static uint8_t x1442 = 104U;
int16_t x1499 = 398;
uint8_t x1533 = 3U;
static int16_t x1617 = 1;
static int64_t x1632 = -497898056069500LL;
static uint16_t x1638 = UINT16_MAX;
int32_t t65 = 237671;
uint16_t x1723 = UINT16_MAX;
int32_t x1724 = INT32_MIN;
volatile int8_t x1733 = INT8_MAX;
volatile int32_t t70 = 4139873;
static int16_t x1746 = INT16_MIN;
int8_t x1802 = -25;
static uint64_t x1803 = 34LLU;
int32_t x1807 = INT32_MIN;
int32_t t73 = -12;
uint64_t x1842 = UINT64_MAX;
int32_t x1843 = -395;
uint32_t x1878 = 2638663U;
static volatile uint32_t t76 = 29398843U;
volatile int16_t x1900 = 0;
int16_t x1922 = 3285;
uint8_t x1924 = 121U;
int64_t x1951 = INT64_MIN;
int32_t x1952 = 3954556;
static int32_t x1991 = INT32_MIN;
int8_t x1992 = 0;
uint32_t x1993 = UINT32_MAX;
int16_t x1997 = -115;
uint32_t x2047 = 11U;
uint32_t x2073 = 2008221743U;
static uint32_t x2116 = UINT32_MAX;
uint32_t t88 = UINT32_MAX;
int32_t x2152 = INT32_MIN;
int16_t x2157 = INT16_MAX;
int16_t x2178 = INT16_MAX;
int8_t x2279 = 0;
static volatile int8_t x2282 = 34;
volatile uint8_t x2284 = 1U;
static uint32_t t96 = 19U;
uint16_t x2287 = 31U;
volatile uint64_t x2329 = 1066853688LLU;


void f0(void) {
	uint8_t x21 = 121U;
	static uint32_t x22 = 431228U;
	uint8_t x23 = UINT8_MAX;
	volatile uint64_t x24 = 28957LLU;

	t0 = ((x21|x22)>>(x23&x24));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x33 = UINT64_MAX;
	uint32_t x34 = 12U;
	int8_t x35 = INT8_MAX;
	int8_t x36 = INT8_MIN;
	uint64_t t1 = UINT64_MAX;

	t1 = ((x33|x34)>>(x35&x36));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x61 = 0;
	int64_t x62 = 99LL;
	uint8_t x64 = 15U;
	volatile int64_t t2 = 510404303LL;

	t2 = ((x61|x62)>>(x63&x64));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x69 = 9U;
	int64_t x70 = 56423816804LL;
	int8_t x71 = 1;
	static int32_t x72 = 1;
	int64_t t3 = 220645006LL;

	t3 = ((x69|x70)>>(x71&x72));

	if (t3 != 28211908406LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x125 = 258498054528143945LLU;
	static int8_t x126 = 29;
	int32_t x127 = -1;
	volatile int8_t x128 = 1;
	uint64_t t4 = 14657824935698820LLU;

	t4 = ((x125|x126)>>(x127&x128));

	if (t4 != 129249027264071982LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x143 = 7;
	uint32_t t5 = 62259804U;

	t5 = ((x141|x142)>>(x143&x144));

	if (t5 != 2147483720U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x153 = INT8_MIN;
	uint32_t x154 = UINT32_MAX;
	int8_t x155 = 1;
	int64_t x156 = INT64_MIN;
	volatile uint32_t t6 = UINT32_MAX;

	t6 = ((x153|x154)>>(x155&x156));

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x201 = 1474LLU;
	volatile uint8_t x202 = 33U;
	int16_t x203 = INT16_MAX;
	int8_t x204 = 59;
	uint64_t t7 = 990889208LLU;

	t7 = ((x201|x202)>>(x203&x204));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x206 = -344178231579546LL;
	static volatile uint8_t x207 = UINT8_MAX;
	static int64_t x208 = INT64_MIN;
	uint64_t t8 = 6LLU;

	t8 = ((x205|x206)>>(x207&x208));

	if (t8 != 18446399895615504110LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x211 = INT16_MAX;

	t9 = ((x209|x210)>>(x211&x212));

	if (t9 != 2047) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x213 = UINT16_MAX;
	uint32_t x214 = UINT32_MAX;
	static volatile uint8_t x216 = UINT8_MAX;

	t10 = ((x213|x214)>>(x215&x216));

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x234 = 4U;
	static int8_t x235 = INT8_MAX;
	int32_t x236 = INT32_MIN;
	int32_t t11 = 222925;

	t11 = ((x233|x234)>>(x235&x236));

	if (t11 != 7) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x261 = INT32_MIN;
	volatile uint32_t x262 = 7032U;
	static uint8_t x263 = 1U;
	uint8_t x264 = 2U;

	t12 = ((x261|x262)>>(x263&x264));

	if (t12 != 2147490680U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x265 = 21;
	static uint8_t x266 = 1U;
	volatile uint32_t x267 = UINT32_MAX;
	uint8_t x268 = 1U;
	volatile int32_t t13 = -116716450;

	t13 = ((x265|x266)>>(x267&x268));

	if (t13 != 10) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x277 = UINT64_MAX;
	static uint64_t x278 = 768LLU;
	static uint32_t x279 = 15054582U;
	static volatile int64_t x280 = INT64_MIN;
	uint64_t t14 = UINT64_MAX;

	t14 = ((x277|x278)>>(x279&x280));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x313 = -1;
	static uint64_t x314 = 2803437437661375LLU;
	uint64_t x315 = UINT64_MAX;
	volatile uint16_t x316 = 2U;

	t15 = ((x313|x314)>>(x315&x316));

	if (t15 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x321 = INT32_MIN;
	static volatile uint64_t x322 = UINT64_MAX;
	int16_t x323 = INT16_MIN;
	int8_t x324 = 3;
	volatile uint64_t t16 = UINT64_MAX;

	t16 = ((x321|x322)>>(x323&x324));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x334 = 19U;
	static volatile uint8_t x336 = 10U;
	int32_t t17 = -119797;

	t17 = ((x333|x334)>>(x335&x336));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x441 = 30U;
	volatile uint8_t x442 = 15U;
	int16_t x444 = -3;
	int32_t t18 = -2189;

	t18 = ((x441|x442)>>(x443&x444));

	if (t18 != 31) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x493 = 1322LLU;
	int64_t x494 = INT64_MIN;
	uint64_t x495 = 42LLU;
	uint64_t x496 = UINT64_MAX;

	t19 = ((x493|x494)>>(x495&x496));

	if (t19 != 2097152LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x565 = 75U;
	static uint16_t x566 = UINT16_MAX;
	int8_t x567 = 0;
	static uint32_t t20 = 105846U;

	t20 = ((x565|x566)>>(x567&x568));

	if (t20 != 65535U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x569 = 7;
	static int8_t x570 = INT8_MAX;
	uint8_t x572 = 1U;
	static volatile int32_t t21 = -7;

	t21 = ((x569|x570)>>(x571&x572));

	if (t21 != 63) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x577 = 0U;
	int32_t x578 = 0;
	int64_t x579 = INT64_MIN;
	static uint16_t x580 = UINT16_MAX;
	int32_t t22 = 24616329;

	t22 = ((x577|x578)>>(x579&x580));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x590 = 792182373254LLU;
	int32_t x591 = INT32_MIN;

	t23 = ((x589|x590)>>(x591&x592));

	if (t23 != 792182374390LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x593 = 1407536608LLU;
	int32_t x595 = -52708;
	static uint8_t x596 = 0U;

	t24 = ((x593|x594)>>(x595&x596));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x617 = UINT64_MAX;
	static uint32_t x618 = 2909U;

	t25 = ((x617|x618)>>(x619&x620));

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x621 = INT8_MAX;
	static int16_t x622 = INT16_MAX;
	volatile uint8_t x623 = 2U;
	static volatile int32_t t26 = 1120337;

	t26 = ((x621|x622)>>(x623&x624));

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x626 = 98;
	uint64_t x627 = 6006592LLU;
	int8_t x628 = 6;

	t27 = ((x625|x626)>>(x627&x628));

	if (t27 != 25632312818649706LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x647 = 1U;
	int32_t x648 = INT32_MAX;

	t28 = ((x645|x646)>>(x647&x648));

	if (t28 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x657 = -1;
	uint64_t x658 = UINT64_MAX;
	uint32_t x660 = 4U;
	static uint64_t t29 = 29984871229004812LLU;

	t29 = ((x657|x658)>>(x659&x660));

	if (t29 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x677 = 759LLU;
	uint8_t x678 = UINT8_MAX;
	int16_t x679 = INT16_MIN;
	int32_t x680 = 1;

	t30 = ((x677|x678)>>(x679&x680));

	if (t30 != 767LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x797 = 13;
	int16_t x798 = INT16_MAX;
	volatile uint32_t x799 = 243614U;
	static uint8_t x800 = 100U;
	int32_t t31 = 9;

	t31 = ((x797|x798)>>(x799&x800));

	if (t31 != 2047) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x865 = INT64_MIN;
	static volatile uint64_t x866 = 3742395036071235476LLU;
	volatile uint8_t x867 = 4U;
	static uint32_t x868 = UINT32_MAX;
	uint64_t t32 = 2590557LLU;

	t32 = ((x865|x866)>>(x867&x868));

	if (t32 != 810360442057875705LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x886 = UINT16_MAX;
	int8_t x887 = 0;

	t33 = ((x885|x886)>>(x887&x888));

	if (t33 != 65535U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x903 = INT16_MAX;

	t34 = ((x901|x902)>>(x903&x904));

	if (t34 != 72057594037927935LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x905 = INT32_MAX;
	int8_t x906 = 0;
	volatile int32_t x907 = -1;
	int16_t x908 = 3;

	t35 = ((x905|x906)>>(x907&x908));

	if (t35 != 268435455) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x977 = 1367027U;
	uint8_t x978 = UINT8_MAX;
	uint16_t x979 = 24333U;
	volatile uint32_t t36 = 4U;

	t36 = ((x977|x978)>>(x979&x980));

	if (t36 != 166U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1013 = UINT32_MAX;
	volatile uint64_t x1014 = 197LLU;
	volatile uint8_t x1015 = 0U;
	static volatile int8_t x1016 = INT8_MIN;
	uint64_t t37 = 208998242292314282LLU;

	t37 = ((x1013|x1014)>>(x1015&x1016));

	if (t37 != 4294967295LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1022 = INT16_MAX;
	int32_t x1023 = INT32_MIN;
	uint32_t x1024 = 1U;

	t38 = ((x1021|x1022)>>(x1023&x1024));

	if (t38 != 32767U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1049 = 44046228191LL;
	int8_t x1050 = 0;
	uint16_t x1051 = UINT16_MAX;
	int64_t x1052 = INT64_MIN;
	int64_t t39 = -7464926LL;

	t39 = ((x1049|x1050)>>(x1051&x1052));

	if (t39 != 44046228191LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x1053 = UINT8_MAX;
	static volatile int32_t x1054 = 0;
	static uint8_t x1055 = 0U;
	int32_t t40 = 0;

	t40 = ((x1053|x1054)>>(x1055&x1056));

	if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x1081 = 160895125723LLU;
	uint32_t x1082 = 111U;
	volatile uint8_t x1083 = 57U;
	uint8_t x1084 = 63U;
	static volatile uint64_t t41 = 85475049730375293LLU;

	t41 = ((x1081|x1082)>>(x1083&x1084));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x1089 = UINT64_MAX;
	static uint64_t x1090 = UINT64_MAX;
	int8_t x1091 = INT8_MIN;
	uint8_t x1092 = 7U;
	volatile uint64_t t42 = UINT64_MAX;

	t42 = ((x1089|x1090)>>(x1091&x1092));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x1101 = INT32_MIN;
	uint64_t x1102 = 1LLU;
	int64_t x1103 = INT64_MIN;
	volatile uint64_t t43 = 137LLU;

	t43 = ((x1101|x1102)>>(x1103&x1104));

	if (t43 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x1133 = UINT64_MAX;
	int64_t x1134 = 1786355675652LL;
	int8_t x1135 = 2;
	volatile int64_t x1136 = -1LL;
	uint64_t t44 = 1171872671993LLU;

	t44 = ((x1133|x1134)>>(x1135&x1136));

	if (t44 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x1157 = INT16_MIN;
	int64_t x1159 = INT64_MIN;
	uint64_t t45 = 1715357LLU;

	t45 = ((x1157|x1158)>>(x1159&x1160));

	if (t45 != 18446744073709532306LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x1173 = 5U;
	int8_t x1174 = INT8_MAX;
	volatile uint32_t x1175 = UINT32_MAX;
	volatile uint64_t x1176 = 21LLU;
	volatile int32_t t46 = -552532466;

	t46 = ((x1173|x1174)>>(x1175&x1176));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x1181 = INT8_MAX;
	uint32_t x1182 = 42U;
	uint8_t x1184 = UINT8_MAX;
	volatile uint32_t t47 = 135307116U;

	t47 = ((x1181|x1182)>>(x1183&x1184));

	if (t47 != 127U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x1197 = 34U;
	static uint32_t x1198 = 1461623U;
	int8_t x1199 = 58;
	uint32_t x1200 = 37164160U;
	volatile uint32_t t48 = 9U;

	t48 = ((x1197|x1198)>>(x1199&x1200));

	if (t48 != 1461623U) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x1202 = 117U;
	static int32_t x1203 = INT32_MIN;
	uint8_t x1204 = 14U;
	int32_t t49 = INT32_MAX;

	t49 = ((x1201|x1202)>>(x1203&x1204));

	if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x1273 = 7;
	int32_t t50 = 72;

	t50 = ((x1273|x1274)>>(x1275&x1276));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1293 = INT32_MIN;
	uint32_t x1294 = 171748U;
	uint64_t x1295 = 15403402697LLU;
	int64_t x1296 = INT64_MIN;

	t51 = ((x1293|x1294)>>(x1295&x1296));

	if (t51 != 2147655396U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x1342 = 23538LLU;
	uint8_t x1344 = 57U;
	uint64_t t52 = 305330541851192LLU;

	t52 = ((x1341|x1342)>>(x1343&x1344));

	if (t52 != 32767LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x1355 = 18885174LL;
	int32_t x1356 = INT32_MIN;
	volatile uint64_t t53 = UINT64_MAX;

	t53 = ((x1353|x1354)>>(x1355&x1356));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x1367 = 5440662U;
	uint32_t x1368 = 55U;
	int32_t t54 = -858414213;

	t54 = ((x1365|x1366)>>(x1367&x1368));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x1377 = 1051001165LLU;
	static int64_t x1378 = INT64_MIN;
	static uint8_t x1379 = 1U;
	volatile uint32_t x1380 = 2043308U;
	uint64_t t55 = 341468935152LLU;

	t55 = ((x1377|x1378)>>(x1379&x1380));

	if (t55 != 9223372037905776973LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x1389 = INT32_MAX;
	int16_t x1390 = INT16_MAX;
	volatile int8_t x1391 = INT8_MIN;
	uint64_t x1392 = 1LLU;
	int32_t t56 = INT32_MAX;

	t56 = ((x1389|x1390)>>(x1391&x1392));

	if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x1414 = 254210324228373626LLU;
	int16_t x1415 = -1;
	static volatile int8_t x1416 = 1;

	t57 = ((x1413|x1414)>>(x1415&x1416));

	if (t57 != 127105166578007999LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x1441 = 14LLU;
	volatile int32_t x1443 = INT32_MIN;
	uint8_t x1444 = 14U;
	volatile uint64_t t58 = 91LLU;

	t58 = ((x1441|x1442)>>(x1443&x1444));

	if (t58 != 110LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x1469 = -16;
	uint64_t x1470 = 72446LLU;
	uint32_t x1471 = UINT32_MAX;
	volatile int64_t x1472 = INT64_MIN;
	static volatile uint64_t t59 = 215055133173086LLU;

	t59 = ((x1469|x1470)>>(x1471&x1472));

	if (t59 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint8_t x1497 = UINT8_MAX;
	int32_t x1498 = 1;
	uint8_t x1500 = 4U;
	volatile int32_t t60 = -103285506;

	t60 = ((x1497|x1498)>>(x1499&x1500));

	if (t60 != 15) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x1534 = 6U;
	int64_t x1535 = -1LL;
	uint16_t x1536 = 21U;
	volatile int32_t t61 = 25123489;

	t61 = ((x1533|x1534)>>(x1535&x1536));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x1593 = 628697168U;
	static volatile int8_t x1594 = INT8_MIN;
	static int16_t x1595 = -1;
	uint16_t x1596 = 0U;
	volatile uint32_t t62 = 466U;

	t62 = ((x1593|x1594)>>(x1595&x1596));

	if (t62 != 4294967248U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x1618 = 92U;
	uint8_t x1619 = 0U;
	volatile int64_t x1620 = INT64_MIN;
	volatile int32_t t63 = 4036;

	t63 = ((x1617|x1618)>>(x1619&x1620));

	if (t63 != 93) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint64_t x1629 = UINT64_MAX;
	int32_t x1630 = INT32_MIN;
	static volatile uint16_t x1631 = 304U;
	uint64_t t64 = UINT64_MAX;

	t64 = ((x1629|x1630)>>(x1631&x1632));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x1637 = 4U;
	volatile uint8_t x1639 = 0U;
	volatile int16_t x1640 = INT16_MIN;

	t65 = ((x1637|x1638)>>(x1639&x1640));

	if (t65 != 65535) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x1661 = 2927158;
	int16_t x1662 = 0;
	static int64_t x1663 = INT64_MIN;
	volatile int8_t x1664 = 38;
	volatile int32_t t66 = 0;

	t66 = ((x1661|x1662)>>(x1663&x1664));

	if (t66 != 2927158) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x1665 = UINT16_MAX;
	uint16_t x1666 = 1U;
	int32_t x1667 = INT32_MIN;
	int16_t x1668 = INT16_MAX;
	static int32_t t67 = 1638;

	t67 = ((x1665|x1666)>>(x1667&x1668));

	if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x1669 = INT16_MAX;
	static uint16_t x1670 = 586U;
	volatile int8_t x1671 = 0;
	static volatile int16_t x1672 = INT16_MAX;
	int32_t t68 = 298044;

	t68 = ((x1669|x1670)>>(x1671&x1672));

	if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x1721 = INT8_MAX;
	int64_t x1722 = INT64_MAX;
	static volatile int64_t t69 = INT64_MAX;

	t69 = ((x1721|x1722)>>(x1723&x1724));

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x1734 = 2926;
	static int32_t x1735 = INT32_MIN;
	volatile uint8_t x1736 = 3U;

	t70 = ((x1733|x1734)>>(x1735&x1736));

	if (t70 != 2943) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x1745 = UINT32_MAX;
	int16_t x1747 = INT16_MIN;
	static uint8_t x1748 = 2U;
	volatile uint32_t t71 = UINT32_MAX;

	t71 = ((x1745|x1746)>>(x1747&x1748));

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x1801 = UINT64_MAX;
	uint16_t x1804 = 6932U;
	volatile uint64_t t72 = UINT64_MAX;

	t72 = ((x1801|x1802)>>(x1803&x1804));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x1805 = 2U;
	static uint16_t x1806 = 12174U;
	uint32_t x1808 = 426532610U;

	t73 = ((x1805|x1806)>>(x1807&x1808));

	if (t73 != 12174) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x1829 = INT64_MAX;
	int32_t x1830 = INT32_MAX;
	volatile uint8_t x1831 = 2U;
	static uint16_t x1832 = 161U;
	int64_t t74 = INT64_MAX;

	t74 = ((x1829|x1830)>>(x1831&x1832));

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x1841 = INT64_MIN;
	uint8_t x1844 = 25U;
	uint64_t t75 = 732LLU;

	t75 = ((x1841|x1842)>>(x1843&x1844));

	if (t75 != 140737488355327LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x1877 = UINT16_MAX;
	static int32_t x1879 = 241160;
	int16_t x1880 = 489;

	t76 = ((x1877|x1878)>>(x1879&x1880));

	if (t76 != 10495U) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x1889 = 19U;
	static int32_t x1890 = INT32_MIN;
	uint64_t x1891 = 475288LLU;
	uint32_t x1892 = 92U;
	static uint32_t t77 = 50346U;

	t77 = ((x1889|x1890)>>(x1891&x1892));

	if (t77 != 128U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x1897 = 50U;
	int8_t x1898 = INT8_MAX;
	uint64_t x1899 = 1LLU;
	int32_t t78 = 2617;

	t78 = ((x1897|x1898)>>(x1899&x1900));

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x1921 = UINT16_MAX;
	static int16_t x1923 = INT16_MIN;
	int32_t t79 = 1;

	t79 = ((x1921|x1922)>>(x1923&x1924));

	if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint64_t x1933 = 55259231LLU;
	int32_t x1934 = -5921683;
	static int32_t x1935 = 15;
	uint32_t x1936 = 66360460U;
	volatile uint64_t t80 = 1402LLU;

	t80 = ((x1933|x1934)>>(x1935&x1936));

	if (t80 != 4503599627370235LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x1949 = -1;
	static uint32_t x1950 = UINT32_MAX;
	uint32_t t81 = UINT32_MAX;

	t81 = ((x1949|x1950)>>(x1951&x1952));

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x1989 = 164;
	static int64_t x1990 = 56496232LL;
	volatile int64_t t82 = -721LL;

	t82 = ((x1989|x1990)>>(x1991&x1992));

	if (t82 != 56496364LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x1994 = 0;
	uint64_t x1995 = 122361LLU;
	int8_t x1996 = 1;
	uint32_t t83 = 3057U;

	t83 = ((x1993|x1994)>>(x1995&x1996));

	if (t83 != 2147483647U) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint32_t x1998 = UINT32_MAX;
	uint64_t x1999 = 813258487168LLU;
	static uint16_t x2000 = 0U;
	volatile uint32_t t84 = UINT32_MAX;

	t84 = ((x1997|x1998)>>(x1999&x2000));

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint16_t x2009 = 22U;
	static int64_t x2010 = 65221510136LL;
	static uint8_t x2011 = 20U;
	static volatile int8_t x2012 = 0;
	volatile int64_t t85 = -6670LL;

	t85 = ((x2009|x2010)>>(x2011&x2012));

	if (t85 != 65221510142LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x2045 = 15U;
	volatile uint32_t x2046 = 24U;
	static volatile int8_t x2048 = INT8_MIN;
	volatile uint32_t t86 = 3280498U;

	t86 = ((x2045|x2046)>>(x2047&x2048));

	if (t86 != 31U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x2074 = INT32_MIN;
	int32_t x2075 = INT32_MIN;
	uint8_t x2076 = 8U;
	uint32_t t87 = 170224U;

	t87 = ((x2073|x2074)>>(x2075&x2076));

	if (t87 != 4155705391U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x2113 = UINT32_MAX;
	static int32_t x2114 = -50;
	int8_t x2115 = 0;

	t88 = ((x2113|x2114)>>(x2115&x2116));

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x2145 = 28;
	volatile uint8_t x2146 = 6U;
	static int8_t x2147 = INT8_MAX;
	volatile int8_t x2148 = INT8_MIN;
	volatile int32_t t89 = -712;

	t89 = ((x2145|x2146)>>(x2147&x2148));

	if (t89 != 30) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x2149 = INT16_MIN;
	static uint64_t x2150 = UINT64_MAX;
	uint8_t x2151 = UINT8_MAX;
	static uint64_t t90 = UINT64_MAX;

	t90 = ((x2149|x2150)>>(x2151&x2152));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x2158 = INT64_MAX;
	static int16_t x2159 = INT16_MAX;
	uint16_t x2160 = 0U;
	volatile int64_t t91 = INT64_MAX;

	t91 = ((x2157|x2158)>>(x2159&x2160));

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x2169 = 3042LLU;
	static int64_t x2170 = INT64_MAX;
	volatile int16_t x2171 = 13;
	int64_t x2172 = -5177205LL;
	static volatile uint64_t t92 = 3LLU;

	t92 = ((x2169|x2170)>>(x2171&x2172));

	if (t92 != 18014398509481983LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x2177 = 0U;
	uint8_t x2179 = 3U;
	uint64_t x2180 = UINT64_MAX;
	int32_t t93 = 17;

	t93 = ((x2177|x2178)>>(x2179&x2180));

	if (t93 != 4095) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x2205 = -9;
	static uint64_t x2206 = 218029709560LLU;
	int8_t x2207 = INT8_MAX;
	static int64_t x2208 = INT64_MIN;
	uint64_t t94 = UINT64_MAX;

	t94 = ((x2205|x2206)>>(x2207&x2208));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x2277 = INT16_MAX;
	uint32_t x2278 = 25430U;
	uint32_t x2280 = 307487U;
	uint32_t t95 = 26185U;

	t95 = ((x2277|x2278)>>(x2279&x2280));

	if (t95 != 32767U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x2281 = 1U;
	int16_t x2283 = INT16_MAX;

	t96 = ((x2281|x2282)>>(x2283&x2284));

	if (t96 != 17U) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x2285 = 674622267LL;
	uint64_t x2286 = UINT64_MAX;
	uint16_t x2288 = 409U;
	uint64_t t97 = 312231282LLU;

	t97 = ((x2285|x2286)>>(x2287&x2288));

	if (t97 != 549755813887LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x2330 = UINT64_MAX;
	volatile int32_t x2331 = 126;
	uint16_t x2332 = 5U;
	volatile uint64_t t98 = 732554LLU;

	t98 = ((x2329|x2330)>>(x2331&x2332));

	if (t98 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x2337 = INT32_MAX;
	int8_t x2338 = 8;
	static int32_t x2339 = INT32_MIN;
	volatile int16_t x2340 = INT16_MAX;
	volatile int32_t t99 = INT32_MAX;

	t99 = ((x2337|x2338)>>(x2339&x2340));

	if (t99 != INT32_MAX) { NG(); } else { ; }
	
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

