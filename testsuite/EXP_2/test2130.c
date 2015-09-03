#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = -36094293;
int16_t x9 = 31;
int16_t x14 = 2904;
volatile int32_t x17 = INT32_MAX;
uint16_t x18 = UINT16_MAX;
uint32_t x26 = 906763U;
int32_t x27 = 388177;
static volatile int32_t x30 = INT32_MAX;
int32_t x32 = INT32_MIN;
uint16_t x37 = UINT16_MAX;
volatile uint32_t x42 = 1U;
uint8_t x44 = UINT8_MAX;
static uint8_t x48 = UINT8_MAX;
int64_t x50 = -1LL;
volatile int64_t x51 = 277164487928476LL;
uint16_t x55 = UINT16_MAX;
volatile int32_t t17 = 266428;
int32_t x75 = -1;
int32_t x78 = -26;
int32_t t19 = 2;
uint8_t x85 = UINT8_MAX;
int32_t x89 = -8550863;
volatile uint8_t x93 = 29U;
volatile int32_t t25 = -165407;
volatile int64_t x108 = INT64_MAX;
volatile int64_t t26 = -21LL;
static int32_t x110 = -1;
static volatile int16_t x112 = INT16_MIN;
volatile uint64_t x113 = 139630568LLU;
volatile int32_t x119 = INT32_MIN;
static uint32_t t30 = 91754842U;
uint8_t x126 = UINT8_MAX;
volatile int32_t x128 = 5544635;
int16_t x129 = -36;
uint16_t x136 = UINT16_MAX;
int64_t x137 = INT64_MIN;
int8_t x140 = -1;
static int64_t x142 = INT64_MIN;
volatile int8_t x146 = -3;
static uint8_t x151 = UINT8_MAX;
int64_t x153 = INT64_MIN;
int16_t x162 = INT16_MAX;
int64_t x166 = -1LL;
static int64_t x171 = -1LL;
volatile uint8_t x173 = UINT8_MAX;
static volatile int16_t x175 = INT16_MAX;
uint16_t x176 = UINT16_MAX;
volatile int32_t t44 = 93312;
static int32_t x181 = INT32_MIN;
int8_t x182 = -1;
volatile int32_t t45 = -6;
uint64_t x186 = UINT64_MAX;
int64_t x191 = INT64_MAX;
uint8_t x192 = 0U;
int32_t t47 = -1287;
int32_t t48 = -22693881;
int32_t x202 = INT32_MIN;
int32_t x206 = INT32_MIN;
uint32_t x207 = 302600U;
uint32_t x217 = 182370U;
volatile int16_t x233 = INT16_MIN;
int16_t x241 = INT16_MIN;
int16_t x245 = INT16_MIN;
int32_t t61 = -1;
volatile int32_t t65 = -6230;
static int16_t x265 = 1405;
int32_t t66 = 13631;
volatile int8_t x269 = -43;
uint8_t x270 = 0U;
volatile int32_t t67 = -7292272;
int8_t x277 = INT8_MAX;
int32_t x278 = INT32_MIN;
static uint64_t x280 = 243163728709038LLU;
int32_t t70 = 947262;
uint32_t x286 = UINT32_MAX;
int16_t x294 = INT16_MIN;
int16_t x298 = INT16_MIN;
int64_t x308 = INT64_MAX;
volatile int32_t x310 = -49527808;
volatile uint32_t x313 = 0U;
volatile int8_t x318 = INT8_MIN;
static uint64_t x319 = UINT64_MAX;
int32_t t79 = 0;
static int16_t x326 = INT16_MAX;
volatile uint32_t x327 = 13479U;
int64_t x329 = INT64_MIN;
int32_t t82 = -110837234;
int16_t x348 = INT16_MIN;
volatile int32_t t86 = -1003392701;
static uint8_t x353 = 25U;
int64_t x358 = -1LL;
static volatile int8_t x360 = -5;
int32_t t89 = -28;
int32_t x362 = -32679848;
int32_t t90 = 6101;
int64_t x365 = -1LL;
int32_t x366 = -9594053;
volatile uint64_t t91 = 9820820126LLU;
int8_t x371 = INT8_MIN;
uint16_t x372 = 24U;
volatile int16_t x378 = INT16_MIN;
uint8_t x383 = UINT8_MAX;
static int32_t x393 = INT32_MIN;


void f0(void) {
	int8_t x1 = INT8_MIN;
	static int8_t x2 = INT8_MIN;
	int8_t x4 = INT8_MAX;
	int32_t t0 = 11;

	t0 = ((x1==(x2^x3))&x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 10451U;
	int8_t x6 = INT8_MAX;
	uint8_t x7 = 29U;
	int16_t x8 = INT16_MIN;
	int32_t t1 = 30381788;

	t1 = ((x5==(x6^x7))&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x10 = 5169U;
	int64_t x11 = -1LL;
	uint64_t x12 = UINT64_MAX;
	static volatile uint64_t t2 = 4193112LLU;

	t2 = ((x9==(x10^x11))&x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 12;
	uint32_t x15 = 157U;
	int64_t x16 = -250LL;
	volatile int64_t t3 = 844LL;

	t3 = ((x13==(x14^x15))&x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x19 = UINT32_MAX;
	int16_t x20 = INT16_MIN;
	volatile int32_t t4 = 84;

	t4 = ((x17==(x18^x19))&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	int16_t x22 = INT16_MIN;
	volatile int8_t x23 = INT8_MAX;
	int64_t x24 = -8570549171374960LL;
	static int64_t t5 = 878330290312362LL;

	t5 = ((x21==(x22^x23))&x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 125U;
	static uint8_t x28 = 4U;
	static int32_t t6 = 0;

	t6 = ((x25==(x26^x27))&x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	volatile uint32_t x31 = 236937675U;
	int32_t t7 = -180758;

	t7 = ((x29==(x30^x31))&x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = INT8_MIN;
	uint64_t x34 = UINT64_MAX;
	int32_t x35 = INT32_MIN;
	uint16_t x36 = 0U;
	int32_t t8 = 79;

	t8 = ((x33==(x34^x35))&x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x38 = -11;
	static volatile int32_t x39 = INT32_MIN;
	int32_t x40 = -2;
	static volatile int32_t t9 = -1;

	t9 = ((x37==(x38^x39))&x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x41 = 389099LLU;
	int32_t x43 = -130916;
	int32_t t10 = 370632158;

	t10 = ((x41==(x42^x43))&x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	static int64_t x46 = INT64_MIN;
	volatile int64_t x47 = -1LL;
	static volatile int32_t t11 = 3642968;

	t11 = ((x45==(x46^x47))&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x49 = UINT64_MAX;
	int16_t x52 = INT16_MIN;
	volatile int32_t t12 = -75789;

	t12 = ((x49==(x50^x51))&x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 589344042957845LLU;
	uint64_t x54 = 2281858LLU;
	int16_t x56 = 855;
	int32_t t13 = -7211833;

	t13 = ((x53==(x54^x55))&x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x57 = -1042;
	volatile int8_t x58 = INT8_MAX;
	uint32_t x59 = 15082131U;
	uint8_t x60 = 5U;
	volatile int32_t t14 = 120888841;

	t14 = ((x57==(x58^x59))&x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 42U;
	static volatile uint16_t x62 = UINT16_MAX;
	static uint32_t x63 = 5822U;
	uint8_t x64 = 82U;
	volatile int32_t t15 = 1979;

	t15 = ((x61==(x62^x63))&x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 202U;
	uint8_t x66 = 2U;
	uint16_t x67 = 23U;
	int32_t x68 = 9;
	int32_t t16 = 1;

	t16 = ((x65==(x66^x67))&x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x69 = INT64_MIN;
	int32_t x70 = INT32_MIN;
	static int64_t x71 = -10510601378LL;
	static int8_t x72 = INT8_MAX;

	t17 = ((x69==(x70^x71))&x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -1LL;
	uint32_t x74 = 1U;
	uint64_t x76 = 229976LLU;
	volatile uint64_t t18 = 138953967132006786LLU;

	t18 = ((x73==(x74^x75))&x76);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x77 = UINT8_MAX;
	int64_t x79 = 11538521773074408LL;
	int16_t x80 = INT16_MAX;

	t19 = ((x77==(x78^x79))&x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x81 = 0U;
	int64_t x82 = INT64_MAX;
	int64_t x83 = 541050438263139LL;
	static volatile int8_t x84 = INT8_MIN;
	static volatile int32_t t20 = 137199724;

	t20 = ((x81==(x82^x83))&x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x86 = -1;
	volatile int8_t x87 = INT8_MAX;
	uint32_t x88 = 15368U;
	uint32_t t21 = 334847U;

	t21 = ((x85==(x86^x87))&x88);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x90 = INT64_MIN;
	uint32_t x91 = UINT32_MAX;
	volatile int64_t x92 = 61885LL;
	int64_t t22 = 35861488930LL;

	t22 = ((x89==(x90^x91))&x92);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x94 = -1;
	uint64_t x95 = UINT64_MAX;
	static int32_t x96 = -8;
	int32_t t23 = 353;

	t23 = ((x93==(x94^x95))&x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = -1LL;
	int16_t x98 = -1;
	uint8_t x99 = 44U;
	uint16_t x100 = 131U;
	volatile int32_t t24 = -2684721;

	t24 = ((x97==(x98^x99))&x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MAX;
	int32_t x102 = INT32_MAX;
	int16_t x103 = -12;
	volatile int16_t x104 = INT16_MAX;

	t25 = ((x101==(x102^x103))&x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 9U;
	int32_t x106 = INT32_MIN;
	volatile uint32_t x107 = UINT32_MAX;

	t26 = ((x105==(x106^x107))&x108);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	int64_t x111 = -1LL;
	volatile int32_t t27 = -52652610;

	t27 = ((x109==(x110^x111))&x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x114 = UINT8_MAX;
	int8_t x115 = -1;
	int64_t x116 = -1LL;
	volatile int64_t t28 = -3263749319LL;

	t28 = ((x113==(x114^x115))&x116);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x117 = INT8_MIN;
	int64_t x118 = 13970LL;
	int32_t x120 = 607875672;
	volatile int32_t t29 = -100;

	t29 = ((x117==(x118^x119))&x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = 20833480U;
	static int16_t x122 = 275;
	static volatile uint64_t x123 = 948254LLU;
	uint32_t x124 = UINT32_MAX;

	t30 = ((x121==(x122^x123))&x124);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x125 = UINT64_MAX;
	int8_t x127 = -1;
	volatile int32_t t31 = -223198589;

	t31 = ((x125==(x126^x127))&x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x130 = UINT8_MAX;
	volatile uint32_t x131 = 745473U;
	static int8_t x132 = 62;
	int32_t t32 = -96;

	t32 = ((x129==(x130^x131))&x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	static int64_t x134 = -52560257358LL;
	int64_t x135 = -1LL;
	volatile int32_t t33 = 479974444;

	t33 = ((x133==(x134^x135))&x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x138 = 0U;
	uint32_t x139 = UINT32_MAX;
	int32_t t34 = -61579128;

	t34 = ((x137==(x138^x139))&x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x141 = 12;
	volatile uint8_t x143 = 0U;
	uint64_t x144 = 241625242645289299LLU;
	static volatile uint64_t t35 = 22040LLU;

	t35 = ((x141==(x142^x143))&x144);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x145 = INT8_MIN;
	volatile int64_t x147 = -14004928196LL;
	int32_t x148 = INT32_MIN;
	static volatile int32_t t36 = 41;

	t36 = ((x145==(x146^x147))&x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 3U;
	int16_t x150 = INT16_MIN;
	int8_t x152 = -4;
	int32_t t37 = -12452094;

	t37 = ((x149==(x150^x151))&x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x154 = -1;
	int64_t x155 = INT64_MAX;
	int16_t x156 = INT16_MAX;
	volatile int32_t t38 = -28602;

	t38 = ((x153==(x154^x155))&x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = -10;
	int16_t x158 = 9505;
	uint32_t x159 = UINT32_MAX;
	int64_t x160 = 40597924LL;
	volatile int64_t t39 = -55287592289467938LL;

	t39 = ((x157==(x158^x159))&x160);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 11U;
	int64_t x163 = -655142489480648779LL;
	static int8_t x164 = INT8_MIN;
	static volatile int32_t t40 = -237751;

	t40 = ((x161==(x162^x163))&x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MIN;
	static volatile uint32_t x167 = UINT32_MAX;
	static uint32_t x168 = 118936U;
	static uint32_t t41 = 221045042U;

	t41 = ((x165==(x166^x167))&x168);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = 5075U;
	uint16_t x170 = UINT16_MAX;
	volatile int16_t x172 = INT16_MIN;
	volatile int32_t t42 = 3520;

	t42 = ((x169==(x170^x171))&x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x174 = -1LL;
	static int32_t t43 = -1432;

	t43 = ((x173==(x174^x175))&x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x177 = 11U;
	int16_t x178 = -47;
	uint32_t x179 = 87673200U;
	volatile int32_t x180 = INT32_MAX;

	t44 = ((x177==(x178^x179))&x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x183 = INT32_MIN;
	int16_t x184 = INT16_MIN;

	t45 = ((x181==(x182^x183))&x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	static uint32_t x187 = 677U;
	int8_t x188 = -1;
	int32_t t46 = -48662850;

	t46 = ((x185==(x186^x187))&x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	uint8_t x190 = 13U;

	t47 = ((x189==(x190^x191))&x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	uint64_t x194 = 35805LLU;
	int8_t x195 = INT8_MIN;
	static volatile int32_t x196 = -11;

	t48 = ((x193==(x194^x195))&x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x197 = 216;
	uint32_t x198 = 103U;
	uint32_t x199 = 242426330U;
	volatile int32_t x200 = INT32_MAX;
	static volatile int32_t t49 = -7825;

	t49 = ((x197==(x198^x199))&x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x201 = INT32_MIN;
	volatile int16_t x203 = -1;
	uint32_t x204 = UINT32_MAX;
	static volatile uint32_t t50 = 32647798U;

	t50 = ((x201==(x202^x203))&x204);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x205 = 0U;
	int64_t x208 = 942795805LL;
	int64_t t51 = 3001080LL;

	t51 = ((x205==(x206^x207))&x208);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = -139;
	uint8_t x210 = UINT8_MAX;
	uint64_t x211 = 14433315024769644LLU;
	static int32_t x212 = -589479944;
	int32_t t52 = -1;

	t52 = ((x209==(x210^x211))&x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 544U;
	int8_t x214 = -15;
	volatile int32_t x215 = INT32_MAX;
	int8_t x216 = 10;
	volatile int32_t t53 = 159;

	t53 = ((x213==(x214^x215))&x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x218 = INT16_MIN;
	uint32_t x219 = 0U;
	volatile uint64_t x220 = UINT64_MAX;
	uint64_t t54 = 79801555140LLU;

	t54 = ((x217==(x218^x219))&x220);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint8_t x221 = 91U;
	int16_t x222 = 114;
	uint8_t x223 = 0U;
	uint16_t x224 = 652U;
	volatile int32_t t55 = 3820;

	t55 = ((x221==(x222^x223))&x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = -126;
	uint16_t x226 = 583U;
	uint16_t x227 = UINT16_MAX;
	static int32_t x228 = -24;
	static int32_t t56 = -13307831;

	t56 = ((x225==(x226^x227))&x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x229 = UINT64_MAX;
	static uint8_t x230 = UINT8_MAX;
	int8_t x231 = INT8_MAX;
	static int32_t x232 = INT32_MIN;
	int32_t t57 = 27392;

	t57 = ((x229==(x230^x231))&x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x234 = INT16_MIN;
	int16_t x235 = INT16_MAX;
	uint64_t x236 = 66455000955LLU;
	volatile uint64_t t58 = 51LLU;

	t58 = ((x233==(x234^x235))&x236);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 0U;
	int16_t x238 = INT16_MIN;
	int32_t x239 = -1006222;
	uint8_t x240 = 9U;
	int32_t t59 = -464112616;

	t59 = ((x237==(x238^x239))&x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x242 = 1437870175803LLU;
	int32_t x243 = INT32_MAX;
	uint64_t x244 = UINT64_MAX;
	volatile uint64_t t60 = 92664LLU;

	t60 = ((x241==(x242^x243))&x244);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x246 = UINT64_MAX;
	uint16_t x247 = 963U;
	volatile int32_t x248 = INT32_MIN;

	t61 = ((x245==(x246^x247))&x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = -1LL;
	volatile int64_t x250 = INT64_MAX;
	int64_t x251 = INT64_MIN;
	int32_t x252 = 1823;
	static volatile int32_t t62 = 511996489;

	t62 = ((x249==(x250^x251))&x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x253 = UINT64_MAX;
	int64_t x254 = INT64_MAX;
	static volatile uint64_t x255 = 2229895LLU;
	volatile int8_t x256 = 1;
	int32_t t63 = 55;

	t63 = ((x253==(x254^x255))&x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x257 = 93;
	int64_t x258 = -687LL;
	volatile int8_t x259 = 36;
	int16_t x260 = 3;
	int32_t t64 = 85;

	t64 = ((x257==(x258^x259))&x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = UINT64_MAX;
	int16_t x262 = -19;
	uint8_t x263 = 0U;
	static int16_t x264 = INT16_MIN;

	t65 = ((x261==(x262^x263))&x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x266 = INT64_MAX;
	static uint64_t x267 = UINT64_MAX;
	int8_t x268 = INT8_MAX;

	t66 = ((x265==(x266^x267))&x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x271 = 50;
	static int8_t x272 = -1;

	t67 = ((x269==(x270^x271))&x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = UINT16_MAX;
	int64_t x274 = INT64_MIN;
	volatile int8_t x275 = INT8_MIN;
	volatile uint8_t x276 = UINT8_MAX;
	static int32_t t68 = 12;

	t68 = ((x273==(x274^x275))&x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x279 = UINT16_MAX;
	volatile uint64_t t69 = 104537605LLU;

	t69 = ((x277==(x278^x279))&x280);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x281 = INT8_MAX;
	uint16_t x282 = 1U;
	volatile int64_t x283 = -1LL;
	int16_t x284 = 1545;

	t70 = ((x281==(x282^x283))&x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x285 = 53U;
	static uint64_t x287 = 645231831LLU;
	volatile int16_t x288 = 107;
	int32_t t71 = 52701079;

	t71 = ((x285==(x286^x287))&x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x289 = INT8_MAX;
	int16_t x290 = -21;
	static int32_t x291 = INT32_MIN;
	static int16_t x292 = INT16_MAX;
	int32_t t72 = 1;

	t72 = ((x289==(x290^x291))&x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MIN;
	int8_t x295 = -27;
	int8_t x296 = -1;
	int32_t t73 = -656861;

	t73 = ((x293==(x294^x295))&x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint32_t x297 = UINT32_MAX;
	int16_t x299 = INT16_MIN;
	volatile int8_t x300 = INT8_MIN;
	volatile int32_t t74 = -17956843;

	t74 = ((x297==(x298^x299))&x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x301 = INT32_MAX;
	uint16_t x302 = 2U;
	int16_t x303 = INT16_MIN;
	volatile int32_t x304 = INT32_MIN;
	volatile int32_t t75 = -2;

	t75 = ((x301==(x302^x303))&x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = 0;
	int64_t x306 = INT64_MIN;
	static int16_t x307 = 9768;
	static volatile int64_t t76 = 2049969575665483LL;

	t76 = ((x305==(x306^x307))&x308);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = UINT32_MAX;
	volatile int8_t x311 = -1;
	int32_t x312 = -14950;
	volatile int32_t t77 = -298401837;

	t77 = ((x309==(x310^x311))&x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x314 = INT32_MIN;
	volatile int16_t x315 = INT16_MAX;
	volatile int32_t x316 = 4463212;
	volatile int32_t t78 = 1;

	t78 = ((x313==(x314^x315))&x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x317 = UINT64_MAX;
	uint16_t x320 = 101U;

	t79 = ((x317==(x318^x319))&x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	int64_t x322 = -62604062863856LL;
	int32_t x323 = 0;
	uint8_t x324 = 3U;
	volatile int32_t t80 = 1;

	t80 = ((x321==(x322^x323))&x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = 1008;
	static int32_t x328 = INT32_MAX;
	int32_t t81 = 2027391;

	t81 = ((x325==(x326^x327))&x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x330 = 114U;
	static int64_t x331 = -1LL;
	int16_t x332 = 127;

	t82 = ((x329==(x330^x331))&x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = 106U;
	static int64_t x334 = INT64_MAX;
	uint16_t x335 = 113U;
	int8_t x336 = 1;
	static volatile int32_t t83 = 9;

	t83 = ((x333==(x334^x335))&x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x337 = -2162234748LL;
	uint32_t x338 = 63795U;
	static volatile uint8_t x339 = 84U;
	uint8_t x340 = 3U;
	static volatile int32_t t84 = 27;

	t84 = ((x337==(x338^x339))&x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x341 = UINT8_MAX;
	volatile uint32_t x342 = 767639786U;
	uint16_t x343 = UINT16_MAX;
	static uint16_t x344 = UINT16_MAX;
	volatile int32_t t85 = 19241569;

	t85 = ((x341==(x342^x343))&x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 3U;
	volatile int32_t x346 = 1;
	volatile int64_t x347 = INT64_MAX;

	t86 = ((x345==(x346^x347))&x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MIN;
	int64_t x350 = -243LL;
	uint64_t x351 = 82775LLU;
	int16_t x352 = INT16_MIN;
	int32_t t87 = -25312382;

	t87 = ((x349==(x350^x351))&x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x354 = INT16_MIN;
	int32_t x355 = INT32_MIN;
	int8_t x356 = -1;
	static int32_t t88 = -1900244;

	t88 = ((x353==(x354^x355))&x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 95LLU;
	int8_t x359 = 28;

	t89 = ((x357==(x358^x359))&x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x361 = -190182;
	int8_t x363 = 58;
	int16_t x364 = INT16_MAX;

	t90 = ((x361==(x362^x363))&x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x367 = 12192705963951185LLU;
	uint64_t x368 = 134589085LLU;

	t91 = ((x365==(x366^x367))&x368);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = 1U;
	static uint32_t x370 = 1U;
	volatile int32_t t92 = -302700567;

	t92 = ((x369==(x370^x371))&x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x373 = 1173409LLU;
	int8_t x374 = INT8_MIN;
	int8_t x375 = INT8_MIN;
	int32_t x376 = -138341;
	int32_t t93 = -13;

	t93 = ((x373==(x374^x375))&x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x377 = 18U;
	int64_t x379 = -1LL;
	volatile int32_t x380 = -413196;
	static volatile int32_t t94 = 1;

	t94 = ((x377==(x378^x379))&x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MIN;
	int64_t x382 = INT64_MAX;
	int16_t x384 = INT16_MIN;
	volatile int32_t t95 = -20650;

	t95 = ((x381==(x382^x383))&x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = 27;
	int32_t x386 = -857;
	int32_t x387 = -1;
	uint64_t x388 = UINT64_MAX;
	uint64_t t96 = 1620000313558991LLU;

	t96 = ((x385==(x386^x387))&x388);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	uint8_t x390 = 29U;
	uint8_t x391 = UINT8_MAX;
	int8_t x392 = 0;
	int32_t t97 = 4019;

	t97 = ((x389==(x390^x391))&x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x394 = 9065152U;
	uint8_t x395 = UINT8_MAX;
	uint64_t x396 = UINT64_MAX;
	uint64_t t98 = 9LLU;

	t98 = ((x393==(x394^x395))&x396);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x397 = INT8_MIN;
	volatile uint32_t x398 = 133279525U;
	volatile int8_t x399 = INT8_MIN;
	int32_t x400 = -1;
	volatile int32_t t99 = -7650201;

	t99 = ((x397==(x398^x399))&x400);

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

