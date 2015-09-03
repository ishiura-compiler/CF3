#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -928563136;
int16_t x10 = 1;
volatile int32_t t2 = -51165665;
uint32_t x15 = UINT32_MAX;
int32_t x20 = -1;
int32_t x24 = INT32_MAX;
int64_t x34 = 42LL;
static uint64_t x46 = 894919221730947LLU;
int64_t t13 = 1008373800463LL;
int8_t x60 = 6;
int8_t x61 = 58;
int8_t x63 = -3;
int64_t t16 = -5632LL;
int64_t x71 = 199879376427174810LL;
int16_t x72 = -29;
uint16_t x75 = 3086U;
int64_t x79 = INT64_MIN;
int64_t t19 = 0LL;
int16_t x89 = INT16_MIN;
volatile int64_t x94 = INT64_MIN;
static uint32_t t26 = 2U;
static volatile int64_t x112 = 57020059296802LL;
uint64_t x114 = UINT64_MAX;
int64_t x119 = -1LL;
uint16_t x121 = 1336U;
volatile int32_t t30 = -6;
volatile int8_t x127 = INT8_MIN;
static volatile int32_t x139 = INT32_MIN;
int32_t x144 = INT32_MAX;
int8_t x147 = -14;
volatile uint16_t x149 = 23287U;
uint32_t x168 = 3348472U;
static uint32_t t38 = 83U;
int16_t x179 = -1;
volatile int32_t t41 = 16352;
volatile int8_t x185 = -1;
int64_t x186 = INT64_MIN;
int32_t x187 = -1;
static int32_t x196 = -1;
int32_t t45 = 5;
int8_t x199 = INT8_MAX;
volatile int32_t x201 = -15309;
volatile int32_t x203 = 10599;
int64_t x209 = -13484027LL;
volatile int8_t x213 = 3;
static int16_t x217 = -113;
uint64_t t51 = 22LLU;
int64_t x224 = INT64_MAX;
uint64_t x225 = 313669284650888959LLU;
static volatile uint64_t x229 = 4850362LLU;
uint64_t x231 = 15460494203766786LLU;
volatile uint64_t x232 = UINT64_MAX;
volatile uint64_t t54 = 523411295980261987LLU;
int16_t x238 = INT16_MAX;
uint64_t t57 = 283802LLU;
static uint8_t x252 = 8U;
int8_t x255 = INT8_MAX;
int16_t x256 = -1;
uint64_t x264 = 551384929291LLU;
volatile int64_t x266 = INT64_MIN;
uint32_t t62 = 109163U;
static int64_t t63 = 30143353493430176LL;
uint32_t x279 = 659068054U;
int8_t x283 = INT8_MIN;
volatile int64_t x301 = INT64_MAX;
int16_t x302 = INT16_MIN;
int16_t x303 = INT16_MAX;
static int16_t x304 = 94;
volatile int32_t t69 = -179;
uint64_t x305 = 10LLU;
static uint64_t x321 = 684270LLU;
uint16_t x322 = 2U;
uint16_t x326 = 5883U;
int8_t x342 = INT8_MAX;
int32_t x347 = INT32_MAX;
uint16_t x350 = 23U;
static int32_t x352 = INT32_MIN;
int64_t x354 = -7LL;
uint8_t x357 = 9U;
uint16_t x358 = 531U;
static int64_t x360 = -1LL;
static uint32_t x373 = 214688041U;
uint64_t x379 = 330280184844246896LLU;
static volatile uint64_t t86 = 7569574LLU;
uint64_t x384 = 800164236504379114LLU;
int64_t x393 = -1LL;
volatile uint32_t x401 = 50318U;
uint32_t x405 = UINT32_MAX;
static uint8_t x417 = 2U;
int8_t x434 = 3;
int64_t x436 = -935440LL;
static uint16_t x440 = 3U;
uint32_t x444 = 117390151U;


void f0(void) {
	int16_t x1 = INT16_MAX;
	static volatile int64_t x2 = -841833440278700LL;
	volatile uint8_t x3 = 43U;
	int32_t x4 = -1;

	t0 = ((x1==x2)^(x3-x4));

	if (t0 != 44) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 14691114912785151LLU;
	uint16_t x6 = UINT16_MAX;
	volatile int16_t x7 = INT16_MIN;
	volatile int16_t x8 = INT16_MIN;
	int32_t t1 = 585955689;

	t1 = ((x5==x6)^(x7-x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MIN;
	static int8_t x11 = -1;
	static int16_t x12 = 0;

	t2 = ((x9==x10)^(x11-x12));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	uint64_t x14 = 14LLU;
	static int64_t x16 = -98790860LL;
	volatile int64_t t3 = 1656764527639639LL;

	t3 = ((x13==x14)^(x15-x16));

	if (t3 != 4393758155LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = 37737600451LLU;
	uint16_t x18 = 981U;
	volatile int8_t x19 = -1;
	volatile int32_t t4 = -53;

	t4 = ((x17==x18)^(x19-x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 10144536U;
	static int64_t x22 = INT64_MIN;
	volatile uint16_t x23 = UINT16_MAX;
	static volatile int32_t t5 = 1373;

	t5 = ((x21==x22)^(x23-x24));

	if (t5 != -2147418112) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = UINT16_MAX;
	static uint8_t x26 = UINT8_MAX;
	static uint8_t x27 = UINT8_MAX;
	int8_t x28 = INT8_MIN;
	static volatile int32_t t6 = 2026;

	t6 = ((x25==x26)^(x27-x28));

	if (t6 != 383) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MAX;
	static uint16_t x30 = UINT16_MAX;
	int16_t x31 = INT16_MIN;
	int64_t x32 = -1LL;
	volatile int64_t t7 = 1018198LL;

	t7 = ((x29==x30)^(x31-x32));

	if (t7 != -32767LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -7104;
	int8_t x35 = -1;
	uint16_t x36 = 5U;
	static int32_t t8 = -97;

	t8 = ((x33==x34)^(x35-x36));

	if (t8 != -6) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = UINT8_MAX;
	static uint64_t x38 = UINT64_MAX;
	int8_t x39 = -1;
	int8_t x40 = INT8_MAX;
	static volatile int32_t t9 = -143;

	t9 = ((x37==x38)^(x39-x40));

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 13672014888LLU;
	static int32_t x42 = -1;
	int32_t x43 = -4150611;
	int8_t x44 = -1;
	int32_t t10 = -29185;

	t10 = ((x41==x42)^(x43-x44));

	if (t10 != -4150610) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x45 = UINT16_MAX;
	int16_t x47 = -2179;
	static volatile uint16_t x48 = 6U;
	static int32_t t11 = 4204;

	t11 = ((x45==x46)^(x47-x48));

	if (t11 != -2185) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MAX;
	int32_t x50 = -6518;
	static uint16_t x51 = 1U;
	int8_t x52 = -1;
	volatile int32_t t12 = 0;

	t12 = ((x49==x50)^(x51-x52));

	if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	static uint32_t x54 = UINT32_MAX;
	uint8_t x55 = 8U;
	static int64_t x56 = 5425116159411LL;

	t13 = ((x53==x54)^(x55-x56));

	if (t13 != -5425116159404LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	static int64_t x58 = 26015140LL;
	int64_t x59 = -73LL;
	volatile int64_t t14 = 127LL;

	t14 = ((x57==x58)^(x59-x60));

	if (t14 != -79LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x62 = -1;
	volatile int64_t x64 = INT64_MIN;
	volatile int64_t t15 = 27124388003LL;

	t15 = ((x61==x62)^(x63-x64));

	if (t15 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -1;
	int8_t x66 = INT8_MIN;
	int64_t x67 = INT64_MAX;
	int64_t x68 = INT64_MAX;

	t16 = ((x65==x66)^(x67-x68));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 1817233180815078113LLU;
	uint8_t x70 = 40U;
	volatile int64_t t17 = -4060358292132735LL;

	t17 = ((x69==x70)^(x71-x72));

	if (t17 != 199879376427174839LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x73 = UINT16_MAX;
	int64_t x74 = INT64_MAX;
	volatile int8_t x76 = INT8_MAX;
	int32_t t18 = 570;

	t18 = ((x73==x74)^(x75-x76));

	if (t18 != 2959) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x77 = 185;
	int16_t x78 = -2;
	int32_t x80 = -1;

	t19 = ((x77==x78)^(x79-x80));

	if (t19 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 107U;
	int16_t x82 = INT16_MIN;
	volatile int32_t x83 = INT32_MIN;
	static int32_t x84 = INT32_MIN;
	volatile int32_t t20 = 130;

	t20 = ((x81==x82)^(x83-x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 9523667327105LLU;
	volatile int8_t x86 = -1;
	int16_t x87 = INT16_MIN;
	uint8_t x88 = UINT8_MAX;
	int32_t t21 = -6;

	t21 = ((x85==x86)^(x87-x88));

	if (t21 != -33023) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x90 = 48372067677LLU;
	uint8_t x91 = 5U;
	int64_t x92 = INT64_MAX;
	volatile int64_t t22 = 760204746735609576LL;

	t22 = ((x89==x90)^(x91-x92));

	if (t22 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x93 = INT32_MIN;
	uint16_t x95 = 478U;
	int8_t x96 = INT8_MIN;
	static int32_t t23 = 97292;

	t23 = ((x93==x94)^(x95-x96));

	if (t23 != 606) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = 2;
	int16_t x98 = 5;
	int16_t x99 = INT16_MIN;
	int64_t x100 = 1935820LL;
	volatile int64_t t24 = -3764589010469399LL;

	t24 = ((x97==x98)^(x99-x100));

	if (t24 != -1968588LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -1LL;
	int8_t x102 = INT8_MIN;
	static int64_t x103 = INT64_MIN;
	int64_t x104 = INT64_MIN;
	volatile int64_t t25 = -374431491LL;

	t25 = ((x101==x102)^(x103-x104));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -19567259752LL;
	int32_t x106 = INT32_MIN;
	uint32_t x107 = 164116801U;
	int32_t x108 = INT32_MIN;

	t26 = ((x105==x106)^(x107-x108));

	if (t26 != 2311600449U) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 117U;
	uint16_t x110 = 5656U;
	uint16_t x111 = 103U;
	int64_t t27 = 17LL;

	t27 = ((x109==x110)^(x111-x112));

	if (t27 != -57020059296699LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = INT64_MIN;
	volatile int32_t x115 = INT32_MIN;
	uint8_t x116 = 0U;
	int32_t t28 = INT32_MIN;

	t28 = ((x113==x114)^(x115-x116));

	if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 3U;
	int8_t x118 = 36;
	static int64_t x120 = 110160954138LL;
	volatile int64_t t29 = 6842LL;

	t29 = ((x117==x118)^(x119-x120));

	if (t29 != -110160954139LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x122 = -1;
	int16_t x123 = -196;
	volatile int16_t x124 = INT16_MAX;

	t30 = ((x121==x122)^(x123-x124));

	if (t30 != -32963) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -1LL;
	volatile int64_t x126 = INT64_MIN;
	uint32_t x128 = 30414U;
	volatile uint32_t t31 = 27697U;

	t31 = ((x125==x126)^(x127-x128));

	if (t31 != 4294936754U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = 6958;
	int32_t x130 = INT32_MIN;
	int64_t x131 = INT64_MIN;
	uint64_t x132 = UINT64_MAX;
	volatile uint64_t t32 = 13106589486125LLU;

	t32 = ((x129==x130)^(x131-x132));

	if (t32 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x137 = -1;
	int16_t x138 = -5568;
	int64_t x140 = -173785484865LL;
	volatile int64_t t33 = 5402664108826LL;

	t33 = ((x137==x138)^(x139-x140));

	if (t33 != 171638001217LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = -52;
	uint64_t x142 = 195265820540776420LLU;
	uint32_t x143 = UINT32_MAX;
	volatile uint32_t t34 = 1U;

	t34 = ((x141==x142)^(x143-x144));

	if (t34 != 2147483648U) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x145 = -1;
	int8_t x146 = -1;
	static int8_t x148 = INT8_MAX;
	volatile int32_t t35 = 730285367;

	t35 = ((x145==x146)^(x147-x148));

	if (t35 != -142) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x150 = 1U;
	uint8_t x151 = 0U;
	uint16_t x152 = UINT16_MAX;
	int32_t t36 = 379580;

	t36 = ((x149==x150)^(x151-x152));

	if (t36 != -65535) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x153 = INT16_MIN;
	static uint32_t x154 = 23345360U;
	int64_t x155 = -1LL;
	static uint8_t x156 = 0U;
	volatile int64_t t37 = 932614204513035LL;

	t37 = ((x153==x154)^(x155-x156));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x165 = 4U;
	int32_t x166 = -1;
	uint16_t x167 = 68U;

	t38 = ((x165==x166)^(x167-x168));

	if (t38 != 4291618892U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x169 = INT32_MIN;
	static int16_t x170 = 1719;
	uint8_t x171 = 0U;
	volatile int16_t x172 = -1;
	static volatile int32_t t39 = 22347;

	t39 = ((x169==x170)^(x171-x172));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x173 = UINT8_MAX;
	uint16_t x174 = 11U;
	int8_t x175 = INT8_MIN;
	int8_t x176 = 1;
	static int32_t t40 = -997869;

	t40 = ((x173==x174)^(x175-x176));

	if (t40 != -129) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x177 = 164637570;
	int8_t x178 = -1;
	int8_t x180 = -1;

	t41 = ((x177==x178)^(x179-x180));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x181 = -1;
	uint8_t x182 = 4U;
	uint16_t x183 = 27U;
	uint64_t x184 = 28005314989009747LLU;
	uint64_t t42 = 6491658008254LLU;

	t42 = ((x181==x182)^(x183-x184));

	if (t42 != 18418738758720541896LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x188 = 27146728LLU;
	volatile uint64_t t43 = 70808LLU;

	t43 = ((x185==x186)^(x187-x188));

	if (t43 != 18446744073682404887LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x189 = UINT64_MAX;
	uint16_t x190 = 1315U;
	static uint32_t x191 = UINT32_MAX;
	int16_t x192 = 10342;
	volatile uint32_t t44 = 11852U;

	t44 = ((x189==x190)^(x191-x192));

	if (t44 != 4294956953U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x193 = 9476U;
	uint32_t x194 = 628U;
	static volatile int8_t x195 = INT8_MAX;

	t45 = ((x193==x194)^(x195-x196));

	if (t45 != 128) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x197 = 0U;
	int16_t x198 = -3817;
	int8_t x200 = -1;
	int32_t t46 = -36044080;

	t46 = ((x197==x198)^(x199-x200));

	if (t46 != 128) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x202 = INT8_MAX;
	int16_t x204 = INT16_MIN;
	int32_t t47 = -3567;

	t47 = ((x201==x202)^(x203-x204));

	if (t47 != 43367) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x205 = INT32_MAX;
	int16_t x206 = 474;
	int64_t x207 = -32443493628344542LL;
	static int16_t x208 = 15;
	int64_t t48 = 4287905005LL;

	t48 = ((x205==x206)^(x207-x208));

	if (t48 != -32443493628344557LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x210 = -31;
	static int32_t x211 = -33563779;
	int8_t x212 = -1;
	static int32_t t49 = -25532694;

	t49 = ((x209==x210)^(x211-x212));

	if (t49 != -33563778) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x214 = 188U;
	uint32_t x215 = UINT32_MAX;
	int8_t x216 = INT8_MIN;
	static volatile uint32_t t50 = 221691474U;

	t50 = ((x213==x214)^(x215-x216));

	if (t50 != 127U) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x218 = 6793U;
	volatile int32_t x219 = -1;
	static uint64_t x220 = UINT64_MAX;

	t51 = ((x217==x218)^(x219-x220));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x221 = 115;
	volatile uint32_t x222 = UINT32_MAX;
	static int32_t x223 = INT32_MAX;
	volatile int64_t t52 = -1044559999482LL;

	t52 = ((x221==x222)^(x223-x224));

	if (t52 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x226 = INT32_MIN;
	uint8_t x227 = 1U;
	int8_t x228 = 3;
	static int32_t t53 = 15561;

	t53 = ((x225==x226)^(x227-x228));

	if (t53 != -2) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x230 = 1761;

	t54 = ((x229==x230)^(x231-x232));

	if (t54 != 15460494203766787LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x237 = UINT16_MAX;
	volatile int32_t x239 = INT32_MIN;
	int8_t x240 = INT8_MIN;
	int32_t t55 = -39;

	t55 = ((x237==x238)^(x239-x240));

	if (t55 != -2147483520) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x241 = UINT64_MAX;
	int64_t x242 = -1LL;
	int32_t x243 = -16092;
	uint16_t x244 = 49U;
	int32_t t56 = 46481003;

	t56 = ((x241==x242)^(x243-x244));

	if (t56 != -16142) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x245 = INT64_MIN;
	static int8_t x246 = -1;
	uint64_t x247 = 496LLU;
	static volatile int8_t x248 = INT8_MIN;

	t57 = ((x245==x246)^(x247-x248));

	if (t57 != 624LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x249 = 45U;
	int16_t x250 = INT16_MIN;
	static uint32_t x251 = 5769U;
	volatile uint32_t t58 = 221U;

	t58 = ((x249==x250)^(x251-x252));

	if (t58 != 5761U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x253 = INT32_MAX;
	int32_t x254 = -460;
	int32_t t59 = 0;

	t59 = ((x253==x254)^(x255-x256));

	if (t59 != 128) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x257 = -1;
	volatile int8_t x258 = INT8_MIN;
	volatile int8_t x259 = INT8_MIN;
	int32_t x260 = INT32_MIN;
	int32_t t60 = 249003;

	t60 = ((x257==x258)^(x259-x260));

	if (t60 != 2147483520) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x261 = INT64_MIN;
	int64_t x262 = 13614927890LL;
	int32_t x263 = -647137200;
	static volatile uint64_t t61 = 24150283618092LLU;

	t61 = ((x261==x262)^(x263-x264));

	if (t61 != 18446743521677485125LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x265 = -366LL;
	uint32_t x267 = 7620U;
	static int8_t x268 = INT8_MAX;

	t62 = ((x265==x266)^(x267-x268));

	if (t62 != 7493U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x269 = INT64_MIN;
	uint32_t x270 = 174383594U;
	int64_t x271 = -1LL;
	volatile int32_t x272 = 1969495;

	t63 = ((x269==x270)^(x271-x272));

	if (t63 != -1969496LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x273 = UINT16_MAX;
	int16_t x274 = 0;
	int16_t x275 = 2;
	volatile uint16_t x276 = 224U;
	volatile int32_t t64 = -585396607;

	t64 = ((x273==x274)^(x275-x276));

	if (t64 != -222) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x277 = -1;
	int64_t x278 = INT64_MIN;
	int32_t x280 = 33;
	volatile uint32_t t65 = 5U;

	t65 = ((x277==x278)^(x279-x280));

	if (t65 != 659068021U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x281 = -470423LL;
	uint8_t x282 = 24U;
	int8_t x284 = INT8_MIN;
	volatile int32_t t66 = 7;

	t66 = ((x281==x282)^(x283-x284));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x289 = -1354316243928LL;
	int16_t x290 = -7;
	int8_t x291 = INT8_MAX;
	static int32_t x292 = -40209934;
	int32_t t67 = 0;

	t67 = ((x289==x290)^(x291-x292));

	if (t67 != 40210061) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x293 = INT64_MIN;
	static uint32_t x294 = 357U;
	static int32_t x295 = INT32_MIN;
	uint64_t x296 = UINT64_MAX;
	uint64_t t68 = 573348598632989362LLU;

	t68 = ((x293==x294)^(x295-x296));

	if (t68 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f69(void) {


	t69 = ((x301==x302)^(x303-x304));

	if (t69 != 32673) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x306 = 67844416LL;
	static int8_t x307 = INT8_MIN;
	volatile uint16_t x308 = 8U;
	volatile int32_t t70 = -46;

	t70 = ((x305==x306)^(x307-x308));

	if (t70 != -136) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint64_t x309 = UINT64_MAX;
	uint8_t x310 = 1U;
	static int16_t x311 = 3;
	uint16_t x312 = UINT16_MAX;
	static int32_t t71 = -37026;

	t71 = ((x309==x310)^(x311-x312));

	if (t71 != -65532) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x313 = -1;
	static int8_t x314 = 0;
	uint64_t x315 = 107LLU;
	int64_t x316 = INT64_MIN;
	volatile uint64_t t72 = 6616612828127183475LLU;

	t72 = ((x313==x314)^(x315-x316));

	if (t72 != 9223372036854775915LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x317 = 12U;
	int8_t x318 = -1;
	int8_t x319 = INT8_MIN;
	uint16_t x320 = 22U;
	int32_t t73 = -15787802;

	t73 = ((x317==x318)^(x319-x320));

	if (t73 != -150) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x323 = UINT16_MAX;
	int16_t x324 = -1;
	volatile int32_t t74 = 247;

	t74 = ((x321==x322)^(x323-x324));

	if (t74 != 65536) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x325 = 339503253U;
	uint64_t x327 = UINT64_MAX;
	static uint64_t x328 = 94509614258LLU;
	uint64_t t75 = 206253136994300874LLU;

	t75 = ((x325==x326)^(x327-x328));

	if (t75 != 18446743979199937357LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x333 = 1;
	uint8_t x334 = 1U;
	int16_t x335 = INT16_MAX;
	uint8_t x336 = 9U;
	int32_t t76 = 110019;

	t76 = ((x333==x334)^(x335-x336));

	if (t76 != 32759) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x337 = 3U;
	static int32_t x338 = INT32_MIN;
	int64_t x339 = -33721945550344LL;
	static volatile uint64_t x340 = 7854744431697903LLU;
	static volatile uint64_t t77 = 1116012493906817197LLU;

	t77 = ((x337==x338)^(x339-x340));

	if (t77 != 18438855607332303369LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x341 = INT8_MIN;
	uint32_t x343 = 91U;
	uint8_t x344 = 8U;
	uint32_t t78 = 427209U;

	t78 = ((x341==x342)^(x343-x344));

	if (t78 != 83U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x345 = UINT8_MAX;
	static int32_t x346 = 2444194;
	static int8_t x348 = INT8_MAX;
	volatile int32_t t79 = 0;

	t79 = ((x345==x346)^(x347-x348));

	if (t79 != 2147483520) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x349 = 4LLU;
	int32_t x351 = -1052998641;
	int32_t t80 = -27241480;

	t80 = ((x349==x350)^(x351-x352));

	if (t80 != 1094485007) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x353 = UINT32_MAX;
	volatile uint16_t x355 = UINT16_MAX;
	int8_t x356 = -1;
	int32_t t81 = -8;

	t81 = ((x353==x354)^(x355-x356));

	if (t81 != 65536) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x359 = INT8_MAX;
	volatile int64_t t82 = -379LL;

	t82 = ((x357==x358)^(x359-x360));

	if (t82 != 128LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x361 = INT32_MIN;
	uint16_t x362 = 51U;
	uint32_t x363 = 1839688870U;
	int8_t x364 = 26;
	static uint32_t t83 = 498787U;

	t83 = ((x361==x362)^(x363-x364));

	if (t83 != 1839688844U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x365 = 1U;
	int64_t x366 = -3522356740LL;
	volatile int32_t x367 = 10;
	static int32_t x368 = 1693;
	int32_t t84 = 147745;

	t84 = ((x365==x366)^(x367-x368));

	if (t84 != -1683) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x374 = 15;
	int32_t x375 = -1;
	int64_t x376 = INT64_MIN;
	int64_t t85 = INT64_MAX;

	t85 = ((x373==x374)^(x375-x376));

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x377 = INT8_MIN;
	uint8_t x378 = 0U;
	uint16_t x380 = 18390U;

	t86 = ((x377==x378)^(x379-x380));

	if (t86 != 330280184844228506LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint16_t x381 = 104U;
	uint32_t x382 = 7U;
	int64_t x383 = INT64_MIN;
	uint64_t t87 = 55196697LLU;

	t87 = ((x381==x382)^(x383-x384));

	if (t87 != 8423207800350396694LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x389 = INT64_MIN;
	int32_t x390 = 5949;
	int8_t x391 = INT8_MIN;
	static int8_t x392 = 56;
	static volatile int32_t t88 = -146;

	t88 = ((x389==x390)^(x391-x392));

	if (t88 != -184) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x394 = -1LL;
	int8_t x395 = -1;
	uint64_t x396 = UINT64_MAX;
	uint64_t t89 = 464299585LLU;

	t89 = ((x393==x394)^(x395-x396));

	if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x397 = 93546617U;
	int64_t x398 = -98140612499LL;
	uint64_t x399 = 7534LLU;
	int16_t x400 = 59;
	uint64_t t90 = 53701LLU;

	t90 = ((x397==x398)^(x399-x400));

	if (t90 != 7475LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x402 = UINT8_MAX;
	uint8_t x403 = 2U;
	volatile uint16_t x404 = 324U;
	volatile int32_t t91 = 5;

	t91 = ((x401==x402)^(x403-x404));

	if (t91 != -322) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x406 = 1367275925286054778LL;
	uint64_t x407 = UINT64_MAX;
	static uint8_t x408 = UINT8_MAX;
	uint64_t t92 = 18974LLU;

	t92 = ((x405==x406)^(x407-x408));

	if (t92 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x409 = INT32_MIN;
	int32_t x410 = 386597173;
	static uint16_t x411 = UINT16_MAX;
	int32_t x412 = -1929550;
	static volatile int32_t t93 = 15;

	t93 = ((x409==x410)^(x411-x412));

	if (t93 != 1995085) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x418 = INT8_MIN;
	int32_t x419 = INT32_MIN;
	uint32_t x420 = 175U;
	uint32_t t94 = 4U;

	t94 = ((x417==x418)^(x419-x420));

	if (t94 != 2147483473U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x421 = INT64_MAX;
	volatile uint32_t x422 = UINT32_MAX;
	volatile int32_t x423 = INT32_MIN;
	volatile uint64_t x424 = 164200905LLU;
	static uint64_t t95 = 3651368854114279072LLU;

	t95 = ((x421==x422)^(x423-x424));

	if (t95 != 18446744071397867063LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x425 = 14;
	static volatile int8_t x426 = INT8_MAX;
	int64_t x427 = -1LL;
	static uint64_t x428 = 182LLU;
	volatile uint64_t t96 = 23LLU;

	t96 = ((x425==x426)^(x427-x428));

	if (t96 != 18446744073709551433LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x433 = INT8_MAX;
	int8_t x435 = -1;
	int64_t t97 = -683LL;

	t97 = ((x433==x434)^(x435-x436));

	if (t97 != 935439LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x437 = 6335U;
	volatile int8_t x438 = -25;
	static uint16_t x439 = 0U;
	int32_t t98 = -42;

	t98 = ((x437==x438)^(x439-x440));

	if (t98 != -3) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x441 = -1;
	uint64_t x442 = 152999794286LLU;
	int16_t x443 = -1;
	volatile uint32_t t99 = 17U;

	t99 = ((x441==x442)^(x443-x444));

	if (t99 != 4177577144U) { NG(); } else { ; }
	
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

