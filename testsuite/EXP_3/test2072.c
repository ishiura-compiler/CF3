#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = -15LL;
volatile uint64_t t2 = 9119LLU;
int64_t x14 = 281988098LL;
int64_t x17 = -1LL;
int32_t x23 = -12015683;
int8_t x29 = INT8_MIN;
int16_t x32 = INT16_MIN;
int64_t x35 = INT64_MAX;
int64_t x38 = INT64_MIN;
static int64_t x48 = INT64_MAX;
volatile int64_t t11 = -394179486LL;
volatile uint16_t x49 = UINT16_MAX;
static uint64_t x52 = 511LLU;
int64_t x54 = INT64_MIN;
int16_t x59 = -1895;
int64_t x69 = INT64_MAX;
uint64_t x70 = UINT64_MAX;
uint32_t x71 = 372102289U;
int16_t x75 = INT16_MIN;
int32_t x78 = -1;
static int32_t x82 = INT32_MIN;
int8_t x85 = INT8_MAX;
volatile int64_t t21 = 2LL;
int8_t x95 = -54;
int32_t x96 = 31;
uint8_t x107 = 2U;
volatile uint64_t x108 = 25012554412811LLU;
int64_t x110 = INT64_MAX;
uint8_t x111 = UINT8_MAX;
int8_t x114 = 5;
int16_t x121 = INT16_MAX;
int8_t x125 = INT8_MIN;
uint32_t x127 = 1178262U;
volatile uint64_t t29 = 2020797508LLU;
int64_t x130 = INT64_MIN;
static int32_t x131 = INT32_MIN;
volatile uint64_t t31 = 61234327641645LLU;
int32_t x145 = INT32_MIN;
uint16_t x155 = UINT16_MAX;
int64_t x167 = INT64_MIN;
int8_t x170 = -1;
uint64_t x172 = 63877777490883295LLU;
int64_t x183 = INT64_MIN;
static volatile int64_t x191 = 314437941047886LL;
int64_t t48 = 218087562053203674LL;
int64_t t49 = 126LL;
static int64_t t50 = 2486613465624401LL;
volatile uint32_t x220 = 1088746U;
volatile uint64_t t51 = 31271953LLU;
volatile uint16_t x228 = 17U;
uint32_t t53 = 720361U;
int32_t t55 = -25217083;
uint16_t x244 = 0U;
volatile uint64_t t57 = 273011117757565LLU;
volatile uint8_t x249 = 3U;
volatile int32_t x251 = -1;
int32_t x254 = 1819;
int64_t t60 = 15686022420LL;
int16_t x272 = INT16_MIN;
uint32_t x284 = 3478U;
int64_t x286 = -12926487997865553LL;
static volatile int64_t t68 = 782111709682LL;
int64_t x293 = -1LL;
int64_t t70 = -42865916LL;
static int32_t x297 = 90;
int32_t x299 = 24295;
volatile int32_t t71 = -1;
int8_t x301 = INT8_MAX;
int32_t x321 = 338902;
int8_t x325 = -23;
volatile int32_t t77 = 671;
int32_t x330 = 577;
int32_t t78 = 17820792;
int32_t x333 = INT32_MAX;
int16_t x334 = INT16_MIN;
int32_t t80 = 160;
int8_t x347 = INT8_MAX;
int8_t x349 = -1;
static int16_t x360 = 0;
int64_t t85 = -7LL;
uint64_t x367 = 249306321562588152LLU;
int16_t x368 = -2;
static int16_t x371 = INT16_MIN;
int64_t x379 = INT64_MAX;
int64_t x386 = -1LL;
int8_t x389 = -1;
int32_t x390 = -1;
static int64_t t91 = -7678578784285LL;
int16_t x393 = -3;
volatile uint32_t x398 = UINT32_MAX;
int64_t x399 = INT64_MIN;
static uint16_t x407 = 481U;
int8_t x411 = -4;
int64_t x412 = INT64_MAX;
int64_t t96 = -467LL;
volatile int32_t x413 = INT32_MIN;
int32_t x416 = -20;


void f0(void) {
	static volatile int64_t x1 = -328169194LL;
	uint8_t x2 = UINT8_MAX;
	uint8_t x3 = 1U;
	int32_t x4 = INT32_MAX;

	t0 = ((x1/x2)%(x3^x4));

	if (t0 != -1286938LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MIN;
	volatile int16_t x6 = INT16_MAX;
	int16_t x7 = INT16_MIN;
	int8_t x8 = 0;
	int32_t t1 = -5398;

	t1 = ((x5/x6)%(x7^x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 41;
	volatile int8_t x10 = INT8_MAX;
	int16_t x11 = INT16_MIN;
	volatile uint64_t x12 = 14622078832629870LLU;

	t2 = ((x9/x10)%(x11^x12));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	volatile int16_t x15 = INT16_MIN;
	int16_t x16 = 15306;
	static int64_t t3 = -4165458215LL;

	t3 = ((x13/x14)%(x15^x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x18 = -1LL;
	int32_t x19 = 1;
	volatile int32_t x20 = 106075;
	int64_t t4 = -262115656LL;

	t4 = ((x17/x18)%(x19^x20));

	if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 210;
	int16_t x22 = INT16_MAX;
	int64_t x24 = -189260LL;
	volatile int64_t t5 = -7065640LL;

	t5 = ((x21/x22)%(x23^x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -28843334905135252LL;
	volatile int64_t x26 = -203217252924LL;
	int64_t x27 = INT64_MIN;
	int16_t x28 = INT16_MAX;
	int64_t t6 = -8605153400066629LL;

	t6 = ((x25/x26)%(x27^x28));

	if (t6 != 141933LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = INT32_MIN;
	uint32_t x31 = UINT32_MAX;
	uint32_t t7 = 102508681U;

	t7 = ((x29/x30)%(x31^x32));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 2U;
	int32_t x34 = 122968;
	static int8_t x36 = INT8_MIN;
	static int64_t t8 = -34211722423490262LL;

	t8 = ((x33/x34)%(x35^x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = 513988158;
	int64_t x39 = INT64_MIN;
	int64_t x40 = -2698434106LL;
	volatile int64_t t9 = -220234LL;

	t9 = ((x37/x38)%(x39^x40));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = UINT16_MAX;
	int16_t x42 = -1;
	uint32_t x43 = UINT32_MAX;
	int16_t x44 = INT16_MAX;
	volatile uint32_t t10 = 92U;

	t10 = ((x41/x42)%(x43^x44));

	if (t10 != 4294901761U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = UINT16_MAX;
	volatile uint16_t x46 = 287U;
	volatile int8_t x47 = 2;

	t11 = ((x45/x46)%(x47^x48));

	if (t11 != 228LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = -1LL;
	static int16_t x51 = -1;
	static uint64_t t12 = 3974310LLU;

	t12 = ((x49/x50)%(x51^x52));

	if (t12 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	static int32_t x55 = 838738;
	static volatile int8_t x56 = INT8_MIN;
	volatile int64_t t13 = -1LL;

	t13 = ((x53/x54)%(x55^x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x57 = 6U;
	static volatile int8_t x58 = -1;
	static int8_t x60 = 39;
	static volatile int32_t t14 = 11728816;

	t14 = ((x57/x58)%(x59^x60));

	if (t14 != -6) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x61 = 2084311;
	int8_t x62 = -1;
	static int32_t x63 = INT32_MIN;
	volatile int16_t x64 = -9849;
	static volatile int32_t t15 = 174264;

	t15 = ((x61/x62)%(x63^x64));

	if (t15 != -2084311) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x72 = 431U;
	static volatile uint64_t t16 = 313355136315LLU;

	t16 = ((x69/x70)%(x71^x72));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x73 = UINT32_MAX;
	int32_t x74 = 696;
	static int64_t x76 = -444356LL;
	volatile int64_t t17 = -1489882536389584LL;

	t17 = ((x73/x74)%(x75^x76));

	if (t17 != 5610LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = INT16_MIN;
	int64_t x79 = 103377009LL;
	static int32_t x80 = -1;
	static volatile int64_t t18 = -2319996360982LL;

	t18 = ((x77/x78)%(x79^x80));

	if (t18 != 32768LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x81 = -4619;
	static uint64_t x83 = 42534621LLU;
	static uint64_t x84 = UINT64_MAX;
	static volatile uint64_t t19 = 19293LLU;

	t19 = ((x81/x82)%(x83^x84));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x86 = 65130784U;
	uint8_t x87 = 1U;
	int32_t x88 = -117;
	uint32_t t20 = 20361U;

	t20 = ((x85/x86)%(x87^x88));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = 144571LL;
	int64_t x90 = -1LL;
	volatile int8_t x91 = 0;
	int8_t x92 = -1;

	t21 = ((x89/x90)%(x91^x92));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = -1;
	static int8_t x94 = -52;
	int32_t t22 = -5757;

	t22 = ((x93/x94)%(x95^x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x97 = -174134;
	int16_t x98 = -1;
	volatile int16_t x99 = -1;
	uint32_t x100 = 6358U;
	static volatile uint32_t t23 = 6984524U;

	t23 = ((x97/x98)%(x99^x100));

	if (t23 != 174134U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x101 = 289U;
	uint64_t x102 = 7821LLU;
	int32_t x103 = -17;
	int32_t x104 = -1;
	volatile uint64_t t24 = 9LLU;

	t24 = ((x101/x102)%(x103^x104));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = INT64_MIN;
	int32_t x106 = INT32_MAX;
	static volatile uint64_t t25 = 1185984LLU;

	t25 = ((x105/x106)%(x107^x108));

	if (t25 != 10202522359627LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = INT8_MIN;
	int32_t x112 = INT32_MIN;
	static int64_t t26 = -344972130732145LL;

	t26 = ((x109/x110)%(x111^x112));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x113 = 171566925088LLU;
	static int32_t x115 = INT32_MIN;
	static int32_t x116 = 1793402;
	volatile uint64_t t27 = 7660004666LLU;

	t27 = ((x113/x114)%(x115^x116));

	if (t27 != 34313385017LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x122 = -3141;
	uint64_t x123 = 102171591546098LLU;
	uint16_t x124 = 326U;
	volatile uint64_t t28 = 17086357926162LLU;

	t28 = ((x121/x122)%(x123^x124));

	if (t28 != 71906392716174LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x126 = UINT8_MAX;
	static volatile uint64_t x128 = 8487170416322170LLU;

	t29 = ((x125/x126)%(x127^x128));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = 1;
	int8_t x132 = INT8_MAX;
	int64_t t30 = 182775LL;

	t30 = ((x129/x130)%(x131^x132));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x133 = 42LLU;
	int32_t x134 = INT32_MAX;
	int8_t x135 = INT8_MIN;
	volatile int64_t x136 = -1LL;

	t31 = ((x133/x134)%(x135^x136));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x137 = 1;
	int8_t x138 = -4;
	static int8_t x139 = INT8_MAX;
	uint16_t x140 = UINT16_MAX;
	volatile int32_t t32 = 184;

	t32 = ((x137/x138)%(x139^x140));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x141 = -5;
	static int16_t x142 = 1;
	int16_t x143 = INT16_MAX;
	volatile int32_t x144 = -1;
	int32_t t33 = 856375;

	t33 = ((x141/x142)%(x143^x144));

	if (t33 != -5) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x146 = -3857607;
	int16_t x147 = INT16_MAX;
	static uint64_t x148 = UINT64_MAX;
	uint64_t t34 = 6772LLU;

	t34 = ((x145/x146)%(x147^x148));

	if (t34 != 556LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x149 = 1;
	static volatile int64_t x150 = INT64_MIN;
	volatile int16_t x151 = INT16_MAX;
	int16_t x152 = -1;
	int64_t t35 = 0LL;

	t35 = ((x149/x150)%(x151^x152));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x153 = INT16_MAX;
	int32_t x154 = -3223562;
	int16_t x156 = INT16_MIN;
	int32_t t36 = 28568;

	t36 = ((x153/x154)%(x155^x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x157 = INT64_MIN;
	int16_t x158 = INT16_MAX;
	int32_t x159 = INT32_MAX;
	volatile int16_t x160 = INT16_MIN;
	volatile int64_t t37 = -10LL;

	t37 = ((x157/x158)%(x159^x160));

	if (t37 != -327682LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x161 = -1;
	int32_t x162 = -1;
	volatile int32_t x163 = INT32_MIN;
	static int16_t x164 = INT16_MAX;
	static int32_t t38 = -4;

	t38 = ((x161/x162)%(x163^x164));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x165 = INT8_MAX;
	int16_t x166 = INT16_MAX;
	int64_t x168 = -1LL;
	int64_t t39 = 5059LL;

	t39 = ((x165/x166)%(x167^x168));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x169 = INT16_MIN;
	static uint32_t x171 = 32U;
	static volatile uint64_t t40 = 848095827LLU;

	t40 = ((x169/x170)%(x171^x172));

	if (t40 != 32768LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint32_t x173 = 2U;
	int32_t x174 = INT32_MIN;
	uint8_t x175 = UINT8_MAX;
	int16_t x176 = INT16_MIN;
	volatile uint32_t t41 = 2U;

	t41 = ((x173/x174)%(x175^x176));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x177 = -1LL;
	volatile int16_t x178 = 1;
	uint64_t x179 = 14085168LLU;
	static volatile int8_t x180 = -1;
	volatile uint64_t t42 = 9LLU;

	t42 = ((x177/x178)%(x179^x180));

	if (t42 != 14085168LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x181 = INT8_MIN;
	volatile int8_t x182 = INT8_MAX;
	int8_t x184 = INT8_MAX;
	volatile int64_t t43 = 1441568814LL;

	t43 = ((x181/x182)%(x183^x184));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint8_t x185 = 7U;
	volatile uint64_t x186 = 447854690900897178LLU;
	int32_t x187 = INT32_MIN;
	uint32_t x188 = 0U;
	static volatile uint64_t t44 = 53LLU;

	t44 = ((x185/x186)%(x187^x188));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x189 = 118U;
	uint64_t x190 = UINT64_MAX;
	int32_t x192 = INT32_MIN;
	volatile uint64_t t45 = 53452731LLU;

	t45 = ((x189/x190)%(x191^x192));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x193 = -1;
	int16_t x194 = -4004;
	int32_t x195 = INT32_MIN;
	int8_t x196 = 4;
	int32_t t46 = -272869146;

	t46 = ((x193/x194)%(x195^x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x201 = INT32_MIN;
	int64_t x202 = INT64_MAX;
	int16_t x203 = INT16_MIN;
	int16_t x204 = -162;
	int64_t t47 = 28927LL;

	t47 = ((x201/x202)%(x203^x204));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x205 = -1;
	uint8_t x206 = 1U;
	uint8_t x207 = UINT8_MAX;
	int64_t x208 = -1LL;

	t48 = ((x205/x206)%(x207^x208));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x209 = -1;
	volatile int8_t x210 = INT8_MIN;
	int8_t x211 = -1;
	int64_t x212 = INT64_MAX;

	t49 = ((x209/x210)%(x211^x212));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x213 = -1LL;
	int16_t x214 = 46;
	int16_t x215 = INT16_MAX;
	static int64_t x216 = INT64_MAX;

	t50 = ((x213/x214)%(x215^x216));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x217 = 7103;
	uint8_t x218 = 15U;
	uint64_t x219 = 438633689089LLU;

	t51 = ((x217/x218)%(x219^x220));

	if (t51 != 473LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x221 = 9511;
	int64_t x222 = INT64_MIN;
	static int16_t x223 = 6808;
	static uint8_t x224 = UINT8_MAX;
	static int64_t t52 = -151105562LL;

	t52 = ((x221/x222)%(x223^x224));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x225 = 22;
	uint32_t x226 = 4767U;
	uint32_t x227 = 28752467U;

	t53 = ((x225/x226)%(x227^x228));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x229 = 59U;
	volatile int8_t x230 = -1;
	uint32_t x231 = UINT32_MAX;
	uint8_t x232 = 18U;
	volatile uint32_t t54 = 1189942328U;

	t54 = ((x229/x230)%(x231^x232));

	if (t54 != 4294967237U) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x233 = INT32_MAX;
	uint8_t x234 = 2U;
	int8_t x235 = INT8_MIN;
	int8_t x236 = 1;

	t55 = ((x233/x234)%(x235^x236));

	if (t55 != 3) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x237 = INT8_MAX;
	uint16_t x238 = UINT16_MAX;
	int32_t x239 = INT32_MAX;
	int16_t x240 = INT16_MAX;
	volatile int32_t t56 = 24754894;

	t56 = ((x237/x238)%(x239^x240));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x241 = 1457346U;
	uint64_t x242 = 13917018049795LLU;
	uint16_t x243 = UINT16_MAX;

	t57 = ((x241/x242)%(x243^x244));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x245 = -1110060LL;
	uint64_t x246 = 127530984886LLU;
	uint64_t x247 = UINT64_MAX;
	int16_t x248 = INT16_MIN;
	uint64_t t58 = 64LLU;

	t58 = ((x245/x246)%(x247^x248));

	if (t58 != 11656LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x250 = INT32_MAX;
	uint16_t x252 = UINT16_MAX;
	volatile int32_t t59 = -495590697;

	t59 = ((x249/x250)%(x251^x252));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x253 = -7075;
	static int32_t x255 = 824;
	int64_t x256 = INT64_MAX;

	t60 = ((x253/x254)%(x255^x256));

	if (t60 != -3LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x257 = -1LL;
	static uint32_t x258 = 7145110U;
	volatile int16_t x259 = -571;
	int32_t x260 = INT32_MIN;
	int64_t t61 = 64674119806LL;

	t61 = ((x257/x258)%(x259^x260));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x261 = 5U;
	int64_t x262 = 13513831377LL;
	static volatile int32_t x263 = INT32_MAX;
	volatile uint8_t x264 = 63U;
	volatile int64_t t62 = 8043LL;

	t62 = ((x261/x262)%(x263^x264));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x265 = UINT16_MAX;
	uint32_t x266 = 285U;
	uint8_t x267 = 1U;
	int16_t x268 = INT16_MIN;
	static uint32_t t63 = 317U;

	t63 = ((x265/x266)%(x267^x268));

	if (t63 != 229U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x269 = -124418608;
	int64_t x270 = 62885074306524LL;
	int8_t x271 = INT8_MAX;
	volatile int64_t t64 = 891076440268643LL;

	t64 = ((x269/x270)%(x271^x272));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x273 = INT8_MIN;
	int8_t x274 = INT8_MIN;
	uint8_t x275 = 2U;
	int8_t x276 = -14;
	static int32_t t65 = 1352;

	t65 = ((x273/x274)%(x275^x276));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x277 = 11U;
	int32_t x278 = INT32_MAX;
	int32_t x279 = INT32_MAX;
	int32_t x280 = INT32_MIN;
	volatile int32_t t66 = -4;

	t66 = ((x277/x278)%(x279^x280));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x281 = 14;
	int32_t x282 = 2;
	static int16_t x283 = INT16_MAX;
	uint32_t t67 = 24316966U;

	t67 = ((x281/x282)%(x283^x284));

	if (t67 != 7U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x285 = -1;
	static uint32_t x287 = 3U;
	int32_t x288 = INT32_MAX;

	t68 = ((x285/x286)%(x287^x288));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x289 = INT32_MAX;
	static volatile uint16_t x290 = 4694U;
	uint64_t x291 = 8303272308LLU;
	static uint16_t x292 = 118U;
	uint64_t t69 = 1027529LLU;

	t69 = ((x289/x290)%(x291^x292));

	if (t69 != 457495LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x294 = 115;
	int16_t x295 = INT16_MIN;
	int16_t x296 = 0;

	t70 = ((x293/x294)%(x295^x296));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x298 = INT8_MIN;
	volatile uint8_t x300 = UINT8_MAX;

	t71 = ((x297/x298)%(x299^x300));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x302 = -1LL;
	volatile int32_t x303 = INT32_MAX;
	int8_t x304 = INT8_MAX;
	volatile int64_t t72 = -219066716621LL;

	t72 = ((x301/x302)%(x303^x304));

	if (t72 != -127LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x305 = UINT32_MAX;
	int32_t x306 = -1;
	int64_t x307 = -24366055LL;
	uint8_t x308 = 51U;
	int64_t t73 = -40938854517889008LL;

	t73 = ((x305/x306)%(x307^x308));

	if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x313 = INT16_MIN;
	int32_t x314 = -1;
	uint16_t x315 = 186U;
	int64_t x316 = -1LL;
	int64_t t74 = -2356692980LL;

	t74 = ((x313/x314)%(x315^x316));

	if (t74 != 43LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x317 = 125U;
	int64_t x318 = INT64_MAX;
	uint64_t x319 = UINT64_MAX;
	int64_t x320 = INT64_MIN;
	volatile uint64_t t75 = 33456302552LLU;

	t75 = ((x317/x318)%(x319^x320));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x322 = -1;
	uint32_t x323 = 1U;
	int32_t x324 = 0;
	uint32_t t76 = 254799U;

	t76 = ((x321/x322)%(x323^x324));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x326 = INT8_MIN;
	static volatile int32_t x327 = 1057836;
	static volatile uint16_t x328 = 3835U;

	t77 = ((x325/x326)%(x327^x328));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x329 = -19;
	int8_t x331 = INT8_MAX;
	int16_t x332 = INT16_MIN;

	t78 = ((x329/x330)%(x331^x332));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x335 = INT32_MIN;
	int32_t x336 = INT32_MAX;
	static int32_t t79 = 16924951;

	t79 = ((x333/x334)%(x335^x336));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x341 = INT32_MAX;
	int32_t x342 = INT32_MIN;
	int16_t x343 = -20;
	volatile int32_t x344 = INT32_MAX;

	t80 = ((x341/x342)%(x343^x344));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x345 = INT8_MIN;
	volatile int16_t x346 = 2543;
	static int32_t x348 = -3961683;
	int32_t t81 = 3;

	t81 = ((x345/x346)%(x347^x348));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x350 = UINT8_MAX;
	uint16_t x351 = 59U;
	static int32_t x352 = 238;
	volatile int32_t t82 = -3;

	t82 = ((x349/x350)%(x351^x352));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x353 = 3U;
	volatile int8_t x354 = INT8_MIN;
	int8_t x355 = 0;
	uint8_t x356 = 88U;
	volatile int32_t t83 = 0;

	t83 = ((x353/x354)%(x355^x356));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x357 = INT64_MIN;
	uint32_t x358 = 61379351U;
	uint64_t x359 = 494777032855587459LLU;
	static uint64_t t84 = 1404LLU;

	t84 = ((x357/x358)%(x359^x360));

	if (t84 != 139993707784494340LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x361 = INT8_MIN;
	static int8_t x362 = INT8_MIN;
	static int64_t x363 = INT64_MIN;
	int8_t x364 = INT8_MAX;

	t85 = ((x361/x362)%(x363^x364));

	if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x365 = -1;
	volatile uint16_t x366 = 2554U;
	volatile uint64_t t86 = 245159427LLU;

	t86 = ((x365/x366)%(x367^x368));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x369 = 60;
	uint16_t x370 = UINT16_MAX;
	uint8_t x372 = 31U;
	int32_t t87 = 19;

	t87 = ((x369/x370)%(x371^x372));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x377 = 14U;
	int32_t x378 = INT32_MAX;
	uint64_t x380 = 361810LLU;
	volatile uint64_t t88 = 30711768904652LLU;

	t88 = ((x377/x378)%(x379^x380));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x381 = 1595063062169525LL;
	volatile int32_t x382 = -1;
	uint32_t x383 = UINT32_MAX;
	uint8_t x384 = UINT8_MAX;
	static int64_t t89 = -28095341LL;

	t89 = ((x381/x382)%(x383^x384));

	if (t89 != -2497821365LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x385 = UINT32_MAX;
	static int64_t x387 = -1LL;
	static int32_t x388 = -10328;
	static volatile int64_t t90 = -133LL;

	t90 = ((x385/x386)%(x387^x388));

	if (t90 != -9303LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x391 = INT64_MIN;
	int8_t x392 = -10;

	t91 = ((x389/x390)%(x391^x392));

	if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x394 = UINT64_MAX;
	static int16_t x395 = -1;
	uint8_t x396 = UINT8_MAX;
	volatile uint64_t t92 = 0LLU;

	t92 = ((x393/x394)%(x395^x396));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x397 = -1;
	int64_t x400 = 1LL;
	int64_t t93 = 1LL;

	t93 = ((x397/x398)%(x399^x400));

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x401 = INT32_MIN;
	uint64_t x402 = 15857662620633583LLU;
	uint32_t x403 = 10966596U;
	int8_t x404 = INT8_MIN;
	volatile uint64_t t94 = 23154LLU;

	t94 = ((x401/x402)%(x403^x404));

	if (t94 != 1163LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x405 = -72088933LL;
	int32_t x406 = INT32_MAX;
	volatile int64_t x408 = -1LL;
	static int64_t t95 = 3LL;

	t95 = ((x405/x406)%(x407^x408));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x409 = -3LL;
	int32_t x410 = INT32_MIN;

	t96 = ((x409/x410)%(x411^x412));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x414 = INT32_MIN;
	int16_t x415 = INT16_MAX;
	int32_t t97 = 349801837;

	t97 = ((x413/x414)%(x415^x416));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x417 = UINT32_MAX;
	int16_t x418 = INT16_MIN;
	int8_t x419 = INT8_MIN;
	uint16_t x420 = UINT16_MAX;
	volatile uint32_t t98 = 4311U;

	t98 = ((x417/x418)%(x419^x420));

	if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x421 = INT8_MIN;
	int16_t x422 = -14;
	uint64_t x423 = UINT64_MAX;
	int8_t x424 = 15;
	volatile uint64_t t99 = 1978252LLU;

	t99 = ((x421/x422)%(x423^x424));

	if (t99 != 9LLU) { NG(); } else { ; }
	
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

