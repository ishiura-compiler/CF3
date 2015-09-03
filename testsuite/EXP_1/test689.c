#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = INT16_MIN;
static volatile uint16_t x16 = UINT16_MAX;
int64_t x20 = 1666322366450LL;
int8_t x22 = -1;
volatile uint64_t t6 = 1779090418355866LLU;
volatile int32_t x43 = INT32_MIN;
volatile int32_t x52 = INT32_MIN;
int32_t t11 = -181;
uint8_t x53 = 63U;
int16_t x56 = 16086;
volatile int32_t t12 = 755;
int32_t x62 = INT32_MIN;
int64_t x76 = 51008519530LL;
static int64_t t16 = 53LL;
int8_t x88 = INT8_MAX;
volatile uint64_t t24 = 110197858908LLU;
int64_t x114 = -1LL;
volatile int64_t t26 = -35LL;
static uint8_t x123 = UINT8_MAX;
static uint64_t x132 = 7741113730976LLU;
int64_t x136 = 58LL;
volatile int16_t x139 = -1;
static int64_t x141 = INT64_MAX;
volatile int64_t t33 = 11086681666631678LL;
volatile int8_t x147 = 0;
static int64_t x148 = INT64_MIN;
uint8_t x155 = 1U;
uint8_t x160 = UINT8_MAX;
int64_t t37 = -1166LL;
int64_t t38 = -1376LL;
int8_t x167 = INT8_MIN;
int64_t t39 = -21LL;
int64_t x170 = INT64_MAX;
uint8_t x181 = UINT8_MAX;
int32_t x188 = INT32_MAX;
int64_t t45 = -14959532150405658LL;
volatile uint64_t x198 = UINT64_MAX;
uint8_t x200 = 7U;
uint64_t x208 = 1468797050020811830LLU;
volatile uint64_t x213 = 56979297253742871LLU;
volatile uint64_t t51 = 162581574415700844LLU;
volatile int64_t t52 = -6LL;
int32_t x225 = INT32_MIN;
int64_t x228 = INT64_MIN;
int32_t x230 = -1;
volatile int64_t t54 = -2051399075LL;
int8_t x238 = INT8_MIN;
uint64_t x246 = UINT64_MAX;
int8_t x247 = INT8_MIN;
uint32_t x251 = 126207U;
uint8_t x255 = 25U;
int16_t x267 = INT16_MAX;
int8_t x272 = INT8_MIN;
static volatile int32_t t63 = 514249826;
volatile int16_t x283 = 34;
uint64_t t66 = 514LLU;
int32_t x286 = INT32_MAX;
uint64_t x287 = UINT64_MAX;
int16_t x289 = INT16_MAX;
int16_t x292 = -53;
uint16_t x295 = 15765U;
uint64_t x296 = 452428477004295LLU;
volatile int32_t x298 = -14424;
int32_t x301 = 79;
static int16_t x302 = INT16_MIN;
static uint64_t x304 = 17049LLU;
uint8_t x309 = UINT8_MAX;
uint64_t x315 = 4607LLU;
volatile int64_t t76 = -181766903653LL;
uint32_t x332 = UINT32_MAX;
int64_t x350 = INT64_MAX;
static int64_t x356 = INT64_MIN;
int32_t x360 = INT32_MIN;
uint16_t x364 = 0U;
uint64_t x365 = 11180013883727622LLU;
static volatile int32_t x369 = -105632;
static volatile uint8_t x387 = 2U;
volatile uint32_t t89 = 300U;
int64_t x389 = 1317929545751381828LL;
volatile int64_t x390 = -1596094758038727643LL;
uint32_t x391 = UINT32_MAX;
int64_t t91 = 1LL;
int8_t x402 = -1;
int32_t x403 = -1;
int16_t x405 = INT16_MAX;
volatile int16_t x408 = INT16_MAX;
uint8_t x411 = UINT8_MAX;
static int16_t x414 = -1;
volatile uint8_t x419 = 58U;
uint64_t x420 = UINT64_MAX;
volatile uint64_t x426 = 3469037LLU;
int8_t x427 = -1;


void f0(void) {
	static int8_t x1 = 1;
	uint32_t x2 = 405424224U;
	volatile uint64_t x4 = 28200650537128LLU;
	volatile uint64_t t0 = 1LLU;

	t0 = (((x1%x2)+x3)^x4);

	if (t0 != 28196565055657LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	static volatile int16_t x6 = -1;
	uint64_t x7 = 134LLU;
	int16_t x8 = 1;
	uint64_t t1 = 399808051078LLU;

	t1 = (((x5%x6)+x7)^x8);

	if (t1 != 135LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MAX;
	int64_t x14 = -1LL;
	static int64_t x15 = -159923912846554125LL;
	volatile int64_t t2 = -1716109909LL;

	t2 = (((x13%x14)+x15)^x16);

	if (t2 != -159923912846593012LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 26012010U;
	static uint8_t x18 = 6U;
	static uint32_t x19 = 105157959U;
	volatile int64_t t3 = -350636238LL;

	t3 = (((x17%x18)+x19)^x20);

	if (t3 != 1666426989237LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = -1;
	uint8_t x23 = 62U;
	int32_t x24 = 1883;
	int32_t t4 = 83269780;

	t4 = (((x21%x22)+x23)^x24);

	if (t4 != 1893) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x25 = -2;
	uint8_t x26 = UINT8_MAX;
	uint8_t x27 = UINT8_MAX;
	int16_t x28 = -1;
	int32_t t5 = -6204;

	t5 = (((x25%x26)+x27)^x28);

	if (t5 != -254) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MIN;
	uint64_t x30 = 3225297040143381838LLU;
	int32_t x31 = INT32_MIN;
	uint64_t x32 = UINT64_MAX;

	t6 = (((x29%x30)+x31)^x32);

	if (t6 != 16126485205011876485LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = -1LL;
	int8_t x34 = -1;
	int32_t x35 = -1;
	static int8_t x36 = INT8_MIN;
	volatile int64_t t7 = -277626909LL;

	t7 = (((x33%x34)+x35)^x36);

	if (t7 != 127LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = INT64_MAX;
	int64_t x38 = INT64_MIN;
	int32_t x39 = -177865;
	int16_t x40 = INT16_MAX;
	volatile int64_t t8 = 7781LL;

	t8 = (((x37%x38)+x39)^x40);

	if (t8 != 9223372036854593225LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = -1;
	uint64_t x42 = UINT64_MAX;
	int16_t x44 = -1;
	volatile uint64_t t9 = 436280377LLU;

	t9 = (((x41%x42)+x43)^x44);

	if (t9 != 2147483647LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x45 = 4;
	uint8_t x46 = 1U;
	uint32_t x47 = UINT32_MAX;
	static uint16_t x48 = 1010U;
	uint32_t t10 = 6U;

	t10 = (((x45%x46)+x47)^x48);

	if (t10 != 4294966285U) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x49 = INT8_MAX;
	int8_t x50 = 1;
	static uint16_t x51 = 1U;

	t11 = (((x49%x50)+x51)^x52);

	if (t11 != -2147483647) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x54 = 13866U;
	int16_t x55 = -1;

	t12 = (((x53%x54)+x55)^x56);

	if (t12 != 16104) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x57 = INT8_MIN;
	int16_t x58 = -82;
	uint16_t x59 = UINT16_MAX;
	int64_t x60 = -545439143LL;
	volatile int64_t t13 = -99980897802242LL;

	t13 = (((x57%x58)+x59)^x60);

	if (t13 != -545407608LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x61 = 315533U;
	static int32_t x63 = INT32_MAX;
	volatile int32_t x64 = 1020375494;
	volatile uint32_t t14 = 5U;

	t14 = (((x61%x62)+x63)^x64);

	if (t14 != 3168100682U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = 8559LL;
	int32_t x70 = 112;
	static int32_t x71 = -350304;
	uint8_t x72 = UINT8_MAX;
	int64_t t15 = -3012112924LL;

	t15 = (((x69%x70)+x71)^x72);

	if (t15 != -350416LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x73 = UINT16_MAX;
	uint8_t x74 = 14U;
	volatile uint8_t x75 = 3U;

	t16 = (((x73%x74)+x75)^x76);

	if (t16 != 51008519534LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x77 = 9845U;
	uint16_t x78 = 99U;
	int32_t x79 = INT32_MIN;
	static int16_t x80 = INT16_MAX;
	volatile uint32_t t17 = 918899204U;

	t17 = (((x77%x78)+x79)^x80);

	if (t17 != 2147516371U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = INT16_MIN;
	int16_t x82 = INT16_MIN;
	int32_t x83 = INT32_MAX;
	uint8_t x84 = 87U;
	volatile int32_t t18 = -3274176;

	t18 = (((x81%x82)+x83)^x84);

	if (t18 != 2147483560) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x85 = UINT32_MAX;
	int64_t x86 = -1LL;
	int16_t x87 = INT16_MIN;
	static volatile int64_t t19 = 270935686109425LL;

	t19 = (((x85%x86)+x87)^x88);

	if (t19 != -32641LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x89 = 24U;
	static int16_t x90 = INT16_MAX;
	uint64_t x91 = 32647LLU;
	int8_t x92 = INT8_MIN;
	volatile uint64_t t20 = 833089571046229LLU;

	t20 = (((x89%x90)+x91)^x92);

	if (t20 != 18446744073709518879LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x93 = INT64_MIN;
	uint32_t x94 = 54661364U;
	uint16_t x95 = 1U;
	int64_t x96 = INT64_MAX;
	volatile int64_t t21 = -30952261256LL;

	t21 = (((x93%x94)+x95)^x96);

	if (t21 != -9223372036834634142LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint16_t x97 = UINT16_MAX;
	volatile int16_t x98 = INT16_MAX;
	int8_t x99 = 18;
	static int8_t x100 = 9;
	volatile int32_t t22 = 1659;

	t22 = (((x97%x98)+x99)^x100);

	if (t22 != 26) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint32_t x101 = UINT32_MAX;
	volatile uint64_t x102 = 38LLU;
	static int16_t x103 = 57;
	int16_t x104 = -105;
	static volatile uint64_t t23 = 565681039602LLU;

	t23 = (((x101%x102)+x103)^x104);

	if (t23 != 18446744073709551529LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x105 = 15U;
	int64_t x106 = 782392075413LL;
	int32_t x107 = -5;
	static uint64_t x108 = 39535LLU;

	t24 = (((x105%x106)+x107)^x108);

	if (t24 != 39525LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x109 = UINT8_MAX;
	int32_t x110 = INT32_MAX;
	uint16_t x111 = UINT16_MAX;
	volatile int16_t x112 = 9206;
	static int32_t t25 = -2501274;

	t25 = (((x109%x110)+x111)^x112);

	if (t25 != 74504) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = 847394025492LL;
	int32_t x115 = -146024667;
	static volatile int32_t x116 = 2644335;

	t26 = (((x113%x114)+x115)^x116);

	if (t26 != -144470454LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x117 = 7U;
	uint8_t x118 = 14U;
	int32_t x119 = 52679;
	volatile uint16_t x120 = 0U;
	int32_t t27 = 6988;

	t27 = (((x117%x118)+x119)^x120);

	if (t27 != 52686) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x121 = 10U;
	static int8_t x122 = -1;
	int64_t x124 = -1LL;
	int64_t t28 = 6684329LL;

	t28 = (((x121%x122)+x123)^x124);

	if (t28 != -266LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = -1;
	volatile uint64_t x126 = 1962987LLU;
	int32_t x127 = INT32_MIN;
	int64_t x128 = INT64_MIN;
	static uint64_t t29 = 26565957798104LLU;

	t29 = (((x125%x126)+x127)^x128);

	if (t29 != 9223372034708217177LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = 0;
	static int32_t x130 = INT32_MAX;
	uint16_t x131 = 1182U;
	static uint64_t t30 = 8782079476708LLU;

	t30 = (((x129%x130)+x131)^x132);

	if (t30 != 7741113729854LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x133 = INT64_MIN;
	static int16_t x134 = -1;
	int32_t x135 = -1506791;
	static volatile int64_t t31 = -533LL;

	t31 = (((x133%x134)+x135)^x136);

	if (t31 != -1506781LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x137 = 1U;
	int8_t x138 = INT8_MIN;
	uint64_t x140 = 7625LLU;
	uint64_t t32 = 323089907037LLU;

	t32 = (((x137%x138)+x139)^x140);

	if (t32 != 7625LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x142 = INT32_MIN;
	int8_t x143 = INT8_MIN;
	int32_t x144 = INT32_MAX;

	t33 = (((x141%x142)+x143)^x144);

	if (t33 != 128LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x145 = INT8_MAX;
	static int16_t x146 = -1;
	int64_t t34 = INT64_MIN;

	t34 = (((x145%x146)+x147)^x148);

	if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x149 = INT16_MIN;
	static int16_t x150 = -4;
	int8_t x151 = INT8_MAX;
	static int64_t x152 = 19232474791LL;
	int64_t t35 = 12299134054859LL;

	t35 = (((x149%x150)+x151)^x152);

	if (t35 != 19232474840LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x153 = 295576324733LL;
	static volatile int64_t x154 = INT64_MAX;
	volatile int32_t x156 = INT32_MAX;
	int64_t t36 = 11709921335301LL;

	t36 = (((x153%x154)+x155)^x156);

	if (t36 != 294981678465LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x157 = -240530717LL;
	uint16_t x158 = 3292U;
	int8_t x159 = -1;

	t37 = (((x157%x158)+x159)^x160);

	if (t37 != -543LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x161 = -58743044843442LL;
	static int16_t x162 = -1;
	uint32_t x163 = 225911054U;
	int8_t x164 = INT8_MIN;

	t38 = (((x161%x162)+x163)^x164);

	if (t38 != -225911154LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x165 = INT32_MIN;
	static uint16_t x166 = 27U;
	int64_t x168 = INT64_MIN;

	t39 = (((x165%x166)+x167)^x168);

	if (t39 != 9223372036854775669LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x169 = INT64_MIN;
	int8_t x171 = INT8_MIN;
	int32_t x172 = -1;
	volatile int64_t t40 = 32702LL;

	t40 = (((x169%x170)+x171)^x172);

	if (t40 != 128LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x173 = -1;
	volatile uint64_t x174 = 45852301682138199LLU;
	int8_t x175 = INT8_MIN;
	volatile int32_t x176 = 133911;
	uint64_t t41 = 53362225771LLU;

	t41 = (((x173%x174)+x175)^x176);

	if (t41 != 14118797489862134LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x177 = INT8_MIN;
	int32_t x178 = INT32_MIN;
	static int8_t x179 = -1;
	static volatile int64_t x180 = -1LL;
	static int64_t t42 = -488831149194787LL;

	t42 = (((x177%x178)+x179)^x180);

	if (t42 != 128LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x182 = 384964LL;
	int16_t x183 = INT16_MAX;
	int16_t x184 = -1;
	volatile int64_t t43 = 459761011988LL;

	t43 = (((x181%x182)+x183)^x184);

	if (t43 != -33023LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x185 = -692176719769LL;
	static uint32_t x186 = UINT32_MAX;
	int8_t x187 = INT8_MIN;
	int64_t t44 = -111LL;

	t44 = (((x185%x186)+x187)^x188);

	if (t44 != -1460498247LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x189 = 15U;
	int8_t x190 = INT8_MAX;
	int8_t x191 = -56;
	int64_t x192 = -47957LL;

	t45 = (((x189%x190)+x191)^x192);

	if (t45 != 47996LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = INT64_MIN;
	int16_t x194 = INT16_MAX;
	int32_t x195 = -348301241;
	volatile int16_t x196 = 4;
	volatile int64_t t46 = 153105090626LL;

	t46 = (((x193%x194)+x195)^x196);

	if (t46 != -348301253LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x197 = INT16_MIN;
	int64_t x199 = INT64_MIN;
	static volatile uint64_t t47 = 1348795183958840LLU;

	t47 = (((x197%x198)+x199)^x200);

	if (t47 != 9223372036854743047LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x201 = UINT8_MAX;
	static int64_t x202 = -1LL;
	int16_t x203 = INT16_MIN;
	int8_t x204 = 0;
	int64_t t48 = 5LL;

	t48 = (((x201%x202)+x203)^x204);

	if (t48 != -32768LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x205 = 2U;
	volatile uint64_t x206 = 1644LLU;
	int8_t x207 = -1;
	uint64_t t49 = 110106LLU;

	t49 = (((x205%x206)+x207)^x208);

	if (t49 != 1468797050020811831LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x214 = INT8_MAX;
	int64_t x215 = 106880022118422868LL;
	static volatile int16_t x216 = INT16_MAX;
	volatile uint64_t t50 = 2025905868862LLU;

	t50 = (((x213%x214)+x215)^x216);

	if (t50 != 106880022118409881LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x217 = 1;
	int32_t x218 = -1;
	uint64_t x219 = 200LLU;
	int16_t x220 = INT16_MAX;

	t51 = (((x217%x218)+x219)^x220);

	if (t51 != 32567LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x221 = INT64_MIN;
	uint16_t x222 = 5U;
	volatile int8_t x223 = -8;
	static int64_t x224 = 0LL;

	t52 = (((x221%x222)+x223)^x224);

	if (t52 != -11LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x226 = INT64_MIN;
	volatile int8_t x227 = INT8_MAX;
	int64_t t53 = 2339931LL;

	t53 = (((x225%x226)+x227)^x228);

	if (t53 != 9223372034707292287LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x229 = INT64_MIN;
	int64_t x231 = -369334010602840LL;
	volatile int32_t x232 = INT32_MIN;

	t54 = (((x229%x230)+x231)^x232);

	if (t54 != 369333792316072LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x237 = 478537868;
	uint64_t x239 = UINT64_MAX;
	int16_t x240 = 15;
	static volatile uint64_t t55 = 20421290641065822LLU;

	t55 = (((x237%x238)+x239)^x240);

	if (t55 != 4LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x241 = -1;
	static int32_t x242 = 98093980;
	int64_t x243 = INT64_MAX;
	static int8_t x244 = INT8_MIN;
	int64_t t56 = 222989372LL;

	t56 = (((x241%x242)+x243)^x244);

	if (t56 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x245 = -14909213LL;
	volatile int64_t x248 = -1LL;
	uint64_t t57 = 51608152122827LLU;

	t57 = (((x245%x246)+x247)^x248);

	if (t57 != 14909340LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x249 = 10775U;
	int64_t x250 = 3356485364LL;
	int8_t x252 = 53;
	static int64_t t58 = 3965851877LL;

	t58 = (((x249%x250)+x251)^x252);

	if (t58 != 136995LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int64_t x253 = INT64_MIN;
	uint64_t x254 = UINT64_MAX;
	int16_t x256 = -1;
	volatile uint64_t t59 = 521394466LLU;

	t59 = (((x253%x254)+x255)^x256);

	if (t59 != 9223372036854775782LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x257 = 7U;
	int16_t x258 = 5;
	volatile int16_t x259 = -1;
	static volatile int32_t x260 = -1;
	int32_t t60 = 53692720;

	t60 = (((x257%x258)+x259)^x260);

	if (t60 != -2) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint64_t x261 = 11596162684279LLU;
	volatile uint8_t x262 = UINT8_MAX;
	int8_t x263 = INT8_MIN;
	int16_t x264 = INT16_MAX;
	volatile uint64_t t61 = 19481591717574525LLU;

	t61 = (((x261%x262)+x263)^x264);

	if (t61 != 18446744073709518851LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x265 = 21288U;
	uint64_t x266 = UINT64_MAX;
	int8_t x268 = INT8_MAX;
	volatile uint64_t t62 = 1529167682862565701LLU;

	t62 = (((x265%x266)+x267)^x268);

	if (t62 != 54104LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x269 = 0;
	int32_t x270 = INT32_MAX;
	int16_t x271 = -1;

	t63 = (((x269%x270)+x271)^x272);

	if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x273 = 3;
	static volatile int32_t x274 = INT32_MIN;
	int64_t x275 = -2651LL;
	int16_t x276 = INT16_MAX;
	int64_t t64 = 44624004016633LL;

	t64 = (((x273%x274)+x275)^x276);

	if (t64 != -30121LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x277 = 169203151424557819LLU;
	static uint32_t x278 = UINT32_MAX;
	uint32_t x279 = 64876U;
	int32_t x280 = INT32_MIN;
	uint64_t t65 = 4483119LLU;

	t65 = (((x277%x278)+x279)^x280);

	if (t65 != 18446744070117372357LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x281 = 66512382902799LLU;
	uint8_t x282 = 1U;
	uint8_t x284 = 0U;

	t66 = (((x281%x282)+x283)^x284);

	if (t66 != 34LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x285 = UINT16_MAX;
	uint64_t x288 = 1731291465184LLU;
	static uint64_t t67 = 2505455067286257275LLU;

	t67 = (((x285%x286)+x287)^x288);

	if (t67 != 1731291494942LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x290 = -1LL;
	static int64_t x291 = 638758732025144LL;
	static int64_t t68 = -3231595288220821LL;

	t68 = (((x289%x290)+x291)^x292);

	if (t68 != -638758732025101LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x293 = INT16_MIN;
	uint32_t x294 = 15761U;
	static volatile uint64_t t69 = 520390766909965557LLU;

	t69 = (((x293%x294)+x295)^x296);

	if (t69 != 452428476976425LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x297 = 52U;
	int64_t x299 = -1LL;
	int64_t x300 = INT64_MIN;
	volatile int64_t t70 = -61609LL;

	t70 = (((x297%x298)+x299)^x300);

	if (t70 != -9223372036854775757LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x303 = INT8_MAX;
	volatile uint64_t t71 = 3148126880600LLU;

	t71 = (((x301%x302)+x303)^x304);

	if (t71 != 16983LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x310 = UINT32_MAX;
	volatile int8_t x311 = -1;
	int16_t x312 = INT16_MIN;
	volatile uint32_t t72 = 5U;

	t72 = (((x309%x310)+x311)^x312);

	if (t72 != 4294934782U) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x313 = -1;
	volatile int64_t x314 = -1LL;
	int16_t x316 = -1;
	volatile uint64_t t73 = 4025LLU;

	t73 = (((x313%x314)+x315)^x316);

	if (t73 != 18446744073709547008LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x317 = 9078;
	volatile uint8_t x318 = UINT8_MAX;
	int8_t x319 = -1;
	volatile int8_t x320 = INT8_MAX;
	int32_t t74 = 0;

	t74 = (((x317%x318)+x319)^x320);

	if (t74 != 231) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x321 = INT64_MIN;
	volatile uint64_t x322 = 65189LLU;
	static uint8_t x323 = 44U;
	uint32_t x324 = UINT32_MAX;
	volatile uint64_t t75 = 14486LLU;

	t75 = (((x321%x322)+x323)^x324);

	if (t75 != 4294918194LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x325 = INT64_MAX;
	volatile uint16_t x326 = 881U;
	int64_t x327 = INT64_MIN;
	volatile uint16_t x328 = UINT16_MAX;

	t76 = (((x325%x326)+x327)^x328);

	if (t76 != -9223372036854710528LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x329 = -11;
	int32_t x330 = INT32_MIN;
	int16_t x331 = INT16_MIN;
	uint32_t t77 = 1454700U;

	t77 = (((x329%x330)+x331)^x332);

	if (t77 != 32778U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x333 = 3009;
	static int16_t x334 = INT16_MIN;
	int32_t x335 = 4;
	int32_t x336 = -381316329;
	volatile int32_t t78 = 0;

	t78 = (((x333%x334)+x335)^x336);

	if (t78 != -381314862) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x337 = 0U;
	static volatile uint8_t x338 = 15U;
	static int32_t x339 = -506056072;
	int64_t x340 = -685444664208631LL;
	int64_t t79 = 3866LL;

	t79 = (((x337%x338)+x339)^x340);

	if (t79 != 685445030666609LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x349 = 13993355U;
	uint16_t x351 = 3U;
	int64_t x352 = -3498063675155LL;
	static volatile int64_t t80 = 1LL;

	t80 = (((x349%x350)+x351)^x352);

	if (t80 != -3498049682077LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x353 = INT8_MAX;
	volatile int64_t x354 = -308488524344818LL;
	uint16_t x355 = 27745U;
	volatile int64_t t81 = -272642679LL;

	t81 = (((x353%x354)+x355)^x356);

	if (t81 != -9223372036854747936LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x357 = 174062639250187090LLU;
	uint64_t x358 = 231LLU;
	uint16_t x359 = 502U;
	volatile uint64_t t82 = 300768521165839LLU;

	t82 = (((x357%x358)+x359)^x360);

	if (t82 != 18446744071562068642LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x361 = -1;
	volatile uint16_t x362 = UINT16_MAX;
	volatile int8_t x363 = -1;
	static int32_t t83 = 833207;

	t83 = (((x361%x362)+x363)^x364);

	if (t83 != -2) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x366 = 1U;
	static volatile int8_t x367 = -11;
	static uint16_t x368 = 440U;
	volatile uint64_t t84 = 34187399LLU;

	t84 = (((x365%x366)+x367)^x368);

	if (t84 != 18446744073709551181LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x370 = INT16_MIN;
	uint32_t x371 = UINT32_MAX;
	int64_t x372 = -1LL;
	volatile int64_t t85 = -2403207861541LL;

	t85 = (((x369%x370)+x371)^x372);

	if (t85 != -4294959968LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x373 = INT16_MIN;
	int32_t x374 = INT32_MAX;
	uint32_t x375 = UINT32_MAX;
	int64_t x376 = INT64_MIN;
	int64_t t86 = 3430206247LL;

	t86 = (((x373%x374)+x375)^x376);

	if (t86 != -9223372032559841281LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x377 = -1;
	volatile int64_t x378 = 512763862LL;
	int32_t x379 = INT32_MIN;
	volatile int16_t x380 = 1;
	volatile int64_t t87 = -5LL;

	t87 = (((x377%x378)+x379)^x380);

	if (t87 != -2147483650LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x381 = INT8_MIN;
	volatile uint16_t x382 = UINT16_MAX;
	volatile uint8_t x383 = 18U;
	uint32_t x384 = UINT32_MAX;
	uint32_t t88 = 187460610U;

	t88 = (((x381%x382)+x383)^x384);

	if (t88 != 109U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x385 = 6387U;
	int32_t x386 = INT32_MIN;
	volatile int32_t x388 = INT32_MIN;

	t89 = (((x385%x386)+x387)^x388);

	if (t89 != 2147490037U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x392 = -9;
	static volatile int64_t t90 = 6LL;

	t90 = (((x389%x390)+x391)^x392);

	if (t90 != -1317929550046349132LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x393 = INT32_MIN;
	int16_t x394 = INT16_MIN;
	volatile uint16_t x395 = 12U;
	int64_t x396 = 233994LL;

	t91 = (((x393%x394)+x395)^x396);

	if (t91 != 233990LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x397 = 1;
	int32_t x398 = INT32_MIN;
	static int32_t x399 = INT32_MIN;
	volatile int16_t x400 = -1;
	int32_t t92 = 4626470;

	t92 = (((x397%x398)+x399)^x400);

	if (t92 != 2147483646) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x401 = INT16_MIN;
	int64_t x404 = 620381LL;
	static int64_t t93 = -3632629LL;

	t93 = (((x401%x402)+x403)^x404);

	if (t93 != -620382LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x406 = UINT64_MAX;
	volatile int8_t x407 = INT8_MIN;
	volatile uint64_t t94 = 222LLU;

	t94 = (((x405%x406)+x407)^x408);

	if (t94 != 128LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x409 = INT32_MAX;
	volatile int8_t x410 = -1;
	uint32_t x412 = 990840388U;
	volatile uint32_t t95 = 44278815U;

	t95 = (((x409%x410)+x411)^x412);

	if (t95 != 990840507U) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x413 = 10U;
	static int64_t x415 = -25518636915LL;
	int32_t x416 = 58836;
	int64_t t96 = -34581355LL;

	t96 = (((x413%x414)+x415)^x416);

	if (t96 != -25518643879LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x417 = UINT32_MAX;
	uint16_t x418 = 11U;
	uint64_t t97 = 936357528541666LLU;

	t97 = (((x417%x418)+x419)^x420);

	if (t97 != 18446744073709551554LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x421 = INT8_MIN;
	int8_t x422 = INT8_MIN;
	int32_t x423 = INT32_MIN;
	int8_t x424 = -1;
	int32_t t98 = INT32_MAX;

	t98 = (((x421%x422)+x423)^x424);

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x425 = 23U;
	int32_t x428 = 1;
	uint64_t t99 = 27LLU;

	t99 = (((x425%x426)+x427)^x428);

	if (t99 != 23LLU) { NG(); } else { ; }
	
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

