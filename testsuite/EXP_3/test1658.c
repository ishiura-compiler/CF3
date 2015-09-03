#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x22 = UINT64_MAX;
int64_t x32 = INT64_MIN;
int32_t x39 = INT32_MIN;
static volatile uint32_t t4 = 252U;
volatile int32_t x41 = INT32_MAX;
uint8_t x49 = 4U;
int64_t x51 = INT64_MAX;
uint16_t x58 = 143U;
volatile uint64_t t8 = 1008225LLU;
uint8_t x62 = 1U;
volatile int32_t x63 = 27309959;
volatile uint32_t t9 = 25670791U;
volatile int8_t x86 = INT8_MAX;
int8_t x88 = -1;
volatile int64_t x95 = INT64_MIN;
volatile uint32_t t16 = 61U;
volatile int16_t x98 = -75;
uint64_t x99 = UINT64_MAX;
uint16_t x100 = 227U;
int32_t x103 = INT32_MIN;
int32_t x104 = -1;
int32_t t18 = -126450579;
int64_t t19 = -55017143364552680LL;
static uint64_t x112 = UINT64_MAX;
int32_t x113 = INT32_MAX;
volatile int32_t x115 = INT32_MAX;
int64_t x119 = -7409006LL;
volatile int16_t x129 = INT16_MAX;
uint64_t x132 = UINT64_MAX;
uint32_t x133 = UINT32_MAX;
uint16_t x136 = 86U;
static volatile int64_t t26 = 2750863240017LL;
int16_t x145 = INT16_MIN;
static uint64_t x146 = 178799LLU;
static volatile int32_t x147 = INT32_MAX;
volatile uint8_t x148 = UINT8_MAX;
int32_t t29 = -231245923;
volatile int64_t x164 = INT64_MIN;
int32_t t31 = 9454069;
uint64_t x169 = UINT64_MAX;
volatile uint64_t t32 = UINT64_MAX;
uint32_t t35 = 3U;
int8_t x191 = INT8_MAX;
int16_t x198 = INT16_MIN;
int64_t x209 = -1LL;
static uint32_t x210 = 584306U;
volatile int32_t x211 = 52776;
int64_t t39 = 275803065042748417LL;
int64_t t42 = -5929153961716472LL;
int32_t x229 = 109088891;
int64_t x231 = INT64_MAX;
volatile int64_t t44 = -842879174564539881LL;
int64_t x238 = INT64_MIN;
volatile int64_t x244 = INT64_MIN;
int64_t t46 = -25574818573050LL;
uint32_t x249 = 904607U;
static int16_t x256 = 360;
int8_t x261 = INT8_MAX;
volatile int32_t x263 = INT32_MIN;
static volatile uint32_t t51 = 200568U;
volatile uint64_t t53 = 1254016144556186624LLU;
volatile uint8_t x281 = 1U;
int16_t x284 = 771;
int32_t t55 = 6;
uint16_t x285 = 0U;
uint64_t x306 = 8607LLU;
int32_t x307 = -24681;
int32_t x314 = INT32_MIN;
int32_t x318 = INT32_MIN;
int64_t x320 = INT64_MAX;
static uint8_t x328 = 23U;
int8_t x329 = -1;
int32_t t65 = -3;
int16_t x336 = INT16_MAX;
int16_t x342 = INT16_MIN;
int16_t x350 = INT16_MIN;
uint32_t x352 = UINT32_MAX;
volatile uint64_t x369 = UINT64_MAX;
int32_t x373 = INT32_MIN;
uint64_t x375 = 14LLU;
uint16_t x379 = 5U;
uint64_t x385 = UINT64_MAX;
int8_t x395 = INT8_MAX;
static int8_t x396 = INT8_MIN;
int32_t t80 = -8795564;
static uint16_t x401 = UINT16_MAX;
int32_t t82 = 0;
int16_t x407 = 201;
static volatile int16_t x414 = INT16_MIN;
volatile int32_t t85 = -7259;
int32_t x420 = INT32_MIN;
int32_t x422 = -1;
volatile int32_t t87 = INT32_MAX;
int16_t x431 = INT16_MIN;
volatile uint32_t x432 = 7882036U;
volatile int32_t t89 = 64;
volatile int32_t x433 = INT32_MIN;
uint32_t x435 = UINT32_MAX;
static uint32_t x457 = 285U;
uint32_t x468 = UINT32_MAX;
int16_t x484 = INT16_MAX;


void f0(void) {
	int8_t x9 = 63;
	static int32_t x10 = -87;
	volatile uint8_t x11 = UINT8_MAX;
	uint64_t x12 = 138LLU;
	volatile int32_t t0 = 952;

	t0 = ((x9&x10)>>(x11<=x12));

	if (t0 != 41) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x17 = 226176LL;
	int8_t x18 = INT8_MIN;
	static volatile int64_t x19 = 0LL;
	int8_t x20 = -39;
	volatile int64_t t1 = -13533440397105LL;

	t1 = ((x17&x18)>>(x19<=x20));

	if (t1 != 226176LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x21 = 1;
	uint8_t x23 = UINT8_MAX;
	uint32_t x24 = 8159220U;
	uint64_t t2 = 131831567014LLU;

	t2 = ((x21&x22)>>(x23<=x24));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x29 = 1327451990248LL;
	int16_t x30 = -1;
	volatile int8_t x31 = INT8_MIN;
	volatile int64_t t3 = -1746613465092844587LL;

	t3 = ((x29&x30)>>(x31<=x32));

	if (t3 != 1327451990248LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x37 = 35U;
	int8_t x38 = INT8_MIN;
	volatile int8_t x40 = INT8_MAX;

	t4 = ((x37&x38)>>(x39<=x40));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x42 = INT8_MIN;
	static int8_t x43 = INT8_MIN;
	int64_t x44 = INT64_MAX;
	int32_t t5 = 796980;

	t5 = ((x41&x42)>>(x43<=x44));

	if (t5 != 1073741760) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x45 = INT16_MAX;
	int16_t x46 = 6268;
	static int16_t x47 = INT16_MAX;
	int16_t x48 = -9;
	volatile int32_t t6 = -120030293;

	t6 = ((x45&x46)>>(x47<=x48));

	if (t6 != 6268) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x50 = INT16_MAX;
	uint16_t x52 = UINT16_MAX;
	static int32_t t7 = -31238;

	t7 = ((x49&x50)>>(x51<=x52));

	if (t7 != 4) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x57 = 336666283506251255LLU;
	static int8_t x59 = INT8_MAX;
	int64_t x60 = INT64_MAX;

	t8 = ((x57&x58)>>(x59<=x60));

	if (t8 != 67LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x61 = 342297298U;
	static int32_t x64 = INT32_MAX;

	t9 = ((x61&x62)>>(x63<=x64));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x65 = -1;
	static volatile uint16_t x66 = UINT16_MAX;
	static int32_t x67 = INT32_MAX;
	int64_t x68 = INT64_MIN;
	volatile int32_t t10 = -1473393;

	t10 = ((x65&x66)>>(x67<=x68));

	if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x69 = 409;
	uint8_t x70 = UINT8_MAX;
	uint32_t x71 = UINT32_MAX;
	uint32_t x72 = UINT32_MAX;
	static int32_t t11 = 53645;

	t11 = ((x69&x70)>>(x71<=x72));

	if (t11 != 76) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x73 = 639;
	static uint32_t x74 = 1016379018U;
	volatile int8_t x75 = -1;
	int64_t x76 = -1LL;
	volatile uint32_t t12 = 7450591U;

	t12 = ((x73&x74)>>(x75<=x76));

	if (t12 != 261U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x81 = -1;
	uint8_t x82 = UINT8_MAX;
	static volatile uint64_t x83 = 16386114633488LLU;
	int64_t x84 = INT64_MIN;
	volatile int32_t t13 = -3;

	t13 = ((x81&x82)>>(x83<=x84));

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x85 = 14U;
	uint64_t x87 = 6626LLU;
	volatile int32_t t14 = -5955543;

	t14 = ((x85&x86)>>(x87<=x88));

	if (t14 != 7) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x89 = INT64_MIN;
	int8_t x90 = INT8_MAX;
	uint8_t x91 = 2U;
	int16_t x92 = INT16_MIN;
	int64_t t15 = 11314080689191206LL;

	t15 = ((x89&x90)>>(x91<=x92));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x93 = INT32_MAX;
	uint32_t x94 = UINT32_MAX;
	static int8_t x96 = 0;

	t16 = ((x93&x94)>>(x95<=x96));

	if (t16 != 1073741823U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x97 = INT8_MAX;
	int32_t t17 = -7;

	t17 = ((x97&x98)>>(x99<=x100));

	if (t17 != 53) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x101 = 9;
	int32_t x102 = INT32_MAX;

	t18 = ((x101&x102)>>(x103<=x104));

	if (t18 != 4) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x105 = INT16_MAX;
	volatile int64_t x106 = 3LL;
	int64_t x107 = INT64_MIN;
	static int8_t x108 = 15;

	t19 = ((x105&x106)>>(x107<=x108));

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x109 = INT32_MIN;
	uint8_t x110 = UINT8_MAX;
	uint16_t x111 = 44U;
	static int32_t t20 = -168717341;

	t20 = ((x109&x110)>>(x111<=x112));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x114 = 128U;
	uint16_t x116 = 0U;
	int32_t t21 = 392;

	t21 = ((x113&x114)>>(x115<=x116));

	if (t21 != 128) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x117 = 1900550029LLU;
	static volatile int32_t x118 = -845;
	int64_t x120 = INT64_MAX;
	uint64_t t22 = 1057022424081198LLU;

	t22 = ((x117&x118)>>(x119<=x120));

	if (t22 != 950274624LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x125 = 3;
	volatile int32_t x126 = INT32_MAX;
	static volatile int16_t x127 = INT16_MIN;
	int16_t x128 = INT16_MIN;
	static int32_t t23 = -130582488;

	t23 = ((x125&x126)>>(x127<=x128));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x130 = -31;
	int32_t x131 = -2;
	int32_t t24 = -1271;

	t24 = ((x129&x130)>>(x131<=x132));

	if (t24 != 16368) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x134 = 6U;
	uint16_t x135 = 70U;
	uint32_t t25 = 40U;

	t25 = ((x133&x134)>>(x135<=x136));

	if (t25 != 3U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x141 = INT64_MIN;
	uint8_t x142 = 0U;
	int16_t x143 = 1198;
	static int64_t x144 = -6039537206292LL;

	t26 = ((x141&x142)>>(x143<=x144));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t t27 = 12774319885336637LLU;

	t27 = ((x145&x146)>>(x147<=x148));

	if (t27 != 163840LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x149 = INT8_MIN;
	uint8_t x150 = UINT8_MAX;
	uint8_t x151 = 6U;
	int8_t x152 = -1;
	int32_t t28 = 0;

	t28 = ((x149&x150)>>(x151<=x152));

	if (t28 != 128) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x153 = 97;
	static int8_t x154 = INT8_MIN;
	static volatile uint8_t x155 = 0U;
	static int32_t x156 = -112442;

	t29 = ((x153&x154)>>(x155<=x156));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x157 = 0U;
	static int8_t x158 = 7;
	static int64_t x159 = 0LL;
	uint8_t x160 = 116U;
	volatile uint32_t t30 = 92587608U;

	t30 = ((x157&x158)>>(x159<=x160));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x161 = INT16_MAX;
	int32_t x162 = INT32_MIN;
	uint16_t x163 = 7537U;

	t31 = ((x161&x162)>>(x163<=x164));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x170 = -1;
	static int64_t x171 = 34900473817690LL;
	static volatile int32_t x172 = INT32_MIN;

	t32 = ((x169&x170)>>(x171<=x172));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x173 = 26098U;
	int16_t x174 = INT16_MIN;
	int8_t x175 = -26;
	static volatile uint16_t x176 = UINT16_MAX;
	volatile int32_t t33 = 59849877;

	t33 = ((x173&x174)>>(x175<=x176));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x177 = -1;
	volatile uint8_t x178 = UINT8_MAX;
	int64_t x179 = INT64_MIN;
	volatile uint32_t x180 = 25799U;
	volatile int32_t t34 = -31217150;

	t34 = ((x177&x178)>>(x179<=x180));

	if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x181 = -4;
	uint32_t x182 = UINT32_MAX;
	volatile int8_t x183 = -1;
	int32_t x184 = 4684337;

	t35 = ((x181&x182)>>(x183<=x184));

	if (t35 != 2147483646U) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x189 = 3U;
	uint64_t x190 = 1041LLU;
	static int16_t x192 = -8775;
	uint64_t t36 = 8397363003720238LLU;

	t36 = ((x189&x190)>>(x191<=x192));

	if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x197 = UINT16_MAX;
	int32_t x199 = -465593;
	int32_t x200 = -1;
	volatile int32_t t37 = -1471482;

	t37 = ((x197&x198)>>(x199<=x200));

	if (t37 != 16384) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x205 = 3579707195054424LLU;
	uint32_t x206 = 2U;
	uint8_t x207 = 3U;
	static volatile int64_t x208 = -1LL;
	uint64_t t38 = 61564628585152327LLU;

	t38 = ((x205&x206)>>(x207<=x208));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x212 = -1;

	t39 = ((x209&x210)>>(x211<=x212));

	if (t39 != 584306LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x213 = INT64_MAX;
	uint32_t x214 = 582U;
	volatile int16_t x215 = INT16_MIN;
	int64_t x216 = -1LL;
	volatile int64_t t40 = -984100981152LL;

	t40 = ((x213&x214)>>(x215<=x216));

	if (t40 != 291LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x221 = INT64_MIN;
	int16_t x222 = INT16_MAX;
	static int64_t x223 = -1LL;
	int64_t x224 = -15046276LL;
	volatile int64_t t41 = 100074543069LL;

	t41 = ((x221&x222)>>(x223<=x224));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x225 = INT64_MIN;
	int32_t x226 = INT32_MAX;
	uint16_t x227 = 50U;
	volatile int32_t x228 = -326314;

	t42 = ((x225&x226)>>(x227<=x228));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x230 = INT32_MIN;
	uint32_t x232 = UINT32_MAX;
	volatile int32_t t43 = -1;

	t43 = ((x229&x230)>>(x231<=x232));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x233 = INT64_MAX;
	int8_t x234 = INT8_MAX;
	volatile int64_t x235 = -10819832742290LL;
	uint16_t x236 = UINT16_MAX;

	t44 = ((x233&x234)>>(x235<=x236));

	if (t44 != 63LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x237 = 45;
	static int16_t x239 = INT16_MIN;
	int64_t x240 = INT64_MIN;
	int64_t t45 = -90165577LL;

	t45 = ((x237&x238)>>(x239<=x240));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x241 = 16315;
	volatile int64_t x242 = INT64_MIN;
	volatile uint8_t x243 = 5U;

	t46 = ((x241&x242)>>(x243<=x244));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int16_t x245 = -1;
	uint8_t x246 = 0U;
	int64_t x247 = 197225408925216LL;
	volatile int32_t x248 = 666613914;
	int32_t t47 = -15;

	t47 = ((x245&x246)>>(x247<=x248));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x250 = 661LLU;
	static volatile int64_t x251 = -1512LL;
	static int8_t x252 = INT8_MIN;
	volatile uint64_t t48 = 38853462402LLU;

	t48 = ((x249&x250)>>(x251<=x252));

	if (t48 != 74LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x253 = 1975U;
	uint32_t x254 = 793325U;
	volatile int64_t x255 = 1151122LL;
	uint32_t t49 = 789197610U;

	t49 = ((x253&x254)>>(x255<=x256));

	if (t49 != 677U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x262 = INT8_MAX;
	int64_t x264 = INT64_MIN;
	int32_t t50 = 3716248;

	t50 = ((x261&x262)>>(x263<=x264));

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x265 = 31U;
	uint32_t x266 = 37265U;
	int16_t x267 = -1;
	int16_t x268 = INT16_MAX;

	t51 = ((x265&x266)>>(x267<=x268));

	if (t51 != 8U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x269 = INT32_MIN;
	uint64_t x270 = UINT64_MAX;
	int16_t x271 = 1942;
	uint32_t x272 = UINT32_MAX;
	static uint64_t t52 = 130909LLU;

	t52 = ((x269&x270)>>(x271<=x272));

	if (t52 != 9223372035781033984LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x273 = UINT8_MAX;
	uint64_t x274 = UINT64_MAX;
	int8_t x275 = -55;
	int32_t x276 = INT32_MIN;

	t53 = ((x273&x274)>>(x275<=x276));

	if (t53 != 255LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x277 = INT32_MAX;
	int16_t x278 = INT16_MAX;
	volatile int64_t x279 = 1360468183631866531LL;
	int32_t x280 = -1;
	volatile int32_t t54 = -170412583;

	t54 = ((x277&x278)>>(x279<=x280));

	if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x282 = INT32_MIN;
	volatile int32_t x283 = -2224122;

	t55 = ((x281&x282)>>(x283<=x284));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x286 = UINT64_MAX;
	uint8_t x287 = 15U;
	uint64_t x288 = 23LLU;
	volatile uint64_t t56 = 155707898LLU;

	t56 = ((x285&x286)>>(x287<=x288));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x289 = 24080653406826LL;
	int8_t x290 = -59;
	volatile uint16_t x291 = 1579U;
	volatile uint32_t x292 = 17675223U;
	int64_t t57 = 283215224053669LL;

	t57 = ((x289&x290)>>(x291<=x292));

	if (t57 != 12040326703392LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x293 = INT32_MIN;
	static int8_t x294 = 0;
	volatile uint64_t x295 = UINT64_MAX;
	int16_t x296 = INT16_MAX;
	int32_t t58 = 60880;

	t58 = ((x293&x294)>>(x295<=x296));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x305 = 115U;
	int32_t x308 = -56;
	volatile uint64_t t59 = 79889126950084995LLU;

	t59 = ((x305&x306)>>(x307<=x308));

	if (t59 != 9LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x309 = -37826309084LL;
	volatile uint32_t x310 = 66702661U;
	volatile int64_t x311 = -576134362206LL;
	volatile uint8_t x312 = 1U;
	int64_t t60 = -12556LL;

	t60 = ((x309&x310)>>(x311<=x312));

	if (t60 != 11543042LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x313 = 351U;
	static uint32_t x315 = 2900U;
	uint16_t x316 = 2782U;
	volatile uint32_t t61 = 643032161U;

	t61 = ((x313&x314)>>(x315<=x316));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x317 = UINT16_MAX;
	int32_t x319 = INT32_MIN;
	int32_t t62 = 1671;

	t62 = ((x317&x318)>>(x319<=x320));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x321 = 5U;
	int64_t x322 = INT64_MAX;
	volatile int64_t x323 = INT64_MIN;
	volatile int32_t x324 = -1;
	static int64_t t63 = 2578LL;

	t63 = ((x321&x322)>>(x323<=x324));

	if (t63 != 2LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x325 = INT32_MIN;
	volatile int8_t x326 = INT8_MAX;
	volatile int64_t x327 = INT64_MAX;
	int32_t t64 = -14172;

	t64 = ((x325&x326)>>(x327<=x328));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x330 = INT16_MAX;
	uint8_t x331 = 100U;
	int16_t x332 = INT16_MIN;

	t65 = ((x329&x330)>>(x331<=x332));

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x333 = -1;
	int32_t x334 = 59;
	uint32_t x335 = 1169082889U;
	volatile int32_t t66 = -7775723;

	t66 = ((x333&x334)>>(x335<=x336));

	if (t66 != 59) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x337 = 36517485857LL;
	uint16_t x338 = UINT16_MAX;
	volatile int8_t x339 = INT8_MIN;
	static uint8_t x340 = 0U;
	int64_t t67 = 374LL;

	t67 = ((x337&x338)>>(x339<=x340));

	if (t67 != 20112LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x341 = 6388763896715LLU;
	uint8_t x343 = 16U;
	uint32_t x344 = 649694251U;
	uint64_t t68 = 360919700LLU;

	t68 = ((x341&x342)>>(x343<=x344));

	if (t68 != 3194381942784LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x345 = UINT8_MAX;
	int8_t x346 = INT8_MIN;
	int64_t x347 = INT64_MIN;
	uint64_t x348 = 515549LLU;
	volatile int32_t t69 = -31861;

	t69 = ((x345&x346)>>(x347<=x348));

	if (t69 != 128) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x349 = 12855U;
	volatile uint8_t x351 = UINT8_MAX;
	int32_t t70 = 12126;

	t70 = ((x349&x350)>>(x351<=x352));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x353 = UINT8_MAX;
	int8_t x354 = INT8_MAX;
	int8_t x355 = 8;
	volatile int64_t x356 = INT64_MAX;
	volatile int32_t t71 = -21664589;

	t71 = ((x353&x354)>>(x355<=x356));

	if (t71 != 63) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x357 = INT8_MIN;
	static int64_t x358 = 243828632450550760LL;
	static int32_t x359 = -11860;
	static int8_t x360 = INT8_MAX;
	volatile int64_t t72 = -341927065LL;

	t72 = ((x357&x358)>>(x359<=x360));

	if (t72 != 121914316225275328LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x361 = 0LL;
	int16_t x362 = INT16_MAX;
	static int64_t x363 = -1LL;
	static uint8_t x364 = 46U;
	static int64_t t73 = 524307948166547110LL;

	t73 = ((x361&x362)>>(x363<=x364));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x365 = INT16_MIN;
	static int32_t x366 = 977;
	int64_t x367 = -1200527773684499LL;
	int8_t x368 = INT8_MIN;
	int32_t t74 = -7;

	t74 = ((x365&x366)>>(x367<=x368));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x370 = 241929870928LLU;
	int16_t x371 = 276;
	int32_t x372 = -1;
	volatile uint64_t t75 = 5307743660LLU;

	t75 = ((x369&x370)>>(x371<=x372));

	if (t75 != 241929870928LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x374 = UINT64_MAX;
	volatile int16_t x376 = -1;
	uint64_t t76 = 63696LLU;

	t76 = ((x373&x374)>>(x375<=x376));

	if (t76 != 9223372035781033984LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x377 = 11U;
	uint8_t x378 = 27U;
	uint8_t x380 = 44U;
	static volatile uint32_t t77 = 104383U;

	t77 = ((x377&x378)>>(x379<=x380));

	if (t77 != 5U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x381 = -2LL;
	volatile uint8_t x382 = 71U;
	volatile int32_t x383 = -1;
	volatile int8_t x384 = INT8_MIN;
	int64_t t78 = 2LL;

	t78 = ((x381&x382)>>(x383<=x384));

	if (t78 != 70LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x386 = 28994U;
	static volatile uint16_t x387 = 203U;
	uint8_t x388 = 1U;
	volatile uint64_t t79 = 461162990LLU;

	t79 = ((x385&x386)>>(x387<=x388));

	if (t79 != 28994LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x393 = UINT16_MAX;
	int32_t x394 = INT32_MIN;

	t80 = ((x393&x394)>>(x395<=x396));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x397 = INT64_MIN;
	int64_t x398 = 80129867968LL;
	volatile uint8_t x399 = UINT8_MAX;
	int16_t x400 = INT16_MIN;
	int64_t t81 = 24470LL;

	t81 = ((x397&x398)>>(x399<=x400));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x402 = INT32_MAX;
	volatile int8_t x403 = 17;
	int8_t x404 = 27;

	t82 = ((x401&x402)>>(x403<=x404));

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint64_t x405 = 10646LLU;
	int64_t x406 = INT64_MIN;
	volatile int32_t x408 = INT32_MAX;
	volatile uint64_t t83 = 568801865277LLU;

	t83 = ((x405&x406)>>(x407<=x408));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x409 = INT64_MIN;
	volatile uint64_t x410 = 332056443LLU;
	static uint32_t x411 = 124U;
	static volatile int16_t x412 = -45;
	uint64_t t84 = 3165LLU;

	t84 = ((x409&x410)>>(x411<=x412));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x413 = INT32_MAX;
	volatile uint64_t x415 = 235981LLU;
	volatile uint32_t x416 = 59884U;

	t85 = ((x413&x414)>>(x415<=x416));

	if (t85 != 2147450880) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x417 = INT64_MIN;
	static uint32_t x418 = 38U;
	int32_t x419 = -1;
	static int64_t t86 = -8321497LL;

	t86 = ((x417&x418)>>(x419<=x420));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x421 = INT32_MAX;
	int64_t x423 = INT64_MAX;
	uint8_t x424 = 2U;

	t87 = ((x421&x422)>>(x423<=x424));

	if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x425 = UINT32_MAX;
	uint32_t x426 = UINT32_MAX;
	volatile int64_t x427 = -198LL;
	static int8_t x428 = INT8_MIN;
	uint32_t t88 = 406043458U;

	t88 = ((x425&x426)>>(x427<=x428));

	if (t88 != 2147483647U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x429 = -1;
	uint16_t x430 = 3U;

	t89 = ((x429&x430)>>(x431<=x432));

	if (t89 != 3) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x434 = INT8_MAX;
	static volatile uint8_t x436 = UINT8_MAX;
	int32_t t90 = -497785;

	t90 = ((x433&x434)>>(x435<=x436));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x441 = 58;
	int16_t x442 = INT16_MIN;
	int8_t x443 = INT8_MIN;
	int64_t x444 = INT64_MIN;
	static int32_t t91 = -1216071;

	t91 = ((x441&x442)>>(x443<=x444));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x445 = -1;
	int8_t x446 = INT8_MAX;
	int32_t x447 = INT32_MAX;
	int64_t x448 = -480453518616637LL;
	int32_t t92 = 8358023;

	t92 = ((x445&x446)>>(x447<=x448));

	if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x449 = INT16_MAX;
	uint16_t x450 = UINT16_MAX;
	volatile int8_t x451 = 6;
	static uint16_t x452 = 399U;
	int32_t t93 = -58;

	t93 = ((x449&x450)>>(x451<=x452));

	if (t93 != 16383) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x453 = INT16_MAX;
	static uint8_t x454 = 1U;
	static int64_t x455 = -1LL;
	uint32_t x456 = 225480U;
	int32_t t94 = -365455;

	t94 = ((x453&x454)>>(x455<=x456));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x458 = INT8_MAX;
	static int16_t x459 = -1;
	static int16_t x460 = -162;
	volatile uint32_t t95 = 30U;

	t95 = ((x457&x458)>>(x459<=x460));

	if (t95 != 29U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x461 = INT32_MAX;
	uint64_t x462 = UINT64_MAX;
	uint64_t x463 = 29054073322LLU;
	int8_t x464 = 22;
	volatile uint64_t t96 = 6326312902469679342LLU;

	t96 = ((x461&x462)>>(x463<=x464));

	if (t96 != 2147483647LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x465 = INT8_MAX;
	int16_t x466 = INT16_MIN;
	volatile int32_t x467 = -2;
	volatile int32_t t97 = 7567959;

	t97 = ((x465&x466)>>(x467<=x468));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x469 = 22U;
	static uint32_t x470 = UINT32_MAX;
	int32_t x471 = -1;
	int16_t x472 = -1;
	uint32_t t98 = 186U;

	t98 = ((x469&x470)>>(x471<=x472));

	if (t98 != 11U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x481 = -1;
	int32_t x482 = 47107800;
	static uint32_t x483 = UINT32_MAX;
	int32_t t99 = -1;

	t99 = ((x481&x482)>>(x483<=x484));

	if (t99 != 47107800) { NG(); } else { ; }
	
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

