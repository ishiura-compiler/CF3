#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x6 = INT32_MAX;
uint8_t x32 = 1U;
int8_t x35 = 24;
uint8_t x60 = 6U;
volatile uint16_t x74 = 15U;
uint16_t x76 = 2U;
int8_t x81 = INT8_MAX;
int32_t x109 = INT32_MIN;
int64_t x117 = INT64_MIN;
static int8_t x202 = -1;
int64_t t13 = 7000300383019103LL;
int32_t x277 = -12904;
int32_t x278 = -8;
int8_t x280 = 1;
int32_t t14 = 8325997;
int32_t x302 = INT32_MAX;
int8_t x304 = 9;
volatile int16_t x390 = -1;
int64_t x430 = INT64_MIN;
uint32_t x431 = UINT32_MAX;
volatile uint64_t t19 = 6591057LLU;
static int8_t x538 = -14;
static uint64_t t23 = 485LLU;
int16_t x661 = -1;
static int32_t t25 = -1;
uint8_t x767 = 1U;
static int32_t x798 = INT32_MAX;
static int8_t x800 = 1;
static volatile int8_t x816 = 2;
int8_t x862 = INT8_MIN;
uint64_t x863 = UINT64_MAX;
uint8_t x864 = 6U;
uint16_t x920 = 12U;
uint64_t t31 = 103098LLU;
int16_t x957 = INT16_MAX;
int8_t x1016 = 35;
volatile uint64_t t33 = 7LLU;
uint64_t x1119 = 54610128LLU;
uint8_t x1120 = 7U;
volatile int32_t x1158 = -257226206;
int16_t x1159 = -7;
static int32_t x1160 = 0;
uint32_t x1197 = 123U;
int8_t x1200 = 1;
int64_t x1206 = -1LL;
static int32_t t40 = 405;
static volatile int16_t x1213 = INT16_MIN;
static volatile int32_t x1233 = INT32_MIN;
int32_t x1234 = -1;
static volatile int32_t t42 = 46;
int16_t x1309 = -1;
int8_t x1310 = INT8_MIN;
uint64_t x1314 = UINT64_MAX;
uint64_t t46 = 7LLU;
static volatile int8_t x1399 = INT8_MAX;
volatile uint64_t x1418 = 1850162568679316LLU;
int64_t t51 = 63412511365LL;
int8_t x1547 = 0;
volatile int32_t t52 = 53;
int16_t x1685 = INT16_MAX;
static volatile uint16_t x1688 = 17U;
int64_t t53 = 66182597691760LL;
volatile int64_t x1729 = -58648622541266059LL;
volatile uint8_t x1732 = 7U;
static int64_t t55 = 8106352789LL;
int16_t x1782 = INT16_MAX;
uint64_t x1880 = 0LLU;
int64_t x2038 = INT64_MAX;
int16_t x2040 = 1;
uint64_t x2225 = 85LLU;
volatile int8_t x2228 = 2;
static volatile uint64_t t63 = 10387206LLU;
static int64_t x2301 = INT64_MAX;
static volatile uint64_t t65 = 564685854LLU;
int64_t x2305 = 0LL;
uint64_t t67 = 124LLU;
uint64_t x2347 = 1LLU;
int32_t x2361 = INT32_MIN;
static volatile int8_t x2374 = INT8_MIN;
uint16_t x2376 = 0U;
static volatile int16_t x2402 = 1;
volatile int8_t x2403 = -1;
int16_t x2481 = INT16_MAX;
volatile int8_t x2482 = -1;
int64_t x2483 = -1LL;
volatile int32_t x2522 = 7134;
uint64_t t76 = 127493LLU;
volatile int16_t x2869 = INT16_MAX;
int8_t x2871 = INT8_MAX;
static uint64_t x2889 = 3896396639748666LLU;
volatile int8_t x2890 = -1;
int32_t x2891 = 58335760;
int32_t x2986 = -16681959;
volatile uint64_t t84 = 1516543239LLU;
int8_t x3109 = INT8_MAX;
volatile uint32_t x3110 = UINT32_MAX;
int16_t x3123 = -2;
int8_t x3238 = -2;
int32_t t91 = 80897075;
volatile int16_t x3257 = INT16_MIN;
static uint64_t x3321 = 2265272LLU;
uint64_t t95 = 124822611097526LLU;
int16_t x3428 = 13;
uint32_t t96 = 311U;


void f0(void) {
	uint64_t x5 = 910182LLU;
	static volatile int64_t x7 = INT64_MAX;
	static int64_t x8 = 1LL;
	uint64_t t0 = 79254014203898LLU;

	t0 = (((x5%x6)*x7)<<x8);

	if (t0 != 18446744073707731252LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x29 = 3;
	uint64_t x30 = UINT64_MAX;
	int64_t x31 = -1LL;
	static volatile uint64_t t1 = 10591746LLU;

	t1 = (((x29%x30)*x31)<<x32);

	if (t1 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x33 = INT32_MIN;
	int8_t x34 = -1;
	uint16_t x36 = 19U;
	volatile int32_t t2 = -51335;

	t2 = (((x33%x34)*x35)<<x36);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x37 = -1;
	int8_t x38 = -6;
	int16_t x39 = INT16_MIN;
	volatile int16_t x40 = 1;
	int32_t t3 = -27573599;

	t3 = (((x37%x38)*x39)<<x40);

	if (t3 != 65536) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x57 = INT32_MIN;
	int8_t x58 = INT8_MIN;
	int8_t x59 = 6;
	int32_t t4 = 148;

	t4 = (((x57%x58)*x59)<<x60);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x61 = 1U;
	int8_t x62 = 23;
	uint8_t x63 = 0U;
	uint8_t x64 = 3U;
	static volatile int32_t t5 = -5;

	t5 = (((x61%x62)*x63)<<x64);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x73 = INT64_MAX;
	volatile uint16_t x75 = 10U;
	int64_t t6 = 15733090043568073LL;

	t6 = (((x73%x74)*x75)<<x76);

	if (t6 != 280LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x82 = -2506;
	uint64_t x83 = 120052740761421LLU;
	static uint32_t x84 = 1U;
	volatile uint64_t t7 = 5299154100048801666LLU;

	t7 = (((x81%x82)*x83)<<x84);

	if (t7 != 30493396153400934LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x110 = INT64_MAX;
	int8_t x111 = -8;
	static uint32_t x112 = 24U;
	volatile int64_t t8 = 184397LL;

	t8 = (((x109%x110)*x111)<<x112);

	if (t8 != 288230376151711744LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x118 = 14343126U;
	int16_t x119 = -1;
	uint16_t x120 = 1U;
	volatile int64_t t9 = -21571LL;

	t9 = (((x117%x118)*x119)<<x120);

	if (t9 != 16099792LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x161 = INT8_MAX;
	uint32_t x162 = 60074269U;
	static uint64_t x163 = 0LLU;
	uint64_t x164 = 6LLU;
	volatile uint64_t t10 = 102650LLU;

	t10 = (((x161%x162)*x163)<<x164);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x173 = INT16_MIN;
	int16_t x174 = -1;
	int32_t x175 = INT32_MAX;
	static uint8_t x176 = 5U;
	int32_t t11 = 219384;

	t11 = (((x173%x174)*x175)<<x176);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x201 = INT8_MIN;
	uint64_t x203 = UINT64_MAX;
	uint8_t x204 = 4U;
	uint64_t t12 = 50LLU;

	t12 = (((x201%x202)*x203)<<x204);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x209 = 40U;
	static volatile int8_t x210 = INT8_MIN;
	int64_t x211 = 29807765376LL;
	volatile int8_t x212 = 2;

	t13 = (((x209%x210)*x211)<<x212);

	if (t13 != 4769242460160LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x279 = -32592224;

	t14 = (((x277%x278)*x279)<<x280);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x301 = INT32_MAX;
	int64_t x303 = INT64_MIN;
	int64_t t15 = 1LL;

	t15 = (((x301%x302)*x303)<<x304);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x305 = 89235U;
	int32_t x306 = INT32_MIN;
	static uint8_t x307 = 7U;
	uint8_t x308 = 0U;
	volatile uint32_t t16 = 1846913682U;

	t16 = (((x305%x306)*x307)<<x308);

	if (t16 != 624645U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x389 = -1;
	int8_t x391 = 0;
	int8_t x392 = 3;
	int32_t t17 = -94062636;

	t17 = (((x389%x390)*x391)<<x392);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x425 = UINT32_MAX;
	int32_t x426 = INT32_MIN;
	int8_t x427 = INT8_MIN;
	uint8_t x428 = 1U;
	uint32_t t18 = 239694669U;

	t18 = (((x425%x426)*x427)<<x428);

	if (t18 != 256U) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x429 = 55809658761LLU;
	uint8_t x432 = 1U;

	t19 = (((x429%x430)*x431)<<x432);

	if (t19 != 18232716404471652590LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x457 = -1;
	static volatile uint64_t x458 = 90883024816935LLU;
	int32_t x459 = INT32_MIN;
	uint8_t x460 = 28U;
	uint64_t t20 = 0LLU;

	t20 = (((x457%x458)*x459)<<x460);

	if (t20 != 2882303761517117440LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x469 = -1;
	static uint64_t x470 = 4529410LLU;
	static int16_t x471 = -7393;
	uint8_t x472 = 0U;
	uint64_t t21 = 618964478LLU;

	t21 = (((x469%x470)*x471)<<x472);

	if (t21 != 18446744050027961331LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x501 = INT16_MIN;
	uint64_t x502 = UINT64_MAX;
	int64_t x503 = -13212285079LL;
	uint8_t x504 = 20U;
	volatile uint64_t t22 = 20531809942LLU;

	t22 = (((x501%x502)*x503)<<x504);

	if (t22 != 11248800788840972288LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x537 = UINT64_MAX;
	volatile uint32_t x539 = 362U;
	uint8_t x540 = 27U;

	t23 = (((x537%x538)*x539)<<x540);

	if (t23 != 631628627968LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x662 = 52U;
	static int16_t x663 = -511;
	uint8_t x664 = 2U;
	volatile int32_t t24 = 5000005;

	t24 = (((x661%x662)*x663)<<x664);

	if (t24 != 2044) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x681 = UINT8_MAX;
	static int16_t x682 = -1;
	int8_t x683 = -1;
	int64_t x684 = 1LL;

	t25 = (((x681%x682)*x683)<<x684);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x741 = INT16_MIN;
	static int8_t x742 = -1;
	static int8_t x743 = INT8_MIN;
	uint8_t x744 = 10U;
	int32_t t26 = 172;

	t26 = (((x741%x742)*x743)<<x744);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x765 = UINT64_MAX;
	uint8_t x766 = 13U;
	static uint8_t x768 = 31U;
	static volatile uint64_t t27 = 476LLU;

	t27 = (((x765%x766)*x767)<<x768);

	if (t27 != 4294967296LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x797 = -1LL;
	volatile uint64_t x799 = UINT64_MAX;
	uint64_t t28 = 7766504272290LLU;

	t28 = (((x797%x798)*x799)<<x800);

	if (t28 != 2LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x813 = 486U;
	int16_t x814 = INT16_MIN;
	volatile int16_t x815 = 0;
	static volatile int32_t t29 = 1547626;

	t29 = (((x813%x814)*x815)<<x816);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x861 = 0U;
	static uint64_t t30 = 8LLU;

	t30 = (((x861%x862)*x863)<<x864);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x917 = INT8_MIN;
	int32_t x918 = INT32_MIN;
	uint64_t x919 = 5644466627067629779LLU;

	t31 = (((x917%x918)*x919)<<x920);

	if (t31 != 11245796895045976064LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x958 = INT8_MAX;
	uint8_t x959 = 0U;
	uint64_t x960 = 9LLU;
	static volatile int32_t t32 = -152661;

	t32 = (((x957%x958)*x959)<<x960);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1013 = 10U;
	static volatile int64_t x1014 = -29928600338LL;
	volatile uint64_t x1015 = 3302254480476LLU;

	t33 = (((x1013%x1014)*x1015)<<x1016);

	if (t33 != 5218507310430683136LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1069 = -24;
	uint8_t x1070 = 1U;
	static int16_t x1071 = INT16_MIN;
	volatile uint16_t x1072 = 0U;
	volatile int32_t t34 = -117133177;

	t34 = (((x1069%x1070)*x1071)<<x1072);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1117 = INT64_MAX;
	static int64_t x1118 = -324LL;
	uint64_t t35 = 22256636891LLU;

	t35 = (((x1117%x1118)*x1119)<<x1120);

	if (t35 != 1307148023808LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x1157 = -50;
	int32_t t36 = -153;

	t36 = (((x1157%x1158)*x1159)<<x1160);

	if (t36 != 350) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1165 = -6LL;
	static volatile uint64_t x1166 = 130035603794562LLU;
	uint8_t x1167 = 1U;
	uint16_t x1168 = 3U;
	uint64_t t37 = 2169058788006327LLU;

	t37 = (((x1165%x1166)*x1167)<<x1168);

	if (t37 != 186840134246816LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x1198 = INT16_MIN;
	uint16_t x1199 = UINT16_MAX;
	static volatile uint32_t t38 = 732699751U;

	t38 = (((x1197%x1198)*x1199)<<x1200);

	if (t38 != 16121610U) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x1205 = INT32_MIN;
	uint8_t x1207 = 5U;
	volatile uint8_t x1208 = 15U;
	int64_t t39 = -11894LL;

	t39 = (((x1205%x1206)*x1207)<<x1208);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1209 = INT8_MAX;
	int32_t x1210 = -3512110;
	int8_t x1211 = 18;
	int32_t x1212 = 0;

	t40 = (((x1209%x1210)*x1211)<<x1212);

	if (t40 != 2286) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1214 = INT32_MIN;
	uint64_t x1215 = UINT64_MAX;
	uint8_t x1216 = 3U;
	uint64_t t41 = 1874900533553300756LLU;

	t41 = (((x1213%x1214)*x1215)<<x1216);

	if (t41 != 262144LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x1235 = -1;
	static int64_t x1236 = 0LL;

	t42 = (((x1233%x1234)*x1235)<<x1236);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1261 = UINT32_MAX;
	uint64_t x1262 = 15902688214711769LLU;
	int64_t x1263 = INT64_MAX;
	uint16_t x1264 = 10U;
	volatile uint64_t t43 = 94015998872126LLU;

	t43 = (((x1261%x1262)*x1263)<<x1264);

	if (t43 != 18446739675663041536LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x1265 = UINT32_MAX;
	int16_t x1266 = INT16_MIN;
	int16_t x1267 = INT16_MAX;
	static uint8_t x1268 = 8U;
	volatile uint32_t t44 = 26U;

	t44 = (((x1265%x1266)*x1267)<<x1268);

	if (t44 != 4278190336U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x1311 = 404730LLU;
	volatile uint8_t x1312 = 3U;
	uint64_t t45 = 16732LLU;

	t45 = (((x1309%x1310)*x1311)<<x1312);

	if (t45 != 18446744073706313776LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x1313 = 2U;
	uint16_t x1315 = 54U;
	uint8_t x1316 = 14U;

	t46 = (((x1313%x1314)*x1315)<<x1316);

	if (t46 != 1769472LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1397 = INT32_MAX;
	int64_t x1398 = -1073119138013445611LL;
	uint8_t x1400 = 0U;
	volatile int64_t t47 = 7096LL;

	t47 = (((x1397%x1398)*x1399)<<x1400);

	if (t47 != 272730423169LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint16_t x1417 = UINT16_MAX;
	static uint32_t x1419 = 28699181U;
	volatile uint32_t x1420 = 12U;
	static uint64_t t48 = 353350981124864LLU;

	t48 = (((x1417%x1418)*x1419)<<x1420);

	if (t48 != 7703760186716160LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x1445 = INT16_MAX;
	uint32_t x1446 = 146909263U;
	int16_t x1447 = -1;
	volatile uint16_t x1448 = 2U;
	uint32_t t49 = 727129308U;

	t49 = (((x1445%x1446)*x1447)<<x1448);

	if (t49 != 4294836228U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x1509 = -1;
	uint32_t x1510 = UINT32_MAX;
	uint32_t x1511 = UINT32_MAX;
	static uint8_t x1512 = 10U;
	uint32_t t50 = 583U;

	t50 = (((x1509%x1510)*x1511)<<x1512);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x1529 = 12052LL;
	static int64_t x1530 = -1LL;
	uint32_t x1531 = 1839U;
	int16_t x1532 = 5;

	t51 = (((x1529%x1530)*x1531)<<x1532);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1545 = INT8_MIN;
	static volatile uint8_t x1546 = 6U;
	uint16_t x1548 = 0U;

	t52 = (((x1545%x1546)*x1547)<<x1548);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x1686 = -1LL;
	int64_t x1687 = -1LL;

	t53 = (((x1685%x1686)*x1687)<<x1688);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x1730 = 37;
	volatile uint64_t x1731 = 20282671370LLU;
	static uint64_t t54 = 486LLU;

	t54 = (((x1729%x1730)*x1731)<<x1732);

	if (t54 != 18446715515708262656LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x1733 = INT8_MAX;
	int64_t x1734 = INT64_MAX;
	static uint16_t x1735 = 0U;
	static uint8_t x1736 = 2U;

	t55 = (((x1733%x1734)*x1735)<<x1736);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x1737 = -1;
	int8_t x1738 = INT8_MIN;
	int16_t x1739 = INT16_MIN;
	int8_t x1740 = 6;
	volatile int32_t t56 = 5;

	t56 = (((x1737%x1738)*x1739)<<x1740);

	if (t56 != 2097152) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x1781 = 0;
	uint64_t x1783 = 63608040649LLU;
	int16_t x1784 = 1;
	static uint64_t t57 = 27854LLU;

	t57 = (((x1781%x1782)*x1783)<<x1784);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x1817 = INT64_MIN;
	static int64_t x1818 = INT64_MIN;
	static int8_t x1819 = -42;
	int64_t x1820 = 1LL;
	volatile int64_t t58 = -739894320785451848LL;

	t58 = (((x1817%x1818)*x1819)<<x1820);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x1877 = -1LL;
	int64_t x1878 = INT64_MIN;
	volatile int32_t x1879 = INT32_MIN;
	static volatile int64_t t59 = 1846708772750LL;

	t59 = (((x1877%x1878)*x1879)<<x1880);

	if (t59 != 2147483648LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x2005 = -501592879391208103LL;
	static int8_t x2006 = INT8_MIN;
	volatile int16_t x2007 = -1;
	int32_t x2008 = 3;
	volatile int64_t t60 = -109565858927779108LL;

	t60 = (((x2005%x2006)*x2007)<<x2008);

	if (t60 != 312LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x2037 = 226774727U;
	uint64_t x2039 = 690894926148LLU;
	uint64_t t61 = 764122863LLU;

	t61 = (((x2037%x2038)*x2039)<<x2040);

	if (t61 != 18207111346442897336LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x2181 = 1U;
	int32_t x2182 = -1;
	static uint64_t x2183 = 4103193354LLU;
	uint16_t x2184 = 6U;
	uint64_t t62 = 2075025994425774146LLU;

	t62 = (((x2181%x2182)*x2183)<<x2184);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x2226 = 15826;
	volatile int16_t x2227 = INT16_MAX;

	t63 = (((x2225%x2226)*x2227)<<x2228);

	if (t63 != 11140780LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x2273 = 0U;
	int8_t x2274 = -1;
	int32_t x2275 = INT32_MIN;
	uint32_t x2276 = 0U;
	int32_t t64 = 1822109;

	t64 = (((x2273%x2274)*x2275)<<x2276);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x2302 = INT32_MIN;
	uint64_t x2303 = UINT64_MAX;
	volatile uint8_t x2304 = 3U;

	t65 = (((x2301%x2302)*x2303)<<x2304);

	if (t65 != 18446744056529682440LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x2306 = -8940987LL;
	int8_t x2307 = INT8_MIN;
	static uint16_t x2308 = 14U;
	volatile int64_t t66 = 26LL;

	t66 = (((x2305%x2306)*x2307)<<x2308);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x2333 = INT8_MIN;
	volatile int16_t x2334 = 2;
	uint64_t x2335 = UINT64_MAX;
	volatile uint16_t x2336 = 45U;

	t67 = (((x2333%x2334)*x2335)<<x2336);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x2345 = 3U;
	uint32_t x2346 = UINT32_MAX;
	static uint16_t x2348 = 57U;
	uint64_t t68 = 1721549403454966072LLU;

	t68 = (((x2345%x2346)*x2347)<<x2348);

	if (t68 != 432345564227567616LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x2353 = INT16_MIN;
	uint32_t x2354 = 1U;
	static uint64_t x2355 = UINT64_MAX;
	uint16_t x2356 = 0U;
	uint64_t t69 = 3333001557LLU;

	t69 = (((x2353%x2354)*x2355)<<x2356);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x2362 = 325508282U;
	static int16_t x2363 = INT16_MAX;
	static int8_t x2364 = 1;
	uint32_t t70 = 114087U;

	t70 = (((x2361%x2362)*x2363)<<x2364);

	if (t70 != 3161872568U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x2365 = 2960U;
	int64_t x2366 = INT64_MIN;
	static uint16_t x2367 = UINT16_MAX;
	int16_t x2368 = 27;
	volatile int64_t t71 = 237184834LL;

	t71 = (((x2365%x2366)*x2367)<<x2368);

	if (t71 != 26036038061260800LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x2373 = 6447U;
	volatile uint32_t x2375 = 108U;
	static uint32_t t72 = 30U;

	t72 = (((x2373%x2374)*x2375)<<x2376);

	if (t72 != 696276U) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint8_t x2401 = 11U;
	int8_t x2404 = 1;
	static volatile int32_t t73 = 2049068;

	t73 = (((x2401%x2402)*x2403)<<x2404);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x2484 = 1U;
	volatile int64_t t74 = 50979315514LL;

	t74 = (((x2481%x2482)*x2483)<<x2484);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x2521 = -1;
	int16_t x2523 = INT16_MIN;
	volatile uint32_t x2524 = 1U;
	static volatile int32_t t75 = -29982421;

	t75 = (((x2521%x2522)*x2523)<<x2524);

	if (t75 != 65536) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x2537 = INT32_MIN;
	volatile int32_t x2538 = INT32_MIN;
	uint64_t x2539 = UINT64_MAX;
	uint8_t x2540 = 0U;

	t76 = (((x2537%x2538)*x2539)<<x2540);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x2569 = 119815243U;
	int16_t x2570 = -11749;
	int16_t x2571 = 13218;
	volatile int16_t x2572 = 3;
	uint32_t t77 = 49151U;

	t77 = (((x2569%x2570)*x2571)<<x2572);

	if (t77 != 3884499888U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x2773 = 1U;
	int32_t x2774 = INT32_MIN;
	uint64_t x2775 = 1372367503350337LLU;
	int32_t x2776 = 1;
	uint64_t t78 = 227598127LLU;

	t78 = (((x2773%x2774)*x2775)<<x2776);

	if (t78 != 2744735006700674LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x2837 = 21985211U;
	volatile uint64_t x2838 = UINT64_MAX;
	uint64_t x2839 = 0LLU;
	uint8_t x2840 = 19U;
	uint64_t t79 = 10781013304057LLU;

	t79 = (((x2837%x2838)*x2839)<<x2840);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x2870 = -28304629LL;
	volatile uint16_t x2872 = 0U;
	volatile int64_t t80 = 28575811747LL;

	t80 = (((x2869%x2870)*x2871)<<x2872);

	if (t80 != 4161409LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x2892 = 3U;
	static volatile uint64_t t81 = 5LLU;

	t81 = (((x2889%x2890)*x2891)<<x2892);

	if (t81 != 6276863558070222080LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x2937 = INT64_MIN;
	static uint16_t x2938 = 4372U;
	static volatile int16_t x2939 = INT16_MIN;
	int8_t x2940 = 2;
	volatile int64_t t82 = -1LL;

	t82 = (((x2937%x2938)*x2939)<<x2940);

	if (t82 != 371195904LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x2945 = -30;
	int64_t x2946 = INT64_MIN;
	int16_t x2947 = -1;
	static uint32_t x2948 = 12U;
	volatile int64_t t83 = -212LL;

	t83 = (((x2945%x2946)*x2947)<<x2948);

	if (t83 != 122880LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x2985 = INT64_MIN;
	volatile uint64_t x2987 = UINT64_MAX;
	int32_t x2988 = 22;

	t84 = (((x2985%x2986)*x2987)<<x2988);

	if (t84 != 44129627144192LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x3029 = UINT16_MAX;
	uint8_t x3030 = 33U;
	uint64_t x3031 = UINT64_MAX;
	static volatile uint8_t x3032 = 0U;
	volatile uint64_t t85 = 5015LLU;

	t85 = (((x3029%x3030)*x3031)<<x3032);

	if (t85 != 18446744073709551586LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x3073 = -1LL;
	int8_t x3074 = -2;
	int16_t x3075 = -330;
	uint16_t x3076 = 0U;
	int64_t t86 = -2438104358LL;

	t86 = (((x3073%x3074)*x3075)<<x3076);

	if (t86 != 330LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x3111 = 323055665;
	uint8_t x3112 = 14U;
	volatile uint32_t t87 = 2060U;

	t87 = (((x3109%x3110)*x3111)<<x3112);

	if (t87 != 2853421056U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x3121 = INT16_MIN;
	static uint64_t x3122 = 1LLU;
	uint8_t x3124 = 22U;
	volatile uint64_t t88 = 683622242186943LLU;

	t88 = (((x3121%x3122)*x3123)<<x3124);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x3125 = -4;
	uint64_t x3126 = UINT64_MAX;
	int64_t x3127 = 10755188847719LL;
	static volatile uint16_t x3128 = 6U;
	static uint64_t t89 = 5363824195926876LLU;

	t89 = (((x3125%x3126)*x3127)<<x3128);

	if (t89 != 18443990745364535552LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x3165 = INT64_MAX;
	uint8_t x3166 = 1U;
	int64_t x3167 = -1LL;
	uint16_t x3168 = 2U;
	volatile int64_t t90 = 0LL;

	t90 = (((x3165%x3166)*x3167)<<x3168);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x3237 = INT8_MIN;
	static int32_t x3239 = 122;
	int8_t x3240 = 0;

	t91 = (((x3237%x3238)*x3239)<<x3240);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x3253 = INT8_MIN;
	uint64_t x3254 = 7400815182LLU;
	volatile uint32_t x3255 = 1597589U;
	volatile uint8_t x3256 = 11U;
	uint64_t t92 = 45LLU;

	t92 = (((x3253%x3254)*x3255)<<x3256);

	if (t92 != 3796659713326268416LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x3258 = 202181U;
	int8_t x3259 = INT8_MIN;
	volatile uint8_t x3260 = 3U;
	volatile uint32_t t93 = 910674774U;

	t93 = (((x3257%x3258)*x3259)<<x3260);

	if (t93 != 4291337216U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x3301 = -1;
	static int16_t x3302 = -1;
	static int8_t x3303 = -18;
	static volatile uint8_t x3304 = 0U;
	int32_t t94 = -431353234;

	t94 = (((x3301%x3302)*x3303)<<x3304);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x3322 = -1;
	static int8_t x3323 = -2;
	int64_t x3324 = 1LL;

	t95 = (((x3321%x3322)*x3323)<<x3324);

	if (t95 != 18446744073700490528LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x3425 = 0U;
	int16_t x3426 = INT16_MIN;
	int32_t x3427 = -2;

	t96 = (((x3425%x3426)*x3427)<<x3428);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x3429 = INT16_MIN;
	int16_t x3430 = -1;
	volatile int64_t x3431 = -1LL;
	volatile int32_t x3432 = 3;
	int64_t t97 = 8562398859875LL;

	t97 = (((x3429%x3430)*x3431)<<x3432);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x3481 = 0U;
	int8_t x3482 = INT8_MAX;
	volatile int8_t x3483 = 30;
	int8_t x3484 = 14;
	volatile int32_t t98 = 3136135;

	t98 = (((x3481%x3482)*x3483)<<x3484);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x3485 = INT16_MIN;
	static int32_t x3486 = 2284217;
	int16_t x3487 = -2;
	static int64_t x3488 = 0LL;
	static int32_t t99 = 525806514;

	t99 = (((x3485%x3486)*x3487)<<x3488);

	if (t99 != 65536) { NG(); } else { ; }
	
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

