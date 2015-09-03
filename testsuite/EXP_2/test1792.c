#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x3 = 5;
static uint32_t x4 = 87058U;
int32_t x7 = 5;
volatile int32_t t1 = 185;
volatile uint32_t x11 = 61U;
static int8_t x22 = -1;
int64_t x23 = INT64_MAX;
static int8_t x31 = -2;
volatile int32_t t7 = 21;
int32_t x48 = 329;
int8_t x50 = 9;
int32_t x53 = 116;
int64_t x57 = 4195373165535LL;
int16_t x58 = INT16_MIN;
int16_t x60 = -163;
uint16_t x64 = UINT16_MAX;
volatile int32_t t15 = -3615496;
int64_t x68 = 4LL;
volatile uint8_t x70 = 27U;
int64_t x76 = INT64_MIN;
static int64_t t18 = 1LL;
uint16_t x77 = UINT16_MAX;
int16_t x79 = 7633;
int32_t t19 = 130131;
volatile int8_t x82 = INT8_MAX;
int8_t x84 = INT8_MIN;
static int8_t x87 = -27;
int16_t x91 = -1;
int16_t x94 = INT16_MAX;
volatile uint32_t x100 = 29U;
volatile uint32_t t24 = 62634240U;
int64_t x101 = INT64_MAX;
int64_t x103 = INT64_MIN;
int64_t x104 = -1LL;
volatile int16_t x111 = 0;
uint64_t x112 = 742498239381090LLU;
volatile int32_t t28 = -137;
int32_t t29 = 1;
uint16_t x130 = UINT16_MAX;
static volatile uint32_t t32 = 7125437U;
static int64_t t33 = 1224885754811LL;
int8_t x140 = -1;
volatile int8_t x145 = INT8_MIN;
int32_t x148 = INT32_MIN;
static int64_t t37 = -650849997LL;
int8_t x153 = -9;
int32_t x154 = -210396;
uint8_t x168 = 6U;
static int8_t x173 = INT8_MIN;
int64_t x185 = 26501LL;
volatile uint64_t t46 = 1330LLU;
int64_t x189 = INT64_MAX;
int16_t x192 = INT16_MAX;
int64_t x193 = 11LL;
int32_t x194 = INT32_MIN;
int16_t x196 = INT16_MIN;
int64_t x200 = 11804572956339LL;
volatile uint8_t x207 = 18U;
int32_t x217 = INT32_MIN;
int8_t x218 = INT8_MAX;
uint64_t x224 = 196009483832336630LLU;
int8_t x225 = INT8_MIN;
int16_t x230 = -425;
static int8_t x232 = -1;
int32_t t58 = -3563;
volatile int64_t x238 = 61772970807LL;
int32_t t60 = -15342263;
int8_t x254 = INT8_MIN;
uint32_t x255 = 7416U;
int32_t x258 = -865;
int16_t x261 = INT16_MIN;
static int16_t x265 = -6;
int32_t x267 = -1;
int32_t t66 = 512921;
uint16_t x281 = 9U;
volatile int16_t x283 = -44;
volatile int32_t t70 = 0;
int16_t x287 = -2;
int64_t x300 = -1LL;
int64_t t74 = 10373792304535LL;
static uint32_t x304 = 2836U;
uint16_t x307 = 12U;
int8_t x308 = INT8_MIN;
uint64_t x311 = UINT64_MAX;
int16_t x312 = INT16_MAX;
uint16_t x315 = 40U;
volatile uint32_t x316 = UINT32_MAX;
static int8_t x321 = INT8_MIN;
static int16_t x328 = INT16_MIN;
int32_t t81 = -387924;
int64_t x329 = INT64_MIN;
volatile int32_t t82 = -1;
static int64_t x336 = INT64_MAX;
volatile int64_t t83 = 30916252LL;
int16_t x339 = INT16_MIN;
int16_t x342 = INT16_MAX;
static uint16_t x344 = UINT16_MAX;
int8_t x352 = INT8_MIN;
volatile int64_t x364 = -13615665207423LL;
volatile uint8_t x372 = UINT8_MAX;
int32_t t92 = -452978;
int16_t x375 = -4;
int32_t t96 = 0;
int16_t x390 = INT16_MIN;
int32_t x392 = 1;
volatile int64_t t98 = 2048664903539515LL;


void f0(void) {
	int32_t x1 = INT32_MAX;
	volatile uint16_t x2 = UINT16_MAX;
	volatile uint32_t t0 = 3026U;

	t0 = ((x1==(x2&x3))&x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = 139207U;
	static int8_t x6 = INT8_MIN;
	int32_t x8 = INT32_MIN;

	t1 = ((x5==(x6&x7))&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 70423832891984LLU;
	uint16_t x10 = 2U;
	volatile uint8_t x12 = UINT8_MAX;
	static int32_t t2 = 1514527;

	t2 = ((x9==(x10&x11))&x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	volatile uint16_t x14 = UINT16_MAX;
	uint64_t x15 = UINT64_MAX;
	uint32_t x16 = 157077184U;
	uint32_t t3 = 194U;

	t3 = ((x13==(x14&x15))&x16);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 2U;
	static volatile int32_t x18 = 338475940;
	volatile uint16_t x19 = UINT16_MAX;
	uint64_t x20 = 361944LLU;
	uint64_t t4 = 179249339143943749LLU;

	t4 = ((x17==(x18&x19))&x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MIN;
	uint16_t x24 = UINT16_MAX;
	static volatile int32_t t5 = 109;

	t5 = ((x21==(x22&x23))&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 15374013631LL;
	uint16_t x26 = UINT16_MAX;
	static uint16_t x27 = UINT16_MAX;
	int32_t x28 = 40060626;
	int32_t t6 = -12;

	t6 = ((x25==(x26&x27))&x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x29 = UINT8_MAX;
	int8_t x30 = INT8_MAX;
	int16_t x32 = -1;

	t7 = ((x29==(x30&x31))&x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	static int32_t x34 = 257738;
	uint16_t x35 = 372U;
	int8_t x36 = INT8_MIN;
	int32_t t8 = -2;

	t8 = ((x33==(x34&x35))&x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x37 = UINT64_MAX;
	static int64_t x38 = 43LL;
	static volatile uint16_t x39 = 205U;
	static int16_t x40 = INT16_MIN;
	int32_t t9 = -807342;

	t9 = ((x37==(x38&x39))&x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = -1;
	uint8_t x42 = 0U;
	int8_t x43 = -1;
	int32_t x44 = INT32_MIN;
	volatile int32_t t10 = 55288;

	t10 = ((x41==(x42&x43))&x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = UINT32_MAX;
	uint16_t x46 = 150U;
	int8_t x47 = 29;
	volatile int32_t t11 = 7;

	t11 = ((x45==(x46&x47))&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MAX;
	volatile int8_t x51 = INT8_MIN;
	int32_t x52 = INT32_MAX;
	int32_t t12 = 16220892;

	t12 = ((x49==(x50&x51))&x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x54 = 29U;
	uint8_t x55 = UINT8_MAX;
	volatile int64_t x56 = -1LL;
	static int64_t t13 = -830203LL;

	t13 = ((x53==(x54&x55))&x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x59 = 1;
	volatile int32_t t14 = -53085965;

	t14 = ((x57==(x58&x59))&x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	int16_t x62 = INT16_MIN;
	int8_t x63 = -1;

	t15 = ((x61==(x62&x63))&x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x65 = UINT8_MAX;
	int32_t x66 = INT32_MAX;
	int32_t x67 = INT32_MIN;
	int64_t t16 = 4933LL;

	t16 = ((x65==(x66&x67))&x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MAX;
	volatile int32_t x71 = INT32_MIN;
	int32_t x72 = -1;
	int32_t t17 = 462675;

	t17 = ((x69==(x70&x71))&x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -1174;
	int16_t x74 = INT16_MIN;
	uint16_t x75 = 1U;

	t18 = ((x73==(x74&x75))&x76);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x78 = 1149914432974LL;
	uint8_t x80 = UINT8_MAX;

	t19 = ((x77==(x78&x79))&x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x81 = INT32_MAX;
	int16_t x83 = 14;
	int32_t t20 = 3141225;

	t20 = ((x81==(x82&x83))&x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = 123021955;
	volatile int8_t x86 = INT8_MIN;
	uint8_t x88 = 6U;
	static volatile int32_t t21 = -14436;

	t21 = ((x85==(x86&x87))&x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	uint16_t x90 = 15U;
	int16_t x92 = 69;
	volatile int32_t t22 = -185;

	t22 = ((x89==(x90&x91))&x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -1;
	volatile int8_t x95 = INT8_MIN;
	uint64_t x96 = 270570719283576LLU;
	volatile uint64_t t23 = 29890650382782LLU;

	t23 = ((x93==(x94&x95))&x96);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -1;
	volatile int64_t x98 = INT64_MIN;
	volatile int16_t x99 = INT16_MIN;

	t24 = ((x97==(x98&x99))&x100);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x102 = 31194627676LLU;
	volatile int64_t t25 = -223LL;

	t25 = ((x101==(x102&x103))&x104);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	int8_t x106 = -10;
	uint8_t x107 = 12U;
	static uint16_t x108 = UINT16_MAX;
	volatile int32_t t26 = 3778;

	t26 = ((x105==(x106&x107))&x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = UINT64_MAX;
	int64_t x110 = INT64_MIN;
	static volatile uint64_t t27 = 1805442112223811284LLU;

	t27 = ((x109==(x110&x111))&x112);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	int16_t x114 = INT16_MIN;
	uint16_t x115 = UINT16_MAX;
	volatile int16_t x116 = 226;

	t28 = ((x113==(x114&x115))&x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = 59LL;
	static int64_t x118 = INT64_MIN;
	uint64_t x119 = 1331467201539LLU;
	uint8_t x120 = UINT8_MAX;

	t29 = ((x117==(x118&x119))&x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -1;
	uint16_t x122 = 12U;
	static volatile int64_t x123 = INT64_MIN;
	uint16_t x124 = 3744U;
	int32_t t30 = 23723;

	t30 = ((x121==(x122&x123))&x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x125 = 100U;
	uint32_t x126 = 26334603U;
	static int64_t x127 = INT64_MIN;
	int32_t x128 = INT32_MIN;
	static volatile int32_t t31 = -255;

	t31 = ((x125==(x126&x127))&x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x129 = INT32_MIN;
	volatile uint8_t x131 = 58U;
	volatile uint32_t x132 = 22429U;

	t32 = ((x129==(x130&x131))&x132);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 99350734U;
	int64_t x134 = INT64_MIN;
	int16_t x135 = INT16_MAX;
	static int64_t x136 = -119LL;

	t33 = ((x133==(x134&x135))&x136);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = -1;
	int16_t x138 = -6;
	uint16_t x139 = 0U;
	int32_t t34 = 238633449;

	t34 = ((x137==(x138&x139))&x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = 0U;
	static int32_t x142 = -211083;
	uint8_t x143 = 7U;
	int8_t x144 = INT8_MAX;
	int32_t t35 = -20121910;

	t35 = ((x141==(x142&x143))&x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x146 = INT64_MAX;
	int32_t x147 = INT32_MAX;
	int32_t t36 = 6220236;

	t36 = ((x145==(x146&x147))&x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = -1LL;
	uint16_t x150 = 33U;
	uint16_t x151 = 28U;
	int64_t x152 = 3871450628LL;

	t37 = ((x149==(x150&x151))&x152);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x155 = 5;
	static int8_t x156 = 28;
	volatile int32_t t38 = -322;

	t38 = ((x153==(x154&x155))&x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -898700643LL;
	uint16_t x158 = UINT16_MAX;
	int16_t x159 = -1;
	int32_t x160 = INT32_MIN;
	static volatile int32_t t39 = 77;

	t39 = ((x157==(x158&x159))&x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = UINT16_MAX;
	static volatile uint64_t x162 = 91655918974LLU;
	int64_t x163 = INT64_MIN;
	int32_t x164 = INT32_MAX;
	volatile int32_t t40 = -1;

	t40 = ((x161==(x162&x163))&x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x165 = INT64_MAX;
	uint8_t x166 = 4U;
	int64_t x167 = INT64_MIN;
	volatile int32_t t41 = 256046482;

	t41 = ((x165==(x166&x167))&x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	int16_t x170 = INT16_MAX;
	uint16_t x171 = UINT16_MAX;
	volatile uint64_t x172 = 2503LLU;
	volatile uint64_t t42 = 98LLU;

	t42 = ((x169==(x170&x171))&x172);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x174 = INT8_MAX;
	int8_t x175 = 1;
	static volatile uint32_t x176 = 101115708U;
	static volatile uint32_t t43 = 30667624U;

	t43 = ((x173==(x174&x175))&x176);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -28;
	static int16_t x178 = 115;
	int32_t x179 = -1;
	int32_t x180 = INT32_MAX;
	static volatile int32_t t44 = 46622;

	t44 = ((x177==(x178&x179))&x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x181 = -850166433968LL;
	int32_t x182 = -86472;
	static int16_t x183 = INT16_MIN;
	int8_t x184 = INT8_MIN;
	volatile int32_t t45 = -43;

	t45 = ((x181==(x182&x183))&x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x186 = 18142986806LL;
	static uint8_t x187 = UINT8_MAX;
	uint64_t x188 = 121564235119LLU;

	t46 = ((x185==(x186&x187))&x188);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x190 = 1616903932331212LLU;
	uint8_t x191 = 57U;
	int32_t t47 = 859944892;

	t47 = ((x189==(x190&x191))&x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x195 = -2079;
	volatile int32_t t48 = 259056973;

	t48 = ((x193==(x194&x195))&x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MAX;
	int32_t x198 = 172;
	uint8_t x199 = 87U;
	int64_t t49 = 1392442259364LL;

	t49 = ((x197==(x198&x199))&x200);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MIN;
	volatile int16_t x202 = INT16_MIN;
	int64_t x203 = -1LL;
	int32_t x204 = -1042521;
	static volatile int32_t t50 = -1;

	t50 = ((x201==(x202&x203))&x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MAX;
	static uint32_t x206 = 432U;
	int32_t x208 = INT32_MIN;
	volatile int32_t t51 = -12;

	t51 = ((x205==(x206&x207))&x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MAX;
	volatile int64_t x210 = 4444451LL;
	int32_t x211 = INT32_MAX;
	int8_t x212 = INT8_MIN;
	static volatile int32_t t52 = 68997;

	t52 = ((x209==(x210&x211))&x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -1;
	uint8_t x214 = 15U;
	static int64_t x215 = -1LL;
	int64_t x216 = INT64_MIN;
	int64_t t53 = -4585040484608533LL;

	t53 = ((x213==(x214&x215))&x216);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x219 = UINT32_MAX;
	volatile int16_t x220 = INT16_MIN;
	volatile int32_t t54 = -1148220;

	t54 = ((x217==(x218&x219))&x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = UINT64_MAX;
	static int32_t x222 = INT32_MIN;
	int16_t x223 = INT16_MIN;
	uint64_t t55 = 295372188856LLU;

	t55 = ((x221==(x222&x223))&x224);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x226 = -31;
	int8_t x227 = -1;
	int32_t x228 = -1;
	volatile int32_t t56 = -39670878;

	t56 = ((x225==(x226&x227))&x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x229 = INT8_MAX;
	uint8_t x231 = 3U;
	volatile int32_t t57 = 10;

	t57 = ((x229==(x230&x231))&x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x233 = 192U;
	volatile int32_t x234 = 80058837;
	int32_t x235 = INT32_MIN;
	int16_t x236 = INT16_MAX;

	t58 = ((x233==(x234&x235))&x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -4;
	int8_t x239 = INT8_MAX;
	int8_t x240 = INT8_MIN;
	volatile int32_t t59 = 67;

	t59 = ((x237==(x238&x239))&x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = -1;
	volatile int64_t x242 = INT64_MIN;
	int32_t x243 = -35862;
	int16_t x244 = INT16_MIN;

	t60 = ((x241==(x242&x243))&x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x245 = INT8_MAX;
	int8_t x246 = -1;
	uint32_t x247 = UINT32_MAX;
	uint8_t x248 = 1U;
	volatile int32_t t61 = -3127330;

	t61 = ((x245==(x246&x247))&x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = 3U;
	int8_t x250 = INT8_MIN;
	int8_t x251 = INT8_MIN;
	int64_t x252 = INT64_MIN;
	volatile int64_t t62 = 218LL;

	t62 = ((x249==(x250&x251))&x252);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = -1;
	static uint8_t x256 = 82U;
	static volatile int32_t t63 = -5010869;

	t63 = ((x253==(x254&x255))&x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x257 = -1741020;
	volatile uint32_t x259 = 52161671U;
	int64_t x260 = -1LL;
	int64_t t64 = 32268LL;

	t64 = ((x257==(x258&x259))&x260);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x262 = INT64_MIN;
	uint16_t x263 = UINT16_MAX;
	volatile uint32_t x264 = 98813484U;
	uint32_t t65 = 3874U;

	t65 = ((x261==(x262&x263))&x264);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x266 = INT32_MIN;
	volatile int8_t x268 = -1;

	t66 = ((x265==(x266&x267))&x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = 265008462LLU;
	volatile int32_t x270 = -1;
	static int64_t x271 = INT64_MAX;
	int16_t x272 = INT16_MAX;
	int32_t t67 = -135780;

	t67 = ((x269==(x270&x271))&x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = 193180888;
	static int32_t x274 = INT32_MIN;
	uint16_t x275 = 20U;
	volatile uint16_t x276 = 119U;
	volatile int32_t t68 = 373939;

	t68 = ((x273==(x274&x275))&x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x277 = 29U;
	int8_t x278 = -1;
	int64_t x279 = 356LL;
	static int16_t x280 = INT16_MAX;
	int32_t t69 = 4;

	t69 = ((x277==(x278&x279))&x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x282 = 457;
	volatile uint8_t x284 = 18U;

	t70 = ((x281==(x282&x283))&x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x285 = INT16_MAX;
	int64_t x286 = INT64_MIN;
	volatile int64_t x288 = -1LL;
	volatile int64_t t71 = -1462864589513292LL;

	t71 = ((x285==(x286&x287))&x288);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	uint16_t x290 = 3U;
	volatile uint16_t x291 = UINT16_MAX;
	uint16_t x292 = 3161U;
	volatile int32_t t72 = -12804985;

	t72 = ((x289==(x290&x291))&x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x293 = INT16_MAX;
	int32_t x294 = INT32_MAX;
	static int16_t x295 = INT16_MIN;
	int64_t x296 = INT64_MIN;
	volatile int64_t t73 = 5091521853357250LL;

	t73 = ((x293==(x294&x295))&x296);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint16_t x297 = 26U;
	uint64_t x298 = 288456978972LLU;
	volatile int16_t x299 = INT16_MAX;

	t74 = ((x297==(x298&x299))&x300);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 13031U;
	uint8_t x302 = 114U;
	uint16_t x303 = 57U;
	uint32_t t75 = 121U;

	t75 = ((x301==(x302&x303))&x304);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x305 = 3;
	volatile int32_t x306 = INT32_MIN;
	int32_t t76 = 83;

	t76 = ((x305==(x306&x307))&x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x309 = UINT8_MAX;
	int16_t x310 = INT16_MAX;
	volatile int32_t t77 = -6;

	t77 = ((x309==(x310&x311))&x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = 0U;
	uint64_t x314 = 58647608870LLU;
	volatile uint32_t t78 = 67321U;

	t78 = ((x313==(x314&x315))&x316);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 2484LLU;
	int64_t x318 = -1LL;
	int8_t x319 = INT8_MIN;
	int16_t x320 = INT16_MAX;
	volatile int32_t t79 = -149086910;

	t79 = ((x317==(x318&x319))&x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x322 = INT16_MAX;
	int8_t x323 = INT8_MIN;
	uint32_t x324 = 14017234U;
	volatile uint32_t t80 = 1U;

	t80 = ((x321==(x322&x323))&x324);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MAX;
	int8_t x326 = -5;
	static int16_t x327 = -1;

	t81 = ((x325==(x326&x327))&x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x330 = INT16_MIN;
	static int32_t x331 = -66844746;
	static int16_t x332 = INT16_MIN;

	t82 = ((x329==(x330&x331))&x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = 0U;
	int32_t x334 = 1;
	uint8_t x335 = 125U;

	t83 = ((x333==(x334&x335))&x336);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MIN;
	uint32_t x338 = UINT32_MAX;
	int64_t x340 = -1124535626140662253LL;
	int64_t t84 = 262096LL;

	t84 = ((x337==(x338&x339))&x340);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x341 = INT32_MIN;
	static int16_t x343 = -18;
	volatile int32_t t85 = -261486995;

	t85 = ((x341==(x342&x343))&x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	uint16_t x346 = 5777U;
	uint32_t x347 = 183U;
	volatile int64_t x348 = INT64_MIN;
	static volatile int64_t t86 = -15350847100LL;

	t86 = ((x345==(x346&x347))&x348);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = 12185388U;
	uint8_t x350 = 12U;
	volatile int64_t x351 = 1LL;
	volatile int32_t t87 = -647959265;

	t87 = ((x349==(x350&x351))&x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x353 = -1;
	uint8_t x354 = 7U;
	int64_t x355 = INT64_MIN;
	volatile uint16_t x356 = 9U;
	int32_t t88 = 1;

	t88 = ((x353==(x354&x355))&x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = 436671U;
	volatile int32_t x358 = INT32_MAX;
	uint16_t x359 = 9U;
	static volatile uint16_t x360 = UINT16_MAX;
	int32_t t89 = -3;

	t89 = ((x357==(x358&x359))&x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = -318407070;
	int32_t x362 = -1;
	int16_t x363 = INT16_MIN;
	int64_t t90 = -12LL;

	t90 = ((x361==(x362&x363))&x364);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = UINT8_MAX;
	int64_t x366 = INT64_MIN;
	int64_t x367 = -66887648033LL;
	int8_t x368 = -3;
	int32_t t91 = 2761682;

	t91 = ((x365==(x366&x367))&x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = UINT64_MAX;
	static int32_t x370 = INT32_MIN;
	int64_t x371 = 210982013771595118LL;

	t92 = ((x369==(x370&x371))&x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = 11;
	static uint64_t x374 = 6LLU;
	int32_t x376 = INT32_MIN;
	static int32_t t93 = 0;

	t93 = ((x373==(x374&x375))&x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MIN;
	static int16_t x378 = INT16_MAX;
	uint64_t x379 = UINT64_MAX;
	static uint64_t x380 = 0LLU;
	uint64_t t94 = 214645920216977LLU;

	t94 = ((x377==(x378&x379))&x380);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MAX;
	int16_t x382 = INT16_MAX;
	uint32_t x383 = 7500171U;
	uint64_t x384 = UINT64_MAX;
	uint64_t t95 = 524984322LLU;

	t95 = ((x381==(x382&x383))&x384);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = -7200713654396LL;
	int64_t x386 = -11386645474709691LL;
	uint32_t x387 = UINT32_MAX;
	uint8_t x388 = 6U;

	t96 = ((x385==(x386&x387))&x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = 9796LLU;
	int8_t x391 = -42;
	volatile int32_t t97 = 84;

	t97 = ((x389==(x390&x391))&x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MIN;
	int8_t x394 = INT8_MAX;
	int16_t x395 = INT16_MAX;
	int64_t x396 = -1LL;

	t98 = ((x393==(x394&x395))&x396);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = 13816416U;
	int32_t x398 = -1;
	static uint64_t x399 = 384566798898942061LLU;
	int8_t x400 = -8;
	int32_t t99 = 929543237;

	t99 = ((x397==(x398&x399))&x400);

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

