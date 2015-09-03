#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x13 = UINT16_MAX;
uint64_t x17 = 475LLU;
int8_t x21 = INT8_MAX;
uint8_t x24 = UINT8_MAX;
int64_t x25 = INT64_MAX;
static volatile uint16_t x26 = 0U;
volatile int32_t x32 = INT32_MIN;
volatile int16_t x33 = INT16_MAX;
int32_t t9 = -3717;
volatile int16_t x45 = INT16_MIN;
int64_t x46 = INT64_MIN;
uint16_t x47 = UINT16_MAX;
volatile int64_t t10 = -267247725LL;
uint32_t x58 = UINT32_MAX;
volatile uint32_t t13 = 82181U;
static int8_t x67 = -4;
static volatile uint32_t t14 = 2U;
static int16_t x79 = INT16_MIN;
int64_t x82 = INT64_MIN;
int16_t x83 = 0;
int16_t x92 = INT16_MIN;
static int32_t x99 = INT32_MIN;
static volatile int64_t t23 = -13412532528834LL;
volatile uint64_t t24 = 41633447172LLU;
static int32_t t25 = 552;
uint64_t x123 = 1103201LLU;
int64_t x124 = -523266358LL;
int64_t x127 = INT64_MIN;
uint64_t t27 = 16768313LLU;
volatile int32_t t28 = -4994;
int16_t x134 = -10;
static volatile int32_t x137 = 52486;
uint8_t x146 = 83U;
int32_t x147 = -1;
volatile uint64_t x157 = 9254855397473LLU;
int16_t x158 = -4775;
static int8_t x159 = 1;
int64_t x161 = -1LL;
volatile uint64_t t37 = 67365445512369LLU;
int8_t x171 = -1;
volatile int32_t t38 = 1;
int16_t x173 = INT16_MAX;
int32_t t40 = 34;
int64_t x185 = INT64_MAX;
volatile int64_t t41 = -3LL;
int32_t x192 = INT32_MIN;
uint64_t x193 = UINT64_MAX;
int32_t x197 = INT32_MIN;
volatile int64_t t44 = 5LL;
int16_t x207 = 0;
int64_t t46 = INT64_MIN;
static volatile uint16_t x209 = 25417U;
uint16_t x220 = 1401U;
static uint32_t x222 = 15561461U;
volatile int32_t x224 = INT32_MAX;
volatile uint32_t t49 = 32620179U;
volatile int16_t x225 = -4;
uint64_t t50 = 1060249712664LLU;
int64_t t52 = 296478906798179271LL;
int8_t x237 = 12;
int8_t x238 = INT8_MAX;
int32_t x241 = INT32_MAX;
uint64_t x245 = 972941LLU;
volatile int64_t x248 = INT64_MAX;
static volatile int64_t t56 = 3799298425664074243LL;
static volatile int16_t x253 = -1;
int8_t x256 = INT8_MIN;
int16_t x257 = -1;
static int16_t x261 = INT16_MIN;
uint16_t x263 = 265U;
int64_t x268 = INT64_MIN;
static int64_t x273 = -1LL;
int64_t x274 = -1LL;
volatile int32_t x277 = INT32_MAX;
int64_t x280 = INT64_MIN;
uint64_t t64 = 3958814LLU;
int32_t x286 = INT32_MIN;
volatile int32_t x287 = 412793560;
volatile uint16_t x289 = 7750U;
uint64_t x297 = 14536622LLU;
volatile uint64_t t67 = 2234931780375LLU;
volatile int64_t t68 = -130719LL;
uint16_t x310 = 167U;
int16_t x312 = INT16_MIN;
int64_t t69 = 510090LL;
int64_t t72 = 468616LL;
uint32_t x327 = UINT32_MAX;
int32_t x329 = INT32_MIN;
static volatile int16_t x333 = 1;
volatile int8_t x338 = 1;
int16_t x342 = INT16_MIN;
volatile uint32_t x344 = 9072U;
int64_t x354 = -115417LL;
static uint8_t x355 = UINT8_MAX;
uint16_t x358 = 0U;
static volatile int16_t x362 = -12261;
volatile int16_t x366 = 60;
volatile uint64_t t84 = 12677279366665LLU;
int64_t x378 = INT64_MAX;
int8_t x381 = INT8_MAX;
static int8_t x387 = INT8_MIN;
uint16_t x389 = UINT16_MAX;
int16_t x390 = 3750;
uint32_t x393 = UINT32_MAX;
volatile int8_t x398 = INT8_MIN;
static uint64_t x403 = 1112314201LLU;
volatile uint64_t t92 = 6996LLU;
uint8_t x406 = 25U;
int32_t x410 = -26097;
static int64_t x422 = -1LL;
uint16_t x426 = 28028U;
int64_t x427 = INT64_MAX;
int64_t t98 = 936830836800201890LL;
volatile int32_t t99 = 50517;


void f0(void) {
	int64_t x1 = 3670LL;
	int8_t x2 = -1;
	int32_t x3 = -1;
	int8_t x4 = INT8_MIN;
	volatile int64_t t0 = 126185926824LL;

	t0 = ((x1-(x2&x3))&x4);

	if (t0 != 3584LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x9 = 2U;
	int64_t x10 = INT64_MAX;
	int8_t x11 = INT8_MIN;
	uint64_t x12 = 232463910157206LLU;
	uint64_t t1 = 38867LLU;

	t1 = ((x9-(x10&x11))&x12);

	if (t1 != 130LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x14 = INT64_MIN;
	int32_t x15 = 144;
	volatile uint64_t x16 = 13481LLU;
	static volatile uint64_t t2 = 19796245226261102LLU;

	t2 = ((x13-(x14&x15))&x16);

	if (t2 != 13481LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x18 = INT64_MIN;
	volatile int64_t x19 = INT64_MIN;
	volatile int32_t x20 = INT32_MAX;
	volatile uint64_t t3 = 27LLU;

	t3 = ((x17-(x18&x19))&x20);

	if (t3 != 475LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x22 = INT8_MIN;
	uint32_t x23 = 225437406U;
	static volatile uint32_t t4 = 0U;

	t4 = ((x21-(x22&x23))&x24);

	if (t4 != 255U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x27 = 81072538LL;
	uint8_t x28 = 5U;
	int64_t t5 = 48331728413LL;

	t5 = ((x25-(x26&x27))&x28);

	if (t5 != 5LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = 231U;
	int16_t x30 = 5440;
	int8_t x31 = -1;
	uint32_t t6 = 37644205U;

	t6 = ((x29-(x30&x31))&x32);

	if (t6 != 2147483648U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x34 = 29399679257LL;
	int64_t x35 = INT64_MAX;
	int8_t x36 = INT8_MAX;
	static int64_t t7 = -10480LL;

	t7 = ((x33-(x34&x35))&x36);

	if (t7 != 102LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x37 = 1611664U;
	static uint64_t x38 = 823743210406LLU;
	uint32_t x39 = UINT32_MAX;
	int64_t x40 = -2603081610LL;
	volatile uint64_t t8 = 1235885139LLU;

	t8 = ((x37-(x38&x39))&x40);

	if (t8 != 18446744070019096674LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MIN;
	static volatile int16_t x42 = INT16_MIN;
	int16_t x43 = INT16_MIN;
	int32_t x44 = INT32_MIN;

	t9 = ((x41-(x42&x43))&x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x48 = INT32_MIN;

	t10 = ((x45-(x46&x47))&x48);

	if (t10 != -2147483648LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = 15U;
	int64_t x50 = 178114962545LL;
	uint32_t x51 = 74303U;
	int8_t x52 = -7;
	volatile int64_t t11 = -3494676325645LL;

	t11 = ((x49-(x50&x51))&x52);

	if (t11 != -8232LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x53 = 32238525U;
	volatile uint16_t x54 = 1U;
	int16_t x55 = -246;
	int16_t x56 = 1948;
	static volatile uint32_t t12 = 1377004U;

	t12 = ((x53-(x54&x55))&x56);

	if (t12 != 924U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = INT32_MIN;
	volatile int32_t x59 = -18770;
	int8_t x60 = INT8_MIN;

	t13 = ((x57-(x58&x59))&x60);

	if (t13 != 2147502336U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = -1;
	static int8_t x66 = INT8_MIN;
	uint32_t x68 = 4167U;

	t14 = ((x65-(x66&x67))&x68);

	if (t14 != 71U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x69 = 7113U;
	static uint64_t x70 = UINT64_MAX;
	int8_t x71 = INT8_MAX;
	static int16_t x72 = 0;
	volatile uint64_t t15 = 252849450093270LLU;

	t15 = ((x69-(x70&x71))&x72);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = INT32_MAX;
	uint64_t x74 = 515114758606746573LLU;
	int16_t x75 = -1;
	int64_t x76 = INT64_MIN;
	uint64_t t16 = 525225158847727650LLU;

	t16 = ((x73-(x74&x75))&x76);

	if (t16 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x77 = 380166808U;
	uint32_t x78 = UINT32_MAX;
	uint16_t x80 = 1631U;
	static uint32_t t17 = 180U;

	t17 = ((x77-(x78&x79))&x80);

	if (t17 != 536U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x81 = 1224898U;
	uint8_t x84 = UINT8_MAX;
	volatile int64_t t18 = 996LL;

	t18 = ((x81-(x82&x83))&x84);

	if (t18 != 194LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = -1LL;
	int8_t x86 = INT8_MAX;
	static volatile int16_t x87 = -1;
	int32_t x88 = INT32_MAX;
	int64_t t19 = 15091435078LL;

	t19 = ((x85-(x86&x87))&x88);

	if (t19 != 2147483520LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x89 = INT16_MIN;
	int32_t x90 = 133;
	int8_t x91 = -19;
	int32_t t20 = -195704585;

	t20 = ((x89-(x90&x91))&x92);

	if (t20 != -65536) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x93 = 12U;
	static uint32_t x94 = 5214U;
	int16_t x95 = 15;
	int16_t x96 = INT16_MAX;
	static uint32_t t21 = 451933909U;

	t21 = ((x93-(x94&x95))&x96);

	if (t21 != 32766U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = -1LL;
	int8_t x98 = INT8_MAX;
	uint32_t x100 = 47U;
	static volatile int64_t t22 = -30925432012072454LL;

	t22 = ((x97-(x98&x99))&x100);

	if (t22 != 47LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x109 = -13;
	int64_t x110 = INT64_MIN;
	int16_t x111 = -1;
	int64_t x112 = INT64_MAX;

	t23 = ((x109-(x110&x111))&x112);

	if (t23 != 9223372036854775795LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x113 = -301;
	volatile uint64_t x114 = UINT64_MAX;
	static volatile int32_t x115 = INT32_MAX;
	static int32_t x116 = INT32_MIN;

	t24 = ((x113-(x114&x115))&x116);

	if (t24 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x117 = -1;
	int8_t x118 = INT8_MIN;
	int8_t x119 = INT8_MAX;
	static int32_t x120 = 522712929;

	t25 = ((x117-(x118&x119))&x120);

	if (t25 != 522712929) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x121 = INT8_MAX;
	static volatile int64_t x122 = INT64_MAX;
	static uint64_t t26 = 162155766312707179LLU;

	t26 = ((x121-(x122&x123))&x124);

	if (t26 != 18446744073186247178LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x125 = INT16_MIN;
	volatile int16_t x126 = 1;
	uint64_t x128 = 7129444636704603LLU;

	t27 = ((x125-(x126&x127))&x128);

	if (t27 != 7129444636688384LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = INT8_MAX;
	int32_t x130 = 324;
	uint16_t x131 = UINT16_MAX;
	uint16_t x132 = 41U;

	t28 = ((x129-(x130&x131))&x132);

	if (t28 != 41) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x133 = INT32_MAX;
	uint32_t x135 = UINT32_MAX;
	uint64_t x136 = UINT64_MAX;
	uint64_t t29 = 0LLU;

	t29 = ((x133-(x134&x135))&x136);

	if (t29 != 2147483657LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x138 = UINT64_MAX;
	volatile int32_t x139 = -1;
	volatile int8_t x140 = INT8_MIN;
	uint64_t t30 = 1913658LLU;

	t30 = ((x137-(x138&x139))&x140);

	if (t30 != 52480LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x141 = UINT64_MAX;
	uint64_t x142 = 16368401LLU;
	uint64_t x143 = UINT64_MAX;
	volatile int16_t x144 = -1;
	static volatile uint64_t t31 = 501LLU;

	t31 = ((x141-(x142&x143))&x144);

	if (t31 != 18446744073693183214LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x145 = 0U;
	uint64_t x148 = 285411116783LLU;
	static uint64_t t32 = 26398LLU;

	t32 = ((x145-(x146&x147))&x148);

	if (t32 != 285411116717LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x149 = 124396916664LL;
	int8_t x150 = INT8_MIN;
	int64_t x151 = 43419164LL;
	int16_t x152 = -1;
	volatile int64_t t33 = -88694098045LL;

	t33 = ((x149-(x150&x151))&x152);

	if (t33 != 124353497528LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x153 = 3744682134LL;
	int64_t x154 = INT64_MIN;
	volatile uint8_t x155 = 6U;
	int8_t x156 = INT8_MAX;
	int64_t t34 = 1426LL;

	t34 = ((x153-(x154&x155))&x156);

	if (t34 != 22LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x160 = INT8_MIN;
	uint64_t t35 = 6357134040LLU;

	t35 = ((x157-(x158&x159))&x160);

	if (t35 != 9254855397376LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x162 = -1;
	int64_t x163 = 17345252LL;
	volatile int64_t x164 = 358835696849LL;
	static volatile int64_t t36 = -135088901LL;

	t36 = ((x161-(x162&x163))&x164);

	if (t36 != 358835688465LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x165 = INT16_MIN;
	int8_t x166 = INT8_MAX;
	uint64_t x167 = 1178313LLU;
	volatile int8_t x168 = INT8_MIN;

	t37 = ((x165-(x166&x167))&x168);

	if (t37 != 18446744073709518720LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x169 = INT32_MAX;
	int16_t x170 = INT16_MAX;
	int32_t x172 = INT32_MAX;

	t38 = ((x169-(x170&x171))&x172);

	if (t38 != 2147450880) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x174 = -166;
	static int16_t x175 = -1;
	volatile int64_t x176 = -1LL;
	int64_t t39 = 131489444LL;

	t39 = ((x173-(x174&x175))&x176);

	if (t39 != 32933LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x177 = 424;
	int16_t x178 = -1;
	int32_t x179 = INT32_MAX;
	static volatile int8_t x180 = INT8_MIN;

	t40 = ((x177-(x178&x179))&x180);

	if (t40 != -2147483264) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x186 = -6855LL;
	static uint16_t x187 = 1652U;
	static uint8_t x188 = UINT8_MAX;

	t41 = ((x185-(x186&x187))&x188);

	if (t41 != 207LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x189 = -1;
	int8_t x190 = -1;
	static int64_t x191 = INT64_MIN;
	int64_t t42 = 182886775LL;

	t42 = ((x189-(x190&x191))&x192);

	if (t42 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x194 = 114U;
	int64_t x195 = INT64_MIN;
	int16_t x196 = INT16_MIN;
	uint64_t t43 = 64031064LLU;

	t43 = ((x193-(x194&x195))&x196);

	if (t43 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x198 = INT16_MIN;
	static int64_t x199 = -1LL;
	int32_t x200 = INT32_MIN;

	t44 = ((x197-(x198&x199))&x200);

	if (t44 != -2147483648LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x201 = 60U;
	int8_t x202 = -1;
	uint8_t x203 = 78U;
	static int8_t x204 = INT8_MIN;
	volatile int32_t t45 = 54508;

	t45 = ((x201-(x202&x203))&x204);

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x205 = -1;
	int16_t x206 = -9285;
	int64_t x208 = INT64_MIN;

	t46 = ((x205-(x206&x207))&x208);

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x210 = 0U;
	static volatile int16_t x211 = -1;
	static int16_t x212 = INT16_MIN;
	volatile int32_t t47 = 32;

	t47 = ((x209-(x210&x211))&x212);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x217 = INT8_MIN;
	int8_t x218 = INT8_MIN;
	uint32_t x219 = 244210195U;
	static volatile uint32_t t48 = 1U;

	t48 = ((x217-(x218&x219))&x220);

	if (t48 != 1280U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x221 = 0;
	uint16_t x223 = 11455U;

	t49 = ((x221-(x222&x223))&x224);

	if (t49 != 2147475275U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x226 = INT8_MIN;
	uint64_t x227 = 440868282LLU;
	int64_t x228 = 118389LL;

	t50 = ((x225-(x226&x227))&x228);

	if (t50 != 49780LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x229 = 0U;
	uint16_t x230 = 58U;
	uint8_t x231 = 1U;
	int16_t x232 = INT16_MIN;
	int32_t t51 = -3338;

	t51 = ((x229-(x230&x231))&x232);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x233 = -2938;
	uint16_t x234 = 34U;
	volatile int64_t x235 = INT64_MAX;
	uint8_t x236 = 6U;

	t52 = ((x233-(x234&x235))&x236);

	if (t52 != 4LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x239 = UINT64_MAX;
	static uint64_t x240 = 4120980251432887LLU;
	static uint64_t t53 = 1516321725665928LLU;

	t53 = ((x237-(x238&x239))&x240);

	if (t53 != 4120980251432837LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x242 = INT64_MAX;
	static int8_t x243 = INT8_MAX;
	volatile uint64_t x244 = 27575307559315LLU;
	static uint64_t t54 = 302132653LLU;

	t54 = ((x241-(x242&x243))&x244);

	if (t54 != 1617518976LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x246 = 52U;
	uint32_t x247 = 6492459U;
	uint64_t t55 = 192732498679667LLU;

	t55 = ((x245-(x246&x247))&x248);

	if (t55 != 972909LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x249 = -1;
	volatile uint8_t x250 = 33U;
	int64_t x251 = INT64_MIN;
	volatile int16_t x252 = INT16_MIN;

	t56 = ((x249-(x250&x251))&x252);

	if (t56 != -32768LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x254 = INT8_MIN;
	int32_t x255 = -4;
	volatile int32_t t57 = 53345;

	t57 = ((x253-(x254&x255))&x256);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x258 = INT16_MIN;
	uint8_t x259 = 1U;
	static volatile uint16_t x260 = UINT16_MAX;
	int32_t t58 = 47;

	t58 = ((x257-(x258&x259))&x260);

	if (t58 != 65535) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x262 = UINT16_MAX;
	uint32_t x264 = 127U;
	uint32_t t59 = 728303410U;

	t59 = ((x261-(x262&x263))&x264);

	if (t59 != 119U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x265 = INT16_MAX;
	static uint16_t x266 = UINT16_MAX;
	int8_t x267 = INT8_MIN;
	int64_t t60 = INT64_MIN;

	t60 = ((x265-(x266&x267))&x268);

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x269 = -755LL;
	static uint16_t x270 = UINT16_MAX;
	int8_t x271 = INT8_MAX;
	int16_t x272 = 1534;
	static volatile int64_t t61 = 1LL;

	t61 = ((x269-(x270&x271))&x272);

	if (t61 != 1166LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x275 = -9;
	int16_t x276 = -1;
	int64_t t62 = 95287482175811LL;

	t62 = ((x273-(x274&x275))&x276);

	if (t62 != 8LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x278 = INT64_MIN;
	volatile uint16_t x279 = 8652U;
	volatile int64_t t63 = 863LL;

	t63 = ((x277-(x278&x279))&x280);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x281 = INT64_MIN;
	volatile uint32_t x282 = UINT32_MAX;
	uint64_t x283 = UINT64_MAX;
	uint64_t x284 = 75246322LLU;

	t64 = ((x281-(x282&x283))&x284);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x285 = -1598;
	int8_t x288 = INT8_MAX;
	volatile int32_t t65 = 18856226;

	t65 = ((x285-(x286&x287))&x288);

	if (t65 != 66) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x290 = 1U;
	int64_t x291 = INT64_MIN;
	uint16_t x292 = 13U;
	int64_t t66 = -7323503337LL;

	t66 = ((x289-(x290&x291))&x292);

	if (t66 != 4LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x298 = INT64_MAX;
	int16_t x299 = -1;
	int32_t x300 = -40103658;

	t67 = ((x297-(x298&x299))&x300);

	if (t67 != 9223372036864999686LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x305 = UINT8_MAX;
	uint16_t x306 = 8U;
	volatile int16_t x307 = -1;
	int64_t x308 = INT64_MAX;

	t68 = ((x305-(x306&x307))&x308);

	if (t68 != 247LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x309 = -17081855687LL;
	int64_t x311 = INT64_MIN;

	t69 = ((x309-(x310&x311))&x312);

	if (t69 != -17081860096LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x313 = 4U;
	static int8_t x314 = INT8_MAX;
	static uint32_t x315 = 65110745U;
	int16_t x316 = 1909;
	volatile uint32_t t70 = 1809U;

	t70 = ((x313-(x314&x315))&x316);

	if (t70 != 1825U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x317 = INT32_MIN;
	int32_t x318 = 9676;
	static uint16_t x319 = 19U;
	static int8_t x320 = INT8_MAX;
	static volatile int32_t t71 = -16605851;

	t71 = ((x317-(x318&x319))&x320);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x321 = INT32_MIN;
	int64_t x322 = 16LL;
	uint32_t x323 = 2737326U;
	volatile int64_t x324 = -1LL;

	t72 = ((x321-(x322&x323))&x324);

	if (t72 != -2147483648LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x325 = 60U;
	uint8_t x326 = UINT8_MAX;
	int64_t x328 = 3979916LL;
	volatile int64_t t73 = -12898483622689014LL;

	t73 = ((x325-(x326&x327))&x328);

	if (t73 != 3979788LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x330 = INT64_MIN;
	volatile int64_t x331 = 69895386731042320LL;
	uint16_t x332 = 1U;
	volatile int64_t t74 = -1LL;

	t74 = ((x329-(x330&x331))&x332);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x334 = -1;
	static uint8_t x335 = 7U;
	static int16_t x336 = -1819;
	int32_t t75 = 105038;

	t75 = ((x333-(x334&x335))&x336);

	if (t75 != -1824) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x337 = -471;
	volatile int8_t x339 = -7;
	int8_t x340 = -1;
	volatile int32_t t76 = 54;

	t76 = ((x337-(x338&x339))&x340);

	if (t76 != -472) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x341 = 270U;
	uint16_t x343 = 109U;
	uint32_t t77 = 33458746U;

	t77 = ((x341-(x342&x343))&x344);

	if (t77 != 256U) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x345 = INT32_MIN;
	uint64_t x346 = 40525156LLU;
	int8_t x347 = -1;
	int16_t x348 = INT16_MIN;
	uint64_t t78 = 1888935227109198505LLU;

	t78 = ((x345-(x346&x347))&x348);

	if (t78 != 18446744071521533952LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x349 = 212584648123LL;
	int32_t x350 = 378119;
	int8_t x351 = 1;
	volatile int32_t x352 = INT32_MIN;
	int64_t t79 = -242LL;

	t79 = ((x349-(x350&x351))&x352);

	if (t79 != 210453397504LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x353 = -1LL;
	static uint8_t x356 = UINT8_MAX;
	int64_t t80 = 83LL;

	t80 = ((x353-(x354&x355))&x356);

	if (t80 != 216LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint64_t x357 = 80114950LLU;
	uint8_t x359 = 16U;
	int16_t x360 = 235;
	volatile uint64_t t81 = 63LLU;

	t81 = ((x357-(x358&x359))&x360);

	if (t81 != 2LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x361 = INT8_MIN;
	volatile int16_t x363 = INT16_MAX;
	static int64_t x364 = INT64_MAX;
	int64_t t82 = 545900657901360LL;

	t82 = ((x361-(x362&x363))&x364);

	if (t82 != 9223372036854755173LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x365 = 96U;
	volatile uint64_t x367 = 15807LLU;
	static uint16_t x368 = 154U;
	uint64_t t83 = 25960314629845LLU;

	t83 = ((x365-(x366&x367))&x368);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x369 = UINT64_MAX;
	int32_t x370 = 7748;
	int64_t x371 = INT64_MIN;
	int16_t x372 = INT16_MIN;

	t84 = ((x369-(x370&x371))&x372);

	if (t84 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x373 = -9;
	uint8_t x374 = 9U;
	int8_t x375 = 0;
	int64_t x376 = 17459294307670946LL;
	int64_t t85 = -8797134067496LL;

	t85 = ((x373-(x374&x375))&x376);

	if (t85 != 17459294307670946LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x377 = UINT8_MAX;
	int64_t x379 = -145291998LL;
	uint32_t x380 = 90152394U;
	volatile int64_t t86 = 691503LL;

	t86 = ((x377-(x378&x379))&x380);

	if (t86 != 563656LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x382 = -1;
	int16_t x383 = INT16_MIN;
	int32_t x384 = -838;
	static int32_t t87 = -630012255;

	t87 = ((x381-(x382&x383))&x384);

	if (t87 != 32826) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x385 = 3;
	static uint16_t x386 = 115U;
	uint8_t x388 = 3U;
	int32_t t88 = -1;

	t88 = ((x385-(x386&x387))&x388);

	if (t88 != 3) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x391 = 38659090273LL;
	volatile uint8_t x392 = 5U;
	volatile int64_t t89 = 1015488011LL;

	t89 = ((x389-(x390&x391))&x392);

	if (t89 != 5LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x394 = UINT8_MAX;
	int64_t x395 = 8986LL;
	int16_t x396 = INT16_MAX;
	int64_t t90 = -44241144405LL;

	t90 = ((x393-(x394&x395))&x396);

	if (t90 != 32741LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x397 = -109;
	uint64_t x399 = 37583714221661417LLU;
	uint16_t x400 = 1677U;
	uint64_t t91 = 3LLU;

	t91 = ((x397-(x398&x399))&x400);

	if (t91 != 513LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x401 = -1;
	int8_t x402 = INT8_MAX;
	volatile int8_t x404 = INT8_MAX;

	t92 = ((x401-(x402&x403))&x404);

	if (t92 != 38LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x405 = INT16_MAX;
	uint8_t x407 = UINT8_MAX;
	uint8_t x408 = 27U;
	volatile int32_t t93 = 10804248;

	t93 = ((x405-(x406&x407))&x408);

	if (t93 != 2) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x409 = INT8_MIN;
	int16_t x411 = INT16_MIN;
	static volatile int8_t x412 = INT8_MIN;
	int32_t t94 = -26;

	t94 = ((x409-(x410&x411))&x412);

	if (t94 != 32640) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x413 = -5725772LL;
	int16_t x414 = INT16_MIN;
	uint64_t x415 = 63730418LLU;
	volatile int32_t x416 = -1;
	uint64_t t95 = 5725LLU;

	t95 = ((x413-(x414&x415))&x416);

	if (t95 != 18446744073640124852LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x417 = 3994U;
	int8_t x418 = INT8_MIN;
	int16_t x419 = 11282;
	volatile int8_t x420 = 1;
	int32_t t96 = 6624;

	t96 = ((x417-(x418&x419))&x420);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x421 = INT16_MIN;
	volatile uint16_t x423 = 26U;
	volatile int32_t x424 = INT32_MIN;
	volatile int64_t t97 = -297720337380LL;

	t97 = ((x421-(x422&x423))&x424);

	if (t97 != -2147483648LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x425 = INT64_MAX;
	int8_t x428 = 13;

	t98 = ((x425-(x426&x427))&x428);

	if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x429 = INT16_MIN;
	volatile uint8_t x430 = 4U;
	int8_t x431 = -1;
	static uint16_t x432 = UINT16_MAX;

	t99 = ((x429-(x430&x431))&x432);

	if (t99 != 32764) { NG(); } else { ; }
	
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

