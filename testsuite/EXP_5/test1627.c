#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x4 = INT64_MAX;
static uint64_t x20 = UINT64_MAX;
int16_t x27 = INT16_MIN;
int32_t t5 = 1;
uint8_t x29 = UINT8_MAX;
static int32_t x31 = -6019812;
int8_t x34 = INT8_MIN;
static uint32_t t7 = 837U;
int32_t t8 = -1;
int32_t x41 = INT32_MAX;
uint16_t x42 = 220U;
int32_t t12 = -62;
uint32_t x61 = 66306065U;
int16_t x63 = INT16_MAX;
static int16_t x66 = -1;
static volatile int16_t x85 = -1;
volatile int32_t t18 = 61;
int32_t x94 = 231715;
int8_t x96 = -13;
volatile int32_t t22 = 17079300;
static int16_t x110 = INT16_MAX;
volatile uint64_t x117 = 58625700824LLU;
static volatile uint32_t x122 = 82U;
static int8_t x124 = INT8_MIN;
int32_t t28 = 2;
uint16_t x129 = 3U;
volatile int8_t x135 = INT8_MAX;
uint32_t x141 = UINT32_MAX;
static uint64_t t35 = 15446450112LLU;
static int32_t x157 = INT32_MAX;
int64_t x160 = 1LL;
uint16_t x162 = UINT16_MAX;
volatile int32_t t38 = 113180015;
volatile int64_t x170 = INT64_MAX;
uint64_t x173 = UINT64_MAX;
uint32_t x177 = UINT32_MAX;
int32_t x188 = INT32_MIN;
volatile int16_t x191 = INT16_MIN;
uint32_t x197 = 1U;
uint8_t x198 = 18U;
static volatile int32_t t46 = -59351;
static uint32_t x205 = 166150185U;
uint64_t x208 = 3869LLU;
volatile int64_t x211 = INT64_MIN;
int32_t x223 = -1;
static int32_t t51 = 77;
volatile uint64_t x226 = 119792036LLU;
int16_t x241 = -1;
int16_t x248 = INT16_MIN;
int16_t x255 = 10637;
int64_t t62 = INT64_MAX;
static volatile uint8_t x271 = UINT8_MAX;
volatile uint8_t x276 = 5U;
volatile int32_t t65 = 502000;
volatile int16_t x285 = INT16_MIN;
int16_t x287 = INT16_MIN;
static uint64_t x289 = UINT64_MAX;
uint16_t x292 = 7451U;
uint64_t t68 = 48596554188333LLU;
int64_t x294 = 6LL;
volatile uint32_t x298 = 7912063U;
volatile uint32_t t70 = UINT32_MAX;
volatile uint64_t x303 = UINT64_MAX;
uint16_t x307 = 0U;
uint64_t x312 = UINT64_MAX;
int8_t x319 = INT8_MIN;
int32_t t75 = 13578334;
static volatile int32_t t76 = 1032284352;
uint64_t x327 = UINT64_MAX;
int16_t x337 = 14;
uint8_t x344 = UINT8_MAX;
int64_t x348 = INT64_MIN;
int64_t x350 = -1667773908LL;
volatile int32_t x355 = INT32_MAX;
int64_t x356 = -105LL;
uint64_t x357 = 407737639085088637LLU;
int32_t x362 = -3;
int64_t x366 = INT64_MIN;
volatile uint32_t x373 = 130U;
int32_t x381 = -1;
static int32_t t91 = -52823;
volatile int32_t x393 = INT32_MIN;
int8_t x396 = -7;
uint8_t x405 = 1U;
int8_t x407 = -2;
int8_t x412 = 0;
int64_t x417 = INT64_MIN;


void f0(void) {
	int16_t x1 = INT16_MAX;
	int16_t x2 = -790;
	int8_t x3 = INT8_MAX;
	static int32_t t0 = 11;

	t0 = (x1-((x2<=x3)<x4));

	if (t0 != 32766) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 19;
	uint64_t x6 = 55LLU;
	int16_t x7 = INT16_MIN;
	int8_t x8 = INT8_MIN;
	int32_t t1 = -26867;

	t1 = (x5-((x6<=x7)<x8));

	if (t1 != 19) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x13 = 91684217;
	int8_t x14 = -1;
	static int64_t x15 = INT64_MAX;
	int64_t x16 = INT64_MAX;
	volatile int32_t t2 = 1603;

	t2 = (x13-((x14<=x15)<x16));

	if (t2 != 91684216) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = -14;
	uint64_t x18 = UINT64_MAX;
	int64_t x19 = 1LL;
	volatile int32_t t3 = 30;

	t3 = (x17-((x18<=x19)<x20));

	if (t3 != -15) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MIN;
	int32_t x22 = 1;
	static volatile uint32_t x23 = UINT32_MAX;
	int32_t x24 = INT32_MIN;
	volatile int32_t t4 = 709353;

	t4 = (x21-((x22<=x23)<x24));

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x25 = 2;
	int16_t x26 = 10;
	int64_t x28 = INT64_MIN;

	t5 = (x25-((x26<=x27)<x28));

	if (t5 != 2) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x30 = 7;
	int16_t x32 = -1;
	volatile int32_t t6 = 2949;

	t6 = (x29-((x30<=x31)<x32));

	if (t6 != 255) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x33 = 441U;
	int8_t x35 = INT8_MAX;
	uint8_t x36 = 11U;

	t7 = (x33-((x34<=x35)<x36));

	if (t7 != 440U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MIN;
	static uint32_t x38 = 95359U;
	int32_t x39 = INT32_MAX;
	static uint32_t x40 = UINT32_MAX;

	t8 = (x37-((x38<=x39)<x40));

	if (t8 != -129) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x43 = -1;
	int16_t x44 = INT16_MIN;
	static volatile int32_t t9 = INT32_MAX;

	t9 = (x41-((x42<=x43)<x44));

	if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x45 = 0U;
	volatile int16_t x46 = -1;
	int8_t x47 = INT8_MIN;
	volatile int8_t x48 = INT8_MIN;
	uint32_t t10 = 16148U;

	t10 = (x45-((x46<=x47)<x48));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = 8U;
	int64_t x50 = 13552375LL;
	int8_t x51 = -1;
	uint16_t x52 = 3U;
	volatile uint32_t t11 = 31657142U;

	t11 = (x49-((x50<=x51)<x52));

	if (t11 != 7U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = -1;
	uint64_t x54 = 13886608647359868LLU;
	int32_t x55 = -1;
	static int16_t x56 = INT16_MAX;

	t12 = (x53-((x54<=x55)<x56));

	if (t12 != -2) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x62 = -13;
	int32_t x64 = INT32_MIN;
	static volatile uint32_t t13 = 1U;

	t13 = (x61-((x62<=x63)<x64));

	if (t13 != 66306065U) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x65 = 11U;
	uint64_t x67 = UINT64_MAX;
	static int8_t x68 = 1;
	uint32_t t14 = 7357713U;

	t14 = (x65-((x66<=x67)<x68));

	if (t14 != 11U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = 665LL;
	int8_t x70 = INT8_MIN;
	int64_t x71 = INT64_MIN;
	uint16_t x72 = 161U;
	int64_t t15 = 0LL;

	t15 = (x69-((x70<=x71)<x72));

	if (t15 != 664LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int32_t x73 = -1;
	uint8_t x74 = UINT8_MAX;
	volatile int16_t x75 = INT16_MIN;
	int64_t x76 = INT64_MAX;
	int32_t t16 = -260124313;

	t16 = (x73-((x74<=x75)<x76));

	if (t16 != -2) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint16_t x81 = 0U;
	volatile uint64_t x82 = UINT64_MAX;
	int32_t x83 = -1;
	uint32_t x84 = 1402916U;
	volatile int32_t t17 = -12;

	t17 = (x81-((x82<=x83)<x84));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x86 = -205266761LL;
	uint16_t x87 = 586U;
	uint64_t x88 = 184041367434LLU;

	t18 = (x85-((x86<=x87)<x88));

	if (t18 != -2) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x89 = 387U;
	int32_t x90 = -128457921;
	int8_t x91 = -1;
	uint64_t x92 = 4729523966294LLU;
	volatile int32_t t19 = -462286218;

	t19 = (x89-((x90<=x91)<x92));

	if (t19 != 386) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x93 = INT8_MIN;
	uint64_t x95 = 18410453400886689LLU;
	volatile int32_t t20 = -240685288;

	t20 = (x93-((x94<=x95)<x96));

	if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x97 = INT64_MIN;
	int64_t x98 = -710625048167LL;
	int64_t x99 = -114815024LL;
	int32_t x100 = INT32_MIN;
	int64_t t21 = INT64_MIN;

	t21 = (x97-((x98<=x99)<x100));

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = INT8_MIN;
	volatile int16_t x102 = -1;
	int8_t x103 = INT8_MIN;
	int32_t x104 = -102810;

	t22 = (x101-((x102<=x103)<x104));

	if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = INT32_MIN;
	static volatile uint8_t x106 = UINT8_MAX;
	int8_t x107 = 0;
	static int16_t x108 = INT16_MIN;
	int32_t t23 = INT32_MIN;

	t23 = (x105-((x106<=x107)<x108));

	if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x109 = UINT32_MAX;
	uint64_t x111 = UINT64_MAX;
	static int8_t x112 = INT8_MIN;
	volatile uint32_t t24 = UINT32_MAX;

	t24 = (x109-((x110<=x111)<x112));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x113 = 12U;
	int64_t x114 = 97787215336LL;
	static uint8_t x115 = 124U;
	uint32_t x116 = 2761U;
	volatile int32_t t25 = -135252024;

	t25 = (x113-((x114<=x115)<x116));

	if (t25 != 11) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x118 = 1761LL;
	int16_t x119 = INT16_MIN;
	int8_t x120 = 0;
	uint64_t t26 = 67LLU;

	t26 = (x117-((x118<=x119)<x120));

	if (t26 != 58625700824LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x121 = -1;
	int16_t x123 = INT16_MIN;
	volatile int32_t t27 = -63;

	t27 = (x121-((x122<=x123)<x124));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x125 = -1;
	volatile int8_t x126 = INT8_MAX;
	int8_t x127 = INT8_MIN;
	int8_t x128 = INT8_MAX;

	t28 = (x125-((x126<=x127)<x128));

	if (t28 != -2) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x130 = 2U;
	volatile int16_t x131 = -2873;
	uint8_t x132 = UINT8_MAX;
	volatile int32_t t29 = 788766;

	t29 = (x129-((x130<=x131)<x132));

	if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x133 = INT64_MIN;
	static volatile int16_t x134 = INT16_MIN;
	int64_t x136 = INT64_MIN;
	volatile int64_t t30 = INT64_MIN;

	t30 = (x133-((x134<=x135)<x136));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x137 = INT16_MIN;
	volatile uint64_t x138 = 27404179266LLU;
	uint16_t x139 = 3U;
	static volatile int16_t x140 = -1;
	volatile int32_t t31 = -97601338;

	t31 = (x137-((x138<=x139)<x140));

	if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x142 = INT16_MAX;
	uint16_t x143 = UINT16_MAX;
	volatile uint16_t x144 = 17U;
	volatile uint32_t t32 = 0U;

	t32 = (x141-((x142<=x143)<x144));

	if (t32 != 4294967294U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x145 = -1;
	int16_t x146 = INT16_MAX;
	static int32_t x147 = INT32_MIN;
	uint8_t x148 = UINT8_MAX;
	int32_t t33 = 28948048;

	t33 = (x145-((x146<=x147)<x148));

	if (t33 != -2) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x149 = INT32_MAX;
	int64_t x150 = -1LL;
	uint16_t x151 = 78U;
	static int64_t x152 = INT64_MAX;
	int32_t t34 = 1;

	t34 = (x149-((x150<=x151)<x152));

	if (t34 != 2147483646) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x153 = 130LLU;
	static uint64_t x154 = UINT64_MAX;
	volatile int32_t x155 = INT32_MAX;
	int8_t x156 = 12;

	t35 = (x153-((x154<=x155)<x156));

	if (t35 != 129LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x158 = 25U;
	int64_t x159 = INT64_MIN;
	int32_t t36 = -1;

	t36 = (x157-((x158<=x159)<x160));

	if (t36 != 2147483646) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x161 = INT16_MIN;
	int64_t x163 = -1LL;
	static int8_t x164 = -1;
	static int32_t t37 = -10;

	t37 = (x161-((x162<=x163)<x164));

	if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x165 = UINT16_MAX;
	int8_t x166 = -1;
	int64_t x167 = -110501786LL;
	int32_t x168 = -1;

	t38 = (x165-((x166<=x167)<x168));

	if (t38 != 65535) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x169 = INT8_MIN;
	static int64_t x171 = -1LL;
	uint64_t x172 = 31205253966076458LLU;
	static int32_t t39 = 188842059;

	t39 = (x169-((x170<=x171)<x172));

	if (t39 != -129) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x174 = -37005679863LL;
	static uint8_t x175 = 5U;
	int32_t x176 = INT32_MAX;
	uint64_t t40 = 6035LLU;

	t40 = (x173-((x174<=x175)<x176));

	if (t40 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x178 = -78;
	int8_t x179 = INT8_MIN;
	int64_t x180 = INT64_MAX;
	uint32_t t41 = 92270284U;

	t41 = (x177-((x178<=x179)<x180));

	if (t41 != 4294967294U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x185 = 3;
	int8_t x186 = INT8_MIN;
	int64_t x187 = INT64_MIN;
	int32_t t42 = -235235626;

	t42 = (x185-((x186<=x187)<x188));

	if (t42 != 3) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x189 = UINT8_MAX;
	static int8_t x190 = INT8_MIN;
	uint32_t x192 = UINT32_MAX;
	int32_t t43 = -105950;

	t43 = (x189-((x190<=x191)<x192));

	if (t43 != 254) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x193 = UINT64_MAX;
	volatile int32_t x194 = INT32_MAX;
	int32_t x195 = -1;
	int64_t x196 = INT64_MAX;
	volatile uint64_t t44 = 57455237390690080LLU;

	t44 = (x193-((x194<=x195)<x196));

	if (t44 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x199 = 1U;
	volatile int8_t x200 = -3;
	volatile uint32_t t45 = 320720U;

	t45 = (x197-((x198<=x199)<x200));

	if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x201 = INT16_MIN;
	int32_t x202 = INT32_MIN;
	volatile int16_t x203 = -2;
	static int64_t x204 = -1LL;

	t46 = (x201-((x202<=x203)<x204));

	if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x206 = 20068663;
	uint32_t x207 = UINT32_MAX;
	uint32_t t47 = 16U;

	t47 = (x205-((x206<=x207)<x208));

	if (t47 != 166150184U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x209 = INT32_MAX;
	static int64_t x210 = 24945837256LL;
	int8_t x212 = INT8_MIN;
	int32_t t48 = INT32_MAX;

	t48 = (x209-((x210<=x211)<x212));

	if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x213 = INT64_MIN;
	int32_t x214 = INT32_MIN;
	int8_t x215 = 2;
	static int64_t x216 = INT64_MIN;
	volatile int64_t t49 = INT64_MIN;

	t49 = (x213-((x214<=x215)<x216));

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x217 = UINT32_MAX;
	volatile uint8_t x218 = UINT8_MAX;
	volatile int16_t x219 = -70;
	uint32_t x220 = UINT32_MAX;
	uint32_t t50 = 112791912U;

	t50 = (x217-((x218<=x219)<x220));

	if (t50 != 4294967294U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x221 = 1;
	volatile uint64_t x222 = 235469698828074188LLU;
	uint8_t x224 = UINT8_MAX;

	t51 = (x221-((x222<=x223)<x224));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x225 = INT16_MIN;
	int16_t x227 = INT16_MAX;
	int64_t x228 = -1LL;
	volatile int32_t t52 = -945;

	t52 = (x225-((x226<=x227)<x228));

	if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x229 = UINT64_MAX;
	static int8_t x230 = 0;
	volatile int8_t x231 = 1;
	int8_t x232 = 1;
	volatile uint64_t t53 = UINT64_MAX;

	t53 = (x229-((x230<=x231)<x232));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x233 = 134;
	static int8_t x234 = INT8_MIN;
	int32_t x235 = INT32_MIN;
	static int16_t x236 = INT16_MIN;
	volatile int32_t t54 = -109;

	t54 = (x233-((x234<=x235)<x236));

	if (t54 != 134) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x237 = 1866U;
	int64_t x238 = INT64_MIN;
	int64_t x239 = INT64_MAX;
	volatile uint64_t x240 = 674860021435890475LLU;
	uint32_t t55 = 27U;

	t55 = (x237-((x238<=x239)<x240));

	if (t55 != 1865U) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x242 = 0;
	uint32_t x243 = 11U;
	static int8_t x244 = -1;
	volatile int32_t t56 = 4;

	t56 = (x241-((x242<=x243)<x244));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x245 = UINT16_MAX;
	int32_t x246 = -1;
	static int64_t x247 = INT64_MAX;
	volatile int32_t t57 = 147;

	t57 = (x245-((x246<=x247)<x248));

	if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x249 = INT32_MIN;
	int64_t x250 = -124126LL;
	volatile uint8_t x251 = 8U;
	int32_t x252 = 0;
	volatile int32_t t58 = INT32_MIN;

	t58 = (x249-((x250<=x251)<x252));

	if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x253 = INT64_MAX;
	int32_t x254 = INT32_MAX;
	int16_t x256 = INT16_MIN;
	int64_t t59 = INT64_MAX;

	t59 = (x253-((x254<=x255)<x256));

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x257 = UINT32_MAX;
	static volatile uint32_t x258 = 1928709976U;
	uint8_t x259 = UINT8_MAX;
	static volatile int16_t x260 = INT16_MIN;
	volatile uint32_t t60 = UINT32_MAX;

	t60 = (x257-((x258<=x259)<x260));

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x261 = 0;
	static uint16_t x262 = 509U;
	uint8_t x263 = 5U;
	static uint8_t x264 = UINT8_MAX;
	int32_t t61 = 2501;

	t61 = (x261-((x262<=x263)<x264));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x265 = INT64_MAX;
	volatile int16_t x266 = INT16_MIN;
	int16_t x267 = INT16_MIN;
	int64_t x268 = -215006951236716LL;

	t62 = (x265-((x266<=x267)<x268));

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x269 = INT64_MAX;
	uint8_t x270 = UINT8_MAX;
	int16_t x272 = -3;
	volatile int64_t t63 = INT64_MAX;

	t63 = (x269-((x270<=x271)<x272));

	if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x273 = INT8_MAX;
	uint16_t x274 = UINT16_MAX;
	uint16_t x275 = 254U;
	int32_t t64 = -41675880;

	t64 = (x273-((x274<=x275)<x276));

	if (t64 != 126) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x277 = -1;
	int32_t x278 = 980263;
	uint64_t x279 = 32108252138LLU;
	volatile int32_t x280 = INT32_MIN;

	t65 = (x277-((x278<=x279)<x280));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x281 = INT32_MIN;
	int16_t x282 = INT16_MAX;
	uint64_t x283 = 6553219945LLU;
	int16_t x284 = INT16_MIN;
	int32_t t66 = INT32_MIN;

	t66 = (x281-((x282<=x283)<x284));

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x286 = INT64_MIN;
	int32_t x288 = -6;
	volatile int32_t t67 = -54718976;

	t67 = (x285-((x286<=x287)<x288));

	if (t67 != -32768) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x290 = 3U;
	volatile int32_t x291 = INT32_MAX;

	t68 = (x289-((x290<=x291)<x292));

	if (t68 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x293 = -738;
	int64_t x295 = INT64_MAX;
	volatile int16_t x296 = -1;
	int32_t t69 = -1;

	t69 = (x293-((x294<=x295)<x296));

	if (t69 != -738) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x297 = UINT32_MAX;
	uint8_t x299 = UINT8_MAX;
	int32_t x300 = INT32_MIN;

	t70 = (x297-((x298<=x299)<x300));

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x301 = INT32_MAX;
	int32_t x302 = 461486123;
	uint16_t x304 = 1529U;
	static volatile int32_t t71 = -431;

	t71 = (x301-((x302<=x303)<x304));

	if (t71 != 2147483646) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x305 = 1U;
	volatile int32_t x306 = INT32_MIN;
	uint8_t x308 = 13U;
	static int32_t t72 = -16031;

	t72 = (x305-((x306<=x307)<x308));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x309 = 15U;
	uint8_t x310 = 31U;
	uint64_t x311 = 10LLU;
	volatile int32_t t73 = -39469776;

	t73 = (x309-((x310<=x311)<x312));

	if (t73 != 14) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x313 = UINT32_MAX;
	int32_t x314 = INT32_MIN;
	volatile uint16_t x315 = UINT16_MAX;
	int16_t x316 = INT16_MAX;
	volatile uint32_t t74 = 24956U;

	t74 = (x313-((x314<=x315)<x316));

	if (t74 != 4294967294U) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x317 = -46;
	int64_t x318 = -970649914477LL;
	int16_t x320 = -1;

	t75 = (x317-((x318<=x319)<x320));

	if (t75 != -46) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x321 = INT8_MIN;
	int32_t x322 = -260;
	static volatile uint64_t x323 = 24138LLU;
	uint8_t x324 = 5U;

	t76 = (x321-((x322<=x323)<x324));

	if (t76 != -129) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x325 = 0;
	int16_t x326 = 0;
	int64_t x328 = INT64_MIN;
	int32_t t77 = -293059883;

	t77 = (x325-((x326<=x327)<x328));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x329 = 1U;
	uint8_t x330 = 7U;
	int64_t x331 = 4128LL;
	int64_t x332 = 193LL;
	static volatile int32_t t78 = 3829;

	t78 = (x329-((x330<=x331)<x332));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x333 = 123707;
	int8_t x334 = INT8_MAX;
	volatile int64_t x335 = INT64_MIN;
	int64_t x336 = INT64_MIN;
	static volatile int32_t t79 = 0;

	t79 = (x333-((x334<=x335)<x336));

	if (t79 != 123707) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x338 = 4U;
	static int16_t x339 = INT16_MAX;
	static int32_t x340 = -14202;
	int32_t t80 = -239642;

	t80 = (x337-((x338<=x339)<x340));

	if (t80 != 14) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x341 = UINT8_MAX;
	int32_t x342 = INT32_MAX;
	int64_t x343 = INT64_MAX;
	volatile int32_t t81 = 449365060;

	t81 = (x341-((x342<=x343)<x344));

	if (t81 != 254) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x345 = -1;
	volatile int8_t x346 = -1;
	int64_t x347 = INT64_MAX;
	volatile int32_t t82 = -208975;

	t82 = (x345-((x346<=x347)<x348));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x349 = 3639949U;
	uint64_t x351 = 6LLU;
	int64_t x352 = -1LL;
	volatile uint32_t t83 = 12U;

	t83 = (x349-((x350<=x351)<x352));

	if (t83 != 3639949U) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x353 = INT32_MAX;
	uint16_t x354 = 30123U;
	volatile int32_t t84 = INT32_MAX;

	t84 = (x353-((x354<=x355)<x356));

	if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x358 = 5986671348500581225LLU;
	int64_t x359 = -1506135711971LL;
	int64_t x360 = -885493LL;
	uint64_t t85 = 1946253138503363LLU;

	t85 = (x357-((x358<=x359)<x360));

	if (t85 != 407737639085088637LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x361 = -1;
	uint32_t x363 = 420U;
	int16_t x364 = INT16_MAX;
	volatile int32_t t86 = 109296893;

	t86 = (x361-((x362<=x363)<x364));

	if (t86 != -2) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x365 = INT16_MAX;
	int32_t x367 = INT32_MIN;
	static volatile int32_t x368 = INT32_MIN;
	static int32_t t87 = -2138;

	t87 = (x365-((x366<=x367)<x368));

	if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x369 = -1;
	volatile int64_t x370 = 106460545LL;
	int8_t x371 = INT8_MIN;
	uint32_t x372 = UINT32_MAX;
	int32_t t88 = -3986381;

	t88 = (x369-((x370<=x371)<x372));

	if (t88 != -2) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int32_t x374 = INT32_MAX;
	uint8_t x375 = 0U;
	int8_t x376 = INT8_MIN;
	volatile uint32_t t89 = 4727843U;

	t89 = (x373-((x374<=x375)<x376));

	if (t89 != 130U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x377 = -1;
	uint32_t x378 = 0U;
	static int16_t x379 = -1;
	uint64_t x380 = UINT64_MAX;
	int32_t t90 = 94900;

	t90 = (x377-((x378<=x379)<x380));

	if (t90 != -2) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x382 = 30906546247799LLU;
	static int32_t x383 = -1;
	static uint32_t x384 = 40144U;

	t91 = (x381-((x382<=x383)<x384));

	if (t91 != -2) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x385 = -1;
	uint8_t x386 = 60U;
	static int32_t x387 = INT32_MAX;
	int32_t x388 = INT32_MAX;
	volatile int32_t t92 = -86083665;

	t92 = (x385-((x386<=x387)<x388));

	if (t92 != -2) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x389 = 112220535809778117LL;
	int32_t x390 = -7933;
	uint32_t x391 = 31006202U;
	int32_t x392 = INT32_MIN;
	int64_t t93 = 615LL;

	t93 = (x389-((x390<=x391)<x392));

	if (t93 != 112220535809778117LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x394 = INT8_MIN;
	int8_t x395 = INT8_MIN;
	int32_t t94 = INT32_MIN;

	t94 = (x393-((x394<=x395)<x396));

	if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x401 = UINT32_MAX;
	uint64_t x402 = 1027936341082LLU;
	uint32_t x403 = UINT32_MAX;
	volatile int32_t x404 = INT32_MAX;
	uint32_t t95 = 37490052U;

	t95 = (x401-((x402<=x403)<x404));

	if (t95 != 4294967294U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x406 = UINT64_MAX;
	static int16_t x408 = INT16_MAX;
	volatile int32_t t96 = 1;

	t96 = (x405-((x406<=x407)<x408));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x409 = -402843537772044725LL;
	uint8_t x410 = 6U;
	uint16_t x411 = 714U;
	volatile int64_t t97 = -5116626843LL;

	t97 = (x409-((x410<=x411)<x412));

	if (t97 != -402843537772044725LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x413 = 5134213LL;
	static int64_t x414 = 251321904LL;
	uint64_t x415 = 39896535825LLU;
	static uint16_t x416 = 23U;
	int64_t t98 = -2690931339374LL;

	t98 = (x413-((x414<=x415)<x416));

	if (t98 != 5134212LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x418 = INT32_MIN;
	volatile int8_t x419 = INT8_MAX;
	static volatile int32_t x420 = -1;
	volatile int64_t t99 = INT64_MIN;

	t99 = (x417-((x418<=x419)<x420));

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

