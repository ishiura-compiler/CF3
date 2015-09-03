#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t t2 = 0;
int64_t x13 = -1916805097LL;
int8_t x16 = -3;
volatile int16_t x20 = -25;
int32_t x26 = INT32_MIN;
uint64_t x33 = UINT64_MAX;
int16_t x36 = INT16_MAX;
volatile int16_t x43 = 1680;
static int8_t x52 = INT8_MIN;
int64_t x54 = -1LL;
volatile int64_t t13 = -7974650817389085LL;
int64_t x58 = 5709LL;
volatile uint32_t t14 = 6234215U;
int64_t t15 = 0LL;
int8_t x70 = INT8_MIN;
volatile int32_t x73 = 55797708;
uint8_t x80 = UINT8_MAX;
int32_t t18 = -122888;
uint16_t x84 = UINT16_MAX;
static int64_t x85 = INT64_MIN;
int16_t x90 = INT16_MIN;
volatile uint64_t t21 = 19LLU;
static int32_t x94 = INT32_MIN;
volatile uint32_t x95 = 132239U;
int8_t x99 = -1;
volatile int64_t t23 = -26529141LL;
volatile uint16_t x101 = 217U;
static int32_t t24 = 4398;
uint32_t x109 = 1465482559U;
static uint32_t x111 = UINT32_MAX;
static volatile uint32_t t26 = 615286110U;
volatile uint32_t x115 = 18612U;
int8_t x126 = INT8_MIN;
int8_t x137 = INT8_MIN;
int8_t x150 = 1;
uint32_t x151 = UINT32_MAX;
volatile uint32_t x154 = UINT32_MAX;
uint32_t x158 = 1447778714U;
uint16_t x164 = 30U;
volatile int64_t x178 = INT64_MIN;
static uint16_t x179 = 4U;
int64_t x181 = 9841989499LL;
volatile uint64_t t44 = 131982080LLU;
volatile int32_t t45 = 58605759;
volatile int8_t x189 = -1;
static int32_t x196 = INT32_MAX;
int64_t x199 = -416578LL;
volatile uint64_t t49 = 1140266405LLU;
volatile int64_t x209 = INT64_MIN;
int32_t x213 = INT32_MIN;
uint64_t t52 = 6167435346LLU;
int64_t x223 = INT64_MIN;
volatile uint64_t x226 = 409091876LLU;
uint16_t x232 = UINT16_MAX;
int32_t t55 = 1303;
int64_t x233 = 1879525LL;
static uint32_t x236 = 85623U;
static uint32_t x239 = UINT32_MAX;
int64_t t57 = -141250712578722728LL;
int64_t x241 = 11777401619LL;
volatile int16_t x242 = INT16_MAX;
volatile int32_t t59 = -104636930;
int64_t x250 = 0LL;
uint32_t x254 = UINT32_MAX;
static uint32_t x256 = UINT32_MAX;
volatile uint32_t t61 = 1577521222U;
static int64_t x258 = -28294881064LL;
int32_t x263 = INT32_MIN;
volatile int16_t x264 = INT16_MIN;
uint16_t x267 = UINT16_MAX;
static volatile uint64_t t64 = 2LLU;
int64_t t67 = -245319LL;
static volatile int32_t t69 = 442;
int8_t x289 = 3;
int8_t x295 = INT8_MAX;
uint16_t x297 = 2U;
uint16_t x300 = 1770U;
int32_t x306 = INT32_MIN;
static int8_t x308 = INT8_MIN;
uint32_t t76 = 30U;
static int32_t x319 = -1;
int32_t x331 = 53506;
int32_t x337 = 223722;
volatile int64_t t82 = -896144LL;
int64_t x349 = INT64_MAX;
int64_t x359 = 28LL;
volatile int32_t t88 = 12348119;
static int16_t x369 = 0;
int32_t x374 = 1836312;
int32_t x376 = INT32_MIN;
volatile int32_t t92 = 2;
uint16_t x385 = UINT16_MAX;
volatile uint64_t t94 = 0LLU;
volatile int32_t x394 = -1;
static int32_t x407 = INT32_MIN;
int32_t t98 = -334965919;
int64_t x411 = 332929951118833LL;


void f0(void) {
	int32_t x1 = -1;
	int32_t x2 = -1;
	uint64_t x3 = UINT64_MAX;
	uint16_t x4 = 3U;
	uint64_t t0 = 144926790924810LLU;

	t0 = ((x1<x2)+(x3^x4));

	if (t0 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 9283414LLU;
	int8_t x6 = INT8_MIN;
	int32_t x7 = INT32_MIN;
	int32_t x8 = 15;
	volatile int32_t t1 = 0;

	t1 = ((x5<x6)+(x7^x8));

	if (t1 != -2147483632) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int16_t x10 = INT16_MIN;
	int32_t x11 = INT32_MIN;
	uint16_t x12 = 507U;

	t2 = ((x9<x10)+(x11^x12));

	if (t2 != -2147483141) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x14 = INT32_MIN;
	static int32_t x15 = -1;
	volatile int32_t t3 = 4162765;

	t3 = ((x13<x14)+(x15^x16));

	if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	int16_t x18 = INT16_MIN;
	uint64_t x19 = 491116440LLU;
	uint64_t t4 = 1861317027239683LLU;

	t4 = ((x17<x18)+(x19^x20));

	if (t4 != 18446744073218435199LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x21 = UINT8_MAX;
	volatile int64_t x22 = INT64_MIN;
	static uint32_t x23 = 408U;
	int64_t x24 = -1LL;
	static int64_t t5 = 71020085062534LL;

	t5 = ((x21<x22)+(x23^x24));

	if (t5 != -409LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 5202246LLU;
	static uint16_t x27 = 20U;
	int16_t x28 = 9;
	int32_t t6 = -43;

	t6 = ((x25<x26)+(x27^x28));

	if (t6 != 30) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	volatile uint8_t x30 = 5U;
	int8_t x31 = -1;
	static int8_t x32 = -12;
	int32_t t7 = -16898089;

	t7 = ((x29<x30)+(x31^x32));

	if (t7 != 12) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = INT32_MIN;
	uint64_t x35 = UINT64_MAX;
	uint64_t t8 = 5206LLU;

	t8 = ((x33<x34)+(x35^x36));

	if (t8 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = INT16_MAX;
	static int64_t x38 = INT64_MIN;
	int32_t x39 = INT32_MAX;
	int64_t x40 = INT64_MIN;
	volatile int64_t t9 = -2LL;

	t9 = ((x37<x38)+(x39^x40));

	if (t9 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	volatile int32_t x42 = -14667;
	volatile uint64_t x44 = 61110LLU;
	static uint64_t t10 = 2605259424656544277LLU;

	t10 = ((x41<x42)+(x43^x44));

	if (t10 != 59431LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	static int16_t x46 = INT16_MIN;
	int16_t x47 = INT16_MIN;
	int8_t x48 = INT8_MIN;
	int32_t t11 = 2;

	t11 = ((x45<x46)+(x47^x48));

	if (t11 != 32640) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -1LL;
	uint16_t x50 = 9212U;
	static uint16_t x51 = UINT16_MAX;
	static volatile int32_t t12 = 592327;

	t12 = ((x49<x50)+(x51^x52));

	if (t12 != -65408) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 3494485380688LLU;
	int64_t x55 = INT64_MIN;
	static volatile int16_t x56 = 133;

	t13 = ((x53<x54)+(x55^x56));

	if (t13 != -9223372036854775674LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -1LL;
	volatile int8_t x59 = INT8_MIN;
	static uint32_t x60 = 5U;

	t14 = ((x57<x58)+(x59^x60));

	if (t14 != 4294967174U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	int8_t x62 = INT8_MIN;
	static uint32_t x63 = 63U;
	int64_t x64 = 8611750852801LL;

	t15 = ((x61<x62)+(x63^x64));

	if (t15 != 8611750852862LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = INT32_MAX;
	int16_t x71 = INT16_MIN;
	static uint16_t x72 = 14U;
	int32_t t16 = 2228613;

	t16 = ((x69<x70)+(x71^x72));

	if (t16 != -32754) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x74 = 1;
	static int64_t x75 = INT64_MAX;
	int16_t x76 = INT16_MIN;
	int64_t t17 = 5650894LL;

	t17 = ((x73<x74)+(x75^x76));

	if (t17 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = INT8_MIN;
	int16_t x78 = INT16_MIN;
	uint8_t x79 = 84U;

	t18 = ((x77<x78)+(x79^x80));

	if (t18 != 171) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x81 = 0U;
	volatile int32_t x82 = INT32_MIN;
	int16_t x83 = -67;
	volatile int32_t t19 = -31;

	t19 = ((x81<x82)+(x83^x84));

	if (t19 != -65470) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x86 = 3;
	volatile uint32_t x87 = 6859U;
	int8_t x88 = -1;
	uint32_t t20 = 271U;

	t20 = ((x85<x86)+(x87^x88));

	if (t20 != 4294960437U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x89 = 745473003U;
	volatile uint8_t x91 = UINT8_MAX;
	static uint64_t x92 = 1222LLU;

	t21 = ((x89<x90)+(x91^x92));

	if (t21 != 1082LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = INT8_MIN;
	int8_t x96 = -62;
	volatile uint32_t t22 = 898621842U;

	t22 = ((x93<x94)+(x95^x96));

	if (t22 != 4294835021U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x97 = INT32_MAX;
	volatile int64_t x98 = -1LL;
	static volatile int64_t x100 = 50340LL;

	t23 = ((x97<x98)+(x99^x100));

	if (t23 != -50341LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x102 = -9;
	uint8_t x103 = 110U;
	int32_t x104 = -1;

	t24 = ((x101<x102)+(x103^x104));

	if (t24 != -111) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x105 = 352U;
	int16_t x106 = -1;
	uint8_t x107 = 17U;
	int32_t x108 = INT32_MAX;
	volatile int32_t t25 = 1;

	t25 = ((x105<x106)+(x107^x108));

	if (t25 != 2147483630) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x110 = INT32_MIN;
	uint32_t x112 = UINT32_MAX;

	t26 = ((x109<x110)+(x111^x112));

	if (t26 != 1U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = INT32_MIN;
	int8_t x114 = 1;
	int8_t x116 = INT8_MIN;
	uint32_t t27 = 75362593U;

	t27 = ((x113<x114)+(x115^x116));

	if (t27 != 4294948661U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = -1;
	uint8_t x118 = UINT8_MAX;
	int32_t x119 = INT32_MIN;
	static int8_t x120 = INT8_MIN;
	int32_t t28 = 5243;

	t28 = ((x117<x118)+(x119^x120));

	if (t28 != 2147483521) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x121 = UINT8_MAX;
	int64_t x122 = -1LL;
	int64_t x123 = INT64_MIN;
	volatile int16_t x124 = -1;
	volatile int64_t t29 = INT64_MAX;

	t29 = ((x121<x122)+(x123^x124));

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = INT32_MIN;
	int64_t x127 = INT64_MIN;
	int16_t x128 = 1;
	static int64_t t30 = 29537994LL;

	t30 = ((x125<x126)+(x127^x128));

	if (t30 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x129 = INT64_MIN;
	static volatile uint16_t x130 = UINT16_MAX;
	volatile uint64_t x131 = UINT64_MAX;
	volatile uint64_t x132 = UINT64_MAX;
	uint64_t t31 = 66464158LLU;

	t31 = ((x129<x130)+(x131^x132));

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x133 = 1U;
	volatile int16_t x134 = -1;
	uint32_t x135 = UINT32_MAX;
	int32_t x136 = -1;
	uint32_t t32 = 3458984U;

	t32 = ((x133<x134)+(x135^x136));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x138 = INT32_MIN;
	int32_t x139 = -5327186;
	static uint16_t x140 = UINT16_MAX;
	int32_t t33 = 853109;

	t33 = ((x137<x138)+(x139^x140));

	if (t33 != -5355183) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = INT64_MIN;
	static int32_t x142 = -714762;
	uint64_t x143 = 41LLU;
	uint32_t x144 = 313167505U;
	volatile uint64_t t34 = 6793346LLU;

	t34 = ((x141<x142)+(x143^x144));

	if (t34 != 313167545LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x145 = UINT64_MAX;
	volatile int32_t x146 = -210;
	static uint8_t x147 = 115U;
	static uint32_t x148 = 254314627U;
	uint32_t t35 = 567633U;

	t35 = ((x145<x146)+(x147^x148));

	if (t35 != 254314736U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x149 = 57U;
	int32_t x152 = 134488365;
	uint32_t t36 = 14149U;

	t36 = ((x149<x150)+(x151^x152));

	if (t36 != 4160478930U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x153 = -12;
	int64_t x155 = INT64_MAX;
	uint32_t x156 = 81107737U;
	volatile int64_t t37 = 641281408029185967LL;

	t37 = ((x153<x154)+(x155^x156));

	if (t37 != 9223372036773668071LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x157 = 34858753LLU;
	static uint8_t x159 = UINT8_MAX;
	uint8_t x160 = UINT8_MAX;
	int32_t t38 = 51236719;

	t38 = ((x157<x158)+(x159^x160));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x161 = 2834U;
	static uint16_t x162 = 987U;
	int64_t x163 = -1LL;
	int64_t t39 = 917572884269261LL;

	t39 = ((x161<x162)+(x163^x164));

	if (t39 != -31LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = -1026LL;
	volatile uint32_t x166 = 227U;
	uint16_t x167 = 7U;
	int8_t x168 = 3;
	static int32_t t40 = -22723;

	t40 = ((x165<x166)+(x167^x168));

	if (t40 != 5) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x169 = 4U;
	static int16_t x170 = 560;
	volatile int32_t x171 = 14481;
	volatile uint8_t x172 = 9U;
	int32_t t41 = 0;

	t41 = ((x169<x170)+(x171^x172));

	if (t41 != 14489) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x173 = -1LL;
	uint32_t x174 = UINT32_MAX;
	static int32_t x175 = -113;
	uint64_t x176 = 185LLU;
	uint64_t t42 = 22280227LLU;

	t42 = ((x173<x174)+(x175^x176));

	if (t42 != 18446744073709551415LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x177 = -15;
	uint8_t x180 = 6U;
	int32_t t43 = 0;

	t43 = ((x177<x178)+(x179^x180));

	if (t43 != 2) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x182 = 1245U;
	uint64_t x183 = 374222057384028LLU;
	uint64_t x184 = 313988LLU;

	t44 = ((x181<x182)+(x183^x184));

	if (t44 != 374222057169624LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x185 = UINT64_MAX;
	uint8_t x186 = 22U;
	int16_t x187 = -13916;
	int32_t x188 = INT32_MAX;

	t45 = ((x185<x186)+(x187^x188));

	if (t45 != -2147469733) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x190 = UINT64_MAX;
	uint64_t x191 = 12805LLU;
	volatile int8_t x192 = INT8_MIN;
	volatile uint64_t t46 = 7742283061868510LLU;

	t46 = ((x189<x190)+(x191^x192));

	if (t46 != 18446744073709538693LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x193 = INT16_MIN;
	volatile int32_t x194 = INT32_MIN;
	int32_t x195 = INT32_MAX;
	volatile int32_t t47 = 13341;

	t47 = ((x193<x194)+(x195^x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x197 = INT32_MAX;
	int32_t x198 = INT32_MAX;
	int64_t x200 = INT64_MIN;
	volatile int64_t t48 = 33559405LL;

	t48 = ((x197<x198)+(x199^x200));

	if (t48 != 9223372036854359230LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x201 = INT32_MIN;
	static uint64_t x202 = 2048225486352LLU;
	int8_t x203 = -1;
	uint64_t x204 = 69407LLU;

	t49 = ((x201<x202)+(x203^x204));

	if (t49 != 18446744073709482208LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x205 = 2006U;
	int64_t x206 = INT64_MAX;
	int32_t x207 = -10;
	int8_t x208 = INT8_MIN;
	int32_t t50 = -1;

	t50 = ((x205<x206)+(x207^x208));

	if (t50 != 119) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x210 = INT32_MAX;
	volatile uint8_t x211 = UINT8_MAX;
	static int16_t x212 = 4;
	int32_t t51 = -186;

	t51 = ((x209<x210)+(x211^x212));

	if (t51 != 252) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x214 = 2623U;
	uint64_t x215 = 19110LLU;
	volatile int64_t x216 = -1LL;

	t52 = ((x213<x214)+(x215^x216));

	if (t52 != 18446744073709532506LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x221 = 17253747LLU;
	int64_t x222 = 27754467267LL;
	int32_t x224 = INT32_MIN;
	int64_t t53 = 138093688170558LL;

	t53 = ((x221<x222)+(x223^x224));

	if (t53 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x225 = 31;
	static int16_t x227 = INT16_MIN;
	static int64_t x228 = -1LL;
	int64_t t54 = 99174684LL;

	t54 = ((x225<x226)+(x227^x228));

	if (t54 != 32768LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x229 = -3966;
	uint8_t x230 = 4U;
	static int8_t x231 = -1;

	t55 = ((x229<x230)+(x231^x232));

	if (t55 != -65535) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x234 = 25U;
	int32_t x235 = INT32_MIN;
	static uint32_t t56 = 1234132303U;

	t56 = ((x233<x234)+(x235^x236));

	if (t56 != 2147569271U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x237 = INT64_MIN;
	int64_t x238 = -133LL;
	int64_t x240 = 4842200920LL;

	t57 = ((x237<x238)+(x239^x240));

	if (t57 != 8042700968LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x243 = -24;
	uint64_t x244 = 1096872990LLU;
	volatile uint64_t t58 = 1039314001008LLU;

	t58 = ((x241<x242)+(x243^x244));

	if (t58 != 18446744072612678646LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x245 = 423491550279LLU;
	static volatile int64_t x246 = 51822LL;
	int16_t x247 = INT16_MAX;
	static int32_t x248 = -444278;

	t59 = ((x245<x246)+(x247^x248));

	if (t59 != -440459) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x249 = 52192096863284LL;
	int64_t x251 = 54969LL;
	int32_t x252 = -1280497;
	static volatile int64_t t60 = -9LL;

	t60 = ((x249<x250)+(x251^x252));

	if (t60 != -1269578LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x253 = -27;
	int8_t x255 = INT8_MIN;

	t61 = ((x253<x254)+(x255^x256));

	if (t61 != 128U) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x257 = 30U;
	int32_t x259 = INT32_MAX;
	uint8_t x260 = UINT8_MAX;
	int32_t t62 = 3359;

	t62 = ((x257<x258)+(x259^x260));

	if (t62 != 2147483392) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x261 = INT64_MIN;
	int8_t x262 = INT8_MAX;
	int32_t t63 = -1018125;

	t63 = ((x261<x262)+(x263^x264));

	if (t63 != 2147450881) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x265 = -1LL;
	int8_t x266 = INT8_MAX;
	volatile uint64_t x268 = UINT64_MAX;

	t64 = ((x265<x266)+(x267^x268));

	if (t64 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x269 = UINT32_MAX;
	static int64_t x270 = INT64_MAX;
	volatile uint32_t x271 = 954089696U;
	int64_t x272 = INT64_MIN;
	int64_t t65 = 15253LL;

	t65 = ((x269<x270)+(x271^x272));

	if (t65 != -9223372035900686111LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x273 = INT8_MIN;
	int16_t x274 = 10181;
	volatile int8_t x275 = INT8_MIN;
	uint8_t x276 = 1U;
	int32_t t66 = 24;

	t66 = ((x273<x274)+(x275^x276));

	if (t66 != -126) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x277 = -1;
	int16_t x278 = 8731;
	int64_t x279 = INT64_MIN;
	static volatile int32_t x280 = -413935464;

	t67 = ((x277<x278)+(x279^x280));

	if (t67 != 9223372036440840345LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x281 = 40487U;
	int32_t x282 = INT32_MIN;
	int8_t x283 = 8;
	volatile int32_t x284 = INT32_MIN;
	volatile int32_t t68 = -553307277;

	t68 = ((x281<x282)+(x283^x284));

	if (t68 != -2147483639) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x285 = -1LL;
	int64_t x286 = 401LL;
	int32_t x287 = -187;
	uint8_t x288 = 50U;

	t69 = ((x285<x286)+(x287^x288));

	if (t69 != -136) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x290 = -1;
	int16_t x291 = -4115;
	uint8_t x292 = 10U;
	volatile int32_t t70 = 1025153593;

	t70 = ((x289<x290)+(x291^x292));

	if (t70 != -4121) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x293 = 3U;
	volatile int16_t x294 = INT16_MIN;
	static int32_t x296 = INT32_MAX;
	int32_t t71 = 25908;

	t71 = ((x293<x294)+(x295^x296));

	if (t71 != 2147483520) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x298 = 0U;
	uint64_t x299 = UINT64_MAX;
	volatile uint64_t t72 = 19903849985322LLU;

	t72 = ((x297<x298)+(x299^x300));

	if (t72 != 18446744073709549845LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x301 = 15039497083LL;
	int8_t x302 = 49;
	int32_t x303 = -348;
	volatile int64_t x304 = INT64_MIN;
	volatile int64_t t73 = 18LL;

	t73 = ((x301<x302)+(x303^x304));

	if (t73 != 9223372036854775460LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x305 = 1265U;
	int8_t x307 = INT8_MAX;
	static int32_t t74 = -746972165;

	t74 = ((x305<x306)+(x307^x308));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x309 = 7;
	static int32_t x310 = INT32_MIN;
	int64_t x311 = -1LL;
	uint32_t x312 = 478962043U;
	int64_t t75 = -1642139127776LL;

	t75 = ((x309<x310)+(x311^x312));

	if (t75 != -478962044LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x313 = 861796929521LL;
	int8_t x314 = -1;
	uint32_t x315 = UINT32_MAX;
	int8_t x316 = INT8_MIN;

	t76 = ((x313<x314)+(x315^x316));

	if (t76 != 127U) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x317 = UINT16_MAX;
	int8_t x318 = INT8_MIN;
	int32_t x320 = INT32_MAX;
	volatile int32_t t77 = INT32_MIN;

	t77 = ((x317<x318)+(x319^x320));

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x321 = 1;
	volatile uint8_t x322 = 96U;
	volatile uint16_t x323 = 3179U;
	int16_t x324 = INT16_MIN;
	int32_t t78 = -25608;

	t78 = ((x321<x322)+(x323^x324));

	if (t78 != -29588) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x325 = -2;
	static uint16_t x326 = 1U;
	int8_t x327 = -31;
	static uint8_t x328 = 69U;
	int32_t t79 = 496;

	t79 = ((x325<x326)+(x327^x328));

	if (t79 != -91) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x329 = INT32_MIN;
	volatile uint8_t x330 = 2U;
	int16_t x332 = -1;
	static volatile int32_t t80 = -488593;

	t80 = ((x329<x330)+(x331^x332));

	if (t80 != -53506) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x333 = -95;
	uint16_t x334 = 11087U;
	static volatile int32_t x335 = -14675;
	int8_t x336 = 2;
	int32_t t81 = 1;

	t81 = ((x333<x334)+(x335^x336));

	if (t81 != -14672) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x338 = -1;
	int64_t x339 = -1607257969LL;
	static int32_t x340 = -147515895;

	t82 = ((x337<x338)+(x339^x340));

	if (t82 != 1460020870LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x341 = 13852;
	volatile int32_t x342 = -200468757;
	uint64_t x343 = UINT64_MAX;
	int8_t x344 = -1;
	static volatile uint64_t t83 = 58718810957LLU;

	t83 = ((x341<x342)+(x343^x344));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x350 = -1;
	uint8_t x351 = UINT8_MAX;
	volatile int16_t x352 = INT16_MIN;
	volatile int32_t t84 = 20303042;

	t84 = ((x349<x350)+(x351^x352));

	if (t84 != -32513) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x353 = INT16_MAX;
	int8_t x354 = 7;
	int64_t x355 = -1LL;
	static uint64_t x356 = UINT64_MAX;
	volatile uint64_t t85 = 208133574309LLU;

	t85 = ((x353<x354)+(x355^x356));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x357 = 11U;
	int64_t x358 = -1LL;
	static int16_t x360 = -1;
	volatile int64_t t86 = 764877214914086738LL;

	t86 = ((x357<x358)+(x359^x360));

	if (t86 != -29LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x361 = INT16_MIN;
	uint32_t x362 = UINT32_MAX;
	static int8_t x363 = 1;
	int64_t x364 = INT64_MIN;
	volatile int64_t t87 = -1869879036116788LL;

	t87 = ((x361<x362)+(x363^x364));

	if (t87 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x365 = INT16_MAX;
	uint8_t x366 = 26U;
	volatile int8_t x367 = 3;
	uint8_t x368 = 14U;

	t88 = ((x365<x366)+(x367^x368));

	if (t88 != 13) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x370 = 11U;
	uint64_t x371 = 123LLU;
	static int64_t x372 = 2441357518280LL;
	volatile uint64_t t89 = 6505783317LLU;

	t89 = ((x369<x370)+(x371^x372));

	if (t89 != 2441357518260LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x373 = 2078526U;
	static volatile uint64_t x375 = UINT64_MAX;
	uint64_t t90 = 28823014713604LLU;

	t90 = ((x373<x374)+(x375^x376));

	if (t90 != 2147483647LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x377 = -5610;
	volatile uint16_t x378 = 208U;
	int16_t x379 = 402;
	int16_t x380 = -20;
	volatile int32_t t91 = 123;

	t91 = ((x377<x378)+(x379^x380));

	if (t91 != -385) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x381 = 674;
	static uint16_t x382 = 12U;
	static volatile int32_t x383 = INT32_MAX;
	uint16_t x384 = UINT16_MAX;

	t92 = ((x381<x382)+(x383^x384));

	if (t92 != 2147418112) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x386 = INT16_MIN;
	int8_t x387 = -1;
	int32_t x388 = INT32_MIN;
	volatile int32_t t93 = INT32_MAX;

	t93 = ((x385<x386)+(x387^x388));

	if (t93 != INT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x389 = 1U;
	int64_t x390 = -1LL;
	static int8_t x391 = INT8_MAX;
	volatile uint64_t x392 = UINT64_MAX;

	t94 = ((x389<x390)+(x391^x392));

	if (t94 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x393 = INT8_MAX;
	volatile int8_t x395 = -1;
	uint8_t x396 = UINT8_MAX;
	volatile int32_t t95 = 705;

	t95 = ((x393<x394)+(x395^x396));

	if (t95 != -256) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x397 = 81400LLU;
	volatile int64_t x398 = -1LL;
	int8_t x399 = INT8_MAX;
	uint64_t x400 = UINT64_MAX;
	volatile uint64_t t96 = 111723884251819LLU;

	t96 = ((x397<x398)+(x399^x400));

	if (t96 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x401 = UINT8_MAX;
	int32_t x402 = INT32_MIN;
	static int64_t x403 = INT64_MIN;
	int64_t x404 = -1LL;
	static volatile int64_t t97 = INT64_MAX;

	t97 = ((x401<x402)+(x403^x404));

	if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x405 = -1;
	uint8_t x406 = 61U;
	int16_t x408 = -9901;

	t98 = ((x405<x406)+(x407^x408));

	if (t98 != 2147473748) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x409 = -6235;
	int64_t x410 = INT64_MIN;
	static volatile uint8_t x412 = 18U;
	volatile int64_t t99 = 214863496746084LL;

	t99 = ((x409<x410)+(x411^x412));

	if (t99 != 332929951118819LL) { NG(); } else { ; }
	
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

