#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x1 = UINT16_MAX;
int8_t x5 = INT8_MAX;
int32_t x6 = INT32_MAX;
int32_t x8 = -1;
int16_t x15 = -398;
int32_t t3 = -1;
int16_t x32 = 81;
volatile int32_t x34 = 7;
uint8_t x49 = 6U;
int32_t t9 = 10005299;
int16_t x53 = INT16_MAX;
volatile int32_t t10 = -13;
uint32_t x57 = 1810461U;
int64_t t12 = -8575503559668LL;
int8_t x71 = INT8_MIN;
uint64_t x75 = 29918508491LLU;
uint64_t x76 = 2988146935775153415LLU;
uint8_t x80 = UINT8_MAX;
static volatile uint32_t x83 = 144U;
static uint8_t x86 = 12U;
int8_t x89 = INT8_MAX;
uint64_t x90 = 761211LLU;
int32_t x93 = INT32_MIN;
int8_t x101 = 2;
int8_t x103 = -1;
static int32_t x111 = INT32_MIN;
volatile int8_t x112 = INT8_MIN;
static int32_t x121 = -1;
static int32_t x123 = -1;
int64_t x128 = INT64_MIN;
static int32_t x129 = -15079576;
int8_t x130 = 1;
int8_t x132 = INT8_MAX;
volatile int16_t x139 = INT16_MIN;
volatile int16_t x140 = INT16_MAX;
static uint64_t x144 = 1986118810629LLU;
uint64_t t31 = 2174388699LLU;
int64_t x147 = -1LL;
uint32_t x149 = 59693U;
int32_t t33 = -20;
uint16_t x153 = 28U;
int8_t x156 = -9;
static int64_t x169 = INT64_MIN;
uint8_t x171 = UINT8_MAX;
int64_t t37 = -16183LL;
volatile int32_t t39 = 39173;
int64_t x186 = -1LL;
static volatile int64_t x188 = INT64_MAX;
int64_t t40 = 2921132LL;
static int16_t x193 = -21;
static int8_t x200 = INT8_MAX;
uint16_t x203 = 11U;
volatile uint32_t t44 = 50U;
volatile int32_t t46 = 1;
volatile uint64_t x223 = UINT64_MAX;
int32_t x229 = INT32_MIN;
int16_t x236 = -1;
volatile uint8_t x242 = 21U;
static volatile int32_t t51 = -4241;
uint8_t x246 = 1U;
static int32_t x247 = -100893;
uint64_t t52 = 2709LLU;
static int32_t t54 = -740;
static uint32_t x259 = 0U;
int16_t x261 = -1;
int64_t x264 = INT64_MIN;
int8_t x267 = -2;
int16_t x269 = INT16_MIN;
int32_t x272 = -1;
static volatile int32_t t58 = -4870;
static int8_t x275 = -1;
static uint32_t x287 = 1022U;
int32_t x290 = -1;
int8_t x301 = -1;
static int32_t t65 = -3238;
int32_t x316 = -7767056;
volatile int64_t t67 = 19498065409328199LL;
int8_t x317 = -1;
static uint64_t x326 = 1176119635038291857LLU;
int16_t x327 = INT16_MAX;
static int16_t x328 = INT16_MIN;
static volatile int32_t t73 = 23041955;
int8_t x345 = INT8_MIN;
uint16_t x349 = 9747U;
uint16_t x363 = 2115U;
int16_t x364 = 423;
volatile uint16_t x365 = UINT16_MAX;
int16_t x367 = 243;
int32_t x370 = 966063467;
int64_t t82 = -8384059348092424LL;
uint32_t x387 = 1U;
volatile uint32_t x390 = 5310U;
int64_t x394 = INT64_MAX;
volatile int32_t x401 = INT32_MIN;
int64_t x410 = INT64_MIN;
uint64_t x415 = UINT64_MAX;
int8_t x417 = INT8_MIN;
volatile uint16_t x438 = UINT16_MAX;
int32_t x446 = 1;
uint16_t x449 = 6847U;
volatile int16_t x450 = -1;
int64_t t98 = -550750489291LL;
volatile int32_t x459 = INT32_MAX;


void f0(void) {
	static volatile int64_t x2 = 831685399640851LL;
	int32_t x3 = -1;
	volatile uint32_t x4 = 885251553U;
	volatile uint32_t t0 = 29160113U;

	t0 = (((x1==x2)^x3)-x4);

	if (t0 != 3409715742U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x7 = INT16_MIN;
	static int32_t t1 = 163;

	t1 = (((x5==x6)^x7)-x8);

	if (t1 != -32767) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = 6536219684LLU;
	static uint16_t x14 = 907U;
	uint16_t x16 = UINT16_MAX;
	volatile int32_t t2 = 1;

	t2 = (((x13==x14)^x15)-x16);

	if (t2 != -65933) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = 2;
	volatile int64_t x18 = INT64_MIN;
	uint8_t x19 = 77U;
	int32_t x20 = 75;

	t3 = (((x17==x18)^x19)-x20);

	if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = UINT32_MAX;
	uint64_t x22 = UINT64_MAX;
	int8_t x23 = INT8_MAX;
	int8_t x24 = 0;
	int32_t t4 = 149741;

	t4 = (((x21==x22)^x23)-x24);

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x29 = -1;
	volatile int8_t x30 = INT8_MIN;
	int16_t x31 = 1;
	static volatile int32_t t5 = 515964678;

	t5 = (((x29==x30)^x31)-x32);

	if (t5 != -80) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x33 = INT64_MIN;
	static volatile int8_t x35 = -1;
	volatile int16_t x36 = -1;
	int32_t t6 = -27446258;

	t6 = (((x33==x34)^x35)-x36);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x37 = 6819;
	uint64_t x38 = 6303052690393974LLU;
	volatile int8_t x39 = INT8_MIN;
	uint8_t x40 = 100U;
	int32_t t7 = 199471;

	t7 = (((x37==x38)^x39)-x40);

	if (t7 != -228) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = 2528955783LL;
	int16_t x42 = INT16_MAX;
	volatile int64_t x43 = -110494LL;
	int64_t x44 = 27128562LL;
	int64_t t8 = 4LL;

	t8 = (((x41==x42)^x43)-x44);

	if (t8 != -27239056LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x50 = 224836160203LLU;
	static int32_t x51 = -1;
	int16_t x52 = INT16_MIN;

	t9 = (((x49==x50)^x51)-x52);

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x54 = INT32_MAX;
	static volatile int16_t x55 = 1;
	volatile int16_t x56 = -1;

	t10 = (((x53==x54)^x55)-x56);

	if (t10 != 2) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x58 = INT8_MIN;
	int8_t x59 = 1;
	volatile uint64_t x60 = 7LLU;
	volatile uint64_t t11 = 2973566LLU;

	t11 = (((x57==x58)^x59)-x60);

	if (t11 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x61 = INT16_MIN;
	int16_t x62 = -1;
	int64_t x63 = INT64_MIN;
	int8_t x64 = INT8_MIN;

	t12 = (((x61==x62)^x63)-x64);

	if (t12 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x65 = 43239893605LLU;
	uint16_t x66 = 5U;
	static uint8_t x67 = 55U;
	uint16_t x68 = 4737U;
	int32_t t13 = -921010600;

	t13 = (((x65==x66)^x67)-x68);

	if (t13 != -4682) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x69 = UINT8_MAX;
	uint8_t x70 = 0U;
	int16_t x72 = INT16_MAX;
	int32_t t14 = -53227100;

	t14 = (((x69==x70)^x71)-x72);

	if (t14 != -32895) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x73 = -165080485835396LL;
	int32_t x74 = INT32_MAX;
	volatile uint64_t t15 = 429LLU;

	t15 = (((x73==x74)^x75)-x76);

	if (t15 != 15458597167852906692LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x77 = INT64_MAX;
	uint64_t x78 = 651817501642854201LLU;
	volatile int8_t x79 = -1;
	static int32_t t16 = 179327717;

	t16 = (((x77==x78)^x79)-x80);

	if (t16 != -256) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x81 = 1U;
	static int64_t x82 = INT64_MIN;
	uint64_t x84 = UINT64_MAX;
	uint64_t t17 = 14245LLU;

	t17 = (((x81==x82)^x83)-x84);

	if (t17 != 145LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x85 = -1;
	int16_t x87 = INT16_MIN;
	int8_t x88 = 8;
	static volatile int32_t t18 = 229;

	t18 = (((x85==x86)^x87)-x88);

	if (t18 != -32776) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x91 = -1LL;
	int8_t x92 = INT8_MIN;
	int64_t t19 = -157LL;

	t19 = (((x89==x90)^x91)-x92);

	if (t19 != 127LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x94 = -1;
	uint16_t x95 = 1U;
	volatile int8_t x96 = 0;
	static int32_t t20 = 239686;

	t20 = (((x93==x94)^x95)-x96);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x102 = 162U;
	static volatile uint16_t x104 = 2736U;
	static volatile int32_t t21 = -130455;

	t21 = (((x101==x102)^x103)-x104);

	if (t21 != -2737) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x105 = INT64_MIN;
	volatile uint16_t x106 = 2U;
	static uint16_t x107 = 7520U;
	volatile uint16_t x108 = UINT16_MAX;
	int32_t t22 = 825151304;

	t22 = (((x105==x106)^x107)-x108);

	if (t22 != -58015) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x109 = 33529076723658LLU;
	volatile int8_t x110 = INT8_MIN;
	volatile int32_t t23 = 488667274;

	t23 = (((x109==x110)^x111)-x112);

	if (t23 != -2147483520) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x113 = INT16_MIN;
	uint64_t x114 = UINT64_MAX;
	int32_t x115 = -552517227;
	volatile int64_t x116 = -26218871681952345LL;
	volatile int64_t t24 = 1978448974087399367LL;

	t24 = (((x113==x114)^x115)-x116);

	if (t24 != 26218871129435118LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x117 = INT16_MIN;
	int32_t x118 = 3455490;
	uint64_t x119 = 7LLU;
	static uint8_t x120 = 2U;
	uint64_t t25 = 29898367906LLU;

	t25 = (((x117==x118)^x119)-x120);

	if (t25 != 5LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int32_t x122 = INT32_MAX;
	static volatile int32_t x124 = INT32_MAX;
	volatile int32_t t26 = INT32_MIN;

	t26 = (((x121==x122)^x123)-x124);

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x125 = 320;
	volatile uint32_t x126 = 58024129U;
	uint64_t x127 = UINT64_MAX;
	uint64_t t27 = 93792234155740921LLU;

	t27 = (((x125==x126)^x127)-x128);

	if (t27 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x131 = 241341U;
	volatile uint32_t t28 = 28936U;

	t28 = (((x129==x130)^x131)-x132);

	if (t28 != 241214U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x133 = 3U;
	uint32_t x134 = 967714384U;
	static uint8_t x135 = 34U;
	static int16_t x136 = 94;
	int32_t t29 = 1;

	t29 = (((x133==x134)^x135)-x136);

	if (t29 != -60) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x137 = -1;
	int32_t x138 = INT32_MIN;
	static volatile int32_t t30 = 1;

	t30 = (((x137==x138)^x139)-x140);

	if (t30 != -65535) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x141 = -1;
	int32_t x142 = 3;
	uint64_t x143 = 28154815283567LLU;

	t31 = (((x141==x142)^x143)-x144);

	if (t31 != 26168696472938LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x145 = 61U;
	static int32_t x146 = INT32_MAX;
	uint8_t x148 = 98U;
	volatile int64_t t32 = -1LL;

	t32 = (((x145==x146)^x147)-x148);

	if (t32 != -99LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x150 = -1441;
	int16_t x151 = -1;
	static uint16_t x152 = UINT16_MAX;

	t33 = (((x149==x150)^x151)-x152);

	if (t33 != -65536) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x154 = -1LL;
	uint8_t x155 = UINT8_MAX;
	volatile int32_t t34 = -4159249;

	t34 = (((x153==x154)^x155)-x156);

	if (t34 != 264) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x157 = 28;
	int16_t x158 = INT16_MIN;
	static volatile uint64_t x159 = 0LLU;
	uint16_t x160 = 3U;
	static uint64_t t35 = 234908248LLU;

	t35 = (((x157==x158)^x159)-x160);

	if (t35 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x170 = 2014LLU;
	static volatile uint32_t x172 = 8610U;
	static uint32_t t36 = 12604U;

	t36 = (((x169==x170)^x171)-x172);

	if (t36 != 4294958941U) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x173 = INT16_MIN;
	volatile int8_t x174 = INT8_MAX;
	int8_t x175 = INT8_MAX;
	int64_t x176 = -1LL;

	t37 = (((x173==x174)^x175)-x176);

	if (t37 != 128LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x177 = 1;
	uint8_t x178 = UINT8_MAX;
	uint16_t x179 = 1U;
	int16_t x180 = INT16_MIN;
	static int32_t t38 = 485;

	t38 = (((x177==x178)^x179)-x180);

	if (t38 != 32769) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x181 = INT8_MAX;
	static int16_t x182 = INT16_MAX;
	static uint8_t x183 = UINT8_MAX;
	int32_t x184 = -863928516;

	t39 = (((x181==x182)^x183)-x184);

	if (t39 != 863928771) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x185 = UINT32_MAX;
	uint32_t x187 = UINT32_MAX;

	t40 = (((x185==x186)^x187)-x188);

	if (t40 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x189 = -681;
	int32_t x190 = -1;
	volatile int16_t x191 = -1009;
	uint64_t x192 = 28765619176025LLU;
	uint64_t t41 = 3163546333535LLU;

	t41 = (((x189==x190)^x191)-x192);

	if (t41 != 18446715308090374582LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x194 = INT8_MAX;
	volatile uint32_t x195 = UINT32_MAX;
	static volatile int8_t x196 = INT8_MAX;
	volatile uint32_t t42 = 490U;

	t42 = (((x193==x194)^x195)-x196);

	if (t42 != 4294967168U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x197 = 458U;
	static uint8_t x198 = UINT8_MAX;
	static uint16_t x199 = 7U;
	static int32_t t43 = -211250;

	t43 = (((x197==x198)^x199)-x200);

	if (t43 != -120) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x201 = UINT16_MAX;
	int8_t x202 = INT8_MIN;
	volatile uint32_t x204 = 16U;

	t44 = (((x201==x202)^x203)-x204);

	if (t44 != 4294967291U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x205 = -1LL;
	int16_t x206 = 0;
	volatile int64_t x207 = -20911907691LL;
	volatile int8_t x208 = INT8_MIN;
	static volatile int64_t t45 = 16583389LL;

	t45 = (((x205==x206)^x207)-x208);

	if (t45 != -20911907563LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x213 = UINT8_MAX;
	int64_t x214 = -21LL;
	volatile uint16_t x215 = 142U;
	static uint16_t x216 = 845U;

	t46 = (((x213==x214)^x215)-x216);

	if (t46 != -703) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x221 = UINT32_MAX;
	int64_t x222 = -10685347766996LL;
	int32_t x224 = -1;
	volatile uint64_t t47 = 7126313400703699144LLU;

	t47 = (((x221==x222)^x223)-x224);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x230 = INT32_MIN;
	volatile uint32_t x231 = UINT32_MAX;
	int16_t x232 = INT16_MIN;
	volatile uint32_t t48 = 17U;

	t48 = (((x229==x230)^x231)-x232);

	if (t48 != 32766U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x233 = INT16_MAX;
	volatile int32_t x234 = INT32_MAX;
	volatile int8_t x235 = INT8_MIN;
	int32_t t49 = 1980;

	t49 = (((x233==x234)^x235)-x236);

	if (t49 != -127) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x237 = INT32_MAX;
	int8_t x238 = INT8_MAX;
	int16_t x239 = 0;
	int32_t x240 = -4382;
	volatile int32_t t50 = 990116;

	t50 = (((x237==x238)^x239)-x240);

	if (t50 != 4382) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x241 = 5266485678237LL;
	static int16_t x243 = INT16_MIN;
	int16_t x244 = INT16_MIN;

	t51 = (((x241==x242)^x243)-x244);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x245 = 11745244542451672LL;
	uint64_t x248 = 1182345626LLU;

	t52 = (((x245==x246)^x247)-x248);

	if (t52 != 18446744072527105097LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x249 = -1;
	uint16_t x250 = UINT16_MAX;
	int32_t x251 = INT32_MIN;
	int8_t x252 = 0;
	volatile int32_t t53 = INT32_MIN;

	t53 = (((x249==x250)^x251)-x252);

	if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x253 = INT64_MIN;
	uint64_t x254 = UINT64_MAX;
	int32_t x255 = INT32_MIN;
	static int16_t x256 = INT16_MIN;

	t54 = (((x253==x254)^x255)-x256);

	if (t54 != -2147450880) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x257 = INT64_MIN;
	uint8_t x258 = 17U;
	static uint64_t x260 = 1700715820374LLU;
	volatile uint64_t t55 = 9658LLU;

	t55 = (((x257==x258)^x259)-x260);

	if (t55 != 18446742372993731242LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x262 = -143;
	int8_t x263 = -1;
	int64_t t56 = INT64_MAX;

	t56 = (((x261==x262)^x263)-x264);

	if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x265 = -1;
	int16_t x266 = -1;
	volatile int64_t x268 = 129884LL;
	int64_t t57 = 484869758114446LL;

	t57 = (((x265==x266)^x267)-x268);

	if (t57 != -129885LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x270 = -1471037;
	volatile uint8_t x271 = 1U;

	t58 = (((x269==x270)^x271)-x272);

	if (t58 != 2) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x273 = 1;
	uint32_t x274 = 8666490U;
	int64_t x276 = INT64_MAX;
	volatile int64_t t59 = INT64_MIN;

	t59 = (((x273==x274)^x275)-x276);

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x277 = -1LL;
	uint8_t x278 = 43U;
	int8_t x279 = 10;
	uint16_t x280 = 0U;
	int32_t t60 = -161309068;

	t60 = (((x277==x278)^x279)-x280);

	if (t60 != 10) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x285 = INT32_MIN;
	int64_t x286 = -1LL;
	uint8_t x288 = UINT8_MAX;
	static volatile uint32_t t61 = 2039U;

	t61 = (((x285==x286)^x287)-x288);

	if (t61 != 767U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x289 = -1;
	static int32_t x291 = INT32_MAX;
	int16_t x292 = -1;
	volatile int32_t t62 = INT32_MAX;

	t62 = (((x289==x290)^x291)-x292);

	if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x293 = 209U;
	uint8_t x294 = UINT8_MAX;
	int32_t x295 = 806;
	static volatile uint8_t x296 = UINT8_MAX;
	static int32_t t63 = 883475;

	t63 = (((x293==x294)^x295)-x296);

	if (t63 != 551) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x302 = INT8_MAX;
	int8_t x303 = -1;
	uint16_t x304 = 148U;
	int32_t t64 = 934;

	t64 = (((x301==x302)^x303)-x304);

	if (t64 != -149) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x305 = -3;
	int8_t x306 = INT8_MIN;
	int8_t x307 = INT8_MIN;
	uint16_t x308 = 9U;

	t65 = (((x305==x306)^x307)-x308);

	if (t65 != -137) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x309 = 0U;
	int8_t x310 = INT8_MAX;
	volatile int64_t x311 = INT64_MAX;
	uint8_t x312 = 1U;
	int64_t t66 = 72195239LL;

	t66 = (((x309==x310)^x311)-x312);

	if (t66 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x313 = INT32_MIN;
	int16_t x314 = INT16_MIN;
	int64_t x315 = 3513190546288982624LL;

	t67 = (((x313==x314)^x315)-x316);

	if (t67 != 3513190546296749680LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x318 = 909U;
	int16_t x319 = 221;
	uint16_t x320 = UINT16_MAX;
	volatile int32_t t68 = -17;

	t68 = (((x317==x318)^x319)-x320);

	if (t68 != -65314) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x321 = -1;
	static uint16_t x322 = UINT16_MAX;
	volatile int64_t x323 = -62652478644016LL;
	volatile int64_t x324 = -1LL;
	volatile int64_t t69 = 246LL;

	t69 = (((x321==x322)^x323)-x324);

	if (t69 != -62652478644015LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x325 = 92950101674664LLU;
	int32_t t70 = 21992;

	t70 = (((x325==x326)^x327)-x328);

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x329 = -1;
	static uint8_t x330 = 74U;
	int32_t x331 = -1;
	volatile uint64_t x332 = 2LLU;
	static uint64_t t71 = 3336LLU;

	t71 = (((x329==x330)^x331)-x332);

	if (t71 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x333 = -1;
	int32_t x334 = -33;
	int8_t x335 = -1;
	static uint32_t x336 = 211875638U;
	static volatile uint32_t t72 = 377501540U;

	t72 = (((x333==x334)^x335)-x336);

	if (t72 != 4083091657U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x341 = 0U;
	uint8_t x342 = UINT8_MAX;
	int32_t x343 = INT32_MIN;
	int16_t x344 = -124;

	t73 = (((x341==x342)^x343)-x344);

	if (t73 != -2147483524) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x346 = 45;
	volatile int32_t x347 = INT32_MAX;
	static volatile int8_t x348 = INT8_MAX;
	int32_t t74 = -26;

	t74 = (((x345==x346)^x347)-x348);

	if (t74 != 2147483520) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x350 = 469026996U;
	static int32_t x351 = 37;
	uint8_t x352 = UINT8_MAX;
	static int32_t t75 = -8;

	t75 = (((x349==x350)^x351)-x352);

	if (t75 != -218) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x357 = -2;
	int8_t x358 = INT8_MIN;
	int64_t x359 = INT64_MIN;
	uint64_t x360 = UINT64_MAX;
	uint64_t t76 = 2LLU;

	t76 = (((x357==x358)^x359)-x360);

	if (t76 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x361 = 6128639U;
	uint64_t x362 = 979890543LLU;
	static volatile int32_t t77 = 20435309;

	t77 = (((x361==x362)^x363)-x364);

	if (t77 != 1692) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x366 = 29;
	uint16_t x368 = 2U;
	static int32_t t78 = 1157;

	t78 = (((x365==x366)^x367)-x368);

	if (t78 != 241) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x369 = UINT16_MAX;
	int64_t x371 = -1LL;
	uint32_t x372 = 16U;
	volatile int64_t t79 = -12319899800252051LL;

	t79 = (((x369==x370)^x371)-x372);

	if (t79 != -17LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x373 = INT32_MIN;
	int8_t x374 = -1;
	volatile uint16_t x375 = 6U;
	uint32_t x376 = 701178839U;
	volatile uint32_t t80 = 3625543U;

	t80 = (((x373==x374)^x375)-x376);

	if (t80 != 3593788463U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x377 = 47191U;
	volatile uint32_t x378 = 6625U;
	int64_t x379 = -571303456885764429LL;
	volatile int64_t x380 = 3511691930LL;
	volatile int64_t t81 = 1LL;

	t81 = (((x377==x378)^x379)-x380);

	if (t81 != -571303460397456359LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x381 = UINT64_MAX;
	int32_t x382 = INT32_MAX;
	int64_t x383 = INT64_MIN;
	int32_t x384 = INT32_MIN;

	t82 = (((x381==x382)^x383)-x384);

	if (t82 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x385 = INT8_MIN;
	volatile int64_t x386 = 1102583119720LL;
	static int32_t x388 = INT32_MAX;
	volatile uint32_t t83 = 1358U;

	t83 = (((x385==x386)^x387)-x388);

	if (t83 != 2147483650U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x389 = 1;
	volatile int64_t x391 = -1LL;
	int8_t x392 = INT8_MIN;
	volatile int64_t t84 = 1174692LL;

	t84 = (((x389==x390)^x391)-x392);

	if (t84 != 127LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x393 = 2844533012752LLU;
	int8_t x395 = INT8_MIN;
	int8_t x396 = INT8_MAX;
	int32_t t85 = 1688892;

	t85 = (((x393==x394)^x395)-x396);

	if (t85 != -255) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x397 = -1;
	int32_t x398 = INT32_MAX;
	int16_t x399 = -1;
	int16_t x400 = INT16_MAX;
	volatile int32_t t86 = 170073200;

	t86 = (((x397==x398)^x399)-x400);

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x402 = 50U;
	int64_t x403 = -1LL;
	volatile uint64_t x404 = 4946647910430198085LLU;
	static volatile uint64_t t87 = 874193380LLU;

	t87 = (((x401==x402)^x403)-x404);

	if (t87 != 13500096163279353530LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x405 = INT16_MIN;
	int32_t x406 = -123;
	volatile int16_t x407 = -1;
	uint64_t x408 = 862113866978070760LLU;
	static volatile uint64_t t88 = 14735420LLU;

	t88 = (((x405==x406)^x407)-x408);

	if (t88 != 17584630206731480855LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x409 = INT16_MIN;
	int8_t x411 = INT8_MIN;
	int64_t x412 = 0LL;
	static volatile int64_t t89 = 1238080LL;

	t89 = (((x409==x410)^x411)-x412);

	if (t89 != -128LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x413 = UINT8_MAX;
	volatile uint32_t x414 = 325934112U;
	static uint32_t x416 = UINT32_MAX;
	volatile uint64_t t90 = 8203414944LLU;

	t90 = (((x413==x414)^x415)-x416);

	if (t90 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x418 = INT16_MIN;
	int16_t x419 = INT16_MAX;
	volatile int16_t x420 = 0;
	volatile int32_t t91 = -75;

	t91 = (((x417==x418)^x419)-x420);

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x421 = INT32_MAX;
	int16_t x422 = -181;
	static volatile int64_t x423 = -1LL;
	static int16_t x424 = INT16_MAX;
	int64_t t92 = 125LL;

	t92 = (((x421==x422)^x423)-x424);

	if (t92 != -32768LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x433 = INT32_MIN;
	static int32_t x434 = -1;
	int32_t x435 = 6130283;
	volatile uint64_t x436 = 63896914282LLU;
	static uint64_t t93 = 7395849801463072LLU;

	t93 = (((x433==x434)^x435)-x436);

	if (t93 != 18446744009818767617LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x437 = INT32_MIN;
	uint16_t x439 = UINT16_MAX;
	int64_t x440 = INT64_MAX;
	int64_t t94 = -24979384LL;

	t94 = (((x437==x438)^x439)-x440);

	if (t94 != -9223372036854710272LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x441 = -14849;
	int32_t x442 = 850323374;
	int64_t x443 = 7069819LL;
	int8_t x444 = -1;
	int64_t t95 = 40952922160029933LL;

	t95 = (((x441==x442)^x443)-x444);

	if (t95 != 7069820LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x445 = INT64_MAX;
	int32_t x447 = -468249;
	volatile uint32_t x448 = UINT32_MAX;
	uint32_t t96 = 1U;

	t96 = (((x445==x446)^x447)-x448);

	if (t96 != 4294499048U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x451 = UINT64_MAX;
	int32_t x452 = INT32_MIN;
	static volatile uint64_t t97 = 157642292254574243LLU;

	t97 = (((x449==x450)^x451)-x452);

	if (t97 != 2147483647LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x453 = 1U;
	uint64_t x454 = 438LLU;
	int16_t x455 = -1;
	int64_t x456 = -20016394194LL;

	t98 = (((x453==x454)^x455)-x456);

	if (t98 != 20016394193LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x457 = -1;
	uint16_t x458 = UINT16_MAX;
	static uint32_t x460 = UINT32_MAX;
	static volatile uint32_t t99 = 1255U;

	t99 = (((x457==x458)^x459)-x460);

	if (t99 != 2147483648U) { NG(); } else { ; }
	
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

