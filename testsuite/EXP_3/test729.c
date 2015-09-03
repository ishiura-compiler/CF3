#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x2 = INT16_MAX;
uint32_t x4 = 700989758U;
int64_t x8 = INT64_MIN;
static int64_t t1 = 393LL;
int16_t x11 = 55;
uint32_t x12 = UINT32_MAX;
uint32_t t2 = 239U;
static int32_t x16 = INT32_MAX;
volatile int64_t t4 = 37661277553773161LL;
uint32_t t5 = 171U;
uint8_t x25 = 1U;
int16_t x32 = INT16_MIN;
int8_t x33 = 4;
int32_t x39 = -1;
int32_t x42 = INT32_MIN;
int8_t x44 = 1;
int64_t x46 = INT64_MIN;
int32_t x47 = -1;
uint64_t x52 = 4916LLU;
volatile uint64_t x55 = 214664LLU;
int64_t x66 = INT64_MIN;
int32_t x68 = 89365725;
int64_t x70 = INT64_MIN;
volatile int16_t x77 = -1;
volatile uint64_t t20 = 1553850639148982LLU;
int16_t x87 = INT16_MIN;
int64_t x88 = -1LL;
volatile int16_t x104 = 3066;
int8_t x105 = 23;
static int16_t x108 = 4197;
volatile uint8_t x109 = 4U;
int16_t x110 = 5;
volatile int8_t x113 = INT8_MAX;
volatile uint32_t x115 = 13726U;
volatile int64_t x122 = INT64_MIN;
volatile int64_t x124 = 3580015952232946LL;
volatile int16_t x135 = -1;
static uint64_t x138 = UINT64_MAX;
volatile int16_t x139 = 0;
int32_t x143 = INT32_MIN;
static volatile int8_t x148 = -54;
uint16_t x151 = 22651U;
volatile uint64_t x155 = UINT64_MAX;
volatile uint64_t t38 = 4629538LLU;
volatile int16_t x158 = INT16_MIN;
int64_t x168 = -1LL;
uint8_t x169 = UINT8_MAX;
int8_t x178 = 19;
static int32_t x183 = -41057059;
int64_t t44 = -3006885321945LL;
int16_t x187 = INT16_MAX;
int64_t x189 = INT64_MIN;
uint8_t x199 = UINT8_MAX;
uint64_t x212 = UINT64_MAX;
static volatile int64_t x216 = -1581534LL;
uint64_t x219 = 107520281715LLU;
volatile uint64_t t53 = 11377LLU;
static volatile int64_t t54 = -11LL;
uint8_t x235 = 22U;
int8_t x236 = INT8_MIN;
uint64_t t58 = 187LLU;
int64_t x251 = -993859149980262LL;
int8_t x254 = INT8_MIN;
uint8_t x256 = UINT8_MAX;
static volatile int32_t x257 = INT32_MAX;
uint64_t x267 = UINT64_MAX;
int8_t x270 = INT8_MAX;
static uint16_t x273 = 7U;
volatile int64_t t66 = 103121243007045LL;
static volatile int32_t x277 = INT32_MAX;
volatile int64_t t67 = -38817LL;
static int64_t t69 = -1LL;
static int32_t x292 = -1;
int8_t x298 = INT8_MIN;
static int16_t x300 = INT16_MAX;
volatile uint8_t x301 = 1U;
int32_t x303 = -1;
int8_t x305 = -1;
int64_t x308 = -56822LL;
uint64_t t75 = 138929893320782948LLU;
static int64_t x320 = INT64_MIN;
uint32_t x322 = 15446026U;
int16_t x328 = INT16_MIN;
uint8_t x334 = 13U;
int8_t x337 = INT8_MAX;
int32_t x341 = -56;
int32_t x342 = INT32_MIN;
static volatile uint16_t x344 = 2561U;
volatile uint16_t x345 = 1U;
int8_t x363 = -1;
volatile int32_t t87 = 867985;
uint64_t x365 = 78785638LLU;
static uint8_t x373 = 11U;
int32_t t92 = 0;
int32_t t93 = 445451587;
uint8_t x391 = 2U;
int8_t x406 = INT8_MAX;
uint8_t x410 = 1U;
uint64_t t99 = 13942532125LLU;


void f0(void) {
	int16_t x1 = INT16_MAX;
	int8_t x3 = INT8_MIN;
	volatile uint32_t t0 = 2036128223U;

	t0 = ((x1%x2)+(x3%x4));

	if (t0 != 89028620U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int8_t x6 = INT8_MIN;
	int8_t x7 = -6;

	t1 = ((x5%x6)+(x7%x8));

	if (t1 != -6LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = INT8_MAX;
	static int16_t x10 = -2;

	t2 = ((x9%x10)+(x11%x12));

	if (t2 != 56U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x13 = 0U;
	int16_t x14 = INT16_MIN;
	static int16_t x15 = INT16_MAX;
	volatile int32_t t3 = -25;

	t3 = ((x13%x14)+(x15%x16));

	if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	static volatile uint8_t x18 = 13U;
	static int64_t x19 = INT64_MAX;
	volatile int32_t x20 = INT32_MIN;

	t4 = ((x17%x18)+(x19%x20));

	if (t4 != 2147483655LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 1;
	int8_t x22 = INT8_MAX;
	int32_t x23 = INT32_MIN;
	static uint32_t x24 = 3U;

	t5 = ((x21%x22)+(x23%x24));

	if (t5 != 3U) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x26 = 3331430519LLU;
	uint16_t x27 = 6U;
	int64_t x28 = INT64_MIN;
	uint64_t t6 = 2250520LLU;

	t6 = ((x25%x26)+(x27%x28));

	if (t6 != 7LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	int64_t x30 = INT64_MAX;
	uint64_t x31 = 475351074LLU;
	uint64_t t7 = 196388885128LLU;

	t7 = ((x29%x30)+(x31%x32));

	if (t7 != 475351073LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x34 = 42369403999774LLU;
	int32_t x35 = -1;
	int16_t x36 = 705;
	volatile uint64_t t8 = 4273LLU;

	t8 = ((x33%x34)+(x35%x36));

	if (t8 != 3LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	int8_t x38 = INT8_MIN;
	static int64_t x40 = -1LL;
	int64_t t9 = -2500470729037840528LL;

	t9 = ((x37%x38)+(x39%x40));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = UINT16_MAX;
	static int64_t x43 = INT64_MIN;
	static int64_t t10 = -65279763961LL;

	t10 = ((x41%x42)+(x43%x44));

	if (t10 != 65535LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	volatile uint64_t x48 = 66130051985767LLU;
	volatile uint64_t t11 = 81329721189LLU;

	t11 = ((x45%x46)+(x47%x48));

	if (t11 != 30592487790160LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	int64_t x50 = -1LL;
	int16_t x51 = INT16_MIN;
	uint64_t t12 = 1051498212832758695LLU;

	t12 = ((x49%x50)+(x51%x52));

	if (t12 != 4636LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	volatile int64_t x54 = INT64_MAX;
	int64_t x56 = 89101LL;
	volatile uint64_t t13 = 0LLU;

	t13 = ((x53%x54)+(x55%x56));

	if (t13 != 18446744071562104430LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	uint8_t x58 = UINT8_MAX;
	int8_t x59 = 20;
	uint8_t x60 = 118U;
	volatile int64_t t14 = 81761322LL;

	t14 = ((x57%x58)+(x59%x60));

	if (t14 != -108LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -1LL;
	uint8_t x62 = 5U;
	int8_t x63 = -1;
	uint32_t x64 = 11187U;
	static volatile int64_t t15 = -3759354953352LL;

	t15 = ((x61%x62)+(x63%x64));

	if (t15 != 9506LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x65 = 117U;
	int32_t x67 = INT32_MIN;
	int64_t t16 = 4722986347517LL;

	t16 = ((x65%x66)+(x67%x68));

	if (t16 != -2706131LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = 313;
	int32_t x71 = -1247;
	int32_t x72 = 1;
	volatile int64_t t17 = -2391558LL;

	t17 = ((x69%x70)+(x71%x72));

	if (t17 != 313LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = UINT64_MAX;
	volatile int64_t x74 = INT64_MIN;
	volatile uint16_t x75 = 4U;
	int8_t x76 = -1;
	uint64_t t18 = 822298LLU;

	t18 = ((x73%x74)+(x75%x76));

	if (t18 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x78 = 957541037924LLU;
	int32_t x79 = INT32_MAX;
	volatile int16_t x80 = -1;
	uint64_t t19 = 187455552151406LLU;

	t19 = ((x77%x78)+(x79%x80));

	if (t19 != 367791955043LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = UINT16_MAX;
	uint64_t x82 = 2032LLU;
	int8_t x83 = -5;
	volatile int8_t x84 = INT8_MAX;

	t20 = ((x81%x82)+(x83%x84));

	if (t20 != 506LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x85 = UINT32_MAX;
	int32_t x86 = INT32_MIN;
	static int64_t t21 = -14994591LL;

	t21 = ((x85%x86)+(x87%x88));

	if (t21 != 2147483647LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = UINT8_MAX;
	int8_t x90 = INT8_MAX;
	static int64_t x91 = 228441971431LL;
	uint16_t x92 = 252U;
	int64_t t22 = 912992158445437LL;

	t22 = ((x89%x90)+(x91%x92));

	if (t22 != 164LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	int16_t x94 = -97;
	int32_t x95 = INT32_MIN;
	uint16_t x96 = 854U;
	int32_t t23 = -397891;

	t23 = ((x93%x94)+(x95%x96));

	if (t23 != -761) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x97 = INT16_MIN;
	int32_t x98 = 466;
	uint8_t x99 = UINT8_MAX;
	int8_t x100 = INT8_MIN;
	volatile int32_t t24 = -51278;

	t24 = ((x97%x98)+(x99%x100));

	if (t24 != -21) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x101 = INT32_MAX;
	int16_t x102 = 6056;
	int8_t x103 = 2;
	static int32_t t25 = -13769;

	t25 = ((x101%x102)+(x103%x104));

	if (t25 != 1825) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x106 = 1U;
	volatile uint64_t x107 = 212486LLU;
	static uint64_t t26 = 522677327619119LLU;

	t26 = ((x105%x106)+(x107%x108));

	if (t26 != 2636LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x111 = -1;
	volatile int16_t x112 = INT16_MIN;
	volatile int32_t t27 = 31169353;

	t27 = ((x109%x110)+(x111%x112));

	if (t27 != 3) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x114 = 87811;
	int64_t x116 = INT64_MIN;
	static volatile int64_t t28 = 898228016LL;

	t28 = ((x113%x114)+(x115%x116));

	if (t28 != 13853LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x117 = 1680570LLU;
	int64_t x118 = 3760254523713970LL;
	int32_t x119 = -1;
	uint16_t x120 = 4225U;
	uint64_t t29 = 1594761538288081699LLU;

	t29 = ((x117%x118)+(x119%x120));

	if (t29 != 1680569LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	uint32_t x123 = UINT32_MAX;
	static int64_t t30 = 3194990235124866LL;

	t30 = ((x121%x122)+(x123%x124));

	if (t30 != 4294967167LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x125 = UINT32_MAX;
	uint8_t x126 = UINT8_MAX;
	volatile uint32_t x127 = 8U;
	uint8_t x128 = 11U;
	volatile uint32_t t31 = 9752U;

	t31 = ((x125%x126)+(x127%x128));

	if (t31 != 8U) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = 59U;
	uint16_t x130 = 1U;
	int16_t x131 = -150;
	uint32_t x132 = 1U;
	volatile uint32_t t32 = 8010U;

	t32 = ((x129%x130)+(x131%x132));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -1;
	static uint16_t x134 = UINT16_MAX;
	uint8_t x136 = UINT8_MAX;
	int32_t t33 = -733230778;

	t33 = ((x133%x134)+(x135%x136));

	if (t33 != -2) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	uint16_t x140 = 430U;
	uint64_t t34 = 299651870892LLU;

	t34 = ((x137%x138)+(x139%x140));

	if (t34 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = 5U;
	static int8_t x142 = INT8_MIN;
	volatile uint8_t x144 = 1U;
	volatile int32_t t35 = -93367499;

	t35 = ((x141%x142)+(x143%x144));

	if (t35 != 5) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x145 = UINT16_MAX;
	int32_t x146 = -329799;
	uint32_t x147 = UINT32_MAX;
	volatile uint32_t t36 = 464371427U;

	t36 = ((x145%x146)+(x147%x148));

	if (t36 != 65588U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = UINT32_MAX;
	int8_t x150 = -3;
	volatile int64_t x152 = -186449957033450LL;
	volatile int64_t t37 = -3LL;

	t37 = ((x149%x150)+(x151%x152));

	if (t37 != 22653LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = INT64_MAX;
	static int64_t x154 = INT64_MAX;
	static volatile int64_t x156 = -4217325503924154LL;

	t38 = ((x153%x154)+(x155%x156));

	if (t38 != 4217325503924153LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = 15U;
	uint32_t x159 = 5U;
	static volatile int64_t x160 = INT64_MAX;
	static volatile int64_t t39 = -49638262046LL;

	t39 = ((x157%x158)+(x159%x160));

	if (t39 != 20LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x165 = -1386834;
	int32_t x166 = INT32_MIN;
	int8_t x167 = -1;
	volatile int64_t t40 = 137128018659015LL;

	t40 = ((x165%x166)+(x167%x168));

	if (t40 != -1386834LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x170 = -820;
	int32_t x171 = INT32_MIN;
	static volatile int16_t x172 = INT16_MAX;
	static int32_t t41 = -163104402;

	t41 = ((x169%x170)+(x171%x172));

	if (t41 != 253) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x173 = UINT64_MAX;
	int64_t x174 = 8909LL;
	static uint8_t x175 = 63U;
	volatile uint32_t x176 = 75482U;
	volatile uint64_t t42 = 602LLU;

	t42 = ((x173%x174)+(x175%x176));

	if (t42 != 5967LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x177 = INT32_MIN;
	int64_t x179 = 46439784391LL;
	uint8_t x180 = 3U;
	volatile int64_t t43 = -24089866245773LL;

	t43 = ((x177%x178)+(x179%x180));

	if (t43 != -2LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = -1197115226LL;
	int32_t x182 = INT32_MAX;
	volatile uint32_t x184 = 11361U;

	t44 = ((x181%x182)+(x183%x184));

	if (t44 != -1197104219LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x185 = 11980U;
	volatile int32_t x186 = INT32_MIN;
	static uint64_t x188 = 37637LLU;
	volatile uint64_t t45 = 29317156LLU;

	t45 = ((x185%x186)+(x187%x188));

	if (t45 != 44747LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x190 = INT32_MIN;
	int16_t x191 = 0;
	uint64_t x192 = 362LLU;
	static volatile uint64_t t46 = 2499LLU;

	t46 = ((x189%x190)+(x191%x192));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x193 = -48LL;
	int64_t x194 = -1LL;
	static int8_t x195 = -26;
	uint16_t x196 = 16570U;
	static volatile int64_t t47 = -327147658361338231LL;

	t47 = ((x193%x194)+(x195%x196));

	if (t47 != -26LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x197 = INT8_MIN;
	int16_t x198 = INT16_MIN;
	uint64_t x200 = UINT64_MAX;
	static uint64_t t48 = 3837966594690108582LLU;

	t48 = ((x197%x198)+(x199%x200));

	if (t48 != 127LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x201 = INT16_MIN;
	static int8_t x202 = INT8_MAX;
	volatile int32_t x203 = -1;
	int32_t x204 = INT32_MIN;
	int32_t t49 = 40;

	t49 = ((x201%x202)+(x203%x204));

	if (t49 != -3) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x205 = UINT32_MAX;
	int64_t x206 = -1LL;
	int16_t x207 = 1;
	static volatile int32_t x208 = -1;
	volatile int64_t t50 = 29011795668416516LL;

	t50 = ((x205%x206)+(x207%x208));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x209 = UINT32_MAX;
	int16_t x210 = INT16_MIN;
	int64_t x211 = INT64_MIN;
	static uint64_t t51 = 2030LLU;

	t51 = ((x209%x210)+(x211%x212));

	if (t51 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x213 = -1;
	int8_t x214 = 3;
	volatile int32_t x215 = 6261257;
	volatile int64_t t52 = -639880090883996056LL;

	t52 = ((x213%x214)+(x215%x216));

	if (t52 != 1516654LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x217 = UINT64_MAX;
	static uint64_t x218 = 914358LLU;
	volatile uint16_t x220 = UINT16_MAX;

	t53 = ((x217%x218)+(x219%x220));

	if (t53 != 350520LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x221 = INT32_MIN;
	volatile int64_t x222 = INT64_MIN;
	int8_t x223 = INT8_MIN;
	static int8_t x224 = INT8_MIN;

	t54 = ((x221%x222)+(x223%x224));

	if (t54 != -2147483648LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x225 = 2836926LL;
	volatile int64_t x226 = -1372245371382LL;
	uint32_t x227 = 1694712323U;
	int8_t x228 = INT8_MIN;
	static int64_t t55 = 3271067266707420LL;

	t55 = ((x225%x226)+(x227%x228));

	if (t55 != 1697549249LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x229 = -13;
	uint16_t x230 = 6U;
	int8_t x231 = INT8_MIN;
	uint16_t x232 = 15U;
	int32_t t56 = 157;

	t56 = ((x229%x230)+(x231%x232));

	if (t56 != -9) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x233 = UINT32_MAX;
	static uint8_t x234 = 2U;
	volatile uint32_t t57 = 32255780U;

	t57 = ((x233%x234)+(x235%x236));

	if (t57 != 23U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x237 = 93896855U;
	int32_t x238 = -1;
	uint64_t x239 = UINT64_MAX;
	int32_t x240 = -1;

	t58 = ((x237%x238)+(x239%x240));

	if (t58 != 93896855LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x245 = -74421;
	uint8_t x246 = 3U;
	static int32_t x247 = INT32_MIN;
	static int32_t x248 = -3209;
	static int32_t t59 = 408;

	t59 = ((x245%x246)+(x247%x248));

	if (t59 != -1594) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x249 = INT8_MAX;
	uint64_t x250 = 1651753122326225LLU;
	int8_t x252 = -1;
	volatile uint64_t t60 = 42LLU;

	t60 = ((x249%x250)+(x251%x252));

	if (t60 != 127LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x253 = UINT16_MAX;
	int16_t x255 = INT16_MIN;
	volatile int32_t t61 = -6;

	t61 = ((x253%x254)+(x255%x256));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x258 = INT16_MIN;
	uint32_t x259 = 26U;
	volatile int32_t x260 = -1;
	static uint32_t t62 = 3560642U;

	t62 = ((x257%x258)+(x259%x260));

	if (t62 != 32793U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x261 = 15U;
	volatile int16_t x262 = -84;
	static uint64_t x263 = UINT64_MAX;
	uint16_t x264 = UINT16_MAX;
	uint64_t t63 = 171828466783932LLU;

	t63 = ((x261%x262)+(x263%x264));

	if (t63 != 15LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x265 = INT16_MIN;
	int64_t x266 = INT64_MIN;
	uint16_t x268 = 7U;
	volatile uint64_t t64 = 17339LLU;

	t64 = ((x265%x266)+(x267%x268));

	if (t64 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x269 = UINT8_MAX;
	int16_t x271 = -1;
	volatile uint16_t x272 = 11U;
	int32_t t65 = -3;

	t65 = ((x269%x270)+(x271%x272));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x274 = -1;
	int64_t x275 = -1LL;
	int8_t x276 = INT8_MIN;

	t66 = ((x273%x274)+(x275%x276));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x278 = 1037184666002375LL;
	int32_t x279 = INT32_MIN;
	int8_t x280 = 25;

	t67 = ((x277%x278)+(x279%x280));

	if (t67 != 2147483624LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x281 = INT8_MAX;
	uint8_t x282 = 48U;
	uint64_t x283 = UINT64_MAX;
	volatile int32_t x284 = 511257;
	uint64_t t68 = 126308374965997LLU;

	t68 = ((x281%x282)+(x283%x284));

	if (t68 != 321073LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x285 = 17U;
	int32_t x286 = INT32_MIN;
	volatile int64_t x287 = -1LL;
	volatile int32_t x288 = INT32_MIN;

	t69 = ((x285%x286)+(x287%x288));

	if (t69 != 16LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x289 = -1;
	int16_t x290 = INT16_MIN;
	int32_t x291 = -1;
	volatile int32_t t70 = 32099;

	t70 = ((x289%x290)+(x291%x292));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint64_t x293 = 402060676247142030LLU;
	static int64_t x294 = -1LL;
	int64_t x295 = INT64_MIN;
	int64_t x296 = -1LL;
	volatile uint64_t t71 = 132525010LLU;

	t71 = ((x293%x294)+(x295%x296));

	if (t71 != 402060676247142030LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x297 = INT32_MAX;
	uint16_t x299 = 1629U;
	int32_t t72 = 28254501;

	t72 = ((x297%x298)+(x299%x300));

	if (t72 != 1756) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x302 = -134871869385277946LL;
	static int16_t x304 = INT16_MAX;
	int64_t t73 = 5114LL;

	t73 = ((x301%x302)+(x303%x304));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x306 = UINT64_MAX;
	static volatile int16_t x307 = INT16_MAX;
	static uint64_t t74 = 61LLU;

	t74 = ((x305%x306)+(x307%x308));

	if (t74 != 32767LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x309 = 41;
	int32_t x310 = INT32_MIN;
	uint8_t x311 = UINT8_MAX;
	volatile uint64_t x312 = UINT64_MAX;

	t75 = ((x309%x310)+(x311%x312));

	if (t75 != 296LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x317 = UINT32_MAX;
	int64_t x318 = INT64_MIN;
	volatile uint64_t x319 = 922952LLU;
	uint64_t t76 = 15810967609LLU;

	t76 = ((x317%x318)+(x319%x320));

	if (t76 != 4295890247LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x321 = UINT8_MAX;
	uint16_t x323 = 6450U;
	volatile int8_t x324 = INT8_MAX;
	uint32_t t77 = 3661U;

	t77 = ((x321%x322)+(x323%x324));

	if (t77 != 355U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x325 = INT32_MIN;
	volatile int64_t x326 = INT64_MIN;
	volatile uint8_t x327 = UINT8_MAX;
	volatile int64_t t78 = 11416071545512LL;

	t78 = ((x325%x326)+(x327%x328));

	if (t78 != -2147483393LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x329 = 122338305964LL;
	uint64_t x330 = UINT64_MAX;
	volatile int8_t x331 = -1;
	uint32_t x332 = 48U;
	static uint64_t t79 = 65759909335LLU;

	t79 = ((x329%x330)+(x331%x332));

	if (t79 != 122338305979LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x333 = UINT8_MAX;
	uint16_t x335 = 1U;
	int16_t x336 = 7607;
	volatile int32_t t80 = 879096;

	t80 = ((x333%x334)+(x335%x336));

	if (t80 != 9) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x338 = INT32_MIN;
	static int8_t x339 = INT8_MIN;
	uint64_t x340 = 3923762145170266LLU;
	uint64_t t81 = 4365514780LLU;

	t81 = ((x337%x338)+(x339%x340));

	if (t81 != 1138229264131149LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x343 = UINT8_MAX;
	int32_t t82 = 2964774;

	t82 = ((x341%x342)+(x343%x344));

	if (t82 != 199) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x346 = INT32_MIN;
	static int16_t x347 = INT16_MAX;
	int8_t x348 = INT8_MIN;
	volatile int32_t t83 = 6;

	t83 = ((x345%x346)+(x347%x348));

	if (t83 != 128) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x349 = 15399799011LLU;
	int64_t x350 = -214327062228LL;
	int64_t x351 = -1LL;
	volatile int64_t x352 = INT64_MAX;
	static volatile uint64_t t84 = 117788342LLU;

	t84 = ((x349%x350)+(x351%x352));

	if (t84 != 15399799010LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x353 = INT64_MAX;
	int64_t x354 = INT64_MAX;
	int16_t x355 = INT16_MIN;
	uint16_t x356 = 908U;
	static volatile int64_t t85 = 1650LL;

	t85 = ((x353%x354)+(x355%x356));

	if (t85 != -80LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x357 = UINT8_MAX;
	static volatile int16_t x358 = -598;
	volatile uint16_t x359 = UINT16_MAX;
	int16_t x360 = -9;
	int32_t t86 = 58;

	t86 = ((x357%x358)+(x359%x360));

	if (t86 != 261) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x361 = INT8_MIN;
	volatile int16_t x362 = -1;
	int16_t x364 = -336;

	t87 = ((x361%x362)+(x363%x364));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x366 = INT8_MIN;
	uint8_t x367 = 13U;
	uint64_t x368 = 126200383LLU;
	volatile uint64_t t88 = 1351365870465674LLU;

	t88 = ((x365%x366)+(x367%x368));

	if (t88 != 78785651LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x369 = INT8_MIN;
	uint64_t x370 = 2103269652072258865LLU;
	int8_t x371 = 0;
	uint16_t x372 = 2055U;
	uint64_t t89 = 760510795270LLU;

	t89 = ((x369%x370)+(x371%x372));

	if (t89 != 1620586857131480568LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x374 = 78LLU;
	int64_t x375 = INT64_MIN;
	volatile int64_t x376 = 697441078957LL;
	uint64_t t90 = 156264LLU;

	t90 = ((x373%x374)+(x375%x376));

	if (t90 != 18446743657777649492LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x377 = UINT32_MAX;
	volatile int16_t x378 = 13391;
	static int8_t x379 = INT8_MAX;
	int32_t x380 = INT32_MIN;
	uint32_t t91 = 3141693U;

	t91 = ((x377%x378)+(x379%x380));

	if (t91 != 5037U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x381 = INT32_MIN;
	int32_t x382 = -36348;
	int8_t x383 = INT8_MIN;
	uint8_t x384 = UINT8_MAX;

	t92 = ((x381%x382)+(x383%x384));

	if (t92 != -7588) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x385 = INT32_MAX;
	static int16_t x386 = -14237;
	uint16_t x387 = 0U;
	volatile int16_t x388 = INT16_MIN;

	t93 = ((x385%x386)+(x387%x388));

	if (t93 != 3041) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x389 = INT32_MIN;
	static uint8_t x390 = 2U;
	int16_t x392 = -3665;
	int32_t t94 = -85683;

	t94 = ((x389%x390)+(x391%x392));

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x393 = UINT32_MAX;
	static int32_t x394 = INT32_MAX;
	int16_t x395 = 507;
	int8_t x396 = INT8_MIN;
	volatile uint32_t t95 = 35U;

	t95 = ((x393%x394)+(x395%x396));

	if (t95 != 124U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x397 = 0;
	volatile int32_t x398 = INT32_MIN;
	int64_t x399 = INT64_MIN;
	uint64_t x400 = UINT64_MAX;
	uint64_t t96 = 166326251032773226LLU;

	t96 = ((x397%x398)+(x399%x400));

	if (t96 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x401 = INT64_MAX;
	int64_t x402 = INT64_MAX;
	int16_t x403 = INT16_MIN;
	int16_t x404 = INT16_MIN;
	int64_t t97 = -16462LL;

	t97 = ((x401%x402)+(x403%x404));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x405 = INT16_MIN;
	volatile int16_t x407 = -865;
	int8_t x408 = INT8_MIN;
	int32_t t98 = -30792065;

	t98 = ((x405%x406)+(x407%x408));

	if (t98 != -99) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x409 = -1;
	uint64_t x411 = UINT64_MAX;
	int16_t x412 = INT16_MIN;

	t99 = ((x409%x410)+(x411%x412));

	if (t99 != 32767LLU) { NG(); } else { ; }
	
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

