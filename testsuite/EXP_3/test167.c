#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x1 = 112884;
static volatile int16_t x17 = INT16_MIN;
static uint32_t x18 = UINT32_MAX;
uint8_t x20 = 21U;
static uint32_t t4 = 150U;
static int64_t x23 = 59368182640LL;
int32_t x25 = 105180058;
int64_t x27 = -1LL;
int32_t x34 = INT32_MIN;
int64_t t8 = 22215406LL;
uint16_t x41 = 4226U;
static int64_t x46 = -1LL;
volatile int8_t x49 = 1;
static volatile int32_t t12 = 204857;
static uint64_t x54 = 976916510653LLU;
static int64_t x57 = INT64_MAX;
int8_t x64 = INT8_MAX;
int64_t x68 = -1LL;
int64_t x71 = -16015LL;
uint64_t x72 = 128485413LLU;
static int8_t x73 = -1;
int16_t x84 = INT16_MIN;
uint16_t x86 = 3553U;
uint8_t x89 = UINT8_MAX;
volatile int64_t t22 = -2726731829LL;
int32_t x95 = -1;
static int8_t x96 = INT8_MIN;
static int16_t x102 = -1;
static int8_t x103 = INT8_MIN;
volatile uint32_t x126 = UINT32_MAX;
uint8_t x130 = 100U;
int32_t x133 = INT32_MAX;
int8_t x134 = INT8_MIN;
volatile uint64_t t31 = 475991359715011829LLU;
int16_t x145 = INT16_MIN;
int64_t x151 = -95542737LL;
volatile int64_t x152 = INT64_MAX;
int8_t x154 = 0;
uint32_t t34 = 19066700U;
uint32_t x158 = 1089U;
int16_t x159 = INT16_MIN;
volatile int8_t x163 = -1;
uint16_t x171 = 5U;
volatile int32_t t39 = -12901;
volatile uint32_t x183 = 2U;
volatile int64_t t42 = 375509211953582LL;
int64_t x190 = -3728649631393576LL;
static volatile uint16_t x192 = 9795U;
static int16_t x195 = -3697;
int16_t x201 = INT16_MIN;
volatile uint16_t x207 = UINT16_MAX;
int64_t x209 = INT64_MIN;
int64_t t49 = -199LL;
volatile uint64_t x222 = 2790370879935LLU;
static int16_t x229 = -46;
uint16_t x232 = 603U;
static int64_t t52 = 122LL;
volatile int16_t x239 = INT16_MIN;
uint8_t x241 = 91U;
static uint32_t x245 = 14385U;
int16_t x247 = INT16_MIN;
volatile uint32_t t55 = 556611720U;
int16_t x253 = 1;
int32_t x256 = 1;
volatile uint8_t x257 = 22U;
volatile int64_t t59 = -13LL;
uint64_t x272 = 3482998576139LLU;
uint64_t t61 = 4LLU;
static volatile int64_t x273 = INT64_MIN;
static uint16_t x293 = 305U;
uint16_t x296 = 2U;
int32_t x298 = INT32_MIN;
volatile int64_t x303 = INT64_MAX;
int16_t x305 = INT16_MIN;
static int32_t x310 = -1;
static int32_t x320 = -123340138;
int8_t x333 = 27;
uint8_t x338 = 0U;
int32_t x341 = INT32_MAX;
uint32_t x343 = 313U;
uint32_t x347 = 201811U;
int8_t x354 = 1;
uint16_t x363 = 111U;
volatile uint32_t t81 = 95197641U;
static int32_t x366 = INT32_MIN;
volatile uint64_t x367 = 40208788933337248LLU;
uint16_t x371 = UINT16_MAX;
int16_t x372 = INT16_MAX;
int32_t t83 = 1624746;
static volatile int8_t x376 = INT8_MAX;
int32_t x377 = 7;
int32_t x379 = INT32_MIN;
volatile uint16_t x380 = 9U;
volatile int8_t x383 = INT8_MIN;
uint64_t x384 = 13638750871690025LLU;
uint16_t x391 = 39U;
volatile int64_t x396 = -217862276436LL;
static int8_t x402 = INT8_MIN;
int16_t x406 = INT16_MAX;
static int32_t x407 = -1;
uint16_t x408 = UINT16_MAX;
int32_t t91 = 14161764;
uint16_t x412 = 233U;
uint64_t x414 = 245397562135LLU;
volatile int16_t x415 = INT16_MIN;
int8_t x422 = INT8_MAX;
volatile int64_t x426 = 3787621881677LL;
volatile int32_t x428 = INT32_MAX;
volatile int64_t t97 = -230241042247390LL;
int32_t x436 = INT32_MIN;
int32_t x438 = 1;
static int64_t x439 = -20562978506989LL;


void f0(void) {
	uint32_t x2 = 5U;
	int32_t x3 = -1;
	int32_t x4 = 15;
	uint32_t t0 = 1297U;

	t0 = ((x1^x2)&(x3+x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = 3;
	uint32_t x6 = UINT32_MAX;
	int8_t x7 = INT8_MAX;
	int16_t x8 = INT16_MIN;
	volatile uint32_t t1 = 28727950U;

	t1 = ((x5^x6)&(x7+x8));

	if (t1 != 4294934652U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	volatile int32_t x10 = INT32_MIN;
	static int32_t x11 = INT32_MIN;
	volatile uint16_t x12 = 9U;
	volatile int32_t t2 = -2;

	t2 = ((x9^x10)&(x11+x12));

	if (t2 != -2147483639) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	uint16_t x14 = 1220U;
	int32_t x15 = -788470;
	int32_t x16 = -29;
	static volatile int32_t t3 = -109895;

	t3 = ((x13^x14)&(x15+x16));

	if (t3 != -817980) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x19 = INT8_MIN;

	t4 = ((x17^x18)&(x19+x20));

	if (t4 != 32661U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	int64_t x22 = 203836LL;
	int16_t x24 = -1;
	int64_t t5 = -22246970LL;

	t5 = ((x21^x22)&(x23+x24));

	if (t5 != 59368047427LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x26 = UINT32_MAX;
	int8_t x28 = -1;
	int64_t t6 = -3568675835389229510LL;

	t6 = ((x25^x26)&(x27+x28));

	if (t6 != 4189787236LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 33549020262LL;
	int16_t x30 = INT16_MIN;
	volatile int8_t x31 = INT8_MAX;
	int32_t x32 = -1;
	static int64_t t7 = 347298649LL;

	t7 = ((x29^x30)&(x31+x32));

	if (t7 != 102LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = 10719511716307LL;
	volatile int8_t x35 = 0;
	volatile int32_t x36 = -1;

	t8 = ((x33^x34)&(x35+x36));

	if (t8 != -10718817541677LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x37 = 0U;
	int8_t x38 = INT8_MAX;
	int32_t x39 = 780;
	uint64_t x40 = UINT64_MAX;
	uint64_t t9 = 28979429LLU;

	t9 = ((x37^x38)&(x39+x40));

	if (t9 != 11LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x42 = 0;
	int32_t x43 = -688692633;
	uint64_t x44 = UINT64_MAX;
	volatile uint64_t t10 = 24171LLU;

	t10 = ((x41^x42)&(x43+x44));

	if (t10 != 2LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	int64_t x47 = 432644LL;
	int64_t x48 = INT64_MIN;
	int64_t t11 = 32386522705509828LL;

	t11 = ((x45^x46)&(x47+x48));

	if (t11 != 432644LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x50 = 5569U;
	int16_t x51 = -1;
	int16_t x52 = -1;

	t12 = ((x49^x50)&(x51+x52));

	if (t12 != 5568) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	int16_t x55 = -1;
	int32_t x56 = -809054628;
	uint64_t t13 = 1790LLU;

	t13 = ((x53^x54)&(x55+x56));

	if (t13 != 18446743096789305410LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x58 = 99U;
	int8_t x59 = INT8_MIN;
	static int8_t x60 = 5;
	int64_t t14 = -11LL;

	t14 = ((x57^x58)&(x59+x60));

	if (t14 != 9223372036854775684LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = -1;
	volatile int16_t x62 = 0;
	static uint64_t x63 = 3898278288785959LLU;
	volatile uint64_t t15 = 77999502LLU;

	t15 = ((x61^x62)&(x63+x64));

	if (t15 != 3898278288786086LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = 911;
	static int16_t x66 = -1;
	int32_t x67 = INT32_MAX;
	static int64_t t16 = 10457698LL;

	t16 = ((x65^x66)&(x67+x68));

	if (t16 != 2147482736LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = 8296724504LL;
	volatile int32_t x70 = -1;
	volatile uint64_t t17 = 139LLU;

	t17 = ((x69^x70)&(x71+x72));

	if (t17 != 19399046LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x74 = 49;
	int8_t x75 = -1;
	static uint8_t x76 = UINT8_MAX;
	static volatile int32_t t18 = -1;

	t18 = ((x73^x74)&(x75+x76));

	if (t18 != 206) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = -1;
	int8_t x78 = -1;
	int8_t x79 = INT8_MIN;
	volatile int16_t x80 = INT16_MAX;
	int32_t t19 = -24;

	t19 = ((x77^x78)&(x79+x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	uint64_t x82 = 3LLU;
	static uint16_t x83 = UINT16_MAX;
	uint64_t t20 = 5230LLU;

	t20 = ((x81^x82)&(x83+x84));

	if (t20 != 3LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 1U;
	static uint32_t x87 = UINT32_MAX;
	int64_t x88 = INT64_MIN;
	int64_t t21 = -16515856054628LL;

	t21 = ((x85^x86)&(x87+x88));

	if (t21 != 3552LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x90 = INT64_MIN;
	int64_t x91 = 3613347908LL;
	uint32_t x92 = 14U;

	t22 = ((x89^x90)&(x91+x92));

	if (t22 != 82LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -1LL;
	static uint8_t x94 = 0U;
	int64_t t23 = 5797250146958LL;

	t23 = ((x93^x94)&(x95+x96));

	if (t23 != -129LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = 12153598LL;
	volatile int32_t x98 = INT32_MIN;
	uint32_t x99 = 1217U;
	volatile uint64_t x100 = UINT64_MAX;
	uint64_t t24 = 4LLU;

	t24 = ((x97^x98)&(x99+x100));

	if (t24 != 192LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -130217845739LL;
	uint64_t x104 = 1185106562191460243LLU;
	volatile uint64_t t25 = 494410986479LLU;

	t25 = ((x101^x102)&(x103+x104));

	if (t25 != 8589935362LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	int16_t x106 = INT16_MIN;
	uint64_t x107 = 71LLU;
	uint8_t x108 = 7U;
	static volatile uint64_t t26 = 19637283LLU;

	t26 = ((x105^x106)&(x107+x108));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	uint64_t x110 = 506847905LLU;
	int32_t x111 = 505834;
	volatile uint64_t x112 = 84832898708426249LLU;
	volatile uint64_t t27 = 102487240187205841LLU;

	t27 = ((x109^x110)&(x111+x112));

	if (t27 != 135266465LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x125 = UINT32_MAX;
	int16_t x127 = 22;
	int32_t x128 = INT32_MIN;
	volatile uint32_t t28 = 100U;

	t28 = ((x125^x126)&(x127+x128));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x129 = INT16_MAX;
	uint64_t x131 = UINT64_MAX;
	uint64_t x132 = 7433135919LLU;
	volatile uint64_t t29 = 67027985LLU;

	t29 = ((x129^x130)&(x131+x132));

	if (t29 != 9994LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x135 = -805942826LL;
	uint64_t x136 = UINT64_MAX;
	static volatile uint64_t t30 = 102749LLU;

	t30 = ((x133^x134)&(x135+x136));

	if (t30 != 18446744071562068053LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x137 = 34U;
	volatile int16_t x138 = -1;
	volatile int8_t x139 = INT8_MIN;
	static uint64_t x140 = UINT64_MAX;

	t31 = ((x137^x138)&(x139+x140));

	if (t31 != 18446744073709551453LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x146 = INT32_MIN;
	static int64_t x147 = 107LL;
	uint32_t x148 = UINT32_MAX;
	static volatile int64_t t32 = 61117LL;

	t32 = ((x145^x146)&(x147+x148));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x149 = 1871U;
	static int32_t x150 = -696556;
	volatile int64_t t33 = -3480004LL;

	t33 = ((x149^x150)&(x151+x152));

	if (t33 != 9223372036758568970LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x153 = UINT32_MAX;
	volatile uint16_t x155 = 46U;
	uint32_t x156 = 28311U;

	t34 = ((x153^x154)&(x155+x156));

	if (t34 != 28357U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x157 = 877U;
	volatile int16_t x160 = INT16_MIN;
	static uint32_t t35 = 704518496U;

	t35 = ((x157^x158)&(x159+x160));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x161 = 414U;
	uint64_t x162 = 1771020LLU;
	static int64_t x164 = -5746887LL;
	uint64_t t36 = 1372053344219LLU;

	t36 = ((x161^x162)&(x163+x164));

	if (t36 != 526096LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x165 = -1LL;
	static uint32_t x166 = 43141U;
	uint8_t x167 = UINT8_MAX;
	volatile uint8_t x168 = 8U;
	int64_t t37 = 213364614089591LL;

	t37 = ((x165^x166)&(x167+x168));

	if (t37 != 258LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x169 = INT16_MAX;
	uint16_t x170 = 0U;
	volatile int32_t x172 = -1;
	int32_t t38 = 12;

	t38 = ((x169^x170)&(x171+x172));

	if (t38 != 4) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x173 = INT8_MAX;
	static uint16_t x174 = 216U;
	volatile int16_t x175 = -1;
	uint8_t x176 = 23U;

	t39 = ((x173^x174)&(x175+x176));

	if (t39 != 6) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x177 = -1;
	int16_t x178 = -1;
	volatile int16_t x179 = INT16_MAX;
	static int64_t x180 = 3590245596292436LL;
	volatile int64_t t40 = -395251982920572LL;

	t40 = ((x177^x178)&(x179+x180));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x181 = -265685283LL;
	uint32_t x182 = 21428U;
	static volatile int8_t x184 = -1;
	static volatile int64_t t41 = -14844532LL;

	t41 = ((x181^x182)&(x183+x184));

	if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x185 = 855849370;
	int64_t x186 = 87535054452603857LL;
	volatile int32_t x187 = INT32_MAX;
	int32_t x188 = INT32_MIN;

	t42 = ((x185^x186)&(x187+x188));

	if (t42 != 87535054704181835LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x189 = INT16_MIN;
	volatile uint8_t x191 = 100U;
	int64_t t43 = -3956219266252LL;

	t43 = ((x189^x190)&(x191+x192));

	if (t43 != 128LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x193 = -223357368LL;
	int16_t x194 = INT16_MAX;
	static uint32_t x196 = 158388U;
	int64_t t44 = -34493LL;

	t44 = ((x193^x194)&(x195+x196));

	if (t44 != 133123LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x197 = -226374LL;
	volatile int64_t x198 = INT64_MIN;
	int64_t x199 = INT64_MIN;
	int16_t x200 = 12;
	int64_t t45 = 34292LL;

	t45 = ((x197^x198)&(x199+x200));

	if (t45 != 8LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x202 = 0U;
	int8_t x203 = 0;
	int8_t x204 = -1;
	int32_t t46 = -2;

	t46 = ((x201^x202)&(x203+x204));

	if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x205 = INT8_MIN;
	volatile uint64_t x206 = 16475521LLU;
	static volatile int16_t x208 = INT16_MAX;
	volatile uint64_t t47 = 161LLU;

	t47 = ((x205^x206)&(x207+x208));

	if (t47 != 6656LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x210 = UINT32_MAX;
	volatile uint32_t x211 = UINT32_MAX;
	int32_t x212 = INT32_MAX;
	static volatile int64_t t48 = 7838LL;

	t48 = ((x209^x210)&(x211+x212));

	if (t48 != 2147483646LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x213 = UINT16_MAX;
	volatile int8_t x214 = -3;
	volatile int64_t x215 = INT64_MAX;
	int64_t x216 = INT64_MIN;

	t49 = ((x213^x214)&(x215+x216));

	if (t49 != -65534LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x221 = INT64_MIN;
	static int8_t x223 = -7;
	int32_t x224 = -69770527;
	uint64_t t50 = 7893302920890LLU;

	t50 = ((x221^x222)&(x223+x224));

	if (t50 != 9223374827158511770LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x230 = 1U;
	int8_t x231 = 1;
	volatile int32_t t51 = -68243149;

	t51 = ((x229^x230)&(x231+x232));

	if (t51 != 592) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x233 = -36;
	int8_t x234 = -1;
	volatile int64_t x235 = INT64_MAX;
	static int16_t x236 = INT16_MIN;

	t52 = ((x233^x234)&(x235+x236));

	if (t52 != 35LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x237 = 2U;
	int16_t x238 = 5;
	volatile int16_t x240 = 12;
	volatile uint32_t t53 = 193264U;

	t53 = ((x237^x238)&(x239+x240));

	if (t53 != 4U) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x242 = -1;
	volatile int8_t x243 = 30;
	int16_t x244 = INT16_MIN;
	volatile int32_t t54 = -115009;

	t54 = ((x241^x242)&(x243+x244));

	if (t54 != -32764) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x246 = 22U;
	volatile int32_t x248 = 7;

	t55 = ((x245^x246)&(x247+x248));

	if (t55 != 7U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x249 = INT8_MIN;
	volatile int64_t x250 = INT64_MIN;
	uint8_t x251 = 60U;
	int32_t x252 = -2;
	int64_t t56 = -4356560980412978LL;

	t56 = ((x249^x250)&(x251+x252));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x254 = -6388315296LL;
	volatile uint8_t x255 = UINT8_MAX;
	static volatile int64_t t57 = -9909727637466297LL;

	t57 = ((x253^x254)&(x255+x256));

	if (t57 != 256LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x258 = 13U;
	int8_t x259 = INT8_MAX;
	uint32_t x260 = UINT32_MAX;
	volatile uint32_t t58 = 8467270U;

	t58 = ((x257^x258)&(x259+x260));

	if (t58 != 26U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x261 = INT32_MIN;
	uint16_t x262 = 405U;
	static int16_t x263 = INT16_MIN;
	int64_t x264 = -193897LL;

	t59 = ((x261^x262)&(x263+x264));

	if (t59 != -2147483499LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x265 = INT64_MAX;
	int8_t x266 = -1;
	volatile uint64_t x267 = 528502483582LLU;
	uint8_t x268 = 37U;
	static uint64_t t60 = 4605455841442044248LLU;

	t60 = ((x265^x266)&(x267+x268));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x269 = UINT8_MAX;
	static uint16_t x270 = 473U;
	int16_t x271 = INT16_MIN;

	t61 = ((x269^x270)&(x271+x272));

	if (t61 != 2LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x274 = INT16_MIN;
	uint8_t x275 = 58U;
	int16_t x276 = 2;
	int64_t t62 = -565440432798LL;

	t62 = ((x273^x274)&(x275+x276));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x281 = INT64_MIN;
	volatile int64_t x282 = INT64_MAX;
	uint16_t x283 = UINT16_MAX;
	volatile int16_t x284 = 4156;
	volatile int64_t t63 = -1321355734LL;

	t63 = ((x281^x282)&(x283+x284));

	if (t63 != 69691LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x285 = INT32_MIN;
	int16_t x286 = 24;
	int64_t x287 = 4LL;
	volatile int8_t x288 = INT8_MIN;
	volatile int64_t t64 = -3LL;

	t64 = ((x285^x286)&(x287+x288));

	if (t64 != -2147483648LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x294 = -1LL;
	int16_t x295 = INT16_MIN;
	static int64_t t65 = -3539037311271LL;

	t65 = ((x293^x294)&(x295+x296));

	if (t65 != -32766LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x297 = INT32_MAX;
	volatile int32_t x299 = INT32_MIN;
	static uint16_t x300 = 114U;
	int32_t t66 = 2935987;

	t66 = ((x297^x298)&(x299+x300));

	if (t66 != -2147483534) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x301 = 125058;
	static int64_t x302 = -1LL;
	int8_t x304 = -1;
	int64_t t67 = 622667830LL;

	t67 = ((x301^x302)&(x303+x304));

	if (t67 != 9223372036854650748LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x306 = 2;
	int16_t x307 = 2876;
	int32_t x308 = -1;
	int32_t t68 = -13853850;

	t68 = ((x305^x306)&(x307+x308));

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x309 = INT16_MAX;
	int8_t x311 = -1;
	int8_t x312 = INT8_MAX;
	int32_t t69 = -639174;

	t69 = ((x309^x310)&(x311+x312));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x313 = INT64_MIN;
	int16_t x314 = -1;
	int16_t x315 = -2741;
	volatile int32_t x316 = -1;
	volatile int64_t t70 = -330441952LL;

	t70 = ((x313^x314)&(x315+x316));

	if (t70 != 9223372036854773066LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x317 = INT8_MAX;
	static volatile uint8_t x318 = 3U;
	int8_t x319 = INT8_MIN;
	volatile int32_t t71 = -1053;

	t71 = ((x317^x318)&(x319+x320));

	if (t71 != 20) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x321 = INT16_MIN;
	int16_t x322 = INT16_MIN;
	static int16_t x323 = INT16_MIN;
	static int64_t x324 = -1LL;
	volatile int64_t t72 = 573708141635206LL;

	t72 = ((x321^x322)&(x323+x324));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x325 = -3;
	uint8_t x326 = UINT8_MAX;
	uint8_t x327 = 26U;
	int8_t x328 = INT8_MAX;
	static int32_t t73 = 3229252;

	t73 = ((x325^x326)&(x327+x328));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x329 = 136493423LLU;
	volatile uint16_t x330 = UINT16_MAX;
	uint8_t x331 = 23U;
	int16_t x332 = INT16_MIN;
	volatile uint64_t t74 = 1146223440463894LLU;

	t74 = ((x329^x330)&(x331+x332));

	if (t74 != 136445968LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x334 = -1;
	int8_t x335 = -5;
	static volatile int8_t x336 = INT8_MIN;
	volatile int32_t t75 = -2307;

	t75 = ((x333^x334)&(x335+x336));

	if (t75 != -160) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x337 = UINT64_MAX;
	int64_t x339 = 1LL;
	uint8_t x340 = 1U;
	volatile uint64_t t76 = 975390458102302257LLU;

	t76 = ((x337^x338)&(x339+x340));

	if (t76 != 2LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x342 = -889;
	uint16_t x344 = 1179U;
	uint32_t t77 = 2U;

	t77 = ((x341^x342)&(x343+x344));

	if (t77 != 336U) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x345 = 630576LLU;
	uint64_t x346 = 289539LLU;
	static uint32_t x348 = 32623U;
	uint64_t t78 = 3258562308467492LLU;

	t78 = ((x345^x346)&(x347+x348));

	if (t78 != 102402LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x353 = INT32_MIN;
	uint32_t x355 = 5114052U;
	int32_t x356 = INT32_MAX;
	uint32_t t79 = 54U;

	t79 = ((x353^x354)&(x355+x356));

	if (t79 != 2147483649U) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x357 = 1U;
	static int8_t x358 = INT8_MAX;
	int16_t x359 = INT16_MIN;
	static uint8_t x360 = UINT8_MAX;
	volatile uint32_t t80 = 100123U;

	t80 = ((x357^x358)&(x359+x360));

	if (t80 != 126U) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x361 = INT8_MAX;
	int8_t x362 = -14;
	uint32_t x364 = 20007U;

	t81 = ((x361^x362)&(x363+x364));

	if (t81 != 20100U) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x365 = 0;
	uint64_t x368 = 15388LLU;
	static volatile uint64_t t82 = 3LLU;

	t82 = ((x365^x366)&(x367+x368));

	if (t82 != 40208788040450048LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x369 = INT32_MIN;
	volatile int16_t x370 = INT16_MIN;

	t83 = ((x369^x370)&(x371+x372));

	if (t83 != 65536) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x373 = 927126933LLU;
	static int64_t x374 = -1LL;
	static int8_t x375 = INT8_MIN;
	uint64_t t84 = 16334817LLU;

	t84 = ((x373^x374)&(x375+x376));

	if (t84 != 18446744072782424682LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x378 = 1028U;
	uint32_t t85 = 2260231U;

	t85 = ((x377^x378)&(x379+x380));

	if (t85 != 1U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x381 = -1;
	int8_t x382 = INT8_MAX;
	volatile uint64_t t86 = 61777189LLU;

	t86 = ((x381^x382)&(x383+x384));

	if (t86 != 13638750871689856LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x389 = UINT16_MAX;
	int32_t x390 = INT32_MIN;
	volatile int16_t x392 = INT16_MIN;
	volatile int32_t t87 = 221433724;

	t87 = ((x389^x390)&(x391+x392));

	if (t87 != -2147450841) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x393 = 1;
	int8_t x394 = INT8_MIN;
	volatile int16_t x395 = 77;
	int64_t t88 = 4841706348LL;

	t88 = ((x393^x394)&(x395+x396));

	if (t88 != -217862276479LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x397 = UINT64_MAX;
	static int64_t x398 = 273402871715LL;
	int64_t x399 = -53876LL;
	uint8_t x400 = UINT8_MAX;
	volatile uint64_t t89 = 438003342846574978LLU;

	t89 = ((x397^x398)&(x399+x400));

	if (t89 != 18446743800306663432LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x401 = INT32_MIN;
	uint32_t x403 = 13103U;
	uint16_t x404 = 1390U;
	volatile uint32_t t90 = 1126956U;

	t90 = ((x401^x402)&(x403+x404));

	if (t90 != 14464U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x405 = -4;

	t91 = ((x405^x406)&(x407+x408));

	if (t91 != 32770) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x409 = -1;
	int16_t x410 = INT16_MIN;
	uint16_t x411 = 6919U;
	volatile int32_t t92 = 62132;

	t92 = ((x409^x410)&(x411+x412));

	if (t92 != 7152) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x413 = -170877;
	uint8_t x416 = 50U;
	volatile uint64_t t93 = 56589068012941LLU;

	t93 = ((x413^x414)&(x415+x416));

	if (t93 != 18446743828311867408LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x417 = -1;
	static int32_t x418 = INT32_MAX;
	uint32_t x419 = UINT32_MAX;
	static int32_t x420 = INT32_MIN;
	uint32_t t94 = 9910U;

	t94 = ((x417^x418)&(x419+x420));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x421 = 9U;
	int8_t x423 = 58;
	uint16_t x424 = 3679U;
	static uint32_t t95 = 11U;

	t95 = ((x421^x422)&(x423+x424));

	if (t95 != 16U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x425 = 339;
	int64_t x427 = 15802LL;
	int64_t t96 = 1111203LL;

	t96 = ((x425^x426)&(x427+x428));

	if (t96 != 2147488792LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int32_t x429 = 14;
	int64_t x430 = -1185422343554LL;
	volatile int16_t x431 = INT16_MIN;
	static uint16_t x432 = 28714U;

	t97 = ((x429^x430)&(x431+x432));

	if (t97 != -1185422344160LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x433 = 0;
	int32_t x434 = -50196254;
	uint64_t x435 = UINT64_MAX;
	static uint64_t t98 = 12LLU;

	t98 = ((x433^x434)&(x435+x436));

	if (t98 != 18446744071511871714LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x437 = 49LLU;
	int16_t x440 = INT16_MIN;
	volatile uint64_t t99 = 16068821LLU;

	t99 = ((x437^x438)&(x439+x440));

	if (t99 != 16LLU) { NG(); } else { ; }
	
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

