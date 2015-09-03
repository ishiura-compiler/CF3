#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int8_t x5 = INT8_MAX;
static int32_t t1 = 29;
volatile int32_t t3 = 12;
static int16_t x17 = -15;
static uint32_t x21 = 20322U;
uint16_t x22 = 1430U;
int32_t t7 = -1074515;
volatile int16_t x43 = -1;
int64_t x44 = -1LL;
int64_t x45 = INT64_MIN;
volatile uint32_t x51 = 226927U;
uint32_t x52 = UINT32_MAX;
static volatile int64_t t11 = 32046LL;
uint8_t x63 = 28U;
uint8_t x67 = UINT8_MAX;
uint16_t x89 = 9U;
static int32_t x93 = 6575215;
int32_t x94 = INT32_MIN;
int64_t x98 = INT64_MIN;
int8_t x103 = -3;
int64_t x116 = -118476182933970LL;
static uint64_t x117 = 2778989566LLU;
static int16_t x127 = -1;
int8_t x128 = -1;
uint64_t t32 = 2640051454519LLU;
int16_t x138 = -22;
static uint32_t x139 = 1943642U;
volatile uint32_t x145 = 5441U;
int64_t x147 = -1LL;
int8_t x148 = INT8_MAX;
volatile uint8_t x149 = UINT8_MAX;
int64_t x151 = INT64_MAX;
volatile int64_t t35 = 116148097LL;
uint64_t t36 = 32040015266856LLU;
int32_t x164 = -439;
volatile uint16_t x166 = 238U;
uint32_t t39 = 88598U;
static volatile uint16_t x169 = UINT16_MAX;
int16_t x178 = INT16_MAX;
uint32_t x184 = UINT32_MAX;
uint32_t t43 = 1468213964U;
static int16_t x186 = -1;
volatile int32_t t44 = -8561;
volatile uint32_t t46 = 7294134U;
int8_t x197 = -1;
uint32_t x202 = 29001941U;
int32_t x215 = INT32_MIN;
volatile int64_t x216 = INT64_MIN;
uint64_t x221 = 5910635997861847979LLU;
int32_t x223 = INT32_MAX;
int16_t x231 = INT16_MIN;
uint32_t x232 = UINT32_MAX;
int32_t x241 = INT32_MIN;
volatile int8_t x244 = INT8_MAX;
static uint64_t x245 = 22LLU;
int32_t x248 = INT32_MAX;
uint64_t t59 = 383605706535098955LLU;
volatile int64_t t60 = -288026LL;
int32_t x263 = INT32_MIN;
static int64_t t63 = -154994403LL;
int64_t x266 = INT64_MIN;
static int32_t x268 = 106646744;
volatile int64_t t64 = 44245914277067703LL;
int8_t x275 = INT8_MIN;
int16_t x282 = 12539;
uint16_t x285 = 456U;
volatile uint64_t t69 = 60LLU;
static int32_t x294 = INT32_MIN;
static uint8_t x295 = 38U;
int32_t x296 = -1;
int64_t x301 = -695462830917135706LL;
uint64_t x310 = 271772470423874491LLU;
uint64_t x312 = UINT64_MAX;
static int16_t x318 = -44;
int8_t x323 = INT8_MIN;
static volatile int8_t x335 = INT8_MAX;
int16_t x343 = INT16_MAX;
volatile uint64_t x361 = UINT64_MAX;
volatile uint32_t x365 = 163116692U;
int64_t x371 = -29054370867004918LL;
static int64_t x377 = 1083999323284352LL;
int32_t x382 = INT32_MIN;
volatile int32_t t91 = -36;
uint8_t x401 = UINT8_MAX;
uint32_t t96 = 0U;
int16_t x410 = INT16_MAX;
volatile int32_t t98 = -53352;
int64_t t99 = 1793265321636LL;


void f0(void) {
	volatile int32_t x1 = INT32_MIN;
	volatile int8_t x2 = -1;
	volatile uint64_t x3 = UINT64_MAX;
	volatile int8_t x4 = INT8_MAX;
	uint64_t t0 = 303074LLU;

	t0 = ((x1|x2)+(x3|x4));

	if (t0 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x6 = UINT16_MAX;
	static int16_t x7 = -1;
	int8_t x8 = INT8_MIN;

	t1 = ((x5|x6)+(x7|x8));

	if (t1 != 65534) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = -1838510486858575LL;
	static int16_t x10 = INT16_MAX;
	int16_t x11 = -1;
	volatile uint16_t x12 = UINT16_MAX;
	int64_t t2 = -11541508372263LL;

	t2 = ((x9|x10)+(x11|x12));

	if (t2 != -1838510486847490LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int32_t x14 = -7720;
	int32_t x15 = INT32_MIN;
	volatile int8_t x16 = -1;

	t3 = ((x13|x14)+(x15|x16));

	if (t3 != -41) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = 1004188;
	int64_t x19 = INT64_MIN;
	volatile int8_t x20 = -1;
	static int64_t t4 = -143354440553205171LL;

	t4 = ((x17|x18)+(x19|x20));

	if (t4 != -4LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x23 = 3656622114305986LLU;
	volatile uint64_t x24 = UINT64_MAX;
	static volatile uint64_t t5 = 1867197249007001031LLU;

	t5 = ((x21|x22)+(x23|x24));

	if (t5 != 20469LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = 100U;
	uint64_t x30 = UINT64_MAX;
	uint32_t x31 = UINT32_MAX;
	static int64_t x32 = INT64_MAX;
	uint64_t t6 = 37328124585818LLU;

	t6 = ((x29|x30)+(x31|x32));

	if (t6 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = -1;
	static volatile uint16_t x34 = 8241U;
	int16_t x35 = INT16_MIN;
	int32_t x36 = INT32_MIN;

	t7 = ((x33|x34)+(x35|x36));

	if (t7 != -32769) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x37 = -743758LL;
	int32_t x38 = INT32_MIN;
	int8_t x39 = INT8_MIN;
	volatile uint64_t x40 = UINT64_MAX;
	uint64_t t8 = 48865LLU;

	t8 = ((x37|x38)+(x39|x40));

	if (t8 != 18446744073708807857LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x41 = 0;
	int8_t x42 = INT8_MIN;
	volatile int64_t t9 = 18991491955LL;

	t9 = ((x41|x42)+(x43|x44));

	if (t9 != -129LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x46 = -1;
	int16_t x47 = -1;
	int8_t x48 = 1;
	volatile int64_t t10 = 581513772LL;

	t10 = ((x45|x46)+(x47|x48));

	if (t10 != -2LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = -130998LL;
	int32_t x50 = INT32_MIN;

	t11 = ((x49|x50)+(x51|x52));

	if (t11 != 4294836297LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MAX;
	int8_t x54 = -1;
	int32_t x55 = INT32_MAX;
	static uint32_t x56 = UINT32_MAX;
	volatile uint32_t t12 = 425511542U;

	t12 = ((x53|x54)+(x55|x56));

	if (t12 != 4294967294U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x57 = -61202;
	int64_t x58 = INT64_MIN;
	int8_t x59 = -1;
	uint64_t x60 = UINT64_MAX;
	uint64_t t13 = 65160593547659LLU;

	t13 = ((x57|x58)+(x59|x60));

	if (t13 != 18446744073709490413LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MIN;
	volatile int8_t x62 = INT8_MAX;
	int8_t x64 = INT8_MIN;
	volatile int64_t t14 = 499425419949909451LL;

	t14 = ((x61|x62)+(x63|x64));

	if (t14 != -9223372036854775781LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x65 = INT8_MAX;
	int32_t x66 = 3;
	volatile int64_t x68 = 23252798100LL;
	volatile int64_t t15 = -98360LL;

	t15 = ((x65|x66)+(x67|x68));

	if (t15 != 23252798334LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = -16614747;
	int64_t x70 = INT64_MAX;
	static int16_t x71 = -1;
	int8_t x72 = 3;
	int64_t t16 = 1803394947699LL;

	t16 = ((x69|x70)+(x71|x72));

	if (t16 != -2LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x73 = INT8_MIN;
	volatile int16_t x74 = -1;
	int32_t x75 = INT32_MIN;
	int64_t x76 = -25LL;
	volatile int64_t t17 = 97255966160818093LL;

	t17 = ((x73|x74)+(x75|x76));

	if (t17 != -26LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = -1;
	int32_t x78 = INT32_MAX;
	int32_t x79 = INT32_MAX;
	int8_t x80 = INT8_MIN;
	volatile int32_t t18 = 0;

	t18 = ((x77|x78)+(x79|x80));

	if (t18 != -2) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x81 = 342079U;
	int64_t x82 = -1LL;
	uint8_t x83 = UINT8_MAX;
	uint16_t x84 = 3U;
	int64_t t19 = -431963948582320LL;

	t19 = ((x81|x82)+(x83|x84));

	if (t19 != 254LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x85 = 93U;
	static uint32_t x86 = UINT32_MAX;
	uint8_t x87 = 44U;
	int16_t x88 = -1;
	uint32_t t20 = 1185U;

	t20 = ((x85|x86)+(x87|x88));

	if (t20 != 4294967294U) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x90 = 6923U;
	int16_t x91 = -1;
	uint8_t x92 = UINT8_MAX;
	int32_t t21 = 11;

	t21 = ((x89|x90)+(x91|x92));

	if (t21 != 6922) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x95 = -1;
	uint16_t x96 = 10U;
	int32_t t22 = -950552;

	t22 = ((x93|x94)+(x95|x96));

	if (t22 != -2140908434) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x97 = 19U;
	uint32_t x99 = 633985271U;
	int8_t x100 = INT8_MIN;
	int64_t t23 = 1096761351777212745LL;

	t23 = ((x97|x98)+(x99|x100));

	if (t23 != -9223372032559808502LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = -2;
	static int64_t x102 = 32LL;
	int64_t x104 = -1LL;
	volatile int64_t t24 = -7LL;

	t24 = ((x101|x102)+(x103|x104));

	if (t24 != -3LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x105 = INT8_MAX;
	static uint8_t x106 = 45U;
	int32_t x107 = INT32_MIN;
	int64_t x108 = -1LL;
	volatile int64_t t25 = 757639397LL;

	t25 = ((x105|x106)+(x107|x108));

	if (t25 != 126LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x109 = 3236871U;
	int16_t x110 = INT16_MIN;
	int32_t x111 = INT32_MIN;
	int16_t x112 = INT16_MIN;
	volatile uint32_t t26 = 5608678U;

	t26 = ((x109|x110)+(x111|x112));

	if (t26 != 4294927367U) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x113 = 62297LL;
	uint64_t x114 = 7149LLU;
	uint32_t x115 = 97642U;
	uint64_t t27 = 31LLU;

	t27 = ((x113|x114)+(x115|x116));

	if (t27 != 18446625597526702955LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x118 = 3U;
	int64_t x119 = INT64_MAX;
	int8_t x120 = INT8_MAX;
	static volatile uint64_t t28 = 1515098573101LLU;

	t28 = ((x117|x118)+(x119|x120));

	if (t28 != 9223372039633765374LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = INT64_MAX;
	int32_t x122 = -2576;
	static int32_t x123 = -7366118;
	volatile int8_t x124 = -28;
	volatile int64_t t29 = 534694208LL;

	t29 = ((x121|x122)+(x123|x124));

	if (t29 != -3LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x125 = UINT16_MAX;
	uint32_t x126 = 7971977U;
	volatile uint32_t t30 = 69111U;

	t30 = ((x125|x126)+(x127|x128));

	if (t30 != 7995390U) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x129 = INT64_MIN;
	int16_t x130 = -1;
	int16_t x131 = INT16_MAX;
	volatile int8_t x132 = 9;
	int64_t t31 = -7LL;

	t31 = ((x129|x130)+(x131|x132));

	if (t31 != 32766LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = -1LL;
	int16_t x134 = INT16_MAX;
	int8_t x135 = -1;
	volatile uint64_t x136 = 397831142576194051LLU;

	t32 = ((x133|x134)+(x135|x136));

	if (t32 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x137 = 420LLU;
	int16_t x140 = -1;
	static volatile uint64_t t33 = 5788700816243LLU;

	t33 = ((x137|x138)+(x139|x140));

	if (t33 != 4294967277LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x146 = INT32_MAX;
	int64_t t34 = 1LL;

	t34 = ((x145|x146)+(x147|x148));

	if (t34 != 2147483646LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x150 = 18456U;
	volatile int16_t x152 = -6;

	t35 = ((x149|x150)+(x151|x152));

	if (t35 != 18686LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x153 = 200U;
	static int32_t x154 = INT32_MIN;
	uint64_t x155 = 1153479010256LLU;
	volatile uint8_t x156 = UINT8_MAX;

	t36 = ((x153|x154)+(x155|x156));

	if (t36 != 1151331526855LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x157 = 2088327970839LLU;
	static int32_t x158 = INT32_MIN;
	int8_t x159 = 0;
	uint32_t x160 = 4065U;
	volatile uint64_t t37 = 7408496LLU;

	t37 = ((x157|x158)+(x159|x160));

	if (t37 != 18446744072535937016LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x161 = INT8_MAX;
	volatile int8_t x162 = -3;
	static int64_t x163 = INT64_MAX;
	volatile int64_t t38 = -2LL;

	t38 = ((x161|x162)+(x163|x164));

	if (t38 != -2LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x165 = 43U;
	volatile uint32_t x167 = 1962274U;
	int32_t x168 = 4;

	t39 = ((x165|x166)+(x167|x168));

	if (t39 != 1962517U) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x170 = 8108U;
	static int32_t x171 = -47;
	int16_t x172 = INT16_MAX;
	volatile uint32_t t40 = 10722U;

	t40 = ((x169|x170)+(x171|x172));

	if (t40 != 65534U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x173 = INT64_MIN;
	int16_t x174 = -1;
	int64_t x175 = INT64_MIN;
	volatile int16_t x176 = -1;
	volatile int64_t t41 = -2606353389966054247LL;

	t41 = ((x173|x174)+(x175|x176));

	if (t41 != -2LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x177 = 305U;
	uint8_t x179 = 1U;
	int8_t x180 = 3;
	int32_t t42 = -167;

	t42 = ((x177|x178)+(x179|x180));

	if (t42 != 32770) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x181 = INT8_MAX;
	int8_t x182 = -1;
	int16_t x183 = INT16_MIN;

	t43 = ((x181|x182)+(x183|x184));

	if (t43 != 4294967294U) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x185 = 3U;
	volatile uint16_t x187 = 1144U;
	static int16_t x188 = INT16_MIN;

	t44 = ((x185|x186)+(x187|x188));

	if (t44 != -31625) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x189 = -48720026669675LL;
	int32_t x190 = INT32_MIN;
	volatile int16_t x191 = -1;
	int32_t x192 = INT32_MIN;
	volatile int64_t t45 = -14223559LL;

	t45 = ((x189|x190)+(x191|x192));

	if (t45 != -65147500LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x193 = INT32_MIN;
	volatile int32_t x194 = -1;
	uint32_t x195 = 188U;
	static volatile int8_t x196 = INT8_MIN;

	t46 = ((x193|x194)+(x195|x196));

	if (t46 != 4294967227U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x198 = -1;
	int8_t x199 = INT8_MAX;
	static uint16_t x200 = 58U;
	static volatile int32_t t47 = -11810;

	t47 = ((x197|x198)+(x199|x200));

	if (t47 != 126) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x201 = 60851815235223LLU;
	static int32_t x203 = INT32_MIN;
	static uint8_t x204 = UINT8_MAX;
	volatile uint64_t t48 = 15105LLU;

	t48 = ((x201|x202)+(x203|x204));

	if (t48 != 60849687281622LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x205 = -20;
	static int64_t x206 = -1LL;
	int8_t x207 = INT8_MIN;
	uint16_t x208 = UINT16_MAX;
	static int64_t t49 = 19257580LL;

	t49 = ((x205|x206)+(x207|x208));

	if (t49 != -2LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x209 = INT32_MIN;
	volatile int64_t x210 = 4652LL;
	int8_t x211 = INT8_MIN;
	int8_t x212 = -1;
	int64_t t50 = -26334950878512LL;

	t50 = ((x209|x210)+(x211|x212));

	if (t50 != -2147478997LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x213 = INT64_MIN;
	uint64_t x214 = UINT64_MAX;
	uint64_t t51 = 51LLU;

	t51 = ((x213|x214)+(x215|x216));

	if (t51 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x217 = INT32_MAX;
	uint32_t x218 = UINT32_MAX;
	static uint8_t x219 = 13U;
	int16_t x220 = INT16_MIN;
	uint32_t t52 = 76232U;

	t52 = ((x217|x218)+(x219|x220));

	if (t52 != 4294934540U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x222 = INT8_MAX;
	int64_t x224 = INT64_MAX;
	static uint64_t t53 = 160889347264438672LLU;

	t53 = ((x221|x222)+(x223|x224));

	if (t53 != 15134008034716623870LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x225 = INT32_MAX;
	int64_t x226 = 3311LL;
	uint64_t x227 = 65352481251335LLU;
	int32_t x228 = -1;
	uint64_t t54 = 1838871861478LLU;

	t54 = ((x225|x226)+(x227|x228));

	if (t54 != 2147483646LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x229 = 222259LLU;
	uint8_t x230 = UINT8_MAX;
	uint64_t t55 = 5610147544997975LLU;

	t55 = ((x229|x230)+(x231|x232));

	if (t55 != 4295189758LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x233 = UINT16_MAX;
	uint32_t x234 = 3782U;
	int32_t x235 = INT32_MAX;
	int16_t x236 = INT16_MIN;
	static volatile uint32_t t56 = 3138U;

	t56 = ((x233|x234)+(x235|x236));

	if (t56 != 65534U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x237 = 296U;
	static int64_t x238 = 3LL;
	static volatile int64_t x239 = INT64_MAX;
	volatile int32_t x240 = INT32_MIN;
	int64_t t57 = -30929LL;

	t57 = ((x237|x238)+(x239|x240));

	if (t57 != 298LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x242 = INT64_MIN;
	int16_t x243 = -2006;
	int64_t t58 = -1739997077LL;

	t58 = ((x241|x242)+(x243|x244));

	if (t58 != -2147485569LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x246 = INT8_MIN;
	volatile int8_t x247 = 6;

	t59 = ((x245|x246)+(x247|x248));

	if (t59 != 2147483541LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x249 = 6947U;
	uint16_t x250 = UINT16_MAX;
	int64_t x251 = INT64_MAX;
	int32_t x252 = INT32_MIN;

	t60 = ((x249|x250)+(x251|x252));

	if (t60 != 65534LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x253 = 57U;
	int32_t x254 = INT32_MAX;
	uint32_t x255 = 59108U;
	uint64_t x256 = 33366145910341858LLU;
	static volatile uint64_t t61 = 4367370630153334202LLU;

	t61 = ((x253|x254)+(x255|x256));

	if (t61 != 33366148057851621LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x257 = UINT16_MAX;
	int8_t x258 = INT8_MIN;
	static int64_t x259 = -1LL;
	static uint16_t x260 = 1767U;
	int64_t t62 = -55472382934309882LL;

	t62 = ((x257|x258)+(x259|x260));

	if (t62 != -2LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x261 = 110024872;
	uint16_t x262 = 660U;
	int64_t x264 = INT64_MAX;

	t63 = ((x261|x262)+(x263|x264));

	if (t63 != 110025403LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x265 = 26566360U;
	int32_t x267 = INT32_MAX;

	t64 = ((x265|x266)+(x267|x268));

	if (t64 != -9223372034680725801LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x269 = -1;
	int32_t x270 = 962082005;
	uint8_t x271 = 1U;
	volatile uint8_t x272 = 3U;
	volatile int32_t t65 = 8;

	t65 = ((x269|x270)+(x271|x272));

	if (t65 != 2) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x273 = UINT32_MAX;
	uint8_t x274 = 7U;
	static uint64_t x276 = 3311358602LLU;
	volatile uint64_t t66 = 215088713935904LLU;

	t66 = ((x273|x274)+(x275|x276));

	if (t66 != 4294967177LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x281 = -1;
	int32_t x283 = 369305189;
	uint16_t x284 = UINT16_MAX;
	volatile int32_t t67 = 11439;

	t67 = ((x281|x282)+(x283|x284));

	if (t67 != 369360894) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x286 = -1;
	volatile uint16_t x287 = UINT16_MAX;
	int64_t x288 = -108LL;
	static int64_t t68 = 23276200LL;

	t68 = ((x285|x286)+(x287|x288));

	if (t68 != -2LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x289 = 1U;
	int16_t x290 = INT16_MIN;
	int16_t x291 = 3960;
	static uint64_t x292 = UINT64_MAX;

	t69 = ((x289|x290)+(x291|x292));

	if (t69 != 4294934528LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x293 = 12137494855809LLU;
	volatile uint64_t t70 = 5304154158LLU;

	t70 = ((x293|x294)+(x295|x296));

	if (t70 != 18446744073626828928LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x297 = 442893741LLU;
	int64_t x298 = -300LL;
	volatile uint16_t x299 = 36U;
	int32_t x300 = INT32_MAX;
	volatile uint64_t t71 = 6843169899LLU;

	t71 = ((x297|x298)+(x299|x300));

	if (t71 != 2147483644LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x302 = 14304;
	uint32_t x303 = 44930U;
	uint64_t x304 = 113728402LLU;
	uint64_t t72 = 186852561057703630LLU;

	t72 = ((x301|x302)+(x303|x304));

	if (t72 != 17751281242906195832LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x305 = 12;
	int16_t x306 = -1;
	int8_t x307 = INT8_MIN;
	volatile int16_t x308 = INT16_MIN;
	int32_t t73 = 8;

	t73 = ((x305|x306)+(x307|x308));

	if (t73 != -129) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x309 = 14399277417LLU;
	int16_t x311 = INT16_MIN;
	uint64_t t74 = 8490154099211963323LLU;

	t74 = ((x309|x310)+(x311|x312));

	if (t74 != 271772471632063482LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x313 = -108;
	static uint16_t x314 = 2909U;
	static uint32_t x315 = 5246U;
	int32_t x316 = 7771015;
	uint32_t t75 = 264U;

	t75 = ((x313|x314)+(x315|x316));

	if (t75 != 7772124U) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x317 = -7;
	static uint16_t x319 = 628U;
	static volatile int16_t x320 = -1;
	volatile int32_t t76 = 67;

	t76 = ((x317|x318)+(x319|x320));

	if (t76 != -4) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x321 = 5806U;
	uint64_t x322 = 48229115785439LLU;
	static volatile uint64_t x324 = UINT64_MAX;
	static uint64_t t77 = 1658705762LLU;

	t77 = ((x321|x322)+(x323|x324));

	if (t77 != 48229115787006LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x325 = 188U;
	int8_t x326 = INT8_MIN;
	static int64_t x327 = INT64_MAX;
	int16_t x328 = INT16_MIN;
	static int64_t t78 = -7215149976660197LL;

	t78 = ((x325|x326)+(x327|x328));

	if (t78 != 4294967227LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x329 = UINT16_MAX;
	int64_t x330 = INT64_MIN;
	int16_t x331 = INT16_MAX;
	uint32_t x332 = 1379786343U;
	int64_t t79 = -252142LL;

	t79 = ((x329|x330)+(x331|x332));

	if (t79 != -9223372035474915330LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x333 = 22U;
	static int8_t x334 = INT8_MIN;
	int32_t x336 = -30995;
	int32_t t80 = -305917;

	t80 = ((x333|x334)+(x335|x336));

	if (t80 != -31083) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x337 = 3LLU;
	static int64_t x338 = -3113067LL;
	uint16_t x339 = UINT16_MAX;
	int32_t x340 = INT32_MIN;
	uint64_t t81 = 3347823170557675LLU;

	t81 = ((x337|x338)+(x339|x340));

	if (t81 != 18446744071559020438LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x341 = 19624U;
	volatile int32_t x342 = -1945;
	int16_t x344 = INT16_MIN;
	static volatile int32_t t82 = 43;

	t82 = ((x341|x342)+(x343|x344));

	if (t82 != -786) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x345 = INT32_MAX;
	int64_t x346 = 21642260537LL;
	int64_t x347 = -260507038LL;
	int32_t x348 = INT32_MIN;
	static int64_t t83 = 14LL;

	t83 = ((x345|x346)+(x347|x348));

	if (t83 != 23361813089LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x349 = INT32_MAX;
	volatile int16_t x350 = 9542;
	static uint16_t x351 = UINT16_MAX;
	uint32_t x352 = UINT32_MAX;
	uint32_t t84 = 0U;

	t84 = ((x349|x350)+(x351|x352));

	if (t84 != 2147483646U) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x357 = INT16_MAX;
	int16_t x358 = -11;
	volatile int8_t x359 = INT8_MIN;
	int16_t x360 = INT16_MAX;
	int32_t t85 = 6;

	t85 = ((x357|x358)+(x359|x360));

	if (t85 != -2) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x362 = UINT32_MAX;
	int8_t x363 = INT8_MIN;
	int32_t x364 = INT32_MIN;
	volatile uint64_t t86 = 32270LLU;

	t86 = ((x361|x362)+(x363|x364));

	if (t86 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x366 = 14151438840485962LLU;
	int32_t x367 = -1;
	uint64_t x368 = UINT64_MAX;
	uint64_t t87 = 7LLU;

	t87 = ((x365|x366)+(x367|x368));

	if (t87 != 14151438850457309LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x369 = -58;
	volatile int8_t x370 = INT8_MIN;
	int32_t x372 = INT32_MIN;
	volatile int64_t t88 = 62760870769LL;

	t88 = ((x369|x370)+(x371|x372));

	if (t88 != -1588807216LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x373 = INT16_MIN;
	uint8_t x374 = UINT8_MAX;
	static int16_t x375 = 7;
	volatile int8_t x376 = INT8_MIN;
	static volatile int32_t t89 = 2;

	t89 = ((x373|x374)+(x375|x376));

	if (t89 != -32634) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint8_t x378 = UINT8_MAX;
	uint64_t x379 = 1832446308363076LLU;
	static int32_t x380 = INT32_MAX;
	volatile uint64_t t90 = 1600802LLU;

	t90 = ((x377|x378)+(x379|x380));

	if (t90 != 2916447120122878LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x381 = INT8_MIN;
	uint8_t x383 = 13U;
	int8_t x384 = INT8_MIN;

	t91 = ((x381|x382)+(x383|x384));

	if (t91 != -243) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x385 = 107LLU;
	int64_t x386 = INT64_MIN;
	uint64_t x387 = 401441LLU;
	volatile int16_t x388 = INT16_MAX;
	uint64_t t92 = 717642LLU;

	t92 = ((x385|x386)+(x387|x388));

	if (t92 != 9223372036855201898LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x389 = 163642033U;
	static int64_t x390 = INT64_MAX;
	int32_t x391 = INT32_MIN;
	int8_t x392 = -1;
	static int64_t t93 = -373138642LL;

	t93 = ((x389|x390)+(x391|x392));

	if (t93 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x393 = 119175786;
	static int64_t x394 = INT64_MIN;
	int64_t x395 = INT64_MAX;
	volatile int16_t x396 = -1;
	int64_t t94 = 11608778984828058LL;

	t94 = ((x393|x394)+(x395|x396));

	if (t94 != -9223372036735600023LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x397 = UINT64_MAX;
	uint32_t x398 = 144082U;
	volatile int8_t x399 = INT8_MIN;
	int64_t x400 = INT64_MIN;
	volatile uint64_t t95 = 13078350489350LLU;

	t95 = ((x397|x398)+(x399|x400));

	if (t95 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x402 = -14;
	uint32_t x403 = 7U;
	int8_t x404 = INT8_MIN;

	t96 = ((x401|x402)+(x403|x404));

	if (t96 != 4294967174U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x405 = INT64_MIN;
	uint64_t x406 = 1492704987095LLU;
	volatile int64_t x407 = -1LL;
	int64_t x408 = INT64_MIN;
	uint64_t t97 = 26220043LLU;

	t97 = ((x405|x406)+(x407|x408));

	if (t97 != 9223373529559762902LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x409 = 5;
	int8_t x411 = INT8_MAX;
	int16_t x412 = -1;

	t98 = ((x409|x410)+(x411|x412));

	if (t98 != 32766) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x413 = INT32_MIN;
	int16_t x414 = -219;
	int32_t x415 = INT32_MAX;
	static int64_t x416 = 973038675LL;

	t99 = ((x413|x414)+(x415|x416));

	if (t99 != 2147483428LL) { NG(); } else { ; }
	
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

