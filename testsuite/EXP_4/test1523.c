#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
int8_t x6 = INT8_MIN;
static volatile int32_t t2 = -188;
static uint16_t x14 = 72U;
int64_t x15 = 47LL;
volatile int64_t t5 = 185822499746LL;
int16_t x30 = -31;
volatile int32_t t6 = -110;
int8_t x36 = -1;
volatile int32_t x37 = INT32_MAX;
int32_t x40 = -1;
int8_t x43 = -1;
static int64_t x49 = INT64_MAX;
static int64_t x57 = INT64_MIN;
static volatile int8_t x59 = INT8_MIN;
static uint32_t x68 = 391U;
volatile int32_t t14 = 1;
int32_t x69 = -17313;
int32_t x71 = -1;
int64_t x75 = INT64_MAX;
int16_t x80 = -1;
volatile uint16_t x98 = UINT16_MAX;
uint8_t x104 = UINT8_MAX;
volatile int32_t t22 = -773268929;
volatile int32_t x107 = INT32_MIN;
static int8_t x111 = 0;
int32_t t24 = -977;
volatile int32_t x119 = INT32_MIN;
uint16_t x122 = UINT16_MAX;
int8_t x123 = INT8_MAX;
int32_t t27 = -106268;
static uint16_t x128 = UINT16_MAX;
int32_t x132 = -1;
int64_t x135 = INT64_MAX;
int64_t x136 = INT64_MIN;
uint8_t x143 = 28U;
static int16_t x144 = -1;
int64_t x145 = INT64_MIN;
int32_t x147 = 704;
uint8_t x158 = 0U;
uint64_t x163 = 8828558475409397646LLU;
int64_t x164 = INT64_MAX;
int32_t t36 = 2966956;
volatile int64_t x165 = INT64_MAX;
uint16_t x171 = UINT16_MAX;
static volatile int8_t x179 = INT8_MAX;
static int8_t x184 = INT8_MIN;
volatile int16_t x196 = -13243;
uint64_t x203 = UINT64_MAX;
int8_t x204 = -1;
int64_t x205 = -1LL;
int64_t t47 = -82LL;
int8_t x211 = -1;
volatile uint32_t t49 = 80489513U;
static uint16_t x226 = 3U;
volatile uint16_t x229 = 3U;
static uint32_t x231 = 4444U;
volatile int32_t t52 = 7;
uint8_t x241 = UINT8_MAX;
uint64_t x242 = 4344036468941LLU;
uint16_t x249 = 269U;
volatile uint8_t x255 = UINT8_MAX;
int64_t x256 = INT64_MIN;
int64_t x259 = INT64_MIN;
int8_t x261 = INT8_MIN;
int8_t x270 = -2;
int64_t x275 = INT64_MIN;
volatile int32_t x285 = -1;
volatile int16_t x293 = INT16_MIN;
volatile int32_t t66 = 40981;
int16_t x297 = -1;
int8_t x313 = 56;
int32_t x319 = INT32_MAX;
int32_t x325 = INT32_MAX;
static uint64_t x328 = 79682LLU;
volatile int16_t x330 = -4;
uint8_t x331 = 50U;
volatile int64_t x333 = -1006202028493057184LL;
volatile uint16_t x334 = 27U;
volatile int32_t t78 = -2205854;
int8_t x371 = 10;
uint64_t x376 = 9LLU;
static volatile uint32_t x379 = UINT32_MAX;
uint64_t x380 = 21692LLU;
static int8_t x400 = INT8_MIN;
static volatile int32_t t90 = 8318;
int16_t x418 = INT16_MIN;
int8_t x420 = INT8_MAX;
static int16_t x426 = 0;
volatile uint32_t x436 = UINT32_MAX;
int32_t t96 = 361;
int32_t x445 = INT32_MIN;
volatile int64_t x446 = INT64_MIN;
static int64_t t98 = 264806530LL;
static uint64_t t99 = 1LLU;


void f0(void) {
	uint16_t x2 = 3U;
	int64_t x3 = -1373LL;
	int32_t x4 = 15594431;
	int32_t t0 = -637340;

	t0 = (x1-(x2+(x3<=x4)));

	if (t0 != -32772) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	uint16_t x7 = 1543U;
	int8_t x8 = INT8_MAX;
	int32_t t1 = 17512139;

	t1 = (x5-(x6+(x7<=x8)));

	if (t1 != -2147483520) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	volatile int32_t x10 = INT32_MIN;
	uint8_t x11 = UINT8_MAX;
	int8_t x12 = 1;

	t2 = (x9-(x10+(x11<=x12)));

	if (t2 != 2147450880) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x13 = 2U;
	volatile int32_t x16 = -32;
	int32_t t3 = 199011;

	t3 = (x13-(x14+(x15<=x16)));

	if (t3 != -70) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x17 = UINT16_MAX;
	uint8_t x18 = 7U;
	uint8_t x19 = 51U;
	int16_t x20 = -1;
	volatile int32_t t4 = 5;

	t4 = (x17-(x18+(x19<=x20)));

	if (t4 != 65528) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MAX;
	static uint8_t x26 = 4U;
	static uint8_t x27 = UINT8_MAX;
	volatile int64_t x28 = INT64_MIN;

	t5 = (x25-(x26+(x27<=x28)));

	if (t5 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x29 = 10U;
	uint64_t x31 = UINT64_MAX;
	static int32_t x32 = INT32_MAX;

	t6 = (x29-(x30+(x31<=x32)));

	if (t6 != 41) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x33 = 25462U;
	static volatile int16_t x34 = -37;
	volatile int16_t x35 = 822;
	int32_t t7 = 693987375;

	t7 = (x33-(x34+(x35<=x36)));

	if (t7 != 25499) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x38 = 23U;
	int32_t x39 = INT32_MIN;
	uint32_t t8 = 27417U;

	t8 = (x37-(x38+(x39<=x40)));

	if (t8 != 2147483623U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = UINT8_MAX;
	int16_t x42 = -721;
	int16_t x44 = INT16_MIN;
	volatile int32_t t9 = 439518;

	t9 = (x41-(x42+(x43<=x44)));

	if (t9 != 976) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = -1LL;
	static volatile int32_t x46 = INT32_MIN;
	int16_t x47 = 2;
	static uint32_t x48 = 3U;
	int64_t t10 = 3928971821166894LL;

	t10 = (x45-(x46+(x47<=x48)));

	if (t10 != 2147483646LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x50 = 9U;
	volatile int8_t x51 = -1;
	int8_t x52 = INT8_MIN;
	int64_t t11 = -62784868115636LL;

	t11 = (x49-(x50+(x51<=x52)));

	if (t11 != 9223372036854775798LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x53 = 0U;
	int16_t x54 = INT16_MIN;
	int8_t x55 = 1;
	uint16_t x56 = 66U;
	volatile int32_t t12 = 245236803;

	t12 = (x53-(x54+(x55<=x56)));

	if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x58 = -1;
	volatile int16_t x60 = -1;
	volatile int64_t t13 = INT64_MIN;

	t13 = (x57-(x58+(x59<=x60)));

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x65 = -1;
	int8_t x66 = INT8_MIN;
	int32_t x67 = 128511;

	t14 = (x65-(x66+(x67<=x68)));

	if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x70 = 280200029007545LLU;
	uint8_t x72 = UINT8_MAX;
	volatile uint64_t t15 = 207LLU;

	t15 = (x69-(x70+(x71<=x72)));

	if (t15 != 18446463873680526757LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x73 = 1428499707U;
	int8_t x74 = INT8_MIN;
	static uint16_t x76 = UINT16_MAX;
	uint32_t t16 = 4U;

	t16 = (x73-(x74+(x75<=x76)));

	if (t16 != 1428499835U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = INT64_MIN;
	int16_t x78 = -2;
	static uint32_t x79 = UINT32_MAX;
	int64_t t17 = -2500256873558LL;

	t17 = (x77-(x78+(x79<=x80)));

	if (t17 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = 3;
	volatile int8_t x82 = 2;
	volatile uint8_t x83 = UINT8_MAX;
	volatile uint8_t x84 = 13U;
	static volatile int32_t t18 = -935858805;

	t18 = (x81-(x82+(x83<=x84)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x89 = INT16_MAX;
	uint8_t x90 = UINT8_MAX;
	static int16_t x91 = INT16_MAX;
	uint8_t x92 = 9U;
	int32_t t19 = 470;

	t19 = (x89-(x90+(x91<=x92)));

	if (t19 != 32512) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x93 = INT16_MIN;
	volatile int16_t x94 = INT16_MIN;
	int8_t x95 = INT8_MIN;
	int64_t x96 = INT64_MIN;
	static int32_t t20 = -245402682;

	t20 = (x93-(x94+(x95<=x96)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x97 = UINT16_MAX;
	uint64_t x99 = UINT64_MAX;
	int32_t x100 = INT32_MAX;
	static volatile int32_t t21 = 242910;

	t21 = (x97-(x98+(x99<=x100)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x101 = UINT8_MAX;
	uint8_t x102 = UINT8_MAX;
	uint32_t x103 = 7U;

	t22 = (x101-(x102+(x103<=x104)));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x105 = 117U;
	int8_t x106 = INT8_MIN;
	int32_t x108 = -956;
	volatile int32_t t23 = -2934668;

	t23 = (x105-(x106+(x107<=x108)));

	if (t23 != 244) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x109 = -1;
	static int32_t x110 = -1;
	int16_t x112 = INT16_MIN;

	t24 = (x109-(x110+(x111<=x112)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x113 = 2026U;
	int8_t x114 = -30;
	uint8_t x115 = UINT8_MAX;
	uint8_t x116 = UINT8_MAX;
	int32_t t25 = -29;

	t25 = (x113-(x114+(x115<=x116)));

	if (t25 != 2055) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x117 = 3516U;
	uint32_t x118 = 5U;
	volatile uint32_t x120 = UINT32_MAX;
	static volatile uint32_t t26 = 12U;

	t26 = (x117-(x118+(x119<=x120)));

	if (t26 != 3510U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x121 = UINT8_MAX;
	int64_t x124 = INT64_MIN;

	t27 = (x121-(x122+(x123<=x124)));

	if (t27 != -65280) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x125 = 1U;
	int32_t x126 = 160550;
	static uint32_t x127 = 1470607U;
	int32_t t28 = 255161666;

	t28 = (x125-(x126+(x127<=x128)));

	if (t28 != -160549) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x129 = UINT32_MAX;
	uint32_t x130 = 874417949U;
	int8_t x131 = 1;
	static uint32_t t29 = 20164566U;

	t29 = (x129-(x130+(x131<=x132)));

	if (t29 != 3420549346U) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x133 = 18062112LLU;
	static int8_t x134 = 15;
	uint64_t t30 = 496257051023LLU;

	t30 = (x133-(x134+(x135<=x136)));

	if (t30 != 18062097LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x141 = INT8_MIN;
	int32_t x142 = -1;
	volatile int32_t t31 = 6744577;

	t31 = (x141-(x142+(x143<=x144)));

	if (t31 != -127) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x146 = INT16_MIN;
	volatile uint8_t x148 = 65U;
	volatile int64_t t32 = 3996254240790652LL;

	t32 = (x145-(x146+(x147<=x148)));

	if (t32 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x149 = 2;
	volatile uint8_t x150 = 15U;
	uint16_t x151 = 0U;
	int16_t x152 = -28;
	int32_t t33 = 15342;

	t33 = (x149-(x150+(x151<=x152)));

	if (t33 != -13) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x153 = UINT32_MAX;
	int64_t x154 = -163794194071721736LL;
	uint64_t x155 = 1366470LLU;
	int16_t x156 = -1;
	static int64_t t34 = -19013293LL;

	t34 = (x153-(x154+(x155<=x156)));

	if (t34 != 163794198366689030LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x157 = INT8_MIN;
	volatile int32_t x159 = 905937;
	int32_t x160 = INT32_MIN;
	volatile int32_t t35 = -9;

	t35 = (x157-(x158+(x159<=x160)));

	if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x161 = 0;
	int8_t x162 = INT8_MIN;

	t36 = (x161-(x162+(x163<=x164)));

	if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x166 = 9LL;
	static uint32_t x167 = 121370774U;
	uint16_t x168 = 5403U;
	int64_t t37 = 341819201564750317LL;

	t37 = (x165-(x166+(x167<=x168)));

	if (t37 != 9223372036854775798LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = 2956;
	uint16_t x170 = 302U;
	volatile int32_t x172 = -232236850;
	int32_t t38 = 114167;

	t38 = (x169-(x170+(x171<=x172)));

	if (t38 != 2654) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x173 = INT64_MIN;
	int8_t x174 = INT8_MIN;
	int16_t x175 = INT16_MIN;
	static int16_t x176 = -1591;
	int64_t t39 = 64LL;

	t39 = (x173-(x174+(x175<=x176)));

	if (t39 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x177 = 1;
	int16_t x178 = INT16_MAX;
	uint16_t x180 = UINT16_MAX;
	int32_t t40 = -12920;

	t40 = (x177-(x178+(x179<=x180)));

	if (t40 != -32767) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x181 = 7;
	static int32_t x182 = -1;
	int16_t x183 = INT16_MIN;
	static int32_t t41 = 14;

	t41 = (x181-(x182+(x183<=x184)));

	if (t41 != 7) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x185 = UINT64_MAX;
	volatile uint64_t x186 = UINT64_MAX;
	volatile int32_t x187 = -1;
	int64_t x188 = INT64_MIN;
	static uint64_t t42 = 7078241199746079816LLU;

	t42 = (x185-(x186+(x187<=x188)));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x189 = UINT32_MAX;
	uint8_t x190 = 14U;
	volatile int64_t x191 = -1LL;
	int32_t x192 = -642109;
	volatile uint32_t t43 = 6833392U;

	t43 = (x189-(x190+(x191<=x192)));

	if (t43 != 4294967281U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x193 = UINT16_MAX;
	int8_t x194 = INT8_MAX;
	static int16_t x195 = INT16_MIN;
	volatile int32_t t44 = -1;

	t44 = (x193-(x194+(x195<=x196)));

	if (t44 != 65407) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x197 = INT64_MIN;
	int16_t x198 = -1;
	int64_t x199 = INT64_MIN;
	static volatile int16_t x200 = 1;
	int64_t t45 = INT64_MIN;

	t45 = (x197-(x198+(x199<=x200)));

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x201 = INT8_MIN;
	int32_t x202 = INT32_MIN;
	int32_t t46 = 5310;

	t46 = (x201-(x202+(x203<=x204)));

	if (t46 != 2147483519) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x206 = 39U;
	uint8_t x207 = 0U;
	int64_t x208 = INT64_MAX;

	t47 = (x205-(x206+(x207<=x208)));

	if (t47 != -41LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x209 = INT64_MAX;
	int8_t x210 = INT8_MAX;
	static int64_t x212 = INT64_MAX;
	volatile int64_t t48 = -13909598386215592LL;

	t48 = (x209-(x210+(x211<=x212)));

	if (t48 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x213 = INT32_MAX;
	uint32_t x214 = 753166U;
	static int64_t x215 = -576167941898906LL;
	volatile int16_t x216 = -7849;

	t49 = (x213-(x214+(x215<=x216)));

	if (t49 != 2146730480U) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x221 = INT16_MIN;
	static int8_t x222 = -1;
	static volatile int16_t x223 = INT16_MAX;
	int64_t x224 = INT64_MIN;
	int32_t t50 = 27794;

	t50 = (x221-(x222+(x223<=x224)));

	if (t50 != -32767) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x225 = INT64_MAX;
	uint8_t x227 = 13U;
	uint8_t x228 = UINT8_MAX;
	int64_t t51 = 931071013558639LL;

	t51 = (x225-(x226+(x227<=x228)));

	if (t51 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x230 = -1;
	int16_t x232 = INT16_MIN;

	t52 = (x229-(x230+(x231<=x232)));

	if (t52 != 3) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x233 = -242;
	int16_t x234 = -1;
	int8_t x235 = INT8_MAX;
	int32_t x236 = 81876;
	static volatile int32_t t53 = 2628922;

	t53 = (x233-(x234+(x235<=x236)));

	if (t53 != -242) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x243 = 5LL;
	int16_t x244 = -2297;
	static volatile uint64_t t54 = 10499392097859693LLU;

	t54 = (x241-(x242+(x243<=x244)));

	if (t54 != 18446739729673082930LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x250 = INT8_MIN;
	int16_t x251 = 6568;
	volatile uint16_t x252 = UINT16_MAX;
	volatile int32_t t55 = -1;

	t55 = (x249-(x250+(x251<=x252)));

	if (t55 != 396) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x253 = 48;
	static uint16_t x254 = 0U;
	int32_t t56 = 13;

	t56 = (x253-(x254+(x255<=x256)));

	if (t56 != 48) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x257 = INT8_MIN;
	int32_t x258 = 5;
	int64_t x260 = 134371284570912876LL;
	volatile int32_t t57 = 7964;

	t57 = (x257-(x258+(x259<=x260)));

	if (t57 != -134) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x262 = 12947U;
	volatile int16_t x263 = INT16_MAX;
	int64_t x264 = INT64_MAX;
	int32_t t58 = 1;

	t58 = (x261-(x262+(x263<=x264)));

	if (t58 != -13076) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x265 = 7831209535322891830LLU;
	volatile uint8_t x266 = UINT8_MAX;
	int8_t x267 = INT8_MIN;
	int32_t x268 = -1;
	volatile uint64_t t59 = 69779LLU;

	t59 = (x265-(x266+(x267<=x268)));

	if (t59 != 7831209535322891574LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x269 = INT64_MIN;
	static int64_t x271 = INT64_MIN;
	volatile int16_t x272 = INT16_MIN;
	static volatile int64_t t60 = -6034326LL;

	t60 = (x269-(x270+(x271<=x272)));

	if (t60 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x273 = 142020284LLU;
	int64_t x274 = INT64_MIN;
	uint8_t x276 = 61U;
	volatile uint64_t t61 = 15508309481148LLU;

	t61 = (x273-(x274+(x275<=x276)));

	if (t61 != 9223372036996796091LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x277 = -1;
	int32_t x278 = -1;
	static uint8_t x279 = 10U;
	int16_t x280 = 1948;
	static int32_t t62 = -4092064;

	t62 = (x277-(x278+(x279<=x280)));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x281 = -44;
	volatile int16_t x282 = 1;
	int32_t x283 = INT32_MAX;
	uint32_t x284 = 732806U;
	static int32_t t63 = 2;

	t63 = (x281-(x282+(x283<=x284)));

	if (t63 != -45) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x286 = UINT64_MAX;
	int16_t x287 = 430;
	int16_t x288 = INT16_MAX;
	volatile uint64_t t64 = UINT64_MAX;

	t64 = (x285-(x286+(x287<=x288)));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x289 = INT8_MIN;
	uint16_t x290 = 1U;
	int8_t x291 = 3;
	static int32_t x292 = 31712611;
	int32_t t65 = -7601558;

	t65 = (x289-(x290+(x291<=x292)));

	if (t65 != -130) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x294 = 1;
	int8_t x295 = 0;
	int8_t x296 = 0;

	t66 = (x293-(x294+(x295<=x296)));

	if (t66 != -32770) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x298 = INT16_MAX;
	int16_t x299 = -3;
	int8_t x300 = -14;
	static int32_t t67 = 58041;

	t67 = (x297-(x298+(x299<=x300)));

	if (t67 != -32768) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x309 = 65027LLU;
	int8_t x310 = INT8_MAX;
	volatile int8_t x311 = INT8_MIN;
	int16_t x312 = -1;
	volatile uint64_t t68 = 39448270961LLU;

	t68 = (x309-(x310+(x311<=x312)));

	if (t68 != 64899LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x314 = -1;
	volatile int32_t x315 = INT32_MAX;
	int8_t x316 = -1;
	int32_t t69 = -1057;

	t69 = (x313-(x314+(x315<=x316)));

	if (t69 != 57) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x317 = -1LL;
	int16_t x318 = INT16_MAX;
	int32_t x320 = -95;
	volatile int64_t t70 = 128060385225277LL;

	t70 = (x317-(x318+(x319<=x320)));

	if (t70 != -32768LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x321 = 4082539469LLU;
	static int16_t x322 = -1;
	static uint16_t x323 = UINT16_MAX;
	static int16_t x324 = INT16_MIN;
	uint64_t t71 = 3771049646202852LLU;

	t71 = (x321-(x322+(x323<=x324)));

	if (t71 != 4082539470LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x326 = -1LL;
	volatile int64_t x327 = INT64_MIN;
	int64_t t72 = -1LL;

	t72 = (x325-(x326+(x327<=x328)));

	if (t72 != 2147483648LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x329 = 79762526U;
	int32_t x332 = 274752;
	uint32_t t73 = 427U;

	t73 = (x329-(x330+(x331<=x332)));

	if (t73 != 79762529U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x335 = INT64_MIN;
	int32_t x336 = 2202;
	static volatile int64_t t74 = 736723155LL;

	t74 = (x333-(x334+(x335<=x336)));

	if (t74 != -1006202028493057212LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x341 = 135244751761188LL;
	static int64_t x342 = 7455034426620LL;
	int8_t x343 = INT8_MIN;
	int32_t x344 = 924003896;
	static int64_t t75 = -11LL;

	t75 = (x341-(x342+(x343<=x344)));

	if (t75 != 127789717334567LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x345 = INT16_MAX;
	static int16_t x346 = INT16_MIN;
	volatile uint32_t x347 = 214U;
	volatile int32_t x348 = 58;
	volatile int32_t t76 = -8686980;

	t76 = (x345-(x346+(x347<=x348)));

	if (t76 != 65535) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x349 = -36;
	volatile int16_t x350 = INT16_MIN;
	volatile uint32_t x351 = UINT32_MAX;
	int64_t x352 = INT64_MAX;
	static int32_t t77 = 49028530;

	t77 = (x349-(x350+(x351<=x352)));

	if (t77 != 32731) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x353 = -27;
	static int16_t x354 = -1;
	volatile uint32_t x355 = 131U;
	int8_t x356 = -1;

	t78 = (x353-(x354+(x355<=x356)));

	if (t78 != -27) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x357 = INT8_MAX;
	uint8_t x358 = UINT8_MAX;
	int8_t x359 = 1;
	int8_t x360 = -58;
	volatile int32_t t79 = -743889;

	t79 = (x357-(x358+(x359<=x360)));

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x361 = 179LLU;
	uint64_t x362 = 26971275373661332LLU;
	static int16_t x363 = 15914;
	int32_t x364 = -31;
	uint64_t t80 = 381243185117945LLU;

	t80 = (x361-(x362+(x363<=x364)));

	if (t80 != 18419772798335890463LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x365 = 0;
	static int8_t x366 = INT8_MAX;
	volatile uint16_t x367 = 30258U;
	uint64_t x368 = 52450175343974LLU;
	int32_t t81 = 20581811;

	t81 = (x365-(x366+(x367<=x368)));

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x369 = 548319112314666LLU;
	int64_t x370 = 1177753000317602LL;
	volatile int16_t x372 = INT16_MIN;
	uint64_t t82 = 4891528727466LLU;

	t82 = (x369-(x370+(x371<=x372)));

	if (t82 != 18446114639821548680LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x373 = 884789;
	int16_t x374 = -11;
	volatile int32_t x375 = INT32_MIN;
	volatile int32_t t83 = 516068579;

	t83 = (x373-(x374+(x375<=x376)));

	if (t83 != 884800) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x377 = UINT8_MAX;
	uint8_t x378 = 30U;
	static volatile int32_t t84 = -42;

	t84 = (x377-(x378+(x379<=x380)));

	if (t84 != 225) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x385 = UINT8_MAX;
	uint32_t x386 = UINT32_MAX;
	uint8_t x387 = UINT8_MAX;
	static int8_t x388 = -5;
	volatile uint32_t t85 = 93187138U;

	t85 = (x385-(x386+(x387<=x388)));

	if (t85 != 256U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x389 = UINT32_MAX;
	int32_t x390 = -3256783;
	int64_t x391 = -30LL;
	int8_t x392 = -1;
	uint32_t t86 = 1641573909U;

	t86 = (x389-(x390+(x391<=x392)));

	if (t86 != 3256781U) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x393 = INT8_MIN;
	uint32_t x394 = UINT32_MAX;
	uint64_t x395 = UINT64_MAX;
	uint32_t x396 = UINT32_MAX;
	volatile uint32_t t87 = 49795753U;

	t87 = (x393-(x394+(x395<=x396)));

	if (t87 != 4294967169U) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x397 = 180503LLU;
	volatile int16_t x398 = -3;
	volatile uint32_t x399 = 1028972U;
	uint64_t t88 = 1750647386817537608LLU;

	t88 = (x397-(x398+(x399<=x400)));

	if (t88 != 180505LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x401 = INT16_MIN;
	static int64_t x402 = INT64_MIN;
	static int16_t x403 = INT16_MIN;
	uint16_t x404 = 24312U;
	static int64_t t89 = -72053478964407637LL;

	t89 = (x401-(x402+(x403<=x404)));

	if (t89 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x405 = -241;
	static uint16_t x406 = 10U;
	int32_t x407 = INT32_MIN;
	uint16_t x408 = 20752U;

	t90 = (x405-(x406+(x407<=x408)));

	if (t90 != -252) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x409 = INT16_MAX;
	int8_t x410 = 3;
	volatile uint64_t x411 = 90749LLU;
	int8_t x412 = 38;
	static volatile int32_t t91 = 131;

	t91 = (x409-(x410+(x411<=x412)));

	if (t91 != 32764) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x413 = 784890329U;
	int16_t x414 = -602;
	volatile int16_t x415 = -11964;
	static int8_t x416 = -12;
	uint32_t t92 = 49U;

	t92 = (x413-(x414+(x415<=x416)));

	if (t92 != 784890930U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x417 = INT8_MAX;
	int32_t x419 = INT32_MAX;
	int32_t t93 = -92539269;

	t93 = (x417-(x418+(x419<=x420)));

	if (t93 != 32895) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x425 = -1;
	int8_t x427 = INT8_MIN;
	volatile int16_t x428 = -15237;
	volatile int32_t t94 = 40808821;

	t94 = (x425-(x426+(x427<=x428)));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x433 = 250345518280LL;
	int32_t x434 = INT32_MIN;
	static volatile uint16_t x435 = UINT16_MAX;
	volatile int64_t t95 = -1LL;

	t95 = (x433-(x434+(x435<=x436)));

	if (t95 != 252493001927LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x437 = 20U;
	uint16_t x438 = 0U;
	static volatile uint64_t x439 = UINT64_MAX;
	int16_t x440 = -186;

	t96 = (x437-(x438+(x439<=x440)));

	if (t96 != 20) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x441 = INT16_MAX;
	int16_t x442 = 0;
	int8_t x443 = 1;
	int32_t x444 = -1;
	int32_t t97 = -3930065;

	t97 = (x441-(x442+(x443<=x444)));

	if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x447 = 1;
	volatile int64_t x448 = INT64_MIN;

	t98 = (x445-(x446+(x447<=x448)));

	if (t98 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x449 = 0U;
	uint64_t x450 = 1LLU;
	static int64_t x451 = INT64_MIN;
	volatile int8_t x452 = -35;

	t99 = (x449-(x450+(x451<=x452)));

	if (t99 != 18446744073709551614LLU) { NG(); } else { ; }
	
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

