#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x26 = 2;
uint16_t x73 = 5050U;
static int64_t x75 = INT64_MIN;
volatile int32_t t2 = -3035;
uint32_t x105 = 21801U;
static int16_t x108 = 0;
static volatile int8_t x118 = INT8_MIN;
static volatile uint32_t t6 = 120U;
static volatile uint8_t x293 = 68U;
static volatile int32_t t8 = -4221409;
int8_t x495 = 5;
static int8_t x514 = -1;
static uint16_t x609 = 7U;
uint16_t x610 = UINT16_MAX;
static int32_t t14 = 3;
static uint64_t x621 = 376722380643306LLU;
volatile uint64_t x624 = 0LLU;
static uint8_t x752 = 1U;
int32_t t16 = -5929529;
static uint8_t x798 = 6U;
static volatile uint64_t x799 = 3407338LLU;
int64_t x807 = INT64_MIN;
volatile uint8_t x808 = 1U;
static int32_t x955 = -1913067;
volatile int8_t x1097 = 6;
volatile int32_t t22 = -322;
int16_t x1167 = INT16_MAX;
uint8_t x1168 = 30U;
volatile int32_t t23 = -21965579;
volatile int32_t x1171 = 5;
int32_t t24 = -3971;
volatile uint16_t x1205 = 17684U;
static int16_t x1206 = INT16_MAX;
volatile uint16_t x1265 = UINT16_MAX;
int8_t x1267 = -1;
uint8_t x1361 = 94U;
int32_t x1362 = 374904236;
volatile int32_t t30 = -56994771;
int32_t x1426 = INT32_MIN;
volatile uint64_t x1440 = 1LLU;
int32_t x1506 = 19173252;
static uint64_t x1545 = 2395LLU;
volatile int16_t x1547 = -1;
int32_t x1548 = 1;
uint8_t x1581 = 0U;
uint8_t x1594 = UINT8_MAX;
static int16_t x1702 = 49;
static volatile uint32_t x1703 = 53991036U;
volatile int16_t x1815 = -1;
uint32_t t44 = 4585U;
static uint32_t x1925 = UINT32_MAX;
uint8_t x1928 = 0U;
static uint8_t x1938 = UINT8_MAX;
uint32_t x2001 = UINT32_MAX;
uint64_t t54 = 788LLU;
int32_t x2202 = -1;
static uint32_t x2203 = 2843980U;
uint32_t x2204 = 0U;
int32_t t59 = -937327337;
int32_t x2447 = INT32_MIN;
static volatile int16_t x2499 = -27;
int64_t t61 = -2932199733503858276LL;
uint32_t x2534 = 19792575U;
uint8_t x2553 = 29U;
static volatile uint8_t x2808 = 3U;
volatile int32_t t67 = -213072;
int8_t x2818 = -6;
static uint64_t x2866 = 6458294287619LLU;
int64_t x2949 = 1842068LL;
int8_t x2950 = -1;
int16_t x3018 = INT16_MIN;
int16_t x3019 = INT16_MIN;
int8_t x3020 = 1;
volatile int32_t t74 = 1771;
volatile uint8_t x3581 = 20U;
uint8_t x3584 = 1U;
volatile int32_t t78 = -8349572;
static int64_t x3889 = INT64_MAX;
uint8_t x3931 = UINT8_MAX;
int8_t x3967 = -1;
uint8_t x3968 = 12U;
int32_t x4037 = 117828;
int64_t x4038 = 8871832895LL;
volatile uint32_t x4040 = 14U;
uint8_t x4426 = 5U;
int16_t x4441 = 3;
volatile uint8_t x4465 = 1U;
uint16_t x4466 = 0U;
volatile int32_t x4467 = 0;
volatile uint8_t x4468 = 1U;
static uint64_t x4489 = 8618582LLU;
int16_t x4492 = 3;
uint64_t x4597 = UINT64_MAX;
int64_t x4600 = 0LL;
volatile uint64_t t92 = UINT64_MAX;
uint16_t x4634 = UINT16_MAX;
volatile uint8_t x4636 = 3U;
static int16_t x4686 = INT16_MIN;
static volatile uint8_t x4688 = 3U;
int8_t x4736 = 1;
volatile int16_t x4889 = 7895;
static int16_t x4890 = -2;
static int16_t x4919 = 9109;
uint16_t x4920 = 2U;
uint64_t t99 = 1LLU;


void f0(void) {
	static int32_t x25 = 0;
	int32_t x27 = INT32_MIN;
	uint8_t x28 = 0U;
	volatile int32_t t0 = -6320;

	t0 = ((x25^(x26<=x27))>>x28);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x41 = 627269U;
	int64_t x42 = -129397LL;
	uint64_t x43 = 273715591032LLU;
	uint16_t x44 = 1U;
	volatile uint32_t t1 = 4138978U;

	t1 = ((x41^(x42<=x43))>>x44);

	if (t1 != 313634U) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x74 = -1;
	uint16_t x76 = 0U;

	t2 = ((x73^(x74<=x75))>>x76);

	if (t2 != 5050) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x106 = 10U;
	volatile uint16_t x107 = UINT16_MAX;
	volatile uint32_t t3 = 44345988U;

	t3 = ((x105^(x106<=x107))>>x108);

	if (t3 != 21800U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x117 = INT32_MAX;
	int16_t x119 = INT16_MIN;
	uint8_t x120 = 10U;
	volatile int32_t t4 = -13799;

	t4 = ((x117^(x118<=x119))>>x120);

	if (t4 != 2097151) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x221 = UINT32_MAX;
	uint16_t x222 = UINT16_MAX;
	static int16_t x223 = INT16_MAX;
	static int16_t x224 = 13;
	volatile uint32_t t5 = 32401253U;

	t5 = ((x221^(x222<=x223))>>x224);

	if (t5 != 524287U) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x253 = 2299971U;
	static int64_t x254 = -233106751092925044LL;
	volatile uint8_t x255 = 64U;
	static int16_t x256 = 1;

	t6 = ((x253^(x254<=x255))>>x256);

	if (t6 != 1149985U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x273 = 12;
	uint16_t x274 = 21728U;
	int8_t x275 = INT8_MAX;
	uint8_t x276 = 9U;
	static int32_t t7 = -755139897;

	t7 = ((x273^(x274<=x275))>>x276);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x294 = 0;
	static uint8_t x295 = 5U;
	volatile uint8_t x296 = 0U;

	t8 = ((x293^(x294<=x295))>>x296);

	if (t8 != 69) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x309 = 53LL;
	int8_t x310 = -1;
	uint16_t x311 = 39U;
	static int16_t x312 = 6;
	volatile int64_t t9 = -1LL;

	t9 = ((x309^(x310<=x311))>>x312);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x449 = UINT32_MAX;
	volatile uint8_t x450 = 4U;
	uint16_t x451 = 5842U;
	uint8_t x452 = 0U;
	static uint32_t t10 = 7672U;

	t10 = ((x449^(x450<=x451))>>x452);

	if (t10 != 4294967294U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x489 = 29;
	uint32_t x490 = 14122U;
	int64_t x491 = -1LL;
	uint16_t x492 = 17U;
	int32_t t11 = -4211;

	t11 = ((x489^(x490<=x491))>>x492);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x493 = UINT8_MAX;
	uint32_t x494 = 70U;
	uint8_t x496 = 10U;
	int32_t t12 = 1;

	t12 = ((x493^(x494<=x495))>>x496);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x513 = UINT32_MAX;
	volatile int16_t x515 = INT16_MAX;
	volatile uint64_t x516 = 1LLU;
	uint32_t t13 = 26020U;

	t13 = ((x513^(x514<=x515))>>x516);

	if (t13 != 2147483647U) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x611 = 74016U;
	static volatile int16_t x612 = 1;

	t14 = ((x609^(x610<=x611))>>x612);

	if (t14 != 3) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x622 = -1;
	int16_t x623 = INT16_MIN;
	volatile uint64_t t15 = 100LLU;

	t15 = ((x621^(x622<=x623))>>x624);

	if (t15 != 376722380643306LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x749 = 0;
	static int8_t x750 = -1;
	static volatile int16_t x751 = INT16_MIN;

	t16 = ((x749^(x750<=x751))>>x752);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x797 = 0U;
	int8_t x800 = 5;
	volatile int32_t t17 = 218;

	t17 = ((x797^(x798<=x799))>>x800);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x805 = 3209U;
	volatile int64_t x806 = -1LL;
	volatile int32_t t18 = -6515;

	t18 = ((x805^(x806<=x807))>>x808);

	if (t18 != 1604) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x853 = UINT16_MAX;
	static uint8_t x854 = 1U;
	uint32_t x855 = UINT32_MAX;
	volatile uint16_t x856 = 0U;
	int32_t t19 = 46676;

	t19 = ((x853^(x854<=x855))>>x856);

	if (t19 != 65534) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x953 = INT8_MAX;
	volatile uint64_t x954 = 1LLU;
	volatile int16_t x956 = 3;
	int32_t t20 = 586490726;

	t20 = ((x953^(x954<=x955))>>x956);

	if (t20 != 15) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1025 = INT64_MAX;
	uint32_t x1026 = UINT32_MAX;
	static volatile int8_t x1027 = 1;
	uint32_t x1028 = 8U;
	volatile int64_t t21 = -39944855684390020LL;

	t21 = ((x1025^(x1026<=x1027))>>x1028);

	if (t21 != 36028797018963967LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1098 = INT8_MIN;
	uint32_t x1099 = 14948404U;
	int16_t x1100 = 1;

	t22 = ((x1097^(x1098<=x1099))>>x1100);

	if (t22 != 3) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1165 = 57;
	uint16_t x1166 = 0U;

	t23 = ((x1165^(x1166<=x1167))>>x1168);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1169 = 26;
	int16_t x1170 = INT16_MAX;
	volatile int8_t x1172 = 1;

	t24 = ((x1169^(x1170<=x1171))>>x1172);

	if (t24 != 13) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1207 = -1;
	uint8_t x1208 = 12U;
	int32_t t25 = -3;

	t25 = ((x1205^(x1206<=x1207))>>x1208);

	if (t25 != 4) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x1213 = 43U;
	int64_t x1214 = INT64_MIN;
	int64_t x1215 = INT64_MIN;
	int8_t x1216 = 0;
	int32_t t26 = -23;

	t26 = ((x1213^(x1214<=x1215))>>x1216);

	if (t26 != 42) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1257 = 15U;
	int64_t x1258 = 1430071779669435359LL;
	int16_t x1259 = INT16_MIN;
	int8_t x1260 = 3;
	volatile int32_t t27 = -719;

	t27 = ((x1257^(x1258<=x1259))>>x1260);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1266 = -8565LL;
	volatile int8_t x1268 = 1;
	int32_t t28 = 19486;

	t28 = ((x1265^(x1266<=x1267))>>x1268);

	if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1337 = 8281219406552619917LLU;
	int16_t x1338 = 636;
	volatile uint32_t x1339 = 12625U;
	uint8_t x1340 = 60U;
	volatile uint64_t t29 = 113890095440960LLU;

	t29 = ((x1337^(x1338<=x1339))>>x1340);

	if (t29 != 7LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x1363 = 54U;
	int32_t x1364 = 1;

	t30 = ((x1361^(x1362<=x1363))>>x1364);

	if (t30 != 47) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1377 = 7;
	int16_t x1378 = -1;
	int16_t x1379 = -1;
	int32_t x1380 = 13;
	static volatile int32_t t31 = 108;

	t31 = ((x1377^(x1378<=x1379))>>x1380);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1421 = 3382LLU;
	static int16_t x1422 = -1;
	int16_t x1423 = INT16_MIN;
	uint16_t x1424 = 3U;
	volatile uint64_t t32 = 11085209829LLU;

	t32 = ((x1421^(x1422<=x1423))>>x1424);

	if (t32 != 422LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1425 = 590U;
	int64_t x1427 = 84890028559LL;
	int64_t x1428 = 9LL;
	volatile int32_t t33 = 25652;

	t33 = ((x1425^(x1426<=x1427))>>x1428);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x1437 = UINT8_MAX;
	static volatile int16_t x1438 = -9043;
	volatile int8_t x1439 = INT8_MIN;
	static volatile int32_t t34 = 161641913;

	t34 = ((x1437^(x1438<=x1439))>>x1440);

	if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x1469 = 6154LLU;
	int64_t x1470 = INT64_MAX;
	int16_t x1471 = INT16_MAX;
	uint32_t x1472 = 0U;
	volatile uint64_t t35 = 2649775229702701996LLU;

	t35 = ((x1469^(x1470<=x1471))>>x1472);

	if (t35 != 6154LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1505 = INT32_MAX;
	int8_t x1507 = -27;
	static uint8_t x1508 = 1U;
	int32_t t36 = -220403534;

	t36 = ((x1505^(x1506<=x1507))>>x1508);

	if (t36 != 1073741823) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1546 = -190944LL;
	volatile uint64_t t37 = 11189LLU;

	t37 = ((x1545^(x1546<=x1547))>>x1548);

	if (t37 != 1197LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x1577 = 202174657U;
	static int8_t x1578 = 29;
	uint8_t x1579 = 1U;
	uint8_t x1580 = 3U;
	volatile uint32_t t38 = 539722267U;

	t38 = ((x1577^(x1578<=x1579))>>x1580);

	if (t38 != 25271832U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1582 = -630;
	int8_t x1583 = -4;
	int16_t x1584 = 1;
	volatile int32_t t39 = -3236;

	t39 = ((x1581^(x1582<=x1583))>>x1584);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x1593 = 423U;
	int8_t x1595 = INT8_MAX;
	uint64_t x1596 = 2LLU;
	static int32_t t40 = -62355;

	t40 = ((x1593^(x1594<=x1595))>>x1596);

	if (t40 != 105) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1677 = 2538786;
	int64_t x1678 = -1LL;
	int64_t x1679 = -413060548506899882LL;
	int8_t x1680 = 1;
	static volatile int32_t t41 = 0;

	t41 = ((x1677^(x1678<=x1679))>>x1680);

	if (t41 != 1269393) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x1701 = 12;
	volatile uint16_t x1704 = 0U;
	int32_t t42 = -1603;

	t42 = ((x1701^(x1702<=x1703))>>x1704);

	if (t42 != 13) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x1813 = 29595U;
	int64_t x1814 = 30865885475422LL;
	volatile uint32_t x1816 = 5U;
	int32_t t43 = 3165874;

	t43 = ((x1813^(x1814<=x1815))>>x1816);

	if (t43 != 924) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x1825 = 3214899U;
	static volatile int16_t x1826 = 9;
	volatile uint32_t x1827 = UINT32_MAX;
	static uint8_t x1828 = 1U;

	t44 = ((x1825^(x1826<=x1827))>>x1828);

	if (t44 != 1607449U) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x1849 = INT32_MAX;
	static int8_t x1850 = -3;
	static int64_t x1851 = INT64_MAX;
	volatile uint16_t x1852 = 10U;
	int32_t t45 = -7;

	t45 = ((x1849^(x1850<=x1851))>>x1852);

	if (t45 != 2097151) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x1885 = 12U;
	uint8_t x1886 = 7U;
	uint32_t x1887 = 7858805U;
	uint16_t x1888 = 9U;
	int32_t t46 = -3;

	t46 = ((x1885^(x1886<=x1887))>>x1888);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x1921 = INT16_MAX;
	int16_t x1922 = -223;
	volatile int8_t x1923 = -50;
	int8_t x1924 = 1;
	volatile int32_t t47 = -629;

	t47 = ((x1921^(x1922<=x1923))>>x1924);

	if (t47 != 16383) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x1926 = 19U;
	int16_t x1927 = INT16_MIN;
	uint32_t t48 = UINT32_MAX;

	t48 = ((x1925^(x1926<=x1927))>>x1928);

	if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x1937 = UINT8_MAX;
	int8_t x1939 = -1;
	uint16_t x1940 = 0U;
	static volatile int32_t t49 = -472520;

	t49 = ((x1937^(x1938<=x1939))>>x1940);

	if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x1985 = 492021U;
	int32_t x1986 = INT32_MIN;
	int16_t x1987 = 18;
	volatile uint8_t x1988 = 2U;
	uint32_t t50 = 112U;

	t50 = ((x1985^(x1986<=x1987))>>x1988);

	if (t50 != 123005U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x2002 = UINT32_MAX;
	static int32_t x2003 = INT32_MIN;
	uint8_t x2004 = 11U;
	volatile uint32_t t51 = 2152U;

	t51 = ((x2001^(x2002<=x2003))>>x2004);

	if (t51 != 2097151U) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x2029 = 1U;
	int64_t x2030 = -1LL;
	static int32_t x2031 = 54117;
	uint8_t x2032 = 2U;
	volatile int32_t t52 = -13308727;

	t52 = ((x2029^(x2030<=x2031))>>x2032);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x2065 = INT16_MAX;
	int8_t x2066 = INT8_MIN;
	int16_t x2067 = -1;
	uint8_t x2068 = 1U;
	volatile int32_t t53 = 134;

	t53 = ((x2065^(x2066<=x2067))>>x2068);

	if (t53 != 16383) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x2089 = 0LLU;
	uint16_t x2090 = UINT16_MAX;
	volatile int16_t x2091 = -15;
	uint32_t x2092 = 0U;

	t54 = ((x2089^(x2090<=x2091))>>x2092);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x2161 = 1;
	int32_t x2162 = 170;
	int64_t x2163 = 17580205462LL;
	uint32_t x2164 = 0U;
	volatile int32_t t55 = -2507;

	t55 = ((x2161^(x2162<=x2163))>>x2164);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x2201 = 836U;
	static int32_t t56 = -3931;

	t56 = ((x2201^(x2202<=x2203))>>x2204);

	if (t56 != 836) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x2241 = 866U;
	int16_t x2242 = INT16_MIN;
	int64_t x2243 = INT64_MIN;
	volatile uint8_t x2244 = 15U;
	int32_t t57 = 232;

	t57 = ((x2241^(x2242<=x2243))>>x2244);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x2301 = INT8_MAX;
	static volatile int64_t x2302 = INT64_MIN;
	int32_t x2303 = -1;
	uint8_t x2304 = 0U;
	static int32_t t58 = -744909763;

	t58 = ((x2301^(x2302<=x2303))>>x2304);

	if (t58 != 126) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x2341 = INT16_MAX;
	uint32_t x2342 = UINT32_MAX;
	int32_t x2343 = 60;
	int8_t x2344 = 12;

	t59 = ((x2341^(x2342<=x2343))>>x2344);

	if (t59 != 7) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x2445 = INT64_MAX;
	int8_t x2446 = -1;
	static uint8_t x2448 = 48U;
	static int64_t t60 = 15492359107LL;

	t60 = ((x2445^(x2446<=x2447))>>x2448);

	if (t60 != 32767LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x2497 = INT64_MAX;
	int32_t x2498 = -6530;
	static uint32_t x2500 = 31U;

	t61 = ((x2497^(x2498<=x2499))>>x2500);

	if (t61 != 4294967295LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x2533 = 13992LLU;
	volatile int64_t x2535 = INT64_MIN;
	static volatile uint8_t x2536 = 1U;
	static uint64_t t62 = 118177580472289LLU;

	t62 = ((x2533^(x2534<=x2535))>>x2536);

	if (t62 != 6996LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x2541 = 385U;
	uint64_t x2542 = 1161581255420156009LLU;
	volatile int32_t x2543 = INT32_MIN;
	uint8_t x2544 = 1U;
	volatile int32_t t63 = -3836887;

	t63 = ((x2541^(x2542<=x2543))>>x2544);

	if (t63 != 192) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x2554 = 371U;
	uint64_t x2555 = 1940541022LLU;
	uint32_t x2556 = 0U;
	int32_t t64 = 125696;

	t64 = ((x2553^(x2554<=x2555))>>x2556);

	if (t64 != 28) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x2669 = 63937U;
	static int64_t x2670 = -12915LL;
	uint16_t x2671 = 10U;
	volatile uint8_t x2672 = 0U;
	volatile uint32_t t65 = 1784764U;

	t65 = ((x2669^(x2670<=x2671))>>x2672);

	if (t65 != 63936U) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x2785 = UINT64_MAX;
	int8_t x2786 = INT8_MIN;
	volatile int8_t x2787 = INT8_MIN;
	uint8_t x2788 = 7U;
	uint64_t t66 = 2547613LLU;

	t66 = ((x2785^(x2786<=x2787))>>x2788);

	if (t66 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x2805 = 238;
	volatile int32_t x2806 = -30939;
	int8_t x2807 = INT8_MAX;

	t67 = ((x2805^(x2806<=x2807))>>x2808);

	if (t67 != 29) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x2817 = INT64_MAX;
	int64_t x2819 = INT64_MIN;
	uint16_t x2820 = 0U;
	int64_t t68 = INT64_MAX;

	t68 = ((x2817^(x2818<=x2819))>>x2820);

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x2865 = 6;
	int32_t x2867 = INT32_MIN;
	static volatile int64_t x2868 = 0LL;
	int32_t t69 = 74;

	t69 = ((x2865^(x2866<=x2867))>>x2868);

	if (t69 != 7) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x2951 = 5;
	int32_t x2952 = 14;
	volatile int64_t t70 = 17393754628LL;

	t70 = ((x2949^(x2950<=x2951))>>x2952);

	if (t70 != 112LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x3017 = UINT16_MAX;
	volatile int32_t t71 = 604936791;

	t71 = ((x3017^(x3018<=x3019))>>x3020);

	if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x3053 = 209358LL;
	int16_t x3054 = INT16_MIN;
	int64_t x3055 = INT64_MIN;
	static int8_t x3056 = 9;
	int64_t t72 = -59310307476LL;

	t72 = ((x3053^(x3054<=x3055))>>x3056);

	if (t72 != 408LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x3177 = 124;
	volatile int32_t x3178 = INT32_MIN;
	uint16_t x3179 = 20256U;
	uint32_t x3180 = 3U;
	volatile int32_t t73 = -4660819;

	t73 = ((x3177^(x3178<=x3179))>>x3180);

	if (t73 != 15) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x3401 = 22U;
	int8_t x3402 = -41;
	uint32_t x3403 = UINT32_MAX;
	uint8_t x3404 = 0U;

	t74 = ((x3401^(x3402<=x3403))>>x3404);

	if (t74 != 23) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x3489 = 1U;
	volatile int64_t x3490 = INT64_MIN;
	int32_t x3491 = INT32_MIN;
	int8_t x3492 = 4;
	int32_t t75 = -2;

	t75 = ((x3489^(x3490<=x3491))>>x3492);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x3557 = 11307U;
	static int32_t x3558 = INT32_MIN;
	static volatile int64_t x3559 = -1LL;
	uint64_t x3560 = 5LLU;
	volatile int32_t t76 = 765832;

	t76 = ((x3557^(x3558<=x3559))>>x3560);

	if (t76 != 353) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x3582 = INT16_MAX;
	static int8_t x3583 = INT8_MIN;
	int32_t t77 = 13;

	t77 = ((x3581^(x3582<=x3583))>>x3584);

	if (t77 != 10) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x3613 = INT8_MAX;
	volatile int32_t x3614 = INT32_MIN;
	int32_t x3615 = -1;
	uint16_t x3616 = 2U;

	t78 = ((x3613^(x3614<=x3615))>>x3616);

	if (t78 != 31) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x3705 = UINT16_MAX;
	uint32_t x3706 = 939820115U;
	volatile uint8_t x3707 = 3U;
	int16_t x3708 = 0;
	volatile int32_t t79 = -9897;

	t79 = ((x3705^(x3706<=x3707))>>x3708);

	if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x3890 = INT64_MIN;
	static uint32_t x3891 = UINT32_MAX;
	int16_t x3892 = 1;
	volatile int64_t t80 = -804LL;

	t80 = ((x3889^(x3890<=x3891))>>x3892);

	if (t80 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x3929 = UINT16_MAX;
	volatile int16_t x3930 = 5;
	uint16_t x3932 = 4U;
	volatile int32_t t81 = 510676;

	t81 = ((x3929^(x3930<=x3931))>>x3932);

	if (t81 != 4095) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x3965 = 14684U;
	static int8_t x3966 = INT8_MIN;
	int32_t t82 = -132;

	t82 = ((x3965^(x3966<=x3967))>>x3968);

	if (t82 != 3) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x3985 = 4;
	int32_t x3986 = -461;
	uint16_t x3987 = 32U;
	uint8_t x3988 = 0U;
	static volatile int32_t t83 = -7808444;

	t83 = ((x3985^(x3986<=x3987))>>x3988);

	if (t83 != 5) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x4039 = 1;
	volatile int32_t t84 = 134;

	t84 = ((x4037^(x4038<=x4039))>>x4040);

	if (t84 != 7) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x4237 = UINT32_MAX;
	uint8_t x4238 = UINT8_MAX;
	uint8_t x4239 = UINT8_MAX;
	uint8_t x4240 = 1U;
	volatile uint32_t t85 = 952989U;

	t85 = ((x4237^(x4238<=x4239))>>x4240);

	if (t85 != 2147483647U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x4265 = 320;
	int8_t x4266 = -1;
	uint64_t x4267 = UINT64_MAX;
	static uint16_t x4268 = 14U;
	static volatile int32_t t86 = -6;

	t86 = ((x4265^(x4266<=x4267))>>x4268);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x4297 = UINT64_MAX;
	int16_t x4298 = INT16_MAX;
	static volatile uint16_t x4299 = UINT16_MAX;
	static uint16_t x4300 = 2U;
	uint64_t t87 = 345916676LLU;

	t87 = ((x4297^(x4298<=x4299))>>x4300);

	if (t87 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x4425 = 2;
	volatile int16_t x4427 = -1;
	static uint32_t x4428 = 0U;
	volatile int32_t t88 = 1090;

	t88 = ((x4425^(x4426<=x4427))>>x4428);

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x4442 = INT16_MIN;
	volatile int64_t x4443 = INT64_MIN;
	uint8_t x4444 = 12U;
	static int32_t t89 = 7177111;

	t89 = ((x4441^(x4442<=x4443))>>x4444);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t t90 = 10714909;

	t90 = ((x4465^(x4466<=x4467))>>x4468);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x4490 = -11;
	uint8_t x4491 = 15U;
	volatile uint64_t t91 = 1411686759LLU;

	t91 = ((x4489^(x4490<=x4491))>>x4492);

	if (t91 != 1077322LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x4598 = UINT64_MAX;
	static uint16_t x4599 = 1084U;

	t92 = ((x4597^(x4598<=x4599))>>x4600);

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x4633 = UINT32_MAX;
	static int32_t x4635 = 150971;
	volatile uint32_t t93 = 431720U;

	t93 = ((x4633^(x4634<=x4635))>>x4636);

	if (t93 != 536870911U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x4685 = 3;
	int64_t x4687 = INT64_MIN;
	volatile int32_t t94 = 1;

	t94 = ((x4685^(x4686<=x4687))>>x4688);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x4733 = 1;
	int16_t x4734 = INT16_MIN;
	uint64_t x4735 = UINT64_MAX;
	volatile int32_t t95 = -2021251;

	t95 = ((x4733^(x4734<=x4735))>>x4736);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x4749 = UINT16_MAX;
	int64_t x4750 = 3LL;
	int8_t x4751 = -1;
	uint32_t x4752 = 18U;
	static volatile int32_t t96 = 30;

	t96 = ((x4749^(x4750<=x4751))>>x4752);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x4891 = -12395;
	static uint8_t x4892 = 1U;
	int32_t t97 = -22907;

	t97 = ((x4889^(x4890<=x4891))>>x4892);

	if (t97 != 3947) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x4917 = 48U;
	uint64_t x4918 = 8155083513LLU;
	int32_t t98 = -180668;

	t98 = ((x4917^(x4918<=x4919))>>x4920);

	if (t98 != 12) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x4937 = 37833107391961997LLU;
	uint8_t x4938 = 50U;
	uint16_t x4939 = 511U;
	static volatile uint8_t x4940 = 5U;

	t99 = ((x4937^(x4938<=x4939))>>x4940);

	if (t99 != 1182284605998812LLU) { NG(); } else { ; }
	
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

