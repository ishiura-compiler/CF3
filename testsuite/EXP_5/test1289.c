#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x6 = -3161;
volatile int64_t x7 = INT64_MIN;
uint64_t t0 = 221280LLU;
int32_t x10 = INT32_MIN;
volatile int8_t x11 = INT8_MAX;
int8_t x18 = 0;
int8_t x28 = INT8_MIN;
volatile uint64_t t5 = UINT64_MAX;
volatile int32_t t7 = -106591;
int32_t x55 = INT32_MIN;
int32_t x66 = INT32_MAX;
int64_t t12 = -2112846004891647453LL;
int32_t t13 = 102676045;
int64_t x75 = INT64_MIN;
uint16_t x78 = 67U;
uint8_t x81 = 3U;
int8_t x99 = INT8_MIN;
static int32_t t20 = -196327727;
int32_t x107 = INT32_MIN;
int64_t x109 = INT64_MAX;
uint8_t x112 = 37U;
uint32_t x116 = 443404U;
static volatile uint32_t x133 = 3U;
uint64_t x135 = 57031LLU;
int16_t x137 = -1;
int32_t t29 = 56;
int8_t x147 = INT8_MIN;
int64_t x149 = 13LL;
int32_t x150 = -246;
uint8_t x153 = 12U;
static int16_t x159 = -1;
volatile uint16_t x165 = 703U;
int32_t x167 = 3;
static int64_t x182 = INT64_MIN;
int32_t x191 = INT32_MAX;
int32_t x195 = -47111;
volatile uint32_t t43 = 2474559U;
static int16_t x204 = INT16_MIN;
volatile int32_t t47 = INT32_MIN;
static int16_t x225 = INT16_MIN;
int64_t x235 = INT64_MAX;
uint16_t x236 = UINT16_MAX;
int64_t t53 = 6014520934LL;
int8_t x248 = INT8_MIN;
int32_t x254 = INT32_MIN;
static volatile int32_t t56 = -55;
static uint8_t x276 = UINT8_MAX;
volatile uint64_t x281 = 0LLU;
int8_t x283 = INT8_MIN;
static int64_t x287 = INT64_MAX;
volatile int32_t t63 = -3361;
volatile uint16_t x293 = 8004U;
int64_t x295 = INT64_MIN;
static int64_t x303 = INT64_MIN;
int16_t x306 = INT16_MIN;
static int8_t x312 = INT8_MIN;
volatile int32_t t69 = 63522;
static int64_t x316 = 11912562LL;
volatile int32_t t71 = -331521506;
uint8_t x323 = 12U;
int32_t x324 = INT32_MIN;
volatile int16_t x329 = -1;
uint64_t x332 = 241635491551483LLU;
int32_t x334 = INT32_MIN;
int16_t x335 = -1;
static uint64_t x337 = UINT64_MAX;
int64_t x338 = INT64_MIN;
int16_t x340 = 13515;
static int16_t x343 = INT16_MAX;
static volatile int8_t x346 = 0;
int32_t t79 = 138887;
int32_t x370 = INT32_MIN;
int32_t x373 = -7061802;
int32_t x379 = INT32_MIN;
volatile int16_t x384 = -1;
int8_t x390 = INT8_MIN;
volatile int64_t x391 = INT64_MIN;
uint32_t t87 = 82U;
uint16_t x394 = 4U;
static int8_t x419 = INT8_MIN;
static uint16_t x420 = UINT16_MAX;
static volatile uint32_t x422 = 3085782U;
int32_t x426 = -1;
static volatile uint64_t x429 = UINT64_MAX;
int16_t x430 = INT16_MIN;
uint64_t t95 = 59LLU;
int32_t x439 = -53411;
int16_t x440 = -1192;
volatile int32_t t99 = -2397067;


void f0(void) {
	volatile uint64_t x5 = 21775523107209LLU;
	uint64_t x8 = 1012924593122937935LLU;

	t0 = (x5-((x6==x7)<x8));

	if (t0 != 21775523107208LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x9 = -1;
	int64_t x12 = INT64_MIN;
	int32_t t1 = -25;

	t1 = (x9-((x10==x11)<x12));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x17 = 77U;
	static int32_t x19 = -17777;
	int64_t x20 = -1LL;
	volatile int32_t t2 = 95001858;

	t2 = (x17-((x18==x19)<x20));

	if (t2 != 77) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x21 = 23177468642LLU;
	volatile int32_t x22 = 445395;
	volatile int16_t x23 = -1;
	int8_t x24 = INT8_MIN;
	volatile uint64_t t3 = 3361199460419244LLU;

	t3 = (x21-((x22==x23)<x24));

	if (t3 != 23177468642LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x25 = INT64_MIN;
	volatile int8_t x26 = INT8_MIN;
	int32_t x27 = -1;
	volatile int64_t t4 = INT64_MIN;

	t4 = (x25-((x26==x27)<x28));

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x33 = UINT64_MAX;
	int64_t x34 = INT64_MIN;
	uint32_t x35 = 3231U;
	uint16_t x36 = 0U;

	t5 = (x33-((x34==x35)<x36));

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x37 = INT8_MIN;
	static int8_t x38 = INT8_MIN;
	volatile int32_t x39 = -1;
	int16_t x40 = INT16_MIN;
	int32_t t6 = 7143030;

	t6 = (x37-((x38==x39)<x40));

	if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x41 = UINT16_MAX;
	static int64_t x42 = INT64_MAX;
	int32_t x43 = INT32_MIN;
	uint16_t x44 = 72U;

	t7 = (x41-((x42==x43)<x44));

	if (t7 != 65534) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x49 = -1;
	uint32_t x50 = 895490U;
	static int64_t x51 = INT64_MIN;
	static int16_t x52 = INT16_MIN;
	volatile int32_t t8 = 440677;

	t8 = (x49-((x50==x51)<x52));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x53 = 1108U;
	int64_t x54 = INT64_MIN;
	int8_t x56 = INT8_MIN;
	volatile int32_t t9 = 76152183;

	t9 = (x53-((x54==x55)<x56));

	if (t9 != 1108) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x57 = INT16_MAX;
	static int16_t x58 = 1;
	uint8_t x59 = 10U;
	volatile int8_t x60 = INT8_MIN;
	volatile int32_t t10 = 898573;

	t10 = (x57-((x58==x59)<x60));

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x61 = INT64_MIN;
	int32_t x62 = -7808;
	uint64_t x63 = 33623500857LLU;
	int16_t x64 = -1;
	volatile int64_t t11 = INT64_MIN;

	t11 = (x61-((x62==x63)<x64));

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x65 = 2587536737233340LL;
	volatile int8_t x67 = INT8_MIN;
	static int32_t x68 = -28282462;

	t12 = (x65-((x66==x67)<x68));

	if (t12 != 2587536737233340LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x69 = INT8_MIN;
	int16_t x70 = -2;
	volatile int8_t x71 = INT8_MAX;
	int16_t x72 = -4335;

	t13 = (x69-((x70==x71)<x72));

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x73 = -6;
	int32_t x74 = -1;
	static int8_t x76 = 2;
	volatile int32_t t14 = 192384884;

	t14 = (x73-((x74==x75)<x76));

	if (t14 != -7) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x77 = 184133LLU;
	int16_t x79 = -5543;
	static volatile int16_t x80 = -355;
	volatile uint64_t t15 = 68161LLU;

	t15 = (x77-((x78==x79)<x80));

	if (t15 != 184133LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x82 = 0U;
	static volatile int16_t x83 = 3834;
	int8_t x84 = INT8_MIN;
	int32_t t16 = -173;

	t16 = (x81-((x82==x83)<x84));

	if (t16 != 3) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x85 = UINT8_MAX;
	uint64_t x86 = UINT64_MAX;
	int64_t x87 = INT64_MIN;
	uint16_t x88 = UINT16_MAX;
	int32_t t17 = -2396;

	t17 = (x85-((x86==x87)<x88));

	if (t17 != 254) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x93 = 1LL;
	static volatile int8_t x94 = -1;
	volatile uint8_t x95 = 1U;
	static volatile uint32_t x96 = 7600U;
	volatile int64_t t18 = -772084LL;

	t18 = (x93-((x94==x95)<x96));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x97 = -1;
	uint32_t x98 = UINT32_MAX;
	int16_t x100 = 2208;
	volatile int32_t t19 = 1870677;

	t19 = (x97-((x98==x99)<x100));

	if (t19 != -2) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x101 = INT16_MAX;
	uint64_t x102 = UINT64_MAX;
	static int16_t x103 = INT16_MIN;
	volatile int8_t x104 = -16;

	t20 = (x101-((x102==x103)<x104));

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x105 = UINT8_MAX;
	uint64_t x106 = UINT64_MAX;
	volatile int8_t x108 = 0;
	int32_t t21 = -1;

	t21 = (x105-((x106==x107)<x108));

	if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x110 = -16;
	volatile uint16_t x111 = UINT16_MAX;
	static volatile int64_t t22 = -249482007815508343LL;

	t22 = (x109-((x110==x111)<x112));

	if (t22 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x113 = INT8_MAX;
	int64_t x114 = -445375568624LL;
	int64_t x115 = INT64_MIN;
	int32_t t23 = 7;

	t23 = (x113-((x114==x115)<x116));

	if (t23 != 126) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x117 = 27029393199996LLU;
	uint64_t x118 = UINT64_MAX;
	static volatile int8_t x119 = INT8_MIN;
	static int32_t x120 = INT32_MIN;
	volatile uint64_t t24 = 120954044120374771LLU;

	t24 = (x117-((x118==x119)<x120));

	if (t24 != 27029393199996LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x121 = 8;
	static volatile int16_t x122 = INT16_MIN;
	int32_t x123 = -1;
	static int64_t x124 = INT64_MAX;
	volatile int32_t t25 = -9104;

	t25 = (x121-((x122==x123)<x124));

	if (t25 != 7) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x125 = INT32_MIN;
	int16_t x126 = -1;
	int16_t x127 = INT16_MIN;
	static int8_t x128 = -1;
	static volatile int32_t t26 = INT32_MIN;

	t26 = (x125-((x126==x127)<x128));

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x129 = INT8_MAX;
	static int8_t x130 = INT8_MIN;
	int16_t x131 = INT16_MIN;
	uint64_t x132 = 8742815733419LLU;
	int32_t t27 = -439;

	t27 = (x129-((x130==x131)<x132));

	if (t27 != 126) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x134 = -1;
	uint32_t x136 = UINT32_MAX;
	volatile uint32_t t28 = 7204556U;

	t28 = (x133-((x134==x135)<x136));

	if (t28 != 2U) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint16_t x138 = UINT16_MAX;
	int64_t x139 = INT64_MIN;
	volatile int8_t x140 = -51;

	t29 = (x137-((x138==x139)<x140));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x141 = -29896333LL;
	volatile uint32_t x142 = 386301U;
	int16_t x143 = 1433;
	int32_t x144 = INT32_MIN;
	static volatile int64_t t30 = 2465976814848LL;

	t30 = (x141-((x142==x143)<x144));

	if (t30 != -29896333LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x145 = -6;
	int8_t x146 = INT8_MIN;
	volatile uint64_t x148 = 5675830LLU;
	static int32_t t31 = -1645285;

	t31 = (x145-((x146==x147)<x148));

	if (t31 != -7) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x151 = UINT32_MAX;
	volatile int16_t x152 = 748;
	int64_t t32 = 131108339LL;

	t32 = (x149-((x150==x151)<x152));

	if (t32 != 12LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x154 = UINT32_MAX;
	volatile int8_t x155 = INT8_MIN;
	int16_t x156 = 372;
	volatile int32_t t33 = 138020920;

	t33 = (x153-((x154==x155)<x156));

	if (t33 != 11) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x157 = INT64_MIN;
	static int8_t x158 = 1;
	int16_t x160 = INT16_MIN;
	int64_t t34 = INT64_MIN;

	t34 = (x157-((x158==x159)<x160));

	if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x161 = INT64_MAX;
	int8_t x162 = 30;
	int8_t x163 = -1;
	uint64_t x164 = 123344551770LLU;
	int64_t t35 = -244301770LL;

	t35 = (x161-((x162==x163)<x164));

	if (t35 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x166 = UINT32_MAX;
	uint64_t x168 = UINT64_MAX;
	int32_t t36 = -320;

	t36 = (x165-((x166==x167)<x168));

	if (t36 != 702) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x169 = 79U;
	int8_t x170 = INT8_MAX;
	uint8_t x171 = 9U;
	int8_t x172 = -7;
	int32_t t37 = -1404211;

	t37 = (x169-((x170==x171)<x172));

	if (t37 != 79) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x173 = 0U;
	int8_t x174 = INT8_MIN;
	int8_t x175 = INT8_MIN;
	int8_t x176 = INT8_MAX;
	static volatile uint32_t t38 = UINT32_MAX;

	t38 = (x173-((x174==x175)<x176));

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x177 = -66;
	uint8_t x178 = 6U;
	static volatile int16_t x179 = INT16_MIN;
	uint16_t x180 = 108U;
	int32_t t39 = 3894873;

	t39 = (x177-((x178==x179)<x180));

	if (t39 != -67) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x181 = UINT32_MAX;
	volatile int16_t x183 = -1;
	int16_t x184 = -110;
	volatile uint32_t t40 = UINT32_MAX;

	t40 = (x181-((x182==x183)<x184));

	if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x185 = 2U;
	uint16_t x186 = 24U;
	int32_t x187 = INT32_MIN;
	uint32_t x188 = 3188367U;
	volatile int32_t t41 = 50060431;

	t41 = (x185-((x186==x187)<x188));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x189 = 26;
	uint8_t x190 = 0U;
	int64_t x192 = -1677500408735856980LL;
	int32_t t42 = -3101;

	t42 = (x189-((x190==x191)<x192));

	if (t42 != 26) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x193 = 120412U;
	uint16_t x194 = UINT16_MAX;
	volatile int64_t x196 = INT64_MIN;

	t43 = (x193-((x194==x195)<x196));

	if (t43 != 120412U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x197 = -10044;
	int32_t x198 = INT32_MIN;
	uint8_t x199 = UINT8_MAX;
	int32_t x200 = INT32_MAX;
	int32_t t44 = 5777762;

	t44 = (x197-((x198==x199)<x200));

	if (t44 != -10045) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x201 = INT8_MIN;
	int32_t x202 = -317777;
	static uint64_t x203 = 670107LLU;
	int32_t t45 = -4938;

	t45 = (x201-((x202==x203)<x204));

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x209 = UINT8_MAX;
	uint32_t x210 = 376U;
	int64_t x211 = INT64_MAX;
	int16_t x212 = 14;
	volatile int32_t t46 = 11;

	t46 = (x209-((x210==x211)<x212));

	if (t46 != 254) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x213 = INT32_MIN;
	int16_t x214 = 7;
	volatile uint16_t x215 = 1U;
	static int64_t x216 = -1LL;

	t47 = (x213-((x214==x215)<x216));

	if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x217 = INT16_MIN;
	uint16_t x218 = 1U;
	static uint16_t x219 = UINT16_MAX;
	int32_t x220 = 485;
	volatile int32_t t48 = -1114557;

	t48 = (x217-((x218==x219)<x220));

	if (t48 != -32769) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x221 = UINT64_MAX;
	int8_t x222 = -1;
	volatile uint32_t x223 = 29487U;
	int16_t x224 = INT16_MIN;
	volatile uint64_t t49 = UINT64_MAX;

	t49 = (x221-((x222==x223)<x224));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x226 = UINT16_MAX;
	int64_t x227 = INT64_MAX;
	int8_t x228 = 1;
	volatile int32_t t50 = 1;

	t50 = (x225-((x226==x227)<x228));

	if (t50 != -32769) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x229 = 444669198;
	int32_t x230 = INT32_MAX;
	int8_t x231 = INT8_MAX;
	uint8_t x232 = 33U;
	volatile int32_t t51 = 2;

	t51 = (x229-((x230==x231)<x232));

	if (t51 != 444669197) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x233 = -1;
	int64_t x234 = 106123315LL;
	volatile int32_t t52 = 64064473;

	t52 = (x233-((x234==x235)<x236));

	if (t52 != -2) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x241 = INT64_MAX;
	static volatile uint64_t x242 = UINT64_MAX;
	static int8_t x243 = INT8_MIN;
	uint16_t x244 = 86U;

	t53 = (x241-((x242==x243)<x244));

	if (t53 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x245 = -1;
	static volatile int8_t x246 = INT8_MIN;
	int16_t x247 = INT16_MIN;
	volatile int32_t t54 = 6278869;

	t54 = (x245-((x246==x247)<x248));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x253 = INT8_MIN;
	static uint32_t x255 = 361356420U;
	uint16_t x256 = 26U;
	int32_t t55 = 26605105;

	t55 = (x253-((x254==x255)<x256));

	if (t55 != -129) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x257 = -933708;
	volatile int32_t x258 = INT32_MIN;
	volatile int32_t x259 = -2;
	uint8_t x260 = 30U;

	t56 = (x257-((x258==x259)<x260));

	if (t56 != -933709) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x261 = INT8_MIN;
	uint32_t x262 = 24057572U;
	int16_t x263 = INT16_MAX;
	int8_t x264 = 29;
	static int32_t t57 = -77;

	t57 = (x261-((x262==x263)<x264));

	if (t57 != -129) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x265 = -1;
	int16_t x266 = -8;
	uint64_t x267 = 378655635534508117LLU;
	volatile int8_t x268 = -1;
	volatile int32_t t58 = -7;

	t58 = (x265-((x266==x267)<x268));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x269 = INT16_MIN;
	volatile uint8_t x270 = 3U;
	static volatile int16_t x271 = INT16_MAX;
	volatile int64_t x272 = INT64_MIN;
	static volatile int32_t t59 = -295750;

	t59 = (x269-((x270==x271)<x272));

	if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x273 = INT8_MIN;
	static int64_t x274 = INT64_MAX;
	volatile int32_t x275 = INT32_MAX;
	volatile int32_t t60 = 192748;

	t60 = (x273-((x274==x275)<x276));

	if (t60 != -129) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x277 = UINT32_MAX;
	int16_t x278 = INT16_MIN;
	volatile int64_t x279 = INT64_MAX;
	int32_t x280 = -1;
	static volatile uint32_t t61 = UINT32_MAX;

	t61 = (x277-((x278==x279)<x280));

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x282 = INT16_MAX;
	uint8_t x284 = UINT8_MAX;
	uint64_t t62 = UINT64_MAX;

	t62 = (x281-((x282==x283)<x284));

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x285 = INT16_MIN;
	int64_t x286 = -1LL;
	int8_t x288 = -1;

	t63 = (x285-((x286==x287)<x288));

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x289 = -1;
	int64_t x290 = INT64_MIN;
	uint64_t x291 = 44349083LLU;
	static uint16_t x292 = 28011U;
	volatile int32_t t64 = -1;

	t64 = (x289-((x290==x291)<x292));

	if (t64 != -2) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x294 = 5276541U;
	int32_t x296 = INT32_MIN;
	int32_t t65 = -413228566;

	t65 = (x293-((x294==x295)<x296));

	if (t65 != 8004) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x297 = INT8_MIN;
	static volatile uint32_t x298 = 1605U;
	volatile int8_t x299 = INT8_MIN;
	int64_t x300 = INT64_MIN;
	volatile int32_t t66 = -2776314;

	t66 = (x297-((x298==x299)<x300));

	if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x301 = 5757U;
	volatile uint8_t x302 = UINT8_MAX;
	int32_t x304 = INT32_MIN;
	static uint32_t t67 = 44428733U;

	t67 = (x301-((x302==x303)<x304));

	if (t67 != 5757U) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t x305 = INT32_MAX;
	static uint16_t x307 = 0U;
	static volatile int64_t x308 = INT64_MIN;
	static volatile int32_t t68 = INT32_MAX;

	t68 = (x305-((x306==x307)<x308));

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x309 = 0U;
	uint32_t x310 = UINT32_MAX;
	int16_t x311 = INT16_MAX;

	t69 = (x309-((x310==x311)<x312));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x313 = INT64_MAX;
	volatile int32_t x314 = INT32_MIN;
	uint8_t x315 = UINT8_MAX;
	volatile int64_t t70 = 12LL;

	t70 = (x313-((x314==x315)<x316));

	if (t70 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x317 = -1;
	volatile uint32_t x318 = UINT32_MAX;
	uint16_t x319 = UINT16_MAX;
	volatile int64_t x320 = -1LL;

	t71 = (x317-((x318==x319)<x320));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x321 = INT64_MAX;
	static int64_t x322 = -24990930642LL;
	int64_t t72 = INT64_MAX;

	t72 = (x321-((x322==x323)<x324));

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x325 = UINT8_MAX;
	volatile int8_t x326 = INT8_MAX;
	volatile uint8_t x327 = 3U;
	static volatile uint64_t x328 = 23395251LLU;
	volatile int32_t t73 = -198743;

	t73 = (x325-((x326==x327)<x328));

	if (t73 != 254) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x330 = -1;
	uint8_t x331 = 40U;
	int32_t t74 = 397416;

	t74 = (x329-((x330==x331)<x332));

	if (t74 != -2) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x333 = 14U;
	uint16_t x336 = UINT16_MAX;
	int32_t t75 = -139173073;

	t75 = (x333-((x334==x335)<x336));

	if (t75 != 13) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x339 = INT8_MIN;
	volatile uint64_t t76 = 5LLU;

	t76 = (x337-((x338==x339)<x340));

	if (t76 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x341 = 21015U;
	int64_t x342 = -1LL;
	int16_t x344 = INT16_MAX;
	volatile int32_t t77 = -30655;

	t77 = (x341-((x342==x343)<x344));

	if (t77 != 21014) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x345 = UINT32_MAX;
	int16_t x347 = -1;
	int64_t x348 = -1LL;
	volatile uint32_t t78 = UINT32_MAX;

	t78 = (x345-((x346==x347)<x348));

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x349 = -1;
	int16_t x350 = 48;
	static uint32_t x351 = 7691822U;
	uint64_t x352 = 312895548215711LLU;

	t79 = (x349-((x350==x351)<x352));

	if (t79 != -2) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x361 = -1;
	uint8_t x362 = 99U;
	static int8_t x363 = -1;
	volatile int64_t x364 = INT64_MIN;
	volatile int32_t t80 = -13;

	t80 = (x361-((x362==x363)<x364));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x365 = INT64_MAX;
	int32_t x366 = INT32_MIN;
	volatile int8_t x367 = 5;
	int16_t x368 = INT16_MIN;
	int64_t t81 = INT64_MAX;

	t81 = (x365-((x366==x367)<x368));

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x369 = -1;
	static int8_t x371 = INT8_MIN;
	int32_t x372 = INT32_MIN;
	int32_t t82 = -12372996;

	t82 = (x369-((x370==x371)<x372));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x374 = -12;
	int16_t x375 = INT16_MIN;
	int64_t x376 = 906999727665835LL;
	volatile int32_t t83 = 2046852;

	t83 = (x373-((x374==x375)<x376));

	if (t83 != -7061803) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x377 = UINT32_MAX;
	int16_t x378 = -1;
	int32_t x380 = INT32_MIN;
	static volatile uint32_t t84 = UINT32_MAX;

	t84 = (x377-((x378==x379)<x380));

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x381 = INT64_MIN;
	int8_t x382 = INT8_MIN;
	int64_t x383 = INT64_MIN;
	volatile int64_t t85 = INT64_MIN;

	t85 = (x381-((x382==x383)<x384));

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x385 = INT16_MAX;
	int16_t x386 = INT16_MIN;
	uint8_t x387 = UINT8_MAX;
	int8_t x388 = -1;
	int32_t t86 = -1216011;

	t86 = (x385-((x386==x387)<x388));

	if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x389 = 2U;
	volatile int32_t x392 = -1;

	t87 = (x389-((x390==x391)<x392));

	if (t87 != 2U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x393 = 7U;
	volatile int64_t x395 = INT64_MIN;
	int32_t x396 = INT32_MIN;
	volatile uint32_t t88 = 1026872646U;

	t88 = (x393-((x394==x395)<x396));

	if (t88 != 7U) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x401 = -1616;
	volatile int32_t x402 = INT32_MAX;
	static int32_t x403 = -77;
	static uint64_t x404 = 8407761203162467LLU;
	int32_t t89 = 1;

	t89 = (x401-((x402==x403)<x404));

	if (t89 != -1617) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x405 = INT64_MIN;
	uint32_t x406 = 14U;
	uint32_t x407 = 785898593U;
	static int16_t x408 = INT16_MIN;
	volatile int64_t t90 = INT64_MIN;

	t90 = (x405-((x406==x407)<x408));

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x413 = INT8_MIN;
	uint16_t x414 = 4335U;
	static volatile uint8_t x415 = 96U;
	uint64_t x416 = 128LLU;
	volatile int32_t t91 = 3612;

	t91 = (x413-((x414==x415)<x416));

	if (t91 != -129) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x417 = -1;
	int8_t x418 = INT8_MAX;
	volatile int32_t t92 = 14264;

	t92 = (x417-((x418==x419)<x420));

	if (t92 != -2) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x421 = UINT64_MAX;
	static int64_t x423 = INT64_MIN;
	int64_t x424 = 56063992810836433LL;
	static volatile uint64_t t93 = 654720260LLU;

	t93 = (x421-((x422==x423)<x424));

	if (t93 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x425 = 1;
	int64_t x427 = INT64_MIN;
	static int32_t x428 = INT32_MAX;
	volatile int32_t t94 = 12678672;

	t94 = (x425-((x426==x427)<x428));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x431 = INT8_MIN;
	volatile uint64_t x432 = UINT64_MAX;

	t95 = (x429-((x430==x431)<x432));

	if (t95 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x433 = -1;
	int32_t x434 = INT32_MIN;
	volatile int32_t x435 = 12750462;
	uint8_t x436 = UINT8_MAX;
	int32_t t96 = -583695;

	t96 = (x433-((x434==x435)<x436));

	if (t96 != -2) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x437 = 2U;
	static int16_t x438 = INT16_MAX;
	int32_t t97 = 2504572;

	t97 = (x437-((x438==x439)<x440));

	if (t97 != 2) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x441 = UINT64_MAX;
	static volatile uint64_t x442 = 177LLU;
	int16_t x443 = 464;
	volatile int8_t x444 = INT8_MAX;
	volatile uint64_t t98 = 2178343844033LLU;

	t98 = (x441-((x442==x443)<x444));

	if (t98 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x445 = -3623;
	uint32_t x446 = 6892791U;
	int64_t x447 = INT64_MAX;
	static int64_t x448 = 80369207LL;

	t99 = (x445-((x446==x447)<x448));

	if (t99 != -3624) { NG(); } else { ; }
	
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

