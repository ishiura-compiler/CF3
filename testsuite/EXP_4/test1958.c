#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x12 = -8;
uint64_t x17 = 500LLU;
int64_t x26 = -1LL;
int64_t x27 = 2321LL;
int64_t x38 = -1LL;
uint32_t x41 = 101896582U;
int32_t x44 = -4312;
int32_t x46 = -1;
int32_t x51 = -1931130;
uint16_t x55 = 1U;
int8_t x56 = 0;
int32_t t16 = 2;
int64_t x72 = INT64_MAX;
static volatile int32_t x74 = INT32_MAX;
int32_t t18 = -11697861;
int32_t t19 = -176;
volatile int16_t x82 = INT16_MIN;
int32_t x101 = INT32_MIN;
static volatile int32_t x107 = -1;
static int8_t x108 = INT8_MIN;
int16_t x114 = -1;
uint32_t x120 = 66086U;
static int8_t x122 = INT8_MIN;
volatile int32_t t30 = -234745587;
int32_t x125 = -1;
static int32_t x128 = -352;
uint8_t x132 = 15U;
uint8_t x135 = 3U;
int8_t x137 = 1;
volatile uint8_t x138 = UINT8_MAX;
int64_t x141 = 1LL;
uint16_t x142 = UINT16_MAX;
int64_t x146 = INT64_MIN;
uint32_t x151 = 202239080U;
volatile int32_t x154 = INT32_MAX;
volatile int16_t x156 = 611;
volatile int32_t t38 = 0;
static int8_t x157 = INT8_MAX;
static uint64_t x158 = 33769195778799871LLU;
static uint32_t x161 = 1U;
static volatile int32_t t40 = -124691;
int8_t x165 = INT8_MAX;
volatile int32_t t41 = 143;
int64_t x180 = 25365282LL;
static int32_t x182 = 6290873;
static int32_t t45 = -55;
volatile int8_t x186 = 1;
int8_t x198 = 13;
volatile int32_t t49 = -6332840;
static volatile int32_t x207 = -1;
int32_t x213 = -1;
static int16_t x216 = -1;
int32_t t53 = -37;
uint8_t x219 = UINT8_MAX;
int16_t x220 = INT16_MAX;
volatile int32_t x221 = -154811;
static int32_t t55 = 2;
uint64_t x226 = UINT64_MAX;
int32_t x227 = -1;
volatile uint16_t x228 = 50U;
volatile int32_t t56 = -31164;
static uint32_t x233 = 40769U;
uint8_t x235 = UINT8_MAX;
int8_t x236 = INT8_MIN;
int64_t x239 = INT64_MIN;
volatile int8_t x240 = 6;
int32_t t60 = -741739;
int64_t x245 = INT64_MIN;
volatile int32_t t61 = 1;
volatile uint32_t x250 = 152319U;
volatile int32_t t62 = 760;
int64_t x255 = INT64_MIN;
int64_t x264 = -273LL;
static volatile int32_t t65 = -7903;
uint8_t x275 = UINT8_MAX;
static uint8_t x279 = UINT8_MAX;
uint32_t x287 = 0U;
int32_t t71 = 1954497;
volatile int32_t x295 = INT32_MIN;
static int8_t x297 = 2;
int64_t x300 = INT64_MAX;
uint8_t x306 = 21U;
static volatile uint64_t x307 = 550812993060666LLU;
static int16_t x313 = -1;
int32_t t79 = 113780;
int64_t x323 = 348LL;
volatile int16_t x325 = INT16_MIN;
int16_t x328 = -1;
static volatile uint8_t x329 = 15U;
static int8_t x335 = INT8_MAX;
int16_t x338 = INT16_MIN;
int8_t x339 = -1;
static uint8_t x341 = 3U;
uint64_t x345 = 219610793222665LLU;
int32_t x347 = 10;
int32_t t86 = -211885;
int32_t t87 = 31;
static volatile uint64_t x354 = 1562257265LLU;
int16_t x355 = 779;
volatile int32_t t88 = -363988;
int64_t x357 = -1LL;
int16_t x358 = -3050;
static int16_t x363 = INT16_MAX;
uint8_t x364 = 1U;
static volatile int64_t x365 = INT64_MIN;
uint32_t x375 = UINT32_MAX;
int64_t x378 = INT64_MIN;
uint64_t x381 = 7423706649736908435LLU;
volatile int32_t t95 = 344987361;
uint32_t x385 = 402U;
int16_t x387 = 336;
static int32_t x394 = -1;
uint8_t x398 = 78U;


void f0(void) {
	uint8_t x1 = 4U;
	static int8_t x2 = -1;
	int32_t x3 = INT32_MIN;
	volatile int32_t x4 = 0;
	static volatile int32_t t0 = 250618;

	t0 = (x1==(x2==(x3|x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	volatile uint16_t x6 = UINT16_MAX;
	int64_t x7 = -1LL;
	int32_t x8 = -1;
	int32_t t1 = -90725479;

	t1 = (x5==(x6==(x7|x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x9 = 8210U;
	static uint32_t x10 = 718214U;
	int32_t x11 = -358072712;
	int32_t t2 = 51492;

	t2 = (x9==(x10==(x11|x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = INT16_MIN;
	int32_t x14 = 764;
	int16_t x15 = INT16_MAX;
	uint32_t x16 = 23175828U;
	volatile int32_t t3 = -53;

	t3 = (x13==(x14==(x15|x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x18 = INT32_MAX;
	int32_t x19 = -1;
	int16_t x20 = INT16_MIN;
	int32_t t4 = 127686692;

	t4 = (x17==(x18==(x19|x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = -1;
	uint8_t x22 = 33U;
	uint8_t x23 = UINT8_MAX;
	uint32_t x24 = 979691353U;
	int32_t t5 = -56829972;

	t5 = (x21==(x22==(x23|x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = INT8_MAX;
	int16_t x28 = -10032;
	volatile int32_t t6 = -10;

	t6 = (x25==(x26==(x27|x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	int32_t x30 = INT32_MIN;
	int64_t x31 = INT64_MAX;
	uint16_t x32 = 856U;
	int32_t t7 = -11;

	t7 = (x29==(x30==(x31|x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x33 = UINT32_MAX;
	uint16_t x34 = UINT16_MAX;
	volatile int8_t x35 = -1;
	int64_t x36 = -1LL;
	volatile int32_t t8 = -16133;

	t8 = (x33==(x34==(x35|x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	uint16_t x39 = UINT16_MAX;
	static int64_t x40 = INT64_MIN;
	int32_t t9 = 13237;

	t9 = (x37==(x38==(x39|x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x42 = -1;
	volatile uint16_t x43 = 14U;
	volatile int32_t t10 = 17444;

	t10 = (x41==(x42==(x43|x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	int32_t x47 = -32242;
	uint8_t x48 = 0U;
	static int32_t t11 = 512903;

	t11 = (x45==(x46==(x47|x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MAX;
	static uint16_t x50 = 2U;
	int8_t x52 = INT8_MIN;
	static volatile int32_t t12 = -7513571;

	t12 = (x49==(x50==(x51|x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -3815;
	int16_t x54 = -3486;
	int32_t t13 = -12916;

	t13 = (x53==(x54==(x55|x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x57 = -450974752270053565LL;
	volatile uint32_t x58 = 474617U;
	int64_t x59 = -2064363763646500179LL;
	volatile int64_t x60 = INT64_MIN;
	volatile int32_t t14 = -222;

	t14 = (x57==(x58==(x59|x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x61 = UINT64_MAX;
	volatile int8_t x62 = -3;
	uint64_t x63 = 170LLU;
	static int8_t x64 = INT8_MIN;
	int32_t t15 = 204;

	t15 = (x61==(x62==(x63|x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = UINT16_MAX;
	uint8_t x66 = UINT8_MAX;
	uint16_t x67 = 37U;
	uint32_t x68 = UINT32_MAX;

	t16 = (x65==(x66==(x67|x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MAX;
	uint8_t x70 = 6U;
	int8_t x71 = INT8_MIN;
	volatile int32_t t17 = -331086691;

	t17 = (x69==(x70==(x71|x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -888LL;
	uint8_t x75 = 0U;
	static int8_t x76 = INT8_MAX;

	t18 = (x73==(x74==(x75|x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	int8_t x78 = INT8_MIN;
	volatile int16_t x79 = INT16_MAX;
	int8_t x80 = INT8_MIN;

	t19 = (x77==(x78==(x79|x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	int64_t x83 = INT64_MIN;
	int16_t x84 = 1;
	static volatile int32_t t20 = 466668136;

	t20 = (x81==(x82==(x83|x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MIN;
	volatile uint32_t x86 = 1294U;
	static uint8_t x87 = 8U;
	volatile uint8_t x88 = 11U;
	int32_t t21 = 698448003;

	t21 = (x85==(x86==(x87|x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x89 = 56519U;
	static int16_t x90 = -1;
	int32_t x91 = -3120712;
	uint32_t x92 = 182050U;
	volatile int32_t t22 = 1028543;

	t22 = (x89==(x90==(x91|x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x93 = 97;
	int16_t x94 = INT16_MAX;
	uint64_t x95 = 532752401673824LLU;
	int32_t x96 = INT32_MIN;
	volatile int32_t t23 = -2;

	t23 = (x93==(x94==(x95|x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -1;
	static int32_t x98 = INT32_MAX;
	uint8_t x99 = UINT8_MAX;
	volatile int64_t x100 = 1887045754527485523LL;
	volatile int32_t t24 = -845506;

	t24 = (x97==(x98==(x99|x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x102 = INT64_MAX;
	uint32_t x103 = 70601U;
	uint8_t x104 = 41U;
	volatile int32_t t25 = -196;

	t25 = (x101==(x102==(x103|x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x105 = -93;
	int64_t x106 = INT64_MIN;
	int32_t t26 = -13;

	t26 = (x105==(x106==(x107|x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = UINT32_MAX;
	uint32_t x110 = 6439U;
	static int32_t x111 = INT32_MIN;
	static volatile uint16_t x112 = UINT16_MAX;
	int32_t t27 = -196509878;

	t27 = (x109==(x110==(x111|x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -1LL;
	int16_t x115 = INT16_MAX;
	int16_t x116 = INT16_MIN;
	volatile int32_t t28 = 418;

	t28 = (x113==(x114==(x115|x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = 869156077;
	uint16_t x118 = 5U;
	uint64_t x119 = UINT64_MAX;
	static int32_t t29 = 2787909;

	t29 = (x117==(x118==(x119|x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x121 = UINT8_MAX;
	int64_t x123 = 2058206LL;
	static int32_t x124 = INT32_MIN;

	t30 = (x121==(x122==(x123|x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x126 = INT8_MAX;
	uint64_t x127 = UINT64_MAX;
	int32_t t31 = -8;

	t31 = (x125==(x126==(x127|x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x129 = INT32_MIN;
	int32_t x130 = INT32_MIN;
	uint8_t x131 = 29U;
	volatile int32_t t32 = 4395;

	t32 = (x129==(x130==(x131|x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	volatile int32_t x134 = 84;
	int8_t x136 = -1;
	int32_t t33 = 628851;

	t33 = (x133==(x134==(x135|x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x139 = 3U;
	uint32_t x140 = 1576U;
	int32_t t34 = -20478;

	t34 = (x137==(x138==(x139|x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x143 = INT8_MAX;
	uint64_t x144 = 64649LLU;
	volatile int32_t t35 = -4;

	t35 = (x141==(x142==(x143|x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x145 = 6LL;
	static uint32_t x147 = 44718U;
	int16_t x148 = INT16_MAX;
	volatile int32_t t36 = 141305834;

	t36 = (x145==(x146==(x147|x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x149 = INT32_MIN;
	uint32_t x150 = UINT32_MAX;
	static uint8_t x152 = 57U;
	volatile int32_t t37 = 19754295;

	t37 = (x149==(x150==(x151|x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x153 = -1;
	static int8_t x155 = 27;

	t38 = (x153==(x154==(x155|x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x159 = INT16_MIN;
	uint64_t x160 = 13715455LLU;
	volatile int32_t t39 = -63566459;

	t39 = (x157==(x158==(x159|x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x162 = INT64_MIN;
	uint64_t x163 = UINT64_MAX;
	int32_t x164 = 7745;

	t40 = (x161==(x162==(x163|x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x166 = -1;
	static int8_t x167 = -1;
	int8_t x168 = -1;

	t41 = (x165==(x166==(x167|x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x169 = INT16_MIN;
	int32_t x170 = -1;
	int64_t x171 = -3LL;
	volatile uint16_t x172 = 663U;
	int32_t t42 = 1;

	t42 = (x169==(x170==(x171|x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MAX;
	int16_t x174 = INT16_MAX;
	uint16_t x175 = 13U;
	int32_t x176 = -1;
	volatile int32_t t43 = -879;

	t43 = (x173==(x174==(x175|x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 3597995117LLU;
	static int8_t x178 = INT8_MIN;
	uint64_t x179 = UINT64_MAX;
	volatile int32_t t44 = -536686;

	t44 = (x177==(x178==(x179|x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = -1;
	int16_t x183 = INT16_MIN;
	static uint32_t x184 = 45U;

	t45 = (x181==(x182==(x183|x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x185 = -1;
	int64_t x187 = -5336707026410LL;
	uint64_t x188 = 14LLU;
	static volatile int32_t t46 = -6318;

	t46 = (x185==(x186==(x187|x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x189 = -1;
	int8_t x190 = 0;
	uint64_t x191 = UINT64_MAX;
	volatile int32_t x192 = -620;
	static volatile int32_t t47 = -38482174;

	t47 = (x189==(x190==(x191|x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 2170000081LLU;
	int64_t x194 = INT64_MAX;
	int16_t x195 = INT16_MIN;
	int8_t x196 = -48;
	int32_t t48 = -98502;

	t48 = (x193==(x194==(x195|x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MAX;
	int8_t x199 = INT8_MIN;
	uint32_t x200 = UINT32_MAX;

	t49 = (x197==(x198==(x199|x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x201 = 0;
	static int64_t x202 = INT64_MIN;
	int64_t x203 = -1LL;
	static volatile int64_t x204 = INT64_MIN;
	volatile int32_t t50 = 1;

	t50 = (x201==(x202==(x203|x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -32LL;
	volatile int64_t x206 = INT64_MAX;
	static int16_t x208 = 3832;
	int32_t t51 = 92614;

	t51 = (x205==(x206==(x207|x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -13276;
	int64_t x210 = INT64_MAX;
	int8_t x211 = INT8_MAX;
	int16_t x212 = -1;
	int32_t t52 = 505886942;

	t52 = (x209==(x210==(x211|x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x214 = INT8_MAX;
	int8_t x215 = -1;

	t53 = (x213==(x214==(x215|x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x217 = 123372651980486LL;
	uint16_t x218 = 450U;
	volatile int32_t t54 = -57;

	t54 = (x217==(x218==(x219|x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x222 = 246;
	uint8_t x223 = 0U;
	static uint8_t x224 = 5U;

	t55 = (x221==(x222==(x223|x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x225 = 359U;

	t56 = (x225==(x226==(x227|x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x229 = UINT16_MAX;
	int32_t x230 = INT32_MAX;
	uint16_t x231 = 2544U;
	int64_t x232 = INT64_MIN;
	static volatile int32_t t57 = 211568991;

	t57 = (x229==(x230==(x231|x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x234 = -1LL;
	volatile int32_t t58 = 4;

	t58 = (x233==(x234==(x235|x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = UINT64_MAX;
	volatile int16_t x238 = -207;
	int32_t t59 = -468;

	t59 = (x237==(x238==(x239|x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = 6U;
	static int32_t x242 = INT32_MAX;
	int8_t x243 = -1;
	uint64_t x244 = UINT64_MAX;

	t60 = (x241==(x242==(x243|x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x246 = INT8_MIN;
	volatile int32_t x247 = INT32_MAX;
	int16_t x248 = INT16_MIN;

	t61 = (x245==(x246==(x247|x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MAX;
	static volatile int16_t x251 = INT16_MIN;
	static volatile int64_t x252 = INT64_MIN;

	t62 = (x249==(x250==(x251|x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x253 = UINT32_MAX;
	static volatile int32_t x254 = -1;
	uint8_t x256 = UINT8_MAX;
	int32_t t63 = -1507654;

	t63 = (x253==(x254==(x255|x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x257 = UINT32_MAX;
	int8_t x258 = -1;
	int8_t x259 = -1;
	int8_t x260 = -1;
	volatile int32_t t64 = 69643;

	t64 = (x257==(x258==(x259|x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint32_t x261 = 388314684U;
	volatile uint64_t x262 = UINT64_MAX;
	volatile int32_t x263 = 1027732;

	t65 = (x261==(x262==(x263|x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = 22U;
	static int8_t x266 = INT8_MIN;
	volatile int64_t x267 = INT64_MIN;
	volatile uint64_t x268 = 6496LLU;
	static volatile int32_t t66 = -31583687;

	t66 = (x265==(x266==(x267|x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = -60995570771034LL;
	static uint32_t x270 = 1U;
	static volatile int8_t x271 = 6;
	uint64_t x272 = UINT64_MAX;
	volatile int32_t t67 = -451178243;

	t67 = (x269==(x270==(x271|x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = UINT32_MAX;
	volatile int64_t x274 = 494023770LL;
	int64_t x276 = INT64_MAX;
	static int32_t t68 = -312;

	t68 = (x273==(x274==(x275|x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x277 = UINT8_MAX;
	volatile int64_t x278 = -1LL;
	int8_t x280 = INT8_MAX;
	int32_t t69 = 1048082603;

	t69 = (x277==(x278==(x279|x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = 103760801LLU;
	int8_t x282 = -1;
	uint16_t x283 = UINT16_MAX;
	uint8_t x284 = 29U;
	static int32_t t70 = -131864746;

	t70 = (x281==(x282==(x283|x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = 41384061753708638LLU;
	volatile int8_t x286 = INT8_MIN;
	volatile uint32_t x288 = 28157U;

	t71 = (x285==(x286==(x287|x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = -275459LL;
	int64_t x290 = -945019195746316855LL;
	volatile int16_t x291 = -3;
	volatile uint16_t x292 = 30U;
	static volatile int32_t t72 = -28;

	t72 = (x289==(x290==(x291|x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MIN;
	static int8_t x294 = INT8_MIN;
	uint64_t x296 = 5868155586805891LLU;
	int32_t t73 = -2837995;

	t73 = (x293==(x294==(x295|x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x298 = INT8_MAX;
	int32_t x299 = INT32_MIN;
	volatile int32_t t74 = 176;

	t74 = (x297==(x298==(x299|x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MAX;
	int16_t x302 = INT16_MIN;
	static volatile int32_t x303 = INT32_MIN;
	uint32_t x304 = 937957U;
	static volatile int32_t t75 = -239561;

	t75 = (x301==(x302==(x303|x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MAX;
	int8_t x308 = 4;
	int32_t t76 = 482940;

	t76 = (x305==(x306==(x307|x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = 19U;
	static int32_t x310 = INT32_MIN;
	uint32_t x311 = 0U;
	volatile int32_t x312 = 6400310;
	volatile int32_t t77 = 49958471;

	t77 = (x309==(x310==(x311|x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x314 = UINT16_MAX;
	static int8_t x315 = 1;
	int8_t x316 = -1;
	static volatile int32_t t78 = -6;

	t78 = (x313==(x314==(x315|x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MIN;
	volatile int32_t x318 = 46698;
	uint16_t x319 = UINT16_MAX;
	static int8_t x320 = INT8_MIN;

	t79 = (x317==(x318==(x319|x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = 2033554888178701615LL;
	static volatile uint32_t x322 = UINT32_MAX;
	uint16_t x324 = 2U;
	int32_t t80 = 17351;

	t80 = (x321==(x322==(x323|x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x326 = UINT16_MAX;
	static volatile uint32_t x327 = UINT32_MAX;
	volatile int32_t t81 = 54;

	t81 = (x325==(x326==(x327|x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x330 = INT16_MIN;
	static uint8_t x331 = UINT8_MAX;
	int16_t x332 = -512;
	int32_t t82 = -64263822;

	t82 = (x329==(x330==(x331|x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x333 = UINT32_MAX;
	volatile int16_t x334 = 5738;
	static int64_t x336 = -55LL;
	volatile int32_t t83 = -60751;

	t83 = (x333==(x334==(x335|x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x337 = INT16_MIN;
	int16_t x340 = INT16_MAX;
	int32_t t84 = 8368119;

	t84 = (x337==(x338==(x339|x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x342 = INT32_MAX;
	static int32_t x343 = -1;
	int64_t x344 = -18490LL;
	volatile int32_t t85 = -1006500;

	t85 = (x341==(x342==(x343|x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x346 = INT8_MAX;
	uint64_t x348 = UINT64_MAX;

	t86 = (x345==(x346==(x347|x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 4U;
	static uint8_t x350 = 25U;
	uint64_t x351 = 27175116227941779LLU;
	static int8_t x352 = -1;

	t87 = (x349==(x350==(x351|x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MIN;
	int16_t x356 = 6683;

	t88 = (x353==(x354==(x355|x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x359 = -1;
	uint16_t x360 = 11U;
	volatile int32_t t89 = 77129007;

	t89 = (x357==(x358==(x359|x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MIN;
	uint8_t x362 = 11U;
	int32_t t90 = -245110;

	t90 = (x361==(x362==(x363|x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x366 = 3U;
	uint16_t x367 = UINT16_MAX;
	int16_t x368 = INT16_MIN;
	volatile int32_t t91 = -28688;

	t91 = (x365==(x366==(x367|x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint32_t x369 = UINT32_MAX;
	uint64_t x370 = 1LLU;
	volatile int64_t x371 = 12LL;
	uint32_t x372 = UINT32_MAX;
	static volatile int32_t t92 = 79;

	t92 = (x369==(x370==(x371|x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MIN;
	volatile int32_t x374 = 1;
	volatile int32_t x376 = INT32_MAX;
	int32_t t93 = -12;

	t93 = (x373==(x374==(x375|x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x377 = INT8_MIN;
	uint32_t x379 = UINT32_MAX;
	static int8_t x380 = -1;
	volatile int32_t t94 = 14867520;

	t94 = (x377==(x378==(x379|x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x382 = INT8_MAX;
	int64_t x383 = -1LL;
	int64_t x384 = INT64_MIN;

	t95 = (x381==(x382==(x383|x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x386 = INT16_MAX;
	volatile uint16_t x388 = 3170U;
	volatile int32_t t96 = -75488;

	t96 = (x385==(x386==(x387|x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MAX;
	int8_t x390 = 1;
	int16_t x391 = -47;
	int32_t x392 = INT32_MIN;
	static int32_t t97 = 637545378;

	t97 = (x389==(x390==(x391|x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = UINT32_MAX;
	static volatile uint64_t x395 = UINT64_MAX;
	static int8_t x396 = INT8_MAX;
	int32_t t98 = 167919845;

	t98 = (x393==(x394==(x395|x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -1LL;
	int8_t x399 = 0;
	int16_t x400 = INT16_MIN;
	volatile int32_t t99 = -709416641;

	t99 = (x397==(x398==(x399|x400)));

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
