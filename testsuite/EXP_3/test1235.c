#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x8 = 0U;
uint8_t x11 = 23U;
int32_t t2 = 491300;
int32_t t3 = 4104731;
static uint64_t x17 = 5199506LLU;
int8_t x28 = INT8_MIN;
uint32_t x30 = 6U;
int16_t x32 = INT16_MAX;
volatile int32_t x34 = -1;
static volatile int32_t t8 = -363;
int32_t x37 = -1;
static int32_t t9 = 114681176;
volatile int16_t x47 = INT16_MIN;
int8_t x54 = -1;
int8_t x63 = -5;
volatile uint64_t t15 = 15443633LLU;
int16_t x74 = INT16_MAX;
uint8_t x80 = 31U;
static int64_t x92 = INT64_MAX;
static volatile uint64_t t20 = 280807LLU;
uint32_t x99 = UINT32_MAX;
static volatile int64_t t22 = -5157828LL;
volatile int32_t t23 = 14171;
int8_t x105 = INT8_MIN;
int32_t x110 = INT32_MIN;
int16_t x112 = INT16_MIN;
int32_t t25 = -5;
static volatile int16_t x114 = 11;
uint64_t t27 = 1113LLU;
volatile int8_t x121 = 9;
int16_t x123 = INT16_MIN;
int32_t t29 = -1957668;
static uint16_t x129 = UINT16_MAX;
int64_t x131 = INT64_MIN;
int32_t x132 = -12;
int16_t x145 = 136;
int32_t x148 = 6441;
volatile int64_t x150 = INT64_MIN;
int8_t x151 = INT8_MIN;
volatile int64_t t35 = -38904398007926LL;
int16_t x155 = INT16_MIN;
static int64_t x156 = INT64_MIN;
int64_t x161 = INT64_MIN;
volatile int64_t t38 = -611309510328LL;
int32_t t39 = 6055;
uint8_t x170 = 55U;
int64_t x171 = INT64_MAX;
int32_t t40 = -203992315;
static int64_t x188 = INT64_MAX;
int32_t x193 = INT32_MIN;
int32_t t46 = 2429503;
uint8_t x198 = 19U;
int16_t x199 = INT16_MAX;
uint8_t x202 = 1U;
int32_t t48 = 192049833;
volatile uint16_t x209 = 7U;
volatile int16_t x210 = 15877;
int32_t t50 = 963;
volatile int8_t x219 = INT8_MAX;
static int8_t x220 = INT8_MAX;
static int64_t x232 = INT64_MIN;
volatile uint32_t t54 = 104U;
volatile int64_t t56 = 122343001470436314LL;
static uint64_t t57 = 156708847277711LLU;
int16_t x256 = INT16_MIN;
static int16_t x257 = 0;
volatile uint64_t x258 = 400315LLU;
static volatile uint64_t t59 = 846LLU;
int32_t x264 = INT32_MIN;
static int8_t x268 = INT8_MIN;
int32_t t61 = -36;
int64_t x270 = INT64_MAX;
int8_t x286 = -2;
volatile int32_t t67 = 123328172;
int8_t x293 = INT8_MAX;
static int16_t x296 = 0;
volatile int8_t x303 = INT8_MIN;
static volatile int32_t t71 = 1;
static uint32_t x310 = 325U;
int64_t t73 = -79LL;
volatile int16_t x323 = 246;
int8_t x342 = 1;
int16_t x344 = 6;
int32_t x345 = 33624934;
static int32_t x346 = 27993;
int8_t x348 = INT8_MAX;
uint32_t x358 = UINT32_MAX;
static uint32_t t84 = 104630U;
int16_t x369 = INT16_MIN;
uint32_t t89 = 41254U;
uint16_t x386 = 458U;
uint16_t x392 = 111U;
int64_t x395 = INT64_MIN;
static volatile int16_t x402 = -1;
int64_t x404 = -124272196015971913LL;
volatile int32_t t95 = 86;
int32_t x405 = -86;
volatile int32_t t96 = -907921;
int16_t x412 = INT16_MAX;
static int64_t t97 = -6786183308794947LL;
static int16_t x415 = 1;
uint8_t x417 = 9U;
volatile int32_t t99 = 31;


void f0(void) {
	volatile uint8_t x1 = 3U;
	int32_t x2 = INT32_MIN;
	int64_t x3 = INT64_MIN;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = 0;

	t0 = ((x1/x2)^(x3==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x5 = 2U;
	uint16_t x6 = 4687U;
	static uint16_t x7 = 6924U;
	static volatile int32_t t1 = 179066;

	t1 = ((x5/x6)^(x7==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	int8_t x10 = -4;
	int32_t x12 = -1;

	t2 = ((x9/x10)^(x11==x12));

	if (t2 != -8191) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 1;
	volatile int32_t x14 = INT32_MAX;
	uint16_t x15 = 30U;
	static int32_t x16 = -1;

	t3 = ((x13/x14)^(x15==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = 10;
	static uint64_t x19 = 1624633LLU;
	int16_t x20 = 2;
	uint64_t t4 = 7292LLU;

	t4 = ((x17/x18)^(x19==x20));

	if (t4 != 519950LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = 65898621688LL;
	volatile uint32_t x22 = 2077001U;
	uint8_t x23 = 71U;
	uint8_t x24 = UINT8_MAX;
	static volatile int64_t t5 = -5807513755007LL;

	t5 = ((x21/x22)^(x23==x24));

	if (t5 != 31727LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = -4;
	static int32_t x26 = -7;
	uint64_t x27 = UINT64_MAX;
	volatile int32_t t6 = -3542;

	t6 = ((x25/x26)^(x27==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x29 = UINT64_MAX;
	static uint16_t x31 = UINT16_MAX;
	uint64_t t7 = 4LLU;

	t7 = ((x29/x30)^(x31==x32));

	if (t7 != 3074457345618258602LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = INT8_MIN;
	uint8_t x35 = 0U;
	uint16_t x36 = 13U;

	t8 = ((x33/x34)^(x35==x36));

	if (t8 != 128) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x38 = INT32_MAX;
	uint8_t x39 = 36U;
	uint32_t x40 = UINT32_MAX;

	t9 = ((x37/x38)^(x39==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = 703536460;
	static uint32_t x42 = 29U;
	volatile int16_t x43 = INT16_MIN;
	int16_t x44 = 4;
	uint32_t t10 = 23226U;

	t10 = ((x41/x42)^(x43==x44));

	if (t10 != 24259877U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MAX;
	static int64_t x46 = -490548217543603564LL;
	int64_t x48 = 11367375647300005LL;
	static volatile int64_t t11 = -126107LL;

	t11 = ((x45/x46)^(x47==x48));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	uint8_t x50 = 1U;
	volatile int32_t x51 = -3;
	int16_t x52 = -10132;
	static int64_t t12 = INT64_MIN;

	t12 = ((x49/x50)^(x51==x52));

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = 416LL;
	int32_t x55 = -3505779;
	uint64_t x56 = 194119733LLU;
	int64_t t13 = 231692LL;

	t13 = ((x53/x54)^(x55==x56));

	if (t13 != -416LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -466;
	static uint64_t x58 = UINT64_MAX;
	uint32_t x59 = 133785036U;
	uint64_t x60 = 139839413728LLU;
	volatile uint64_t t14 = 78876259102745667LLU;

	t14 = ((x57/x58)^(x59==x60));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x61 = 433LLU;
	static volatile int8_t x62 = INT8_MAX;
	uint32_t x64 = 40905U;

	t15 = ((x61/x62)^(x63==x64));

	if (t15 != 3LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = 779;
	int32_t x66 = -411177;
	int64_t x67 = INT64_MIN;
	volatile int32_t x68 = 3385829;
	int32_t t16 = -3;

	t16 = ((x65/x66)^(x67==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = 2;
	uint64_t x70 = 56LLU;
	uint8_t x71 = 0U;
	volatile int32_t x72 = -1;
	volatile uint64_t t17 = 1LLU;

	t17 = ((x69/x70)^(x71==x72));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = -1;
	static int8_t x75 = INT8_MIN;
	uint64_t x76 = 358215189694352LLU;
	int32_t t18 = -11480974;

	t18 = ((x73/x74)^(x75==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = INT64_MAX;
	static int64_t x78 = 2550633521979390985LL;
	int64_t x79 = -33789332219811LL;
	int64_t t19 = 136188607734LL;

	t19 = ((x77/x78)^(x79==x80));

	if (t19 != 3LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x89 = 622114281LLU;
	static int64_t x90 = -282439443LL;
	int64_t x91 = -1LL;

	t20 = ((x89/x90)^(x91==x92));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x93 = INT64_MAX;
	uint64_t x94 = UINT64_MAX;
	int64_t x95 = INT64_MAX;
	static int32_t x96 = INT32_MIN;
	volatile uint64_t t21 = 18716159LLU;

	t21 = ((x93/x94)^(x95==x96));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x97 = -5;
	int64_t x98 = INT64_MIN;
	volatile int64_t x100 = -293LL;

	t22 = ((x97/x98)^(x99==x100));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x101 = -1;
	static int16_t x102 = INT16_MIN;
	volatile uint32_t x103 = UINT32_MAX;
	int64_t x104 = 846728663014251613LL;

	t23 = ((x101/x102)^(x103==x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x106 = INT8_MIN;
	static int16_t x107 = INT16_MIN;
	static int16_t x108 = INT16_MIN;
	volatile int32_t t24 = 4707671;

	t24 = ((x105/x106)^(x107==x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = INT32_MAX;
	int16_t x111 = 2676;

	t25 = ((x109/x110)^(x111==x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x113 = -1;
	int16_t x115 = INT16_MIN;
	volatile int64_t x116 = -1LL;
	int32_t t26 = -477710;

	t26 = ((x113/x114)^(x115==x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x117 = 245168145079LLU;
	int8_t x118 = INT8_MIN;
	static int64_t x119 = INT64_MAX;
	int8_t x120 = INT8_MIN;

	t27 = ((x117/x118)^(x119==x120));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x122 = 1;
	uint16_t x124 = 674U;
	int32_t t28 = 234068;

	t28 = ((x121/x122)^(x123==x124));

	if (t28 != 9) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = INT16_MIN;
	static int16_t x126 = INT16_MAX;
	int64_t x127 = -1LL;
	volatile int16_t x128 = -4;

	t29 = ((x125/x126)^(x127==x128));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x130 = -15;
	volatile int32_t t30 = -2508916;

	t30 = ((x129/x130)^(x131==x132));

	if (t30 != -4369) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x133 = INT32_MIN;
	volatile uint8_t x134 = 2U;
	volatile int16_t x135 = INT16_MAX;
	static volatile int64_t x136 = -1LL;
	int32_t t31 = 6089;

	t31 = ((x133/x134)^(x135==x136));

	if (t31 != -1073741824) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x137 = 508825194LL;
	static uint64_t x138 = 383627LLU;
	int16_t x139 = 1;
	static volatile uint8_t x140 = 8U;
	static uint64_t t32 = 8003467303230248678LLU;

	t32 = ((x137/x138)^(x139==x140));

	if (t32 != 1326LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x141 = -58;
	int32_t x142 = INT32_MIN;
	int64_t x143 = -775LL;
	int8_t x144 = 3;
	int32_t t33 = 127330;

	t33 = ((x141/x142)^(x143==x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x146 = 3;
	uint32_t x147 = 31739U;
	static int32_t t34 = 273132;

	t34 = ((x145/x146)^(x147==x148));

	if (t34 != 45) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int32_t x149 = 520;
	uint8_t x152 = 1U;

	t35 = ((x149/x150)^(x151==x152));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x153 = 0;
	int16_t x154 = INT16_MIN;
	volatile int32_t t36 = -1;

	t36 = ((x153/x154)^(x155==x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x157 = INT32_MIN;
	uint16_t x158 = UINT16_MAX;
	uint64_t x159 = 16285191554013LLU;
	int32_t x160 = -1;
	volatile int32_t t37 = 441;

	t37 = ((x157/x158)^(x159==x160));

	if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x162 = UINT8_MAX;
	int32_t x163 = INT32_MIN;
	uint16_t x164 = UINT16_MAX;

	t38 = ((x161/x162)^(x163==x164));

	if (t38 != -36170086419038336LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x165 = 2U;
	int8_t x166 = INT8_MAX;
	uint32_t x167 = 9U;
	int64_t x168 = INT64_MAX;

	t39 = ((x165/x166)^(x167==x168));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x169 = INT16_MIN;
	int8_t x172 = INT8_MAX;

	t40 = ((x169/x170)^(x171==x172));

	if (t40 != -595) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x173 = 550115;
	int16_t x174 = INT16_MAX;
	int8_t x175 = INT8_MIN;
	volatile uint64_t x176 = 4145756631739LLU;
	int32_t t41 = 146708;

	t41 = ((x173/x174)^(x175==x176));

	if (t41 != 16) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x177 = INT16_MAX;
	uint64_t x178 = UINT64_MAX;
	int64_t x179 = INT64_MAX;
	static uint64_t x180 = UINT64_MAX;
	volatile uint64_t t42 = 115018805221038969LLU;

	t42 = ((x177/x178)^(x179==x180));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x181 = 247022;
	static int64_t x182 = INT64_MIN;
	int64_t x183 = INT64_MIN;
	static uint16_t x184 = 12004U;
	static int64_t t43 = 115694LL;

	t43 = ((x181/x182)^(x183==x184));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x185 = -1;
	volatile int32_t x186 = INT32_MIN;
	int16_t x187 = -1;
	static int32_t t44 = 1980;

	t44 = ((x185/x186)^(x187==x188));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x189 = -1;
	uint8_t x190 = 2U;
	static int32_t x191 = -40;
	int16_t x192 = -1;
	int32_t t45 = -19288983;

	t45 = ((x189/x190)^(x191==x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x194 = 1;
	uint64_t x195 = UINT64_MAX;
	int32_t x196 = -1;

	t46 = ((x193/x194)^(x195==x196));

	if (t46 != -2147483647) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x197 = UINT32_MAX;
	uint64_t x200 = 2336616086979LLU;
	volatile uint32_t t47 = 9U;

	t47 = ((x197/x198)^(x199==x200));

	if (t47 != 226050910U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x201 = 1U;
	int16_t x203 = 10564;
	static int32_t x204 = INT32_MAX;

	t48 = ((x201/x202)^(x203==x204));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x205 = -6;
	static uint64_t x206 = 297188923878LLU;
	uint64_t x207 = 109742357LLU;
	int32_t x208 = -1;
	volatile uint64_t t49 = 31030966064525LLU;

	t49 = ((x205/x206)^(x207==x208));

	if (t49 != 62070765LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x211 = INT16_MIN;
	int64_t x212 = -1LL;

	t50 = ((x209/x210)^(x211==x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x217 = INT32_MAX;
	int32_t x218 = INT32_MIN;
	static int32_t t51 = 0;

	t51 = ((x217/x218)^(x219==x220));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x221 = 56U;
	uint64_t x222 = UINT64_MAX;
	volatile int64_t x223 = 2975132757952214LL;
	int8_t x224 = INT8_MIN;
	uint64_t t52 = 86505030421LLU;

	t52 = ((x221/x222)^(x223==x224));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x229 = UINT16_MAX;
	int16_t x230 = -13;
	uint16_t x231 = 0U;
	volatile int32_t t53 = -3;

	t53 = ((x229/x230)^(x231==x232));

	if (t53 != -5041) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x233 = INT32_MAX;
	volatile uint32_t x234 = UINT32_MAX;
	static int16_t x235 = 660;
	uint32_t x236 = 34785U;

	t54 = ((x233/x234)^(x235==x236));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x241 = -1;
	uint16_t x242 = UINT16_MAX;
	uint64_t x243 = 13241091083738LLU;
	int8_t x244 = INT8_MIN;
	int32_t t55 = -1232;

	t55 = ((x241/x242)^(x243==x244));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x245 = 3664U;
	static int64_t x246 = INT64_MIN;
	int32_t x247 = -46;
	uint32_t x248 = 0U;

	t56 = ((x245/x246)^(x247==x248));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x249 = 103531242251685LLU;
	int64_t x250 = INT64_MAX;
	volatile int16_t x251 = INT16_MAX;
	uint32_t x252 = 137187U;

	t57 = ((x249/x250)^(x251==x252));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x253 = UINT16_MAX;
	int16_t x254 = -1;
	uint32_t x255 = UINT32_MAX;
	int32_t t58 = -124176781;

	t58 = ((x253/x254)^(x255==x256));

	if (t58 != -65535) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x259 = INT64_MAX;
	uint32_t x260 = UINT32_MAX;

	t59 = ((x257/x258)^(x259==x260));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x261 = -1;
	int16_t x262 = -687;
	int16_t x263 = INT16_MIN;
	volatile int32_t t60 = 1707286;

	t60 = ((x261/x262)^(x263==x264));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x265 = 7;
	int8_t x266 = INT8_MIN;
	uint32_t x267 = UINT32_MAX;

	t61 = ((x265/x266)^(x267==x268));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x269 = INT32_MAX;
	static int32_t x271 = INT32_MAX;
	int8_t x272 = 1;
	volatile int64_t t62 = -399957932LL;

	t62 = ((x269/x270)^(x271==x272));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x273 = UINT32_MAX;
	int8_t x274 = INT8_MAX;
	uint16_t x275 = UINT16_MAX;
	static uint32_t x276 = UINT32_MAX;
	volatile uint32_t t63 = 359655978U;

	t63 = ((x273/x274)^(x275==x276));

	if (t63 != 33818640U) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x277 = -1;
	int64_t x278 = INT64_MIN;
	int32_t x279 = -6946;
	uint64_t x280 = UINT64_MAX;
	int64_t t64 = 690088798384809524LL;

	t64 = ((x277/x278)^(x279==x280));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x281 = -63;
	static volatile int8_t x282 = -1;
	int32_t x283 = INT32_MAX;
	int64_t x284 = INT64_MIN;
	int32_t t65 = -51;

	t65 = ((x281/x282)^(x283==x284));

	if (t65 != 63) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x285 = INT16_MIN;
	static int32_t x287 = INT32_MIN;
	static uint64_t x288 = 1076678268367LLU;
	int32_t t66 = 15;

	t66 = ((x285/x286)^(x287==x288));

	if (t66 != 16384) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x289 = 219U;
	int8_t x290 = INT8_MAX;
	static int8_t x291 = INT8_MIN;
	volatile int16_t x292 = INT16_MAX;

	t67 = ((x289/x290)^(x291==x292));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x294 = -5;
	uint16_t x295 = UINT16_MAX;
	volatile int32_t t68 = 1;

	t68 = ((x293/x294)^(x295==x296));

	if (t68 != -25) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x297 = 109U;
	int8_t x298 = INT8_MAX;
	volatile int16_t x299 = INT16_MAX;
	uint32_t x300 = UINT32_MAX;
	volatile uint32_t t69 = 1U;

	t69 = ((x297/x298)^(x299==x300));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x301 = -11634;
	int8_t x302 = -1;
	uint32_t x304 = 124660U;
	volatile int32_t t70 = -98;

	t70 = ((x301/x302)^(x303==x304));

	if (t70 != 11634) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x305 = -457;
	uint8_t x306 = 50U;
	int64_t x307 = INT64_MIN;
	int16_t x308 = INT16_MIN;

	t71 = ((x305/x306)^(x307==x308));

	if (t71 != -9) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x309 = INT16_MAX;
	static uint64_t x311 = UINT64_MAX;
	int16_t x312 = INT16_MAX;
	uint32_t t72 = 726694168U;

	t72 = ((x309/x310)^(x311==x312));

	if (t72 != 100U) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x313 = INT64_MIN;
	static uint32_t x314 = 1142995U;
	uint64_t x315 = 256610688LLU;
	int32_t x316 = -1;

	t73 = ((x313/x314)^(x315==x316));

	if (t73 != -8069477151566LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int16_t x317 = INT16_MIN;
	int32_t x318 = -1;
	volatile int16_t x319 = -252;
	int64_t x320 = 140665273832211033LL;
	int32_t t74 = 23451;

	t74 = ((x317/x318)^(x319==x320));

	if (t74 != 32768) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x321 = -1;
	static int64_t x322 = 196LL;
	uint16_t x324 = UINT16_MAX;
	int64_t t75 = 4708892651499LL;

	t75 = ((x321/x322)^(x323==x324));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x325 = -19;
	static int32_t x326 = -1;
	int8_t x327 = -1;
	int64_t x328 = INT64_MIN;
	volatile int32_t t76 = -176;

	t76 = ((x325/x326)^(x327==x328));

	if (t76 != 19) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x329 = -10;
	static int32_t x330 = INT32_MIN;
	int32_t x331 = -1;
	int64_t x332 = -7795992086490972LL;
	static volatile int32_t t77 = -462172576;

	t77 = ((x329/x330)^(x331==x332));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x333 = INT32_MAX;
	uint16_t x334 = UINT16_MAX;
	int32_t x335 = INT32_MIN;
	uint16_t x336 = 32761U;
	volatile int32_t t78 = 135;

	t78 = ((x333/x334)^(x335==x336));

	if (t78 != 32768) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x337 = 125104806LLU;
	uint64_t x338 = UINT64_MAX;
	static uint64_t x339 = 220LLU;
	uint16_t x340 = UINT16_MAX;
	uint64_t t79 = 621LLU;

	t79 = ((x337/x338)^(x339==x340));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x341 = INT64_MIN;
	volatile uint16_t x343 = 1U;
	volatile int64_t t80 = INT64_MIN;

	t80 = ((x341/x342)^(x343==x344));

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x347 = -1;
	volatile int32_t t81 = -656141006;

	t81 = ((x345/x346)^(x347==x348));

	if (t81 != 1201) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x349 = UINT8_MAX;
	int16_t x350 = INT16_MIN;
	int8_t x351 = INT8_MAX;
	int32_t x352 = INT32_MIN;
	volatile int32_t t82 = -36811726;

	t82 = ((x349/x350)^(x351==x352));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x353 = INT8_MIN;
	volatile int64_t x354 = 55654LL;
	static int16_t x355 = 2;
	static uint8_t x356 = 3U;
	int64_t t83 = -82285876LL;

	t83 = ((x353/x354)^(x355==x356));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x357 = 2;
	uint32_t x359 = UINT32_MAX;
	volatile int16_t x360 = -1;

	t84 = ((x357/x358)^(x359==x360));

	if (t84 != 1U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x361 = UINT16_MAX;
	int64_t x362 = INT64_MIN;
	int8_t x363 = INT8_MIN;
	uint8_t x364 = UINT8_MAX;
	int64_t t85 = 15183400LL;

	t85 = ((x361/x362)^(x363==x364));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint8_t x365 = 24U;
	volatile uint8_t x366 = UINT8_MAX;
	int16_t x367 = 0;
	static volatile int64_t x368 = 2279032098254LL;
	int32_t t86 = 940890;

	t86 = ((x365/x366)^(x367==x368));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x370 = -1;
	static uint64_t x371 = 3LLU;
	int8_t x372 = INT8_MIN;
	volatile int32_t t87 = -59185220;

	t87 = ((x369/x370)^(x371==x372));

	if (t87 != 32768) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x373 = 1636275505721778LLU;
	int32_t x374 = INT32_MAX;
	int32_t x375 = 1;
	int32_t x376 = INT32_MIN;
	uint64_t t88 = 25657LLU;

	t88 = ((x373/x374)^(x375==x376));

	if (t88 != 761950LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x377 = 0U;
	uint32_t x378 = 438189872U;
	static uint16_t x379 = UINT16_MAX;
	static uint32_t x380 = 182U;

	t89 = ((x377/x378)^(x379==x380));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x381 = -1LL;
	static int8_t x382 = INT8_MIN;
	volatile int8_t x383 = INT8_MIN;
	static int32_t x384 = INT32_MIN;
	volatile int64_t t90 = 16LL;

	t90 = ((x381/x382)^(x383==x384));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x385 = -1;
	uint32_t x387 = 59134455U;
	static uint64_t x388 = UINT64_MAX;
	static int32_t t91 = -194;

	t91 = ((x385/x386)^(x387==x388));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x389 = -205613;
	volatile int16_t x390 = -6;
	int64_t x391 = 41057407LL;
	int32_t t92 = -1;

	t92 = ((x389/x390)^(x391==x392));

	if (t92 != 34268) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x393 = 3;
	int64_t x394 = INT64_MIN;
	int64_t x396 = INT64_MIN;
	int64_t t93 = 325LL;

	t93 = ((x393/x394)^(x395==x396));

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x397 = -1;
	int8_t x398 = INT8_MIN;
	static int32_t x399 = 15252;
	int8_t x400 = -1;
	int32_t t94 = 2313;

	t94 = ((x397/x398)^(x399==x400));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int8_t x401 = 27;
	int32_t x403 = 542998;

	t95 = ((x401/x402)^(x403==x404));

	if (t95 != -27) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x406 = 204;
	uint32_t x407 = UINT32_MAX;
	volatile int32_t x408 = INT32_MIN;

	t96 = ((x405/x406)^(x407==x408));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x409 = 1098320508457LL;
	int32_t x410 = INT32_MIN;
	int8_t x411 = INT8_MAX;

	t97 = ((x409/x410)^(x411==x412));

	if (t97 != -511LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x413 = -3073563;
	uint64_t x414 = 482LLU;
	int8_t x416 = 1;
	volatile uint64_t t98 = 10185813397LLU;

	t98 = ((x413/x414)^(x415==x416));

	if (t98 != 38271253264951198LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x418 = INT32_MIN;
	uint8_t x419 = 1U;
	volatile int64_t x420 = INT64_MAX;

	t99 = ((x417/x418)^(x419==x420));

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

