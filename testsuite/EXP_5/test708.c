#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x2 = 6660U;
static int8_t x4 = INT8_MIN;
static uint64_t x24 = UINT64_MAX;
static int16_t x50 = INT16_MIN;
volatile int64_t t4 = 356LL;
volatile uint16_t x93 = 281U;
int8_t x94 = INT8_MIN;
static int64_t x96 = -1LL;
uint32_t x126 = 210U;
volatile int32_t t7 = 2;
static int32_t x167 = INT32_MIN;
volatile int64_t x226 = INT64_MIN;
static int8_t x274 = INT8_MAX;
volatile int32_t x276 = INT32_MIN;
static volatile int32_t x345 = INT32_MAX;
static int32_t x370 = -1;
static int16_t x436 = 0;
uint8_t x518 = 2U;
int8_t x531 = -1;
int64_t x584 = INT64_MIN;
uint16_t x655 = UINT16_MAX;
int32_t x699 = INT32_MIN;
int8_t x751 = -1;
volatile int8_t x850 = -1;
int16_t x852 = -1;
volatile uint64_t x909 = UINT64_MAX;
uint32_t x945 = UINT32_MAX;
int16_t x978 = -4838;
int64_t x979 = -1LL;
uint64_t t37 = UINT64_MAX;
uint8_t x1050 = UINT8_MAX;
volatile int16_t x1055 = -1;
int32_t x1108 = 129344406;
volatile uint64_t x1229 = 25108221924875LLU;
static uint8_t x1235 = 1U;
static volatile int32_t t45 = -1404;
volatile int16_t x1250 = INT16_MAX;
volatile int32_t t46 = -1660933;
int16_t x1283 = 1;
static int32_t x1284 = INT32_MAX;
volatile int32_t t47 = -33;
static uint8_t x1297 = UINT8_MAX;
int32_t x1298 = INT32_MAX;
static int16_t x1299 = -1;
static int64_t x1305 = 173175233446079802LL;
volatile int64_t t50 = 18LL;
int64_t x1385 = INT64_MAX;
volatile uint32_t x1387 = UINT32_MAX;
int16_t x1433 = INT16_MAX;
int8_t x1434 = INT8_MIN;
int8_t x1436 = -1;
int8_t x1467 = 1;
int8_t x1468 = INT8_MAX;
static uint16_t x1473 = UINT16_MAX;
int8_t x1507 = 1;
int64_t x1548 = INT64_MIN;
int64_t x1562 = -42921817LL;
int16_t x1585 = 115;
uint8_t x1590 = 0U;
int32_t x1644 = INT32_MAX;
volatile uint64_t x1677 = UINT64_MAX;
volatile uint64_t t66 = UINT64_MAX;
uint64_t x1685 = 201771724675524444LLU;
int32_t x1695 = INT32_MIN;
int8_t x1699 = INT8_MIN;
uint16_t x1700 = 495U;
int16_t x1721 = 514;
int64_t x1722 = -1LL;
volatile uint64_t t73 = UINT64_MAX;
uint8_t x1753 = UINT8_MAX;
uint16_t x1754 = 7758U;
int32_t x1755 = -1;
volatile int32_t t74 = 178787;
int8_t x1764 = 3;
uint64_t x1765 = 1874484559397738LLU;
volatile uint64_t t76 = 12LLU;
static int8_t x1784 = INT8_MIN;
uint32_t t78 = 15405U;
uint8_t x1832 = 2U;
int64_t x1860 = INT64_MIN;
int64_t x1890 = -203417906LL;
uint64_t t82 = UINT64_MAX;
int8_t x1945 = 33;
static int32_t x1948 = 526287775;
int32_t x1957 = 984887933;
volatile int32_t t87 = 29936;
int16_t x2129 = 9113;
int64_t x2152 = -1LL;
int8_t x2161 = INT8_MAX;
int16_t x2162 = INT16_MIN;
static uint16_t x2166 = 2U;
volatile int16_t x2167 = -18;
uint16_t x2168 = 3U;
static volatile int32_t t93 = -75;
int16_t x2222 = INT16_MIN;
volatile int32_t t95 = -29281135;
int16_t x2276 = -17;
static volatile int32_t t96 = 108511895;
static int64_t x2282 = 51870536826LL;
volatile int32_t x2283 = 1;
int16_t x2284 = 93;


void f0(void) {
	int64_t x1 = INT64_MAX;
	int64_t x3 = -1LL;
	int64_t t0 = INT64_MAX;

	t0 = (x1<<((x2%x3)*x4));

	if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 1U;
	int32_t x6 = INT32_MIN;
	int16_t x7 = INT16_MIN;
	static uint64_t x8 = 2039165156319LLU;
	static volatile uint32_t t1 = 26566U;

	t1 = (x5<<((x6%x7)*x8));

	if (t1 != 1U) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x21 = UINT8_MAX;
	volatile int32_t x22 = INT32_MIN;
	uint8_t x23 = 1U;
	static int32_t t2 = -640729325;

	t2 = (x21<<((x22%x23)*x24));

	if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x49 = 999U;
	uint64_t x51 = 325797023969835LLU;
	volatile int64_t x52 = INT64_MIN;
	volatile int32_t t3 = -17476;

	t3 = (x49<<((x50%x51)*x52));

	if (t3 != 999) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x57 = 486088LL;
	static uint8_t x58 = 12U;
	uint16_t x59 = 1U;
	uint32_t x60 = UINT32_MAX;

	t4 = (x57<<((x58%x59)*x60));

	if (t4 != 486088LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x95 = -1;
	volatile int32_t t5 = 485462392;

	t5 = (x93<<((x94%x95)*x96));

	if (t5 != 281) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x125 = 0LLU;
	int32_t x127 = -1;
	int32_t x128 = INT32_MIN;
	uint64_t t6 = 831723079531135LLU;

	t6 = (x125<<((x126%x127)*x128));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x157 = 11066U;
	uint16_t x158 = 0U;
	volatile int32_t x159 = INT32_MIN;
	int32_t x160 = -109675;

	t7 = (x157<<((x158%x159)*x160));

	if (t7 != 11066) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x161 = 1U;
	volatile int16_t x162 = INT16_MIN;
	volatile int8_t x163 = INT8_MIN;
	static uint16_t x164 = UINT16_MAX;
	volatile int32_t t8 = -51295;

	t8 = (x161<<((x162%x163)*x164));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x165 = 145843U;
	int32_t x166 = INT32_MIN;
	volatile int64_t x168 = -13268517LL;
	uint32_t t9 = 78784655U;

	t9 = (x165<<((x166%x167)*x168));

	if (t9 != 145843U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x225 = INT16_MAX;
	int16_t x227 = -1;
	uint64_t x228 = 3268777583079574LLU;
	volatile int32_t t10 = -248446045;

	t10 = (x225<<((x226%x227)*x228));

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x265 = 7982734;
	uint32_t x266 = UINT32_MAX;
	uint16_t x267 = UINT16_MAX;
	uint16_t x268 = 19U;
	volatile int32_t t11 = -178;

	t11 = (x265<<((x266%x267)*x268));

	if (t11 != 7982734) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x273 = 2907022170905307LL;
	static volatile int8_t x275 = INT8_MAX;
	static int64_t t12 = 399304600058444LL;

	t12 = (x273<<((x274%x275)*x276));

	if (t12 != 2907022170905307LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x301 = 3132;
	int32_t x302 = -1;
	uint32_t x303 = UINT32_MAX;
	uint64_t x304 = 4425443400LLU;
	int32_t t13 = 511440;

	t13 = (x301<<((x302%x303)*x304));

	if (t13 != 3132) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x346 = INT32_MIN;
	static uint32_t x347 = UINT32_MAX;
	static int8_t x348 = INT8_MIN;
	static int32_t t14 = INT32_MAX;

	t14 = (x345<<((x346%x347)*x348));

	if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x369 = 7LLU;
	uint32_t x371 = UINT32_MAX;
	static uint16_t x372 = 0U;
	uint64_t t15 = 62033661256401LLU;

	t15 = (x369<<((x370%x371)*x372));

	if (t15 != 7LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x385 = INT8_MAX;
	volatile int16_t x386 = INT16_MIN;
	int8_t x387 = 1;
	uint64_t x388 = 3495578235688LLU;
	int32_t t16 = -3391;

	t16 = (x385<<((x386%x387)*x388));

	if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x433 = INT8_MAX;
	int8_t x434 = INT8_MIN;
	int32_t x435 = 906768629;
	static int32_t t17 = 10951260;

	t17 = (x433<<((x434%x435)*x436));

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x449 = 901LLU;
	uint32_t x450 = UINT32_MAX;
	uint32_t x451 = UINT32_MAX;
	volatile int8_t x452 = -1;
	static volatile uint64_t t18 = 2666LLU;

	t18 = (x449<<((x450%x451)*x452));

	if (t18 != 901LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x517 = 11881127164406LLU;
	int16_t x519 = -1;
	int16_t x520 = INT16_MIN;
	uint64_t t19 = 527611LLU;

	t19 = (x517<<((x518%x519)*x520));

	if (t19 != 11881127164406LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x525 = 2201310801713281060LLU;
	volatile int8_t x526 = INT8_MIN;
	volatile int8_t x527 = INT8_MIN;
	static int32_t x528 = INT32_MAX;
	volatile uint64_t t20 = 15153801100388239LLU;

	t20 = (x525<<((x526%x527)*x528));

	if (t20 != 2201310801713281060LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x529 = 3U;
	uint8_t x530 = 0U;
	uint32_t x532 = UINT32_MAX;
	int32_t t21 = -2502622;

	t21 = (x529<<((x530%x531)*x532));

	if (t21 != 3) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x569 = 7;
	static int32_t x570 = INT32_MIN;
	int16_t x571 = -1;
	int64_t x572 = INT64_MIN;
	static volatile int32_t t22 = -455;

	t22 = (x569<<((x570%x571)*x572));

	if (t22 != 7) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x581 = UINT32_MAX;
	int8_t x582 = INT8_MAX;
	int32_t x583 = -1;
	uint32_t t23 = UINT32_MAX;

	t23 = (x581<<((x582%x583)*x584));

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint16_t x653 = 24056U;
	uint64_t x654 = UINT64_MAX;
	int16_t x656 = -1;
	int32_t t24 = 14889108;

	t24 = (x653<<((x654%x655)*x656));

	if (t24 != 24056) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x685 = 119U;
	int8_t x686 = 12;
	int32_t x687 = -1;
	int64_t x688 = INT64_MIN;
	int32_t t25 = 1797303;

	t25 = (x685<<((x686%x687)*x688));

	if (t25 != 119) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x697 = INT64_MAX;
	int64_t x698 = 3289029LL;
	static volatile uint8_t x700 = 0U;
	int64_t t26 = INT64_MAX;

	t26 = (x697<<((x698%x699)*x700));

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x705 = 2;
	static int32_t x706 = 0;
	volatile uint64_t x707 = 2152704180543LLU;
	int32_t x708 = INT32_MAX;
	int32_t t27 = 83495;

	t27 = (x705<<((x706%x707)*x708));

	if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint8_t x737 = 1U;
	uint8_t x738 = 1U;
	uint16_t x739 = 1U;
	static volatile int16_t x740 = 7;
	volatile int32_t t28 = -212999751;

	t28 = (x737<<((x738%x739)*x740));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x749 = UINT64_MAX;
	static volatile uint16_t x750 = UINT16_MAX;
	static int8_t x752 = INT8_MIN;
	uint64_t t29 = UINT64_MAX;

	t29 = (x749<<((x750%x751)*x752));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x773 = 1418764LLU;
	uint16_t x774 = UINT16_MAX;
	int32_t x775 = -1;
	volatile int8_t x776 = INT8_MIN;
	uint64_t t30 = 27LLU;

	t30 = (x773<<((x774%x775)*x776));

	if (t30 != 1418764LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x849 = 58567095306553LLU;
	int64_t x851 = INT64_MAX;
	static uint64_t t31 = 32941315LLU;

	t31 = (x849<<((x850%x851)*x852));

	if (t31 != 117134190613106LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x873 = 2U;
	int64_t x874 = -88LL;
	int64_t x875 = -1LL;
	volatile int32_t x876 = -1;
	int32_t t32 = -10909;

	t32 = (x873<<((x874%x875)*x876));

	if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x910 = UINT8_MAX;
	int8_t x911 = -1;
	int32_t x912 = -3;
	volatile uint64_t t33 = UINT64_MAX;

	t33 = (x909<<((x910%x911)*x912));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x946 = INT32_MIN;
	int8_t x947 = -8;
	static int32_t x948 = INT32_MAX;
	volatile uint32_t t34 = UINT32_MAX;

	t34 = (x945<<((x946%x947)*x948));

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x957 = 405105815;
	uint8_t x958 = 0U;
	int8_t x959 = -14;
	int64_t x960 = -23005LL;
	static int32_t t35 = -1;

	t35 = (x957<<((x958%x959)*x960));

	if (t35 != 405105815) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x977 = 249698LLU;
	static uint64_t x980 = UINT64_MAX;
	uint64_t t36 = 15248421LLU;

	t36 = (x977<<((x978%x979)*x980));

	if (t36 != 249698LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x993 = UINT64_MAX;
	uint8_t x994 = 2U;
	int16_t x995 = -1;
	int64_t x996 = 411360494893102191LL;

	t37 = (x993<<((x994%x995)*x996));

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x1045 = 96571107670117063LLU;
	int32_t x1046 = -1;
	volatile int8_t x1047 = -1;
	static int16_t x1048 = 585;
	uint64_t t38 = 128004012343032490LLU;

	t38 = (x1045<<((x1046%x1047)*x1048));

	if (t38 != 96571107670117063LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x1049 = 74U;
	static uint8_t x1051 = UINT8_MAX;
	static int16_t x1052 = -1;
	volatile int32_t t39 = -1;

	t39 = (x1049<<((x1050%x1051)*x1052));

	if (t39 != 74) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint32_t x1053 = 1405034U;
	volatile uint16_t x1054 = 5U;
	int64_t x1056 = INT64_MIN;
	static volatile uint32_t t40 = 1578966823U;

	t40 = (x1053<<((x1054%x1055)*x1056));

	if (t40 != 1405034U) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x1105 = 939572317LLU;
	int8_t x1106 = 0;
	int16_t x1107 = 1377;
	uint64_t t41 = 247590874011354LLU;

	t41 = (x1105<<((x1106%x1107)*x1108));

	if (t41 != 939572317LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x1137 = 20;
	int8_t x1138 = 12;
	uint8_t x1139 = 12U;
	uint16_t x1140 = 2U;
	int32_t t42 = 2171871;

	t42 = (x1137<<((x1138%x1139)*x1140));

	if (t42 != 20) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x1205 = UINT8_MAX;
	uint32_t x1206 = UINT32_MAX;
	uint8_t x1207 = UINT8_MAX;
	volatile int64_t x1208 = INT64_MAX;
	static int32_t t43 = 16;

	t43 = (x1205<<((x1206%x1207)*x1208));

	if (t43 != 255) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x1230 = INT16_MIN;
	static int32_t x1231 = -1;
	volatile uint32_t x1232 = UINT32_MAX;
	volatile uint64_t t44 = 129709LLU;

	t44 = (x1229<<((x1230%x1231)*x1232));

	if (t44 != 25108221924875LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1233 = INT16_MAX;
	uint64_t x1234 = 506575223680205LLU;
	int8_t x1236 = -1;

	t45 = (x1233<<((x1234%x1235)*x1236));

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1249 = 0;
	static int16_t x1251 = INT16_MAX;
	uint8_t x1252 = UINT8_MAX;

	t46 = (x1249<<((x1250%x1251)*x1252));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x1281 = 0;
	int16_t x1282 = INT16_MAX;

	t47 = (x1281<<((x1282%x1283)*x1284));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x1289 = UINT16_MAX;
	uint32_t x1290 = UINT32_MAX;
	int16_t x1291 = -1;
	static uint16_t x1292 = UINT16_MAX;
	int32_t t48 = 38297;

	t48 = (x1289<<((x1290%x1291)*x1292));

	if (t48 != 65535) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x1300 = -1;
	static volatile int32_t t49 = 14985;

	t49 = (x1297<<((x1298%x1299)*x1300));

	if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x1306 = INT32_MIN;
	int8_t x1307 = INT8_MIN;
	int8_t x1308 = INT8_MAX;

	t50 = (x1305<<((x1306%x1307)*x1308));

	if (t50 != 173175233446079802LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1321 = INT32_MAX;
	uint16_t x1322 = UINT16_MAX;
	int16_t x1323 = -1;
	static int8_t x1324 = INT8_MIN;
	volatile int32_t t51 = INT32_MAX;

	t51 = (x1321<<((x1322%x1323)*x1324));

	if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1386 = -1;
	static int32_t x1388 = 253370552;
	int64_t t52 = INT64_MAX;

	t52 = (x1385<<((x1386%x1387)*x1388));

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x1435 = 3U;
	volatile int32_t t53 = 7098;

	t53 = (x1433<<((x1434%x1435)*x1436));

	if (t53 != 131068) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x1465 = 103U;
	static int64_t x1466 = INT64_MIN;
	static volatile uint32_t t54 = 57U;

	t54 = (x1465<<((x1466%x1467)*x1468));

	if (t54 != 103U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x1474 = 0U;
	uint64_t x1475 = UINT64_MAX;
	static uint8_t x1476 = UINT8_MAX;
	int32_t t55 = -7560;

	t55 = (x1473<<((x1474%x1475)*x1476));

	if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x1505 = 4868212LL;
	static int64_t x1506 = INT64_MAX;
	uint16_t x1508 = UINT16_MAX;
	volatile int64_t t56 = -224LL;

	t56 = (x1505<<((x1506%x1507)*x1508));

	if (t56 != 4868212LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x1545 = UINT16_MAX;
	uint64_t x1546 = 51927824554597288LLU;
	volatile int32_t x1547 = -29642;
	int32_t t57 = -481655;

	t57 = (x1545<<((x1546%x1547)*x1548));

	if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x1561 = UINT8_MAX;
	int32_t x1563 = -1;
	volatile int8_t x1564 = -1;
	static volatile int32_t t58 = -77;

	t58 = (x1561<<((x1562%x1563)*x1564));

	if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x1565 = 0;
	static volatile int16_t x1566 = -7;
	int32_t x1567 = -1;
	int8_t x1568 = INT8_MIN;
	static int32_t t59 = -495223129;

	t59 = (x1565<<((x1566%x1567)*x1568));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x1569 = 362U;
	int32_t x1570 = INT32_MIN;
	static volatile int8_t x1571 = INT8_MIN;
	uint8_t x1572 = UINT8_MAX;
	static int32_t t60 = 133815524;

	t60 = (x1569<<((x1570%x1571)*x1572));

	if (t60 != 362) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint8_t x1586 = 6U;
	uint8_t x1587 = 3U;
	volatile int16_t x1588 = -7559;
	static volatile int32_t t61 = -58;

	t61 = (x1585<<((x1586%x1587)*x1588));

	if (t61 != 115) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x1589 = 440325366;
	uint32_t x1591 = UINT32_MAX;
	volatile int64_t x1592 = INT64_MIN;
	int32_t t62 = 48773;

	t62 = (x1589<<((x1590%x1591)*x1592));

	if (t62 != 440325366) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x1613 = INT8_MAX;
	int32_t x1614 = INT32_MIN;
	uint8_t x1615 = 30U;
	static volatile int8_t x1616 = -1;
	int32_t t63 = -898;

	t63 = (x1613<<((x1614%x1615)*x1616));

	if (t63 != 32512) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x1641 = 12;
	uint8_t x1642 = 0U;
	static int64_t x1643 = INT64_MIN;
	volatile int32_t t64 = 87;

	t64 = (x1641<<((x1642%x1643)*x1644));

	if (t64 != 12) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x1665 = 1493;
	volatile int64_t x1666 = -1LL;
	uint16_t x1667 = 28U;
	int16_t x1668 = -1;
	int32_t t65 = -21;

	t65 = (x1665<<((x1666%x1667)*x1668));

	if (t65 != 2986) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x1678 = INT64_MIN;
	static volatile uint8_t x1679 = UINT8_MAX;
	static uint16_t x1680 = 0U;

	t66 = (x1677<<((x1678%x1679)*x1680));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x1686 = 0U;
	int32_t x1687 = 2;
	int16_t x1688 = INT16_MIN;
	uint64_t t67 = 4622857825187773628LLU;

	t67 = (x1685<<((x1686%x1687)*x1688));

	if (t67 != 201771724675524444LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x1689 = 252U;
	int64_t x1690 = INT64_MIN;
	volatile int64_t x1691 = INT64_MIN;
	volatile int32_t x1692 = -1626;
	int32_t t68 = -1;

	t68 = (x1689<<((x1690%x1691)*x1692));

	if (t68 != 252) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x1693 = UINT16_MAX;
	int8_t x1694 = -2;
	int8_t x1696 = -1;
	volatile int32_t t69 = 219;

	t69 = (x1693<<((x1694%x1695)*x1696));

	if (t69 != 262140) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x1697 = 3;
	static volatile int16_t x1698 = INT16_MIN;
	volatile int32_t t70 = 210194;

	t70 = (x1697<<((x1698%x1699)*x1700));

	if (t70 != 3) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x1709 = INT16_MAX;
	int8_t x1710 = 0;
	int8_t x1711 = -1;
	int64_t x1712 = -1LL;
	static volatile int32_t t71 = 20707328;

	t71 = (x1709<<((x1710%x1711)*x1712));

	if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x1723 = 641971859U;
	int8_t x1724 = -1;
	volatile int32_t t72 = 2433;

	t72 = (x1721<<((x1722%x1723)*x1724));

	if (t72 != 1028) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x1733 = UINT64_MAX;
	static int32_t x1734 = INT32_MIN;
	int8_t x1735 = -2;
	volatile int32_t x1736 = -167;

	t73 = (x1733<<((x1734%x1735)*x1736));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x1756 = INT16_MIN;

	t74 = (x1753<<((x1754%x1755)*x1756));

	if (t74 != 255) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x1761 = 0;
	volatile uint16_t x1762 = 1U;
	volatile uint32_t x1763 = 323U;
	volatile int32_t t75 = 414334409;

	t75 = (x1761<<((x1762%x1763)*x1764));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x1766 = INT32_MIN;
	volatile int16_t x1767 = INT16_MIN;
	static int32_t x1768 = -788;

	t76 = (x1765<<((x1766%x1767)*x1768));

	if (t76 != 1874484559397738LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x1781 = INT8_MAX;
	uint32_t x1782 = 26497U;
	volatile uint8_t x1783 = 1U;
	volatile int32_t t77 = -2923987;

	t77 = (x1781<<((x1782%x1783)*x1784));

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x1793 = 13U;
	static volatile int64_t x1794 = INT64_MAX;
	uint8_t x1795 = 1U;
	int16_t x1796 = INT16_MIN;

	t78 = (x1793<<((x1794%x1795)*x1796));

	if (t78 != 13U) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x1829 = 1581U;
	int64_t x1830 = 63384141LL;
	int32_t x1831 = 1;
	int32_t t79 = 7848;

	t79 = (x1829<<((x1830%x1831)*x1832));

	if (t79 != 1581) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x1845 = 510139194U;
	uint64_t x1846 = 526095751LLU;
	uint8_t x1847 = 1U;
	static int64_t x1848 = INT64_MAX;
	static uint32_t t80 = 29U;

	t80 = (x1845<<((x1846%x1847)*x1848));

	if (t80 != 510139194U) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x1857 = 647U;
	int32_t x1858 = INT32_MAX;
	int8_t x1859 = -1;
	volatile int32_t t81 = -1866;

	t81 = (x1857<<((x1858%x1859)*x1860));

	if (t81 != 647) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x1889 = UINT64_MAX;
	uint8_t x1891 = 2U;
	volatile int16_t x1892 = -2;

	t82 = (x1889<<((x1890%x1891)*x1892));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x1946 = UINT32_MAX;
	static int32_t x1947 = 3;
	volatile int32_t t83 = -23;

	t83 = (x1945<<((x1946%x1947)*x1948));

	if (t83 != 33) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x1958 = -653;
	volatile int32_t x1959 = -1;
	static volatile uint8_t x1960 = 13U;
	static volatile int32_t t84 = -1;

	t84 = (x1957<<((x1958%x1959)*x1960));

	if (t84 != 984887933) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x2021 = 61LLU;
	int8_t x2022 = INT8_MIN;
	volatile int64_t x2023 = -1LL;
	int64_t x2024 = INT64_MIN;
	volatile uint64_t t85 = 34224369LLU;

	t85 = (x2021<<((x2022%x2023)*x2024));

	if (t85 != 61LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x2037 = INT64_MAX;
	int16_t x2038 = INT16_MIN;
	static int32_t x2039 = -1;
	int8_t x2040 = -1;
	int64_t t86 = INT64_MAX;

	t86 = (x2037<<((x2038%x2039)*x2040));

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x2049 = INT16_MAX;
	int8_t x2050 = INT8_MIN;
	uint8_t x2051 = 4U;
	static uint64_t x2052 = 606129013920LLU;

	t87 = (x2049<<((x2050%x2051)*x2052));

	if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x2065 = UINT16_MAX;
	uint8_t x2066 = 0U;
	int32_t x2067 = INT32_MIN;
	int64_t x2068 = -3LL;
	volatile int32_t t88 = 1;

	t88 = (x2065<<((x2066%x2067)*x2068));

	if (t88 != 65535) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x2130 = INT32_MIN;
	static uint16_t x2131 = 1U;
	static int64_t x2132 = INT64_MIN;
	int32_t t89 = 3917022;

	t89 = (x2129<<((x2130%x2131)*x2132));

	if (t89 != 9113) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x2149 = 159109890U;
	static uint16_t x2150 = 588U;
	int64_t x2151 = -1LL;
	uint32_t t90 = 636036173U;

	t90 = (x2149<<((x2150%x2151)*x2152));

	if (t90 != 159109890U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x2163 = INT16_MIN;
	int8_t x2164 = INT8_MAX;
	static int32_t t91 = 3;

	t91 = (x2161<<((x2162%x2163)*x2164));

	if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x2165 = UINT16_MAX;
	static volatile int32_t t92 = 2;

	t92 = (x2165<<((x2166%x2167)*x2168));

	if (t92 != 4194240) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x2181 = 5U;
	static int8_t x2182 = INT8_MIN;
	static volatile int8_t x2183 = INT8_MIN;
	uint16_t x2184 = UINT16_MAX;

	t93 = (x2181<<((x2182%x2183)*x2184));

	if (t93 != 5) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x2221 = 54U;
	uint8_t x2223 = 2U;
	int64_t x2224 = INT64_MIN;
	int32_t t94 = 1630513;

	t94 = (x2221<<((x2222%x2223)*x2224));

	if (t94 != 54) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x2253 = INT16_MAX;
	int16_t x2254 = INT16_MIN;
	int64_t x2255 = -1LL;
	volatile int32_t x2256 = 11;

	t95 = (x2253<<((x2254%x2255)*x2256));

	if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x2273 = UINT8_MAX;
	volatile uint8_t x2274 = 3U;
	int8_t x2275 = -3;

	t96 = (x2273<<((x2274%x2275)*x2276));

	if (t96 != 255) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x2281 = 2962;
	int32_t t97 = 19272133;

	t97 = (x2281<<((x2282%x2283)*x2284));

	if (t97 != 2962) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x2293 = INT64_MAX;
	volatile uint16_t x2294 = 0U;
	volatile int8_t x2295 = -1;
	volatile int64_t x2296 = -1LL;
	volatile int64_t t98 = INT64_MAX;

	t98 = (x2293<<((x2294%x2295)*x2296));

	if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x2321 = UINT64_MAX;
	volatile uint16_t x2322 = 576U;
	static int32_t x2323 = -1;
	static uint32_t x2324 = 2906U;
	uint64_t t99 = UINT64_MAX;

	t99 = (x2321<<((x2322%x2323)*x2324));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

