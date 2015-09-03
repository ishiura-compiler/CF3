#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x3 = 14LL;
int16_t x4 = INT16_MIN;
int32_t t0 = -3101;
static int16_t x6 = INT16_MAX;
static int64_t t1 = -9735238LL;
int32_t x12 = 217374785;
int32_t x25 = INT32_MIN;
volatile int8_t x27 = -6;
uint32_t x28 = 61851637U;
volatile uint64_t x33 = UINT64_MAX;
static int8_t x39 = 1;
static uint32_t x42 = UINT32_MAX;
volatile uint32_t t9 = 400906137U;
volatile int8_t x50 = 1;
int16_t x51 = -1;
int16_t x53 = 1680;
int32_t x55 = INT32_MAX;
static volatile int16_t x56 = INT16_MAX;
volatile int64_t x60 = -227408LL;
int16_t x64 = -1;
uint64_t x65 = 1856163500528LLU;
uint64_t t15 = 4665970749610LLU;
int8_t x74 = 0;
static uint16_t x75 = UINT16_MAX;
static int64_t x78 = INT64_MIN;
volatile int8_t x81 = INT8_MAX;
static volatile int8_t x82 = 1;
volatile int32_t t19 = 937;
int64_t x91 = INT64_MIN;
volatile int32_t x93 = INT32_MIN;
uint8_t x98 = 0U;
uint8_t x99 = 55U;
int8_t x101 = INT8_MAX;
volatile uint64_t x111 = UINT64_MAX;
int8_t x121 = INT8_MIN;
uint32_t t28 = 381194U;
volatile int32_t t31 = 733;
uint8_t x146 = 114U;
int8_t x148 = -1;
volatile int64_t x153 = INT64_MIN;
static volatile int32_t x159 = INT32_MIN;
volatile int32_t x160 = -1;
volatile int32_t t37 = -22066;
static int64_t x161 = INT64_MIN;
uint8_t x175 = 6U;
static uint16_t x177 = 1U;
uint16_t x178 = UINT16_MAX;
static volatile int32_t x180 = 37081;
volatile uint16_t x183 = UINT16_MAX;
int32_t x190 = INT32_MIN;
int8_t x193 = 0;
int8_t x194 = -11;
uint32_t x195 = UINT32_MAX;
int8_t x197 = -7;
static volatile int64_t x203 = -7352LL;
volatile int32_t x205 = INT32_MAX;
int64_t x207 = INT64_MIN;
uint16_t x218 = 52U;
int64_t x228 = INT64_MAX;
uint8_t x237 = 61U;
int64_t x238 = -1LL;
int8_t x242 = -1;
int16_t x247 = INT16_MAX;
static volatile uint8_t x264 = 102U;
uint32_t t60 = 4U;
int64_t t66 = -1816053971LL;
int64_t x289 = INT64_MAX;
int32_t t70 = 358239586;
static int32_t x308 = 541926217;
int16_t x309 = -1;
int8_t x323 = INT8_MIN;
int32_t x332 = INT32_MIN;
int32_t t78 = 245354;
volatile uint64_t x341 = UINT64_MAX;
int8_t x345 = INT8_MIN;
static int64_t x346 = 82LL;
int64_t x347 = -2901681153LL;
static volatile int64_t t81 = 12914LL;
uint16_t x349 = UINT16_MAX;
int64_t x353 = -23604970970LL;
int16_t x355 = INT16_MAX;
uint64_t x359 = UINT64_MAX;
static volatile int16_t x362 = -1;
static int32_t x363 = INT32_MIN;
volatile int8_t x365 = INT8_MIN;
int32_t t87 = 3;
volatile uint16_t x376 = UINT16_MAX;
int64_t t89 = 1LL;
volatile int8_t x387 = 2;
static uint32_t x391 = 1030767U;
int16_t x392 = -1;
int16_t x394 = INT16_MIN;
static uint32_t x398 = 4531U;
volatile uint8_t x400 = 81U;
int8_t x402 = -1;
uint16_t x404 = UINT16_MAX;


void f0(void) {
	static int8_t x1 = -1;
	static int16_t x2 = -6162;

	t0 = (x1&(x2-(x3<=x4)));

	if (t0 != -6162) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int32_t x7 = INT32_MAX;
	uint8_t x8 = UINT8_MAX;

	t1 = (x5&(x6-(x7<=x8)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -939064781LL;
	static int32_t x10 = -1;
	int64_t x11 = -1LL;
	int64_t t2 = -1065530594140264LL;

	t2 = (x9&(x10-(x11<=x12)));

	if (t2 != -939064782LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = -1;
	static uint32_t x14 = 209261726U;
	int64_t x15 = -1LL;
	int8_t x16 = INT8_MIN;
	volatile uint32_t t3 = 6668U;

	t3 = (x13&(x14-(x15<=x16)));

	if (t3 != 209261726U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 7366307861LL;
	int8_t x18 = INT8_MIN;
	int16_t x19 = INT16_MIN;
	int32_t x20 = -883620963;
	int64_t t4 = 21019877897972510LL;

	t4 = (x17&(x18-(x19<=x20)));

	if (t4 != 7366307840LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x26 = 1;
	int32_t t5 = 8384995;

	t5 = (x25&(x26-(x27<=x28)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = UINT32_MAX;
	int64_t x30 = INT64_MAX;
	int64_t x31 = INT64_MIN;
	static volatile int16_t x32 = 1;
	volatile int64_t t6 = 5LL;

	t6 = (x29&(x30-(x31<=x32)));

	if (t6 != 4294967294LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x34 = INT8_MIN;
	uint16_t x35 = 43U;
	int64_t x36 = INT64_MIN;
	uint64_t t7 = 45LLU;

	t7 = (x33&(x34-(x35<=x36)));

	if (t7 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = 964;
	static int32_t x38 = INT32_MAX;
	uint8_t x40 = 6U;
	volatile int32_t t8 = -753785189;

	t8 = (x37&(x38-(x39<=x40)));

	if (t8 != 964) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 26775U;
	uint32_t x43 = UINT32_MAX;
	uint8_t x44 = UINT8_MAX;

	t9 = (x41&(x42-(x43<=x44)));

	if (t9 != 26775U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MAX;
	int8_t x46 = INT8_MAX;
	volatile int16_t x47 = -8;
	int64_t x48 = INT64_MAX;
	int32_t t10 = 16921;

	t10 = (x45&(x46-(x47<=x48)));

	if (t10 != 126) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = INT64_MIN;
	uint8_t x52 = UINT8_MAX;
	volatile int64_t t11 = -435350902894028062LL;

	t11 = (x49&(x50-(x51<=x52)));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x54 = -3;
	volatile int32_t t12 = 6;

	t12 = (x53&(x54-(x55<=x56)));

	if (t12 != 1680) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = -1;
	int64_t x58 = INT64_MAX;
	uint16_t x59 = 36U;
	volatile int64_t t13 = INT64_MAX;

	t13 = (x57&(x58-(x59<=x60)));

	if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x61 = INT8_MIN;
	uint8_t x62 = UINT8_MAX;
	static int16_t x63 = INT16_MIN;
	int32_t t14 = -125;

	t14 = (x61&(x62-(x63<=x64)));

	if (t14 != 128) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x66 = INT8_MAX;
	int16_t x67 = -65;
	int8_t x68 = INT8_MIN;

	t15 = (x65&(x66-(x67<=x68)));

	if (t15 != 112LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MIN;
	volatile uint16_t x70 = UINT16_MAX;
	volatile int16_t x71 = INT16_MIN;
	uint16_t x72 = UINT16_MAX;
	volatile int32_t t16 = -4095339;

	t16 = (x69&(x70-(x71<=x72)));

	if (t16 != 65408) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x73 = 1781U;
	volatile int64_t x76 = -22861LL;
	static volatile int32_t t17 = 61836738;

	t17 = (x73&(x74-(x75<=x76)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x77 = INT32_MIN;
	static uint32_t x79 = 110U;
	uint32_t x80 = 51U;
	static int64_t t18 = INT64_MIN;

	t18 = (x77&(x78-(x79<=x80)));

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x83 = -2;
	int16_t x84 = 12;

	t19 = (x81&(x82-(x83<=x84)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x85 = UINT8_MAX;
	int32_t x86 = -1;
	uint64_t x87 = UINT64_MAX;
	int64_t x88 = INT64_MIN;
	volatile int32_t t20 = 26022262;

	t20 = (x85&(x86-(x87<=x88)));

	if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = INT16_MAX;
	static volatile uint16_t x90 = 4U;
	uint16_t x92 = 718U;
	static int32_t t21 = -10177;

	t21 = (x89&(x90-(x91<=x92)));

	if (t21 != 3) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x94 = INT32_MIN;
	int16_t x95 = INT16_MAX;
	int64_t x96 = INT64_MIN;
	int32_t t22 = INT32_MIN;

	t22 = (x93&(x94-(x95<=x96)));

	if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x97 = 2986;
	uint32_t x100 = 78097232U;
	volatile int32_t t23 = -76615;

	t23 = (x97&(x98-(x99<=x100)));

	if (t23 != 2986) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x102 = UINT32_MAX;
	uint32_t x103 = 13351849U;
	uint64_t x104 = 231892986LLU;
	volatile uint32_t t24 = 194073673U;

	t24 = (x101&(x102-(x103<=x104)));

	if (t24 != 126U) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x105 = INT8_MIN;
	uint32_t x106 = 930U;
	int32_t x107 = -357239031;
	volatile int32_t x108 = -298025;
	volatile uint32_t t25 = 7U;

	t25 = (x105&(x106-(x107<=x108)));

	if (t25 != 896U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x109 = UINT16_MAX;
	int64_t x110 = -1LL;
	int64_t x112 = -3LL;
	int64_t t26 = 3004893414982LL;

	t26 = (x109&(x110-(x111<=x112)));

	if (t26 != 65535LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = INT16_MIN;
	uint32_t x114 = UINT32_MAX;
	volatile uint64_t x115 = 188138269LLU;
	static int64_t x116 = -1443614070418947827LL;
	uint32_t t27 = 302791746U;

	t27 = (x113&(x114-(x115<=x116)));

	if (t27 != 4294934528U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x122 = 881427U;
	int64_t x123 = -1LL;
	int64_t x124 = -199670105806LL;

	t28 = (x121&(x122-(x123<=x124)));

	if (t28 != 881408U) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x125 = INT8_MAX;
	uint32_t x126 = 44U;
	volatile int32_t x127 = INT32_MIN;
	uint16_t x128 = 1289U;
	uint32_t t29 = 214126815U;

	t29 = (x125&(x126-(x127<=x128)));

	if (t29 != 43U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = -1383915;
	int8_t x130 = -4;
	volatile uint32_t x131 = 446248U;
	int16_t x132 = INT16_MIN;
	int32_t t30 = 1;

	t30 = (x129&(x130-(x131<=x132)));

	if (t30 != -1383919) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x133 = 67962;
	int32_t x134 = 865321;
	int32_t x135 = -16;
	int16_t x136 = INT16_MIN;

	t31 = (x133&(x134-(x135<=x136)));

	if (t31 != 65576) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x137 = INT64_MAX;
	int32_t x138 = INT32_MAX;
	uint8_t x139 = 73U;
	uint8_t x140 = 113U;
	volatile int64_t t32 = -58200094347LL;

	t32 = (x137&(x138-(x139<=x140)));

	if (t32 != 2147483646LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = -1;
	int16_t x142 = INT16_MIN;
	uint16_t x143 = 21906U;
	int16_t x144 = INT16_MAX;
	volatile int32_t t33 = -377583;

	t33 = (x141&(x142-(x143<=x144)));

	if (t33 != -32769) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = INT64_MIN;
	int16_t x147 = -5561;
	int64_t t34 = 22419702890LL;

	t34 = (x145&(x146-(x147<=x148)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x149 = UINT8_MAX;
	static uint8_t x150 = 7U;
	static int16_t x151 = -1;
	volatile int16_t x152 = 0;
	int32_t t35 = 119840;

	t35 = (x149&(x150-(x151<=x152)));

	if (t35 != 6) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x154 = 1;
	volatile int16_t x155 = -15078;
	int16_t x156 = 4405;
	int64_t t36 = -22LL;

	t36 = (x153&(x154-(x155<=x156)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x157 = 0;
	static uint16_t x158 = 301U;

	t37 = (x157&(x158-(x159<=x160)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x162 = INT16_MIN;
	volatile uint8_t x163 = 120U;
	uint16_t x164 = UINT16_MAX;
	static int64_t t38 = INT64_MIN;

	t38 = (x161&(x162-(x163<=x164)));

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x165 = 94;
	static uint8_t x166 = UINT8_MAX;
	volatile uint8_t x167 = 1U;
	int32_t x168 = INT32_MIN;
	int32_t t39 = 21;

	t39 = (x165&(x166-(x167<=x168)));

	if (t39 != 94) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x173 = 262514207U;
	int64_t x174 = INT64_MIN;
	int8_t x176 = -7;
	volatile int64_t t40 = 95133341LL;

	t40 = (x173&(x174-(x175<=x176)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x179 = -365456039111914310LL;
	int32_t t41 = 629971432;

	t41 = (x177&(x178-(x179<=x180)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x181 = 1432;
	static int64_t x182 = 26262LL;
	uint8_t x184 = UINT8_MAX;
	static volatile int64_t t42 = -4091501121586182123LL;

	t42 = (x181&(x182-(x183<=x184)));

	if (t42 != 1168LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x189 = INT16_MIN;
	int32_t x191 = INT32_MAX;
	int16_t x192 = 0;
	volatile int32_t t43 = INT32_MIN;

	t43 = (x189&(x190-(x191<=x192)));

	if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x196 = UINT16_MAX;
	volatile int32_t t44 = -1;

	t44 = (x193&(x194-(x195<=x196)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint8_t x198 = 24U;
	uint8_t x199 = 1U;
	int16_t x200 = -1;
	volatile int32_t t45 = -781497;

	t45 = (x197&(x198-(x199<=x200)));

	if (t45 != 24) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x201 = 163820426;
	uint16_t x202 = 0U;
	volatile int16_t x204 = 15763;
	static int32_t t46 = 1;

	t46 = (x201&(x202-(x203<=x204)));

	if (t46 != 163820426) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x206 = INT16_MIN;
	int64_t x208 = INT64_MIN;
	int32_t t47 = 1786;

	t47 = (x205&(x206-(x207<=x208)));

	if (t47 != 2147450879) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x209 = 48U;
	static volatile uint32_t x210 = 3463U;
	int32_t x211 = 16431164;
	int16_t x212 = INT16_MIN;
	uint32_t t48 = 2U;

	t48 = (x209&(x210-(x211<=x212)));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x213 = 232065967U;
	volatile int32_t x214 = -1;
	volatile int16_t x215 = 283;
	static int8_t x216 = INT8_MAX;
	volatile uint32_t t49 = 1748697189U;

	t49 = (x213&(x214-(x215<=x216)));

	if (t49 != 232065967U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x217 = INT32_MAX;
	uint16_t x219 = 1942U;
	int8_t x220 = INT8_MIN;
	int32_t t50 = -396655275;

	t50 = (x217&(x218-(x219<=x220)));

	if (t50 != 52) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x221 = INT8_MIN;
	int64_t x222 = -1LL;
	uint8_t x223 = 1U;
	uint32_t x224 = 198541U;
	int64_t t51 = -102878174LL;

	t51 = (x221&(x222-(x223<=x224)));

	if (t51 != -128LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint64_t x225 = 137245421763LLU;
	static volatile uint8_t x226 = 24U;
	uint32_t x227 = UINT32_MAX;
	uint64_t t52 = 39653502318LLU;

	t52 = (x225&(x226-(x227<=x228)));

	if (t52 != 3LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x229 = 1;
	int16_t x230 = 0;
	uint64_t x231 = UINT64_MAX;
	volatile int64_t x232 = 8087395170189325LL;
	volatile int32_t t53 = 763;

	t53 = (x229&(x230-(x231<=x232)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x239 = INT64_MIN;
	int32_t x240 = 16;
	static int64_t t54 = 413376073039LL;

	t54 = (x237&(x238-(x239<=x240)));

	if (t54 != 60LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x241 = -1;
	volatile int32_t x243 = 0;
	int64_t x244 = -1299572049494LL;
	volatile int32_t t55 = -24185976;

	t55 = (x241&(x242-(x243<=x244)));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x245 = INT16_MAX;
	volatile int64_t x246 = -4953633993108LL;
	int16_t x248 = INT16_MIN;
	volatile int64_t t56 = -3LL;

	t56 = (x245&(x246-(x247<=x248)));

	if (t56 != 20076LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x249 = INT32_MAX;
	static int8_t x250 = INT8_MIN;
	uint16_t x251 = UINT16_MAX;
	int16_t x252 = INT16_MIN;
	int32_t t57 = -4864;

	t57 = (x249&(x250-(x251<=x252)));

	if (t57 != 2147483520) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x253 = 3871541LLU;
	static volatile int64_t x254 = INT64_MIN;
	static int32_t x255 = INT32_MAX;
	int64_t x256 = INT64_MIN;
	volatile uint64_t t58 = 13835621LLU;

	t58 = (x253&(x254-(x255<=x256)));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x257 = INT8_MIN;
	int16_t x258 = -430;
	uint16_t x259 = 63U;
	int16_t x260 = -1;
	volatile int32_t t59 = -1319458;

	t59 = (x257&(x258-(x259<=x260)));

	if (t59 != -512) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x261 = 23346294U;
	int16_t x262 = -12;
	int64_t x263 = INT64_MAX;

	t60 = (x261&(x262-(x263<=x264)));

	if (t60 != 23346292U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x265 = -1;
	int64_t x266 = -4060LL;
	uint8_t x267 = UINT8_MAX;
	static int64_t x268 = -1LL;
	static int64_t t61 = 690249830455412LL;

	t61 = (x265&(x266-(x267<=x268)));

	if (t61 != -4060LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x269 = INT64_MAX;
	static volatile int8_t x270 = INT8_MIN;
	uint32_t x271 = 953214U;
	int32_t x272 = -488;
	volatile int64_t t62 = -122629547718LL;

	t62 = (x269&(x270-(x271<=x272)));

	if (t62 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x273 = -13;
	static uint8_t x274 = 3U;
	int8_t x275 = -3;
	int32_t x276 = 6;
	volatile int32_t t63 = -46692977;

	t63 = (x273&(x274-(x275<=x276)));

	if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint32_t x277 = UINT32_MAX;
	int32_t x278 = INT32_MAX;
	int64_t x279 = INT64_MAX;
	uint64_t x280 = 13235054569LLU;
	static uint32_t t64 = 9719891U;

	t64 = (x277&(x278-(x279<=x280)));

	if (t64 != 2147483647U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x281 = INT8_MIN;
	static int8_t x282 = -8;
	volatile uint64_t x283 = 724987533LLU;
	int32_t x284 = INT32_MIN;
	volatile int32_t t65 = 3;

	t65 = (x281&(x282-(x283<=x284)));

	if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x285 = 2U;
	int64_t x286 = -10166626662LL;
	volatile int16_t x287 = 13;
	int64_t x288 = INT64_MAX;

	t66 = (x285&(x286-(x287<=x288)));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x290 = -1;
	volatile int32_t x291 = INT32_MAX;
	int16_t x292 = INT16_MIN;
	volatile int64_t t67 = INT64_MAX;

	t67 = (x289&(x290-(x291<=x292)));

	if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x293 = INT64_MIN;
	uint8_t x294 = UINT8_MAX;
	int64_t x295 = 8504858806166227LL;
	static int64_t x296 = 52LL;
	int64_t t68 = -564919144690588LL;

	t68 = (x293&(x294-(x295<=x296)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x297 = -3;
	static int64_t x298 = INT64_MAX;
	int8_t x299 = 1;
	uint8_t x300 = 121U;
	static int64_t t69 = -232895007LL;

	t69 = (x297&(x298-(x299<=x300)));

	if (t69 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x301 = -1;
	int8_t x302 = -1;
	volatile uint8_t x303 = UINT8_MAX;
	int8_t x304 = 4;

	t70 = (x301&(x302-(x303<=x304)));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x305 = 2U;
	static int16_t x306 = INT16_MIN;
	int16_t x307 = INT16_MAX;
	volatile int32_t t71 = 0;

	t71 = (x305&(x306-(x307<=x308)));

	if (t71 != 2) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x310 = UINT8_MAX;
	int32_t x311 = -1;
	volatile uint32_t x312 = UINT32_MAX;
	volatile int32_t t72 = 444;

	t72 = (x309&(x310-(x311<=x312)));

	if (t72 != 254) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x313 = INT16_MAX;
	int32_t x314 = -1;
	int16_t x315 = -229;
	static int64_t x316 = -35933LL;
	int32_t t73 = 127054;

	t73 = (x313&(x314-(x315<=x316)));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x317 = 1623U;
	volatile int16_t x318 = INT16_MAX;
	int32_t x319 = INT32_MIN;
	int8_t x320 = -1;
	int32_t t74 = -8237358;

	t74 = (x317&(x318-(x319<=x320)));

	if (t74 != 1622) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x321 = INT16_MAX;
	int32_t x322 = -1;
	int64_t x324 = INT64_MIN;
	int32_t t75 = -45;

	t75 = (x321&(x322-(x323<=x324)));

	if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x325 = INT32_MIN;
	volatile uint32_t x326 = 302U;
	int16_t x327 = -1;
	uint32_t x328 = UINT32_MAX;
	uint32_t t76 = 4603464U;

	t76 = (x325&(x326-(x327<=x328)));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x329 = -1;
	int8_t x330 = INT8_MIN;
	volatile int32_t x331 = -380;
	static volatile int32_t t77 = 106;

	t77 = (x329&(x330-(x331<=x332)));

	if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x333 = -7;
	int16_t x334 = 1903;
	uint16_t x335 = UINT16_MAX;
	static uint32_t x336 = 33011U;

	t78 = (x333&(x334-(x335<=x336)));

	if (t78 != 1897) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x337 = INT32_MIN;
	uint8_t x338 = UINT8_MAX;
	int8_t x339 = INT8_MIN;
	uint64_t x340 = 847891138014479LLU;
	volatile int32_t t79 = -49;

	t79 = (x337&(x338-(x339<=x340)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x342 = 55818U;
	int8_t x343 = INT8_MAX;
	int32_t x344 = INT32_MIN;
	volatile uint64_t t80 = 1499LLU;

	t80 = (x341&(x342-(x343<=x344)));

	if (t80 != 55818LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x348 = 249U;

	t81 = (x345&(x346-(x347<=x348)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x350 = 1U;
	static volatile int64_t x351 = INT64_MAX;
	int32_t x352 = INT32_MAX;
	static volatile int32_t t82 = -435363;

	t82 = (x349&(x350-(x351<=x352)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x354 = 7;
	int8_t x356 = -3;
	volatile int64_t t83 = -547627901055LL;

	t83 = (x353&(x354-(x355<=x356)));

	if (t83 != 6LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x357 = INT8_MAX;
	static int8_t x358 = -1;
	int8_t x360 = -1;
	int32_t t84 = -46;

	t84 = (x357&(x358-(x359<=x360)));

	if (t84 != 126) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x361 = -1;
	volatile uint16_t x364 = UINT16_MAX;
	int32_t t85 = 6;

	t85 = (x361&(x362-(x363<=x364)));

	if (t85 != -2) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x366 = INT8_MIN;
	static int32_t x367 = -1;
	int16_t x368 = INT16_MAX;
	static volatile int32_t t86 = -75;

	t86 = (x365&(x366-(x367<=x368)));

	if (t86 != -256) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x369 = INT16_MIN;
	int8_t x370 = -1;
	int32_t x371 = INT32_MIN;
	static int32_t x372 = INT32_MAX;

	t87 = (x369&(x370-(x371<=x372)));

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x373 = -9113;
	volatile int8_t x374 = INT8_MIN;
	volatile int8_t x375 = -59;
	static int32_t t88 = 413208;

	t88 = (x373&(x374-(x375<=x376)));

	if (t88 != -9113) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x377 = 797217LL;
	int16_t x378 = -1;
	static int16_t x379 = 2554;
	uint32_t x380 = UINT32_MAX;

	t89 = (x377&(x378-(x379<=x380)));

	if (t89 != 797216LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x381 = 0;
	int8_t x382 = INT8_MIN;
	int16_t x383 = INT16_MIN;
	volatile int64_t x384 = -655425820587122LL;
	int32_t t90 = 136340106;

	t90 = (x381&(x382-(x383<=x384)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x385 = INT32_MIN;
	int32_t x386 = INT32_MAX;
	int64_t x388 = INT64_MIN;
	int32_t t91 = 52;

	t91 = (x385&(x386-(x387<=x388)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x389 = 2;
	int8_t x390 = INT8_MIN;
	volatile int32_t t92 = -982;

	t92 = (x389&(x390-(x391<=x392)));

	if (t92 != 2) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x393 = -64754475676LL;
	int16_t x395 = INT16_MIN;
	int8_t x396 = INT8_MIN;
	int64_t t93 = 18092887397613LL;

	t93 = (x393&(x394-(x395<=x396)));

	if (t93 != -64754475676LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x397 = -4151LL;
	int64_t x399 = INT64_MIN;
	volatile int64_t t94 = 463177302LL;

	t94 = (x397&(x398-(x399<=x400)));

	if (t94 != 384LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x401 = UINT64_MAX;
	uint64_t x403 = 860368001886367618LLU;
	uint64_t t95 = UINT64_MAX;

	t95 = (x401&(x402-(x403<=x404)));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x405 = INT32_MIN;
	int16_t x406 = 14903;
	int8_t x407 = -1;
	int64_t x408 = INT64_MIN;
	volatile int32_t t96 = -123559;

	t96 = (x405&(x406-(x407<=x408)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x409 = 129887132910LL;
	int16_t x410 = INT16_MIN;
	uint32_t x411 = UINT32_MAX;
	int32_t x412 = INT32_MIN;
	int64_t t97 = 3413232LL;

	t97 = (x409&(x410-(x411<=x412)));

	if (t97 != 129887109120LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x413 = 636750151U;
	uint64_t x414 = UINT64_MAX;
	int32_t x415 = INT32_MIN;
	int8_t x416 = INT8_MIN;
	uint64_t t98 = 1669787726355477LLU;

	t98 = (x413&(x414-(x415<=x416)));

	if (t98 != 636750150LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x417 = INT32_MIN;
	int32_t x418 = -1;
	uint64_t x419 = UINT64_MAX;
	int64_t x420 = INT64_MAX;
	volatile int32_t t99 = INT32_MIN;

	t99 = (x417&(x418-(x419<=x420)));

	if (t99 != INT32_MIN) { NG(); } else { ; }
	
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

