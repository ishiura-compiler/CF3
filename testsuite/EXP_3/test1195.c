#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x10 = 3244674U;
uint64_t t2 = 5526541280621LLU;
int8_t x22 = 1;
volatile int64_t x25 = INT64_MAX;
static uint16_t x29 = 3349U;
int8_t x32 = -1;
static uint32_t x43 = UINT32_MAX;
volatile int64_t x44 = -1LL;
volatile uint8_t x46 = 1U;
volatile int16_t x48 = INT16_MAX;
int64_t t12 = 3153686326LL;
int64_t t15 = 11LL;
static volatile int64_t x82 = INT64_MIN;
int64_t x83 = -574484935962789822LL;
volatile uint8_t x84 = 107U;
uint64_t x87 = 714560736766922127LLU;
int8_t x89 = -1;
uint64_t t21 = 3811136804223LLU;
static volatile uint64_t x97 = 9017291823362LLU;
static volatile int8_t x112 = INT8_MIN;
uint64_t x118 = 4507764541034338402LLU;
int16_t x119 = -1;
uint16_t x120 = UINT16_MAX;
int64_t x123 = INT64_MIN;
uint64_t x127 = 5472LLU;
uint32_t x132 = 13U;
int8_t x136 = 40;
uint32_t x144 = 1282580U;
uint8_t x150 = 28U;
static uint64_t x151 = UINT64_MAX;
volatile int8_t x154 = 19;
uint64_t x158 = 306545LLU;
uint64_t t37 = 1LLU;
static uint32_t x166 = 1005966U;
volatile uint32_t t39 = 15787981U;
int16_t x173 = -206;
int32_t x175 = INT32_MIN;
int32_t t41 = -147;
uint8_t x181 = 68U;
int32_t x182 = INT32_MIN;
static uint64_t t44 = 1012540663425045LLU;
static volatile int32_t t46 = 36;
volatile uint64_t t47 = 41352LLU;
int8_t x201 = INT8_MAX;
static int32_t x205 = 1234;
int64_t x206 = -5486803647LL;
volatile int16_t x207 = -1;
uint8_t x208 = 29U;
volatile int32_t t51 = -3;
int32_t t54 = -1788;
uint32_t x237 = UINT32_MAX;
int16_t x239 = -12542;
uint64_t t56 = 28189LLU;
static uint8_t x251 = 2U;
int64_t x258 = INT64_MAX;
volatile uint32_t x274 = 165U;
volatile int8_t x283 = INT8_MIN;
static uint8_t x288 = 11U;
uint32_t x293 = 18392U;
volatile int64_t t70 = -94616045056439556LL;
volatile uint64_t x309 = 124LLU;
int32_t x310 = -378;
int8_t x315 = INT8_MIN;
int8_t x318 = INT8_MAX;
static int32_t t73 = 1;
static volatile int16_t x325 = INT16_MIN;
volatile uint32_t t75 = 840U;
int32_t t76 = 23701616;
static volatile int8_t x333 = 1;
uint16_t x335 = 24499U;
uint32_t x338 = 38494908U;
static volatile int64_t x345 = -1LL;
volatile int8_t x356 = INT8_MAX;
int8_t x357 = INT8_MAX;
uint64_t x358 = 19364LLU;
volatile int64_t x363 = -1LL;
volatile int32_t t84 = 52916864;
volatile int16_t x380 = INT16_MIN;
uint8_t x381 = UINT8_MAX;
int16_t x384 = INT16_MAX;
volatile int32_t t93 = -28;
static volatile int32_t x406 = INT32_MAX;
int16_t x408 = -1;
volatile int64_t t94 = 5216LL;
int64_t x409 = -1LL;
int64_t t95 = 309924LL;
uint32_t x413 = 485565U;
static int16_t x414 = INT16_MIN;
int8_t x415 = -1;
uint32_t t96 = 3U;
int32_t x420 = -1;
volatile int64_t t97 = INT64_MIN;
int8_t x426 = INT8_MAX;
int8_t x428 = -1;


void f0(void) {
	int64_t x1 = -115468LL;
	volatile uint64_t x2 = UINT64_MAX;
	volatile int8_t x3 = 2;
	uint8_t x4 = 15U;
	volatile uint64_t t0 = 5LLU;

	t0 = ((x1+x2)|(x3==x4));

	if (t0 != 18446744073709436147LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MIN;
	uint64_t x6 = 3977661950268945LLU;
	int64_t x7 = INT64_MIN;
	int16_t x8 = INT16_MIN;
	volatile uint64_t t1 = 70414897787LLU;

	t1 = ((x5+x6)|(x7==x8));

	if (t1 != 3977659802785297LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	int64_t x11 = 4480354938994LL;
	int64_t x12 = INT64_MIN;

	t2 = ((x9+x10)|(x11==x12));

	if (t2 != 3244673LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint16_t x13 = 3U;
	int64_t x14 = 6477LL;
	static int8_t x15 = INT8_MIN;
	volatile int64_t x16 = INT64_MIN;
	volatile int64_t t3 = -3114206572080859500LL;

	t3 = ((x13+x14)|(x15==x16));

	if (t3 != 6480LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	int64_t x18 = 8706764842030910LL;
	int8_t x19 = -7;
	volatile int64_t x20 = INT64_MIN;
	volatile int64_t t4 = -42400LL;

	t4 = ((x17+x18)|(x19==x20));

	if (t4 != -9214665272012744898LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 342U;
	int8_t x23 = INT8_MIN;
	volatile uint64_t x24 = 3005717975472LLU;
	uint32_t t5 = 1U;

	t5 = ((x21+x22)|(x23==x24));

	if (t5 != 343U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = -1519579LL;
	static uint8_t x27 = 0U;
	int64_t x28 = INT64_MIN;
	int64_t t6 = -47903198938672LL;

	t6 = ((x25+x26)|(x27==x28));

	if (t6 != 9223372036853256228LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = -133627389LL;
	int16_t x31 = 1009;
	int64_t t7 = 5LL;

	t7 = ((x29+x30)|(x31==x32));

	if (t7 != -133624040LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint16_t x33 = 23U;
	static uint16_t x34 = UINT16_MAX;
	volatile uint32_t x35 = 215098U;
	volatile int64_t x36 = -1846173LL;
	static int32_t t8 = 1072;

	t8 = ((x33+x34)|(x35==x36));

	if (t8 != 65558) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = -87;
	volatile int8_t x38 = INT8_MIN;
	int32_t x39 = 6539;
	int64_t x40 = 1072635445681786LL;
	volatile int32_t t9 = -1;

	t9 = ((x37+x38)|(x39==x40));

	if (t9 != -215) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = INT8_MAX;
	int8_t x42 = INT8_MAX;
	static volatile int32_t t10 = 5887;

	t10 = ((x41+x42)|(x43==x44));

	if (t10 != 254) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = -67LL;
	int16_t x47 = INT16_MIN;
	int64_t t11 = 8LL;

	t11 = ((x45+x46)|(x47==x48));

	if (t11 != -66LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 4U;
	int64_t x50 = 479LL;
	uint16_t x51 = UINT16_MAX;
	uint16_t x52 = UINT16_MAX;

	t12 = ((x49+x50)|(x51==x52));

	if (t12 != 483LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x53 = INT8_MIN;
	int8_t x54 = INT8_MIN;
	volatile int64_t x55 = INT64_MIN;
	int32_t x56 = INT32_MIN;
	static int32_t t13 = -4015;

	t13 = ((x53+x54)|(x55==x56));

	if (t13 != -256) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = 14;
	uint64_t x62 = 253618308584LLU;
	int64_t x63 = -10690550286837370LL;
	int8_t x64 = INT8_MAX;
	volatile uint64_t t14 = 9976768725LLU;

	t14 = ((x61+x62)|(x63==x64));

	if (t14 != 253618308598LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = 1958U;
	int64_t x66 = -1LL;
	int16_t x67 = -633;
	volatile int64_t x68 = -1LL;

	t15 = ((x65+x66)|(x67==x68));

	if (t15 != 1957LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = -38;
	volatile int64_t x70 = INT64_MAX;
	uint16_t x71 = UINT16_MAX;
	int64_t x72 = INT64_MAX;
	volatile int64_t t16 = 20801LL;

	t16 = ((x69+x70)|(x71==x72));

	if (t16 != 9223372036854775769LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = 117112902733LL;
	int8_t x74 = INT8_MIN;
	uint64_t x75 = 3498988608LLU;
	int64_t x76 = -30729227938LL;
	int64_t t17 = 12903860435766LL;

	t17 = ((x73+x74)|(x75==x76));

	if (t17 != 117112902605LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint8_t x77 = 13U;
	int64_t x78 = 17036913161690LL;
	uint64_t x79 = 10095085868392627LLU;
	int32_t x80 = INT32_MIN;
	volatile int64_t t18 = 9878545954543LL;

	t18 = ((x77+x78)|(x79==x80));

	if (t18 != 17036913161703LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x81 = UINT32_MAX;
	static int64_t t19 = -15533LL;

	t19 = ((x81+x82)|(x83==x84));

	if (t19 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = -1;
	volatile uint8_t x86 = UINT8_MAX;
	static int8_t x88 = INT8_MAX;
	int32_t t20 = -301480646;

	t20 = ((x85+x86)|(x87==x88));

	if (t20 != 254) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x90 = 6426535998439278LLU;
	int64_t x91 = -1LL;
	int8_t x92 = -1;

	t21 = ((x89+x90)|(x91==x92));

	if (t21 != 6426535998439277LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = 0;
	int32_t x94 = INT32_MAX;
	int16_t x95 = -229;
	static int64_t x96 = 448457378LL;
	volatile int32_t t22 = INT32_MAX;

	t22 = ((x93+x94)|(x95==x96));

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x98 = 1;
	int8_t x99 = INT8_MAX;
	volatile uint64_t x100 = 1151607022LLU;
	volatile uint64_t t23 = 107LLU;

	t23 = ((x97+x98)|(x99==x100));

	if (t23 != 9017291823363LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x105 = INT8_MIN;
	static int16_t x106 = INT16_MAX;
	int32_t x107 = INT32_MIN;
	int32_t x108 = INT32_MIN;
	volatile int32_t t24 = -2019;

	t24 = ((x105+x106)|(x107==x108));

	if (t24 != 32639) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = -1LL;
	volatile uint64_t x110 = 314LLU;
	int64_t x111 = INT64_MIN;
	uint64_t t25 = 299130114631529LLU;

	t25 = ((x109+x110)|(x111==x112));

	if (t25 != 313LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x113 = INT32_MIN;
	volatile uint64_t x114 = 868240293666104LLU;
	uint8_t x115 = 38U;
	int8_t x116 = INT8_MAX;
	volatile uint64_t t26 = 12280486788938927LLU;

	t26 = ((x113+x114)|(x115==x116));

	if (t26 != 868238146182456LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x117 = 93U;
	volatile uint64_t t27 = 337231028752LLU;

	t27 = ((x117+x118)|(x119==x120));

	if (t27 != 4507764541034338495LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = INT8_MAX;
	static volatile uint8_t x122 = 0U;
	uint32_t x124 = 7429U;
	static int32_t t28 = 14;

	t28 = ((x121+x122)|(x123==x124));

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = 26097;
	uint64_t x126 = 121441531448515LLU;
	int32_t x128 = INT32_MAX;
	static volatile uint64_t t29 = 103639LLU;

	t29 = ((x125+x126)|(x127==x128));

	if (t29 != 121441531474612LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = -59186;
	volatile uint64_t x130 = 1869LLU;
	volatile int8_t x131 = 63;
	volatile uint64_t t30 = 276293985187992342LLU;

	t30 = ((x129+x130)|(x131==x132));

	if (t30 != 18446744073709494299LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x133 = UINT32_MAX;
	int64_t x134 = INT64_MIN;
	int8_t x135 = 5;
	int64_t t31 = -66LL;

	t31 = ((x133+x134)|(x135==x136));

	if (t31 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = 1;
	int16_t x138 = INT16_MAX;
	volatile int8_t x139 = 11;
	int16_t x140 = INT16_MAX;
	int32_t t32 = -278729;

	t32 = ((x137+x138)|(x139==x140));

	if (t32 != 32768) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x141 = INT8_MAX;
	int8_t x142 = INT8_MIN;
	uint8_t x143 = UINT8_MAX;
	int32_t t33 = -1055;

	t33 = ((x141+x142)|(x143==x144));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x145 = UINT32_MAX;
	int64_t x146 = -1LL;
	static int32_t x147 = 112316473;
	int64_t x148 = -2679233809976300LL;
	int64_t t34 = 626417561151722383LL;

	t34 = ((x145+x146)|(x147==x148));

	if (t34 != 4294967294LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x149 = -1;
	int8_t x152 = INT8_MIN;
	volatile int32_t t35 = 54;

	t35 = ((x149+x150)|(x151==x152));

	if (t35 != 27) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = INT16_MAX;
	int8_t x155 = INT8_MIN;
	static int64_t x156 = 45019602571LL;
	int32_t t36 = -5;

	t36 = ((x153+x154)|(x155==x156));

	if (t36 != 32786) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x157 = 94U;
	static uint64_t x159 = 0LLU;
	uint32_t x160 = 76137174U;

	t37 = ((x157+x158)|(x159==x160));

	if (t37 != 306639LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x161 = -8740;
	uint32_t x162 = 229524U;
	uint8_t x163 = 0U;
	int8_t x164 = INT8_MIN;
	static volatile uint32_t t38 = 16151U;

	t38 = ((x161+x162)|(x163==x164));

	if (t38 != 220784U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x165 = UINT8_MAX;
	int8_t x167 = -1;
	int32_t x168 = -1;

	t39 = ((x165+x166)|(x167==x168));

	if (t39 != 1006221U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = 0;
	volatile uint16_t x170 = 7406U;
	int16_t x171 = -1;
	uint32_t x172 = UINT32_MAX;
	volatile int32_t t40 = 109485;

	t40 = ((x169+x170)|(x171==x172));

	if (t40 != 7407) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x174 = 5;
	int64_t x176 = -1LL;

	t41 = ((x173+x174)|(x175==x176));

	if (t41 != -201) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x177 = 25LLU;
	uint64_t x178 = 1667636LLU;
	static int16_t x179 = INT16_MIN;
	int16_t x180 = INT16_MAX;
	uint64_t t42 = 20632250748596LLU;

	t42 = ((x177+x178)|(x179==x180));

	if (t42 != 1667661LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x183 = 17217;
	volatile uint32_t x184 = UINT32_MAX;
	volatile int32_t t43 = -3;

	t43 = ((x181+x182)|(x183==x184));

	if (t43 != -2147483580) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x185 = UINT64_MAX;
	int16_t x186 = 5573;
	uint16_t x187 = UINT16_MAX;
	int16_t x188 = INT16_MIN;

	t44 = ((x185+x186)|(x187==x188));

	if (t44 != 5572LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x189 = 96456U;
	int16_t x190 = -1;
	int64_t x191 = INT64_MAX;
	int8_t x192 = INT8_MIN;
	uint32_t t45 = 1U;

	t45 = ((x189+x190)|(x191==x192));

	if (t45 != 96455U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x193 = INT8_MAX;
	int16_t x194 = INT16_MAX;
	int64_t x195 = -1LL;
	int8_t x196 = INT8_MIN;

	t46 = ((x193+x194)|(x195==x196));

	if (t46 != 32894) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x197 = 0U;
	uint64_t x198 = 11577LLU;
	static int64_t x199 = -1LL;
	uint16_t x200 = 2U;

	t47 = ((x197+x198)|(x199==x200));

	if (t47 != 11577LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x202 = -2;
	uint16_t x203 = 1633U;
	int32_t x204 = INT32_MIN;
	static int32_t t48 = 1492596;

	t48 = ((x201+x202)|(x203==x204));

	if (t48 != 125) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t t49 = -1877149854LL;

	t49 = ((x205+x206)|(x207==x208));

	if (t49 != -5486802413LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x209 = -1LL;
	int8_t x210 = INT8_MIN;
	int16_t x211 = -1624;
	int16_t x212 = INT16_MAX;
	int64_t t50 = 5070046378859879LL;

	t50 = ((x209+x210)|(x211==x212));

	if (t50 != -129LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x213 = INT8_MIN;
	uint16_t x214 = 13U;
	uint64_t x215 = 12955LLU;
	int64_t x216 = -1LL;

	t51 = ((x213+x214)|(x215==x216));

	if (t51 != -115) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x221 = 456726U;
	static int16_t x222 = -1;
	uint32_t x223 = UINT32_MAX;
	uint64_t x224 = 435626195LLU;
	volatile uint32_t t52 = 222U;

	t52 = ((x221+x222)|(x223==x224));

	if (t52 != 456725U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x225 = 400;
	int64_t x226 = INT64_MIN;
	uint8_t x227 = UINT8_MAX;
	uint64_t x228 = 4LLU;
	int64_t t53 = 86LL;

	t53 = ((x225+x226)|(x227==x228));

	if (t53 != -9223372036854775408LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x229 = INT8_MAX;
	int32_t x230 = INT32_MIN;
	int16_t x231 = 1;
	int32_t x232 = -1;

	t54 = ((x229+x230)|(x231==x232));

	if (t54 != -2147483521) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x233 = -1;
	volatile int64_t x234 = -120LL;
	int8_t x235 = INT8_MAX;
	int16_t x236 = INT16_MIN;
	volatile int64_t t55 = 2723LL;

	t55 = ((x233+x234)|(x235==x236));

	if (t55 != -121LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x238 = 88042062LLU;
	int32_t x240 = 278692;

	t56 = ((x237+x238)|(x239==x240));

	if (t56 != 4383009357LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x241 = INT32_MAX;
	int64_t x242 = 2172210116164664LL;
	int32_t x243 = 8939;
	int32_t x244 = -1;
	volatile int64_t t57 = 7974478019875LL;

	t57 = ((x241+x242)|(x243==x244));

	if (t57 != 2172212263648311LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x249 = INT64_MAX;
	int16_t x250 = INT16_MIN;
	static volatile uint64_t x252 = 154912688574805243LLU;
	int64_t t58 = -503511564318LL;

	t58 = ((x249+x250)|(x251==x252));

	if (t58 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x253 = 0U;
	uint64_t x254 = 1490LLU;
	int32_t x255 = -1;
	volatile int64_t x256 = -49306014353LL;
	volatile uint64_t t59 = 5210399LLU;

	t59 = ((x253+x254)|(x255==x256));

	if (t59 != 1490LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x257 = INT16_MIN;
	int8_t x259 = -1;
	volatile uint8_t x260 = 60U;
	static int64_t t60 = 4LL;

	t60 = ((x257+x258)|(x259==x260));

	if (t60 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x261 = 1955076U;
	int8_t x262 = INT8_MIN;
	static uint16_t x263 = 468U;
	volatile int16_t x264 = INT16_MIN;
	volatile uint32_t t61 = 120796U;

	t61 = ((x261+x262)|(x263==x264));

	if (t61 != 1954948U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x265 = 32LLU;
	int16_t x266 = -1;
	static int64_t x267 = INT64_MIN;
	static uint16_t x268 = 317U;
	uint64_t t62 = 3619534905484496LLU;

	t62 = ((x265+x266)|(x267==x268));

	if (t62 != 31LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x269 = -1;
	volatile uint8_t x270 = UINT8_MAX;
	int16_t x271 = INT16_MIN;
	int16_t x272 = -14933;
	int32_t t63 = 31089518;

	t63 = ((x269+x270)|(x271==x272));

	if (t63 != 254) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x273 = UINT32_MAX;
	int8_t x275 = -1;
	int64_t x276 = -521376658LL;
	uint32_t t64 = 4U;

	t64 = ((x273+x274)|(x275==x276));

	if (t64 != 164U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x277 = 1022LLU;
	int8_t x278 = 1;
	volatile int32_t x279 = -24787;
	volatile int64_t x280 = INT64_MIN;
	volatile uint64_t t65 = 33LLU;

	t65 = ((x277+x278)|(x279==x280));

	if (t65 != 1023LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x281 = UINT32_MAX;
	int16_t x282 = -1827;
	static volatile int32_t x284 = -1;
	static volatile uint32_t t66 = 76652U;

	t66 = ((x281+x282)|(x283==x284));

	if (t66 != 4294965468U) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x285 = INT8_MAX;
	uint64_t x286 = UINT64_MAX;
	static int16_t x287 = INT16_MIN;
	volatile uint64_t t67 = 6451046LLU;

	t67 = ((x285+x286)|(x287==x288));

	if (t67 != 126LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x289 = -1;
	int8_t x290 = -1;
	static int8_t x291 = -1;
	static int32_t x292 = INT32_MIN;
	volatile int32_t t68 = 207;

	t68 = ((x289+x290)|(x291==x292));

	if (t68 != -2) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x294 = INT64_MIN;
	uint32_t x295 = 337981U;
	volatile int32_t x296 = -1;
	int64_t t69 = 7LL;

	t69 = ((x293+x294)|(x295==x296));

	if (t69 != -9223372036854757416LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x301 = -372604173833747LL;
	static int16_t x302 = -1;
	int64_t x303 = INT64_MAX;
	int8_t x304 = 20;

	t70 = ((x301+x302)|(x303==x304));

	if (t70 != -372604173833748LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x311 = 650804665218848LLU;
	volatile uint8_t x312 = 88U;
	uint64_t t71 = 386LLU;

	t71 = ((x309+x310)|(x311==x312));

	if (t71 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x313 = -349040480LL;
	int32_t x314 = -1071;
	volatile uint16_t x316 = 1U;
	static int64_t t72 = -7648411736359LL;

	t72 = ((x313+x314)|(x315==x316));

	if (t72 != -349041551LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x317 = UINT8_MAX;
	uint64_t x319 = 1365766818014LLU;
	static volatile uint16_t x320 = 30U;

	t73 = ((x317+x318)|(x319==x320));

	if (t73 != 382) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x321 = UINT64_MAX;
	static int16_t x322 = 0;
	volatile uint16_t x323 = UINT16_MAX;
	uint8_t x324 = 6U;
	volatile uint64_t t74 = UINT64_MAX;

	t74 = ((x321+x322)|(x323==x324));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x326 = 49073012U;
	static uint16_t x327 = 2158U;
	static int64_t x328 = INT64_MIN;

	t75 = ((x325+x326)|(x327==x328));

	if (t75 != 49040244U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x329 = -1;
	volatile int16_t x330 = INT16_MIN;
	int64_t x331 = -1LL;
	volatile uint16_t x332 = 1U;

	t76 = ((x329+x330)|(x331==x332));

	if (t76 != -32769) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x334 = 28247U;
	uint32_t x336 = UINT32_MAX;
	uint32_t t77 = 9538715U;

	t77 = ((x333+x334)|(x335==x336));

	if (t77 != 28248U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x337 = UINT16_MAX;
	static uint16_t x339 = UINT16_MAX;
	static int8_t x340 = INT8_MIN;
	volatile uint32_t t78 = 4U;

	t78 = ((x337+x338)|(x339==x340));

	if (t78 != 38560443U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x341 = 39489485U;
	volatile int16_t x342 = 97;
	static volatile int64_t x343 = INT64_MAX;
	int64_t x344 = -1LL;
	static volatile uint32_t t79 = 1501U;

	t79 = ((x341+x342)|(x343==x344));

	if (t79 != 39489582U) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x346 = 111U;
	int16_t x347 = -1;
	int8_t x348 = INT8_MIN;
	volatile int64_t t80 = 2773LL;

	t80 = ((x345+x346)|(x347==x348));

	if (t80 != 110LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x349 = 749;
	int8_t x350 = INT8_MIN;
	uint64_t x351 = 103400LLU;
	uint32_t x352 = 0U;
	volatile int32_t t81 = -6140060;

	t81 = ((x349+x350)|(x351==x352));

	if (t81 != 621) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x353 = -15693LL;
	uint8_t x354 = 55U;
	int32_t x355 = INT32_MIN;
	volatile int64_t t82 = 13057891646LL;

	t82 = ((x353+x354)|(x355==x356));

	if (t82 != -15638LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x359 = 1016459553075222LLU;
	int64_t x360 = 74081LL;
	uint64_t t83 = 8417960637955LLU;

	t83 = ((x357+x358)|(x359==x360));

	if (t83 != 19491LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x361 = 12U;
	int16_t x362 = INT16_MIN;
	int64_t x364 = -354575137859772504LL;

	t84 = ((x361+x362)|(x363==x364));

	if (t84 != -32756) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x365 = -80398232508730537LL;
	static uint32_t x366 = 10U;
	int32_t x367 = INT32_MIN;
	static uint16_t x368 = 11U;
	int64_t t85 = 367649385615848LL;

	t85 = ((x365+x366)|(x367==x368));

	if (t85 != -80398232508730527LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x369 = -1LL;
	int64_t x370 = -158LL;
	uint8_t x371 = 104U;
	static volatile uint32_t x372 = 49453355U;
	int64_t t86 = -1LL;

	t86 = ((x369+x370)|(x371==x372));

	if (t86 != -159LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x373 = 3105;
	int8_t x374 = INT8_MIN;
	int16_t x375 = 1254;
	uint32_t x376 = UINT32_MAX;
	int32_t t87 = 26404810;

	t87 = ((x373+x374)|(x375==x376));

	if (t87 != 2977) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x377 = -1;
	static int16_t x378 = INT16_MIN;
	uint8_t x379 = 1U;
	volatile int32_t t88 = 3;

	t88 = ((x377+x378)|(x379==x380));

	if (t88 != -32769) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x382 = UINT16_MAX;
	uint16_t x383 = UINT16_MAX;
	volatile int32_t t89 = 0;

	t89 = ((x381+x382)|(x383==x384));

	if (t89 != 65790) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x389 = UINT8_MAX;
	uint64_t x390 = 253464649283164LLU;
	int32_t x391 = INT32_MIN;
	static int64_t x392 = INT64_MIN;
	uint64_t t90 = 2763LLU;

	t90 = ((x389+x390)|(x391==x392));

	if (t90 != 253464649283419LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x393 = 460725718LLU;
	volatile uint32_t x394 = 42U;
	volatile int32_t x395 = -1;
	int32_t x396 = 115116083;
	uint64_t t91 = 20812LLU;

	t91 = ((x393+x394)|(x395==x396));

	if (t91 != 460725760LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x397 = -6762084783LL;
	uint8_t x398 = 13U;
	static int32_t x399 = -9669;
	int8_t x400 = -1;
	volatile int64_t t92 = 17LL;

	t92 = ((x397+x398)|(x399==x400));

	if (t92 != -6762084770LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x401 = INT8_MIN;
	uint8_t x402 = 3U;
	static int64_t x403 = 9LL;
	static int64_t x404 = 2760LL;

	t93 = ((x401+x402)|(x403==x404));

	if (t93 != -125) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x405 = -1LL;
	int64_t x407 = -45LL;

	t94 = ((x405+x406)|(x407==x408));

	if (t94 != 2147483646LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x410 = 1;
	int16_t x411 = INT16_MIN;
	int64_t x412 = 343080933374683LL;

	t95 = ((x409+x410)|(x411==x412));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x416 = -1441;

	t96 = ((x413+x414)|(x415==x416));

	if (t96 != 452797U) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x417 = INT64_MIN;
	int32_t x418 = 0;
	int8_t x419 = INT8_MAX;

	t97 = ((x417+x418)|(x419==x420));

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x421 = INT8_MIN;
	volatile int8_t x422 = INT8_MIN;
	int16_t x423 = 94;
	int8_t x424 = -1;
	volatile int32_t t98 = 462947225;

	t98 = ((x421+x422)|(x423==x424));

	if (t98 != -256) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x425 = 78U;
	volatile int8_t x427 = 3;
	volatile int32_t t99 = -2746;

	t99 = ((x425+x426)|(x427==x428));

	if (t99 != 205) { NG(); } else { ; }
	
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

