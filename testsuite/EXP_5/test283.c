#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = -1;
static volatile int32_t t1 = 8827199;
int16_t x12 = -6;
volatile int16_t x14 = -1;
int8_t x19 = INT8_MIN;
uint64_t x22 = UINT64_MAX;
static uint16_t x30 = 0U;
int16_t x39 = INT16_MIN;
int32_t x40 = -1;
int32_t x41 = 128291369;
uint8_t x45 = UINT8_MAX;
uint32_t x47 = 367573357U;
volatile int32_t t10 = 1;
int64_t x57 = INT64_MIN;
int32_t t12 = -70;
static volatile uint16_t x78 = 1U;
int32_t t19 = -1;
volatile uint16_t x105 = UINT16_MAX;
int64_t x106 = INT64_MAX;
volatile uint8_t x107 = 12U;
static int64_t x112 = INT64_MIN;
volatile uint8_t x118 = 10U;
volatile int64_t x119 = -6537994091LL;
int32_t t23 = 13;
uint8_t x132 = UINT8_MAX;
volatile int32_t t27 = -1950490;
static volatile int32_t t28 = -64573079;
static int8_t x141 = 2;
uint32_t x151 = 854642682U;
int16_t x157 = -1;
static int64_t x165 = -93197073525729LL;
volatile int32_t x166 = -1;
volatile int32_t t36 = -161;
int64_t x177 = INT64_MIN;
uint32_t x181 = 8630U;
int8_t x182 = INT8_MIN;
int8_t x184 = INT8_MIN;
int64_t x186 = INT64_MAX;
volatile uint8_t x192 = 0U;
static uint8_t x193 = UINT8_MAX;
int8_t x194 = -1;
int32_t t43 = 954224216;
volatile int64_t x212 = INT64_MIN;
volatile int32_t x218 = -6;
int64_t x224 = INT64_MIN;
int64_t x226 = INT64_MIN;
static uint8_t x228 = UINT8_MAX;
int8_t x254 = -1;
int64_t x258 = INT64_MIN;
int16_t x273 = INT16_MAX;
static int64_t x277 = 433LL;
static uint16_t x278 = 3945U;
int16_t x280 = INT16_MAX;
static uint8_t x285 = 1U;
int16_t x286 = INT16_MIN;
int8_t x290 = INT8_MIN;
int32_t x293 = -34288;
int64_t x300 = 796716085362528LL;
int8_t x301 = INT8_MIN;
volatile uint32_t x307 = 3382006U;
volatile uint16_t x308 = 18176U;
uint64_t x311 = 20LLU;
int16_t x324 = -1;
volatile int32_t t71 = -564240719;
volatile uint16_t x326 = 327U;
int32_t t72 = -67887;
volatile int32_t x335 = -1;
volatile int32_t t74 = -56;
uint16_t x349 = 5U;
static int64_t x353 = -1LL;
int16_t x357 = 10940;
int32_t t79 = 1;
static volatile int32_t t80 = 428;
uint32_t x370 = UINT32_MAX;
static int32_t x379 = INT32_MIN;
uint32_t x385 = 170332U;
volatile int32_t t88 = 228622288;
int8_t x403 = INT8_MIN;
int64_t x407 = INT64_MAX;
volatile int32_t t92 = 2496569;
volatile uint16_t x426 = 84U;
volatile int32_t t94 = -74070;
static int32_t x429 = -897;
int64_t x432 = -1LL;
static int32_t t97 = -1;
int32_t t99 = -408;


void f0(void) {
	int8_t x2 = 0;
	int8_t x3 = INT8_MIN;
	uint16_t x4 = 102U;
	volatile int32_t t0 = -113;

	t0 = (x1<=((x2-x3)<x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int64_t x5 = INT64_MAX;
	volatile int8_t x6 = INT8_MAX;
	volatile int8_t x7 = INT8_MIN;
	uint64_t x8 = UINT64_MAX;

	t1 = (x5<=((x6-x7)<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 4901320508671LL;
	int32_t x10 = INT32_MAX;
	static int64_t x11 = -1LL;
	static int32_t t2 = 1911131;

	t2 = (x9<=((x10-x11)<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x13 = INT8_MIN;
	int8_t x15 = -1;
	int32_t x16 = INT32_MIN;
	int32_t t3 = 68136;

	t3 = (x13<=((x14-x15)<x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 5U;
	uint16_t x18 = 483U;
	static int8_t x20 = 44;
	int32_t t4 = 14848;

	t4 = (x17<=((x18-x19)<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = INT64_MIN;
	uint16_t x23 = UINT16_MAX;
	static int64_t x24 = INT64_MAX;
	volatile int32_t t5 = 555184;

	t5 = (x21<=((x22-x23)<x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = 15643192720673LLU;
	int16_t x31 = -7380;
	static int32_t x32 = -114;
	volatile int32_t t6 = -2036716;

	t6 = (x29<=((x30-x31)<x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = 5741;
	int8_t x38 = 10;
	volatile int32_t t7 = 658;

	t7 = (x37<=((x38-x39)<x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x42 = INT32_MAX;
	static int8_t x43 = INT8_MAX;
	volatile int64_t x44 = 47693826972043813LL;
	int32_t t8 = -47;

	t8 = (x41<=((x42-x43)<x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x46 = 40446738151953LL;
	volatile int64_t x48 = -1LL;
	int32_t t9 = 3222;

	t9 = (x45<=((x46-x47)<x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = -2;
	static uint64_t x50 = 13LLU;
	uint8_t x51 = UINT8_MAX;
	static int8_t x52 = INT8_MIN;

	t10 = (x49<=((x50-x51)<x52));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x53 = 677835LL;
	int32_t x54 = -1;
	int16_t x55 = INT16_MAX;
	uint64_t x56 = UINT64_MAX;
	volatile int32_t t11 = 130867231;

	t11 = (x53<=((x54-x55)<x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x58 = 2479U;
	uint32_t x59 = 845676U;
	int32_t x60 = INT32_MIN;

	t12 = (x57<=((x58-x59)<x60));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x61 = 2778485;
	int32_t x62 = -1;
	uint32_t x63 = 7U;
	static volatile uint16_t x64 = UINT16_MAX;
	volatile int32_t t13 = 491;

	t13 = (x61<=((x62-x63)<x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x69 = INT8_MIN;
	int16_t x70 = INT16_MIN;
	static volatile uint64_t x71 = 113232074005965479LLU;
	static int32_t x72 = INT32_MAX;
	volatile int32_t t14 = 28;

	t14 = (x69<=((x70-x71)<x72));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x73 = INT64_MIN;
	int16_t x74 = INT16_MIN;
	static volatile int64_t x75 = 169134524427LL;
	static int32_t x76 = -1;
	volatile int32_t t15 = -28141;

	t15 = (x73<=((x74-x75)<x76));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = INT32_MIN;
	int32_t x79 = -184766308;
	volatile int16_t x80 = INT16_MIN;
	int32_t t16 = -1330509;

	t16 = (x77<=((x78-x79)<x80));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x85 = UINT16_MAX;
	int32_t x86 = -26978;
	volatile uint64_t x87 = 3735429234470078839LLU;
	int32_t x88 = INT32_MIN;
	static int32_t t17 = -74;

	t17 = (x85<=((x86-x87)<x88));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x93 = INT64_MIN;
	uint32_t x94 = 1707U;
	static uint32_t x95 = UINT32_MAX;
	static int64_t x96 = 416224893154LL;
	static volatile int32_t t18 = 1692132;

	t18 = (x93<=((x94-x95)<x96));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x97 = INT32_MIN;
	int16_t x98 = INT16_MIN;
	uint64_t x99 = 177364546LLU;
	int16_t x100 = 1;

	t19 = (x97<=((x98-x99)<x100));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x101 = -3884;
	volatile int32_t x102 = -372;
	int32_t x103 = INT32_MIN;
	int8_t x104 = 1;
	int32_t t20 = -655;

	t20 = (x101<=((x102-x103)<x104));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x108 = -30618688628656374LL;
	static volatile int32_t t21 = 10692;

	t21 = (x105<=((x106-x107)<x108));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x109 = 28U;
	static int16_t x110 = INT16_MIN;
	int16_t x111 = INT16_MAX;
	static volatile int32_t t22 = 65131;

	t22 = (x109<=((x110-x111)<x112));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x117 = 3U;
	int8_t x120 = INT8_MIN;

	t23 = (x117<=((x118-x119)<x120));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x121 = INT32_MIN;
	uint16_t x122 = 692U;
	uint32_t x123 = UINT32_MAX;
	volatile int8_t x124 = INT8_MIN;
	volatile int32_t t24 = 855526643;

	t24 = (x121<=((x122-x123)<x124));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x125 = -1;
	int32_t x126 = 1767;
	int64_t x127 = -4605676329864110844LL;
	int16_t x128 = INT16_MAX;
	volatile int32_t t25 = -49798665;

	t25 = (x125<=((x126-x127)<x128));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x129 = INT8_MAX;
	static uint32_t x130 = 15U;
	uint32_t x131 = UINT32_MAX;
	int32_t t26 = -7884910;

	t26 = (x129<=((x130-x131)<x132));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x133 = -7764LL;
	volatile uint64_t x134 = UINT64_MAX;
	int8_t x135 = -2;
	static uint64_t x136 = 124LLU;

	t27 = (x133<=((x134-x135)<x136));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x137 = UINT8_MAX;
	volatile int64_t x138 = 51649543504212LL;
	static int64_t x139 = -1LL;
	int16_t x140 = INT16_MIN;

	t28 = (x137<=((x138-x139)<x140));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x142 = -1LL;
	uint16_t x143 = 65U;
	uint8_t x144 = UINT8_MAX;
	static int32_t t29 = 140371738;

	t29 = (x141<=((x142-x143)<x144));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x145 = -1;
	static int64_t x146 = -4540424937018154590LL;
	int64_t x147 = INT64_MIN;
	int8_t x148 = INT8_MIN;
	volatile int32_t t30 = 1001089358;

	t30 = (x145<=((x146-x147)<x148));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x149 = -1;
	uint8_t x150 = 7U;
	int64_t x152 = INT64_MIN;
	int32_t t31 = 244040;

	t31 = (x149<=((x150-x151)<x152));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x153 = 0LL;
	uint32_t x154 = 3746553U;
	volatile uint64_t x155 = UINT64_MAX;
	int32_t x156 = INT32_MAX;
	volatile int32_t t32 = -2;

	t32 = (x153<=((x154-x155)<x156));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x158 = -1;
	int64_t x159 = INT64_MIN;
	int16_t x160 = INT16_MAX;
	volatile int32_t t33 = 3;

	t33 = (x157<=((x158-x159)<x160));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x161 = 3;
	static uint32_t x162 = UINT32_MAX;
	int16_t x163 = INT16_MIN;
	volatile int8_t x164 = 40;
	volatile int32_t t34 = 53282;

	t34 = (x161<=((x162-x163)<x164));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x167 = 23;
	static int8_t x168 = 0;
	volatile int32_t t35 = -193755;

	t35 = (x165<=((x166-x167)<x168));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x169 = INT64_MIN;
	int16_t x170 = -1;
	uint32_t x171 = UINT32_MAX;
	int32_t x172 = -1;

	t36 = (x169<=((x170-x171)<x172));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x173 = 392LL;
	volatile int16_t x174 = -2;
	uint16_t x175 = UINT16_MAX;
	static uint8_t x176 = UINT8_MAX;
	volatile int32_t t37 = -11;

	t37 = (x173<=((x174-x175)<x176));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x178 = INT16_MIN;
	static int64_t x179 = -44LL;
	int64_t x180 = 3162LL;
	volatile int32_t t38 = 18;

	t38 = (x177<=((x178-x179)<x180));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x183 = INT16_MIN;
	int32_t t39 = -4;

	t39 = (x181<=((x182-x183)<x184));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x185 = 1U;
	uint64_t x187 = 5214974918832491LLU;
	int8_t x188 = INT8_MIN;
	int32_t t40 = 6281;

	t40 = (x185<=((x186-x187)<x188));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x189 = INT8_MIN;
	static int16_t x190 = 16142;
	int8_t x191 = INT8_MIN;
	int32_t t41 = 60289718;

	t41 = (x189<=((x190-x191)<x192));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x195 = UINT8_MAX;
	int16_t x196 = INT16_MIN;
	static volatile int32_t t42 = 28881;

	t42 = (x193<=((x194-x195)<x196));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x197 = 1U;
	uint32_t x198 = UINT32_MAX;
	static int8_t x199 = -1;
	static int32_t x200 = 364;

	t43 = (x197<=((x198-x199)<x200));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x201 = -1;
	uint64_t x202 = 1321694253044153030LLU;
	static volatile int8_t x203 = INT8_MIN;
	uint64_t x204 = 12LLU;
	volatile int32_t t44 = 464742;

	t44 = (x201<=((x202-x203)<x204));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x205 = 7906937LLU;
	int8_t x206 = INT8_MAX;
	uint8_t x207 = 38U;
	volatile int64_t x208 = INT64_MAX;
	int32_t t45 = 253258;

	t45 = (x205<=((x206-x207)<x208));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x209 = INT64_MIN;
	volatile uint64_t x210 = 84397LLU;
	static volatile uint32_t x211 = 2078611355U;
	volatile int32_t t46 = 70354631;

	t46 = (x209<=((x210-x211)<x212));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x213 = UINT16_MAX;
	volatile int64_t x214 = INT64_MAX;
	uint64_t x215 = UINT64_MAX;
	int32_t x216 = INT32_MIN;
	int32_t t47 = -5237582;

	t47 = (x213<=((x214-x215)<x216));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x217 = INT32_MIN;
	static int16_t x219 = INT16_MIN;
	volatile uint32_t x220 = UINT32_MAX;
	static volatile int32_t t48 = 8134350;

	t48 = (x217<=((x218-x219)<x220));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x221 = 994292LL;
	volatile int64_t x222 = 1LL;
	int32_t x223 = INT32_MAX;
	static int32_t t49 = -3911790;

	t49 = (x221<=((x222-x223)<x224));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x225 = INT16_MIN;
	volatile int8_t x227 = INT8_MIN;
	volatile int32_t t50 = 130230;

	t50 = (x225<=((x226-x227)<x228));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x237 = UINT8_MAX;
	int64_t x238 = INT64_MIN;
	int32_t x239 = INT32_MIN;
	uint8_t x240 = 28U;
	int32_t t51 = -460450;

	t51 = (x237<=((x238-x239)<x240));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x241 = -6;
	int64_t x242 = 401812308043549LL;
	uint64_t x243 = UINT64_MAX;
	static volatile int64_t x244 = 45437392836LL;
	static int32_t t52 = 17175;

	t52 = (x241<=((x242-x243)<x244));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x245 = UINT32_MAX;
	volatile uint16_t x246 = UINT16_MAX;
	uint16_t x247 = UINT16_MAX;
	int64_t x248 = INT64_MIN;
	volatile int32_t t53 = 3;

	t53 = (x245<=((x246-x247)<x248));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x249 = INT64_MIN;
	uint64_t x250 = 3315474522669LLU;
	uint64_t x251 = 53724LLU;
	volatile int8_t x252 = 0;
	volatile int32_t t54 = -222885943;

	t54 = (x249<=((x250-x251)<x252));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x253 = 7U;
	static volatile int32_t x255 = INT32_MAX;
	uint32_t x256 = 5586U;
	volatile int32_t t55 = 361441321;

	t55 = (x253<=((x254-x255)<x256));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x257 = INT32_MIN;
	uint64_t x259 = 2204316925648173LLU;
	uint32_t x260 = 58U;
	int32_t t56 = 75;

	t56 = (x257<=((x258-x259)<x260));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x261 = INT16_MIN;
	uint32_t x262 = 47012U;
	int32_t x263 = INT32_MIN;
	int8_t x264 = -49;
	static volatile int32_t t57 = 1;

	t57 = (x261<=((x262-x263)<x264));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x265 = 355LLU;
	uint64_t x266 = UINT64_MAX;
	uint8_t x267 = UINT8_MAX;
	static int8_t x268 = 0;
	static int32_t t58 = 12;

	t58 = (x265<=((x266-x267)<x268));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x274 = UINT8_MAX;
	uint16_t x275 = UINT16_MAX;
	int64_t x276 = -7LL;
	volatile int32_t t59 = 21;

	t59 = (x273<=((x274-x275)<x276));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x279 = -1LL;
	int32_t t60 = -69184;

	t60 = (x277<=((x278-x279)<x280));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x281 = UINT16_MAX;
	uint64_t x282 = 263695112486LLU;
	static int8_t x283 = INT8_MAX;
	static volatile int16_t x284 = INT16_MIN;
	static volatile int32_t t61 = -42496;

	t61 = (x281<=((x282-x283)<x284));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x287 = -13;
	int32_t x288 = INT32_MIN;
	volatile int32_t t62 = -479;

	t62 = (x285<=((x286-x287)<x288));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x289 = INT8_MAX;
	int64_t x291 = 68841653151038723LL;
	uint8_t x292 = 11U;
	volatile int32_t t63 = 214793;

	t63 = (x289<=((x290-x291)<x292));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x294 = -1;
	int32_t x295 = INT32_MAX;
	int32_t x296 = -2126322;
	int32_t t64 = -122444340;

	t64 = (x293<=((x294-x295)<x296));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x297 = 45848;
	uint32_t x298 = 16U;
	volatile int8_t x299 = INT8_MAX;
	int32_t t65 = -21337092;

	t65 = (x297<=((x298-x299)<x300));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint64_t x302 = 21592139LLU;
	int32_t x303 = -1;
	volatile int16_t x304 = INT16_MIN;
	static int32_t t66 = 55291;

	t66 = (x301<=((x302-x303)<x304));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x305 = INT8_MIN;
	int16_t x306 = -1;
	int32_t t67 = 114;

	t67 = (x305<=((x306-x307)<x308));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x309 = 3;
	int8_t x310 = INT8_MIN;
	volatile int8_t x312 = -1;
	volatile int32_t t68 = 3111225;

	t68 = (x309<=((x310-x311)<x312));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x313 = INT16_MIN;
	static uint32_t x314 = UINT32_MAX;
	int32_t x315 = -1;
	static int8_t x316 = INT8_MIN;
	int32_t t69 = -1756268;

	t69 = (x313<=((x314-x315)<x316));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x317 = -365047439174LL;
	uint16_t x318 = 905U;
	int32_t x319 = -1;
	static volatile int64_t x320 = INT64_MAX;
	int32_t t70 = 0;

	t70 = (x317<=((x318-x319)<x320));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x321 = 109U;
	int16_t x322 = INT16_MIN;
	int32_t x323 = -84402304;

	t71 = (x321<=((x322-x323)<x324));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x325 = INT8_MAX;
	int16_t x327 = 51;
	uint8_t x328 = 2U;

	t72 = (x325<=((x326-x327)<x328));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x333 = -46474776193909LL;
	static volatile int16_t x334 = -1;
	int32_t x336 = -671815;
	volatile int32_t t73 = 698296154;

	t73 = (x333<=((x334-x335)<x336));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x337 = UINT32_MAX;
	uint64_t x338 = UINT64_MAX;
	uint16_t x339 = UINT16_MAX;
	int8_t x340 = -1;

	t74 = (x337<=((x338-x339)<x340));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x341 = INT64_MIN;
	static uint64_t x342 = 12516886LLU;
	int64_t x343 = -1LL;
	int8_t x344 = 1;
	volatile int32_t t75 = -1;

	t75 = (x341<=((x342-x343)<x344));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x345 = UINT8_MAX;
	int16_t x346 = INT16_MIN;
	int8_t x347 = INT8_MAX;
	static uint64_t x348 = 18406848973LLU;
	static volatile int32_t t76 = 12577;

	t76 = (x345<=((x346-x347)<x348));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x350 = UINT32_MAX;
	int32_t x351 = -1;
	int16_t x352 = INT16_MIN;
	int32_t t77 = -3986167;

	t77 = (x349<=((x350-x351)<x352));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x354 = -1;
	int8_t x355 = INT8_MIN;
	int8_t x356 = 2;
	int32_t t78 = -418709683;

	t78 = (x353<=((x354-x355)<x356));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x358 = 102474923070LL;
	static int16_t x359 = INT16_MIN;
	int32_t x360 = INT32_MAX;

	t79 = (x357<=((x358-x359)<x360));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x361 = -1LL;
	static int16_t x362 = -19;
	volatile int64_t x363 = 14313047LL;
	volatile int16_t x364 = INT16_MIN;

	t80 = (x361<=((x362-x363)<x364));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x365 = UINT8_MAX;
	static uint64_t x366 = 22205LLU;
	volatile int16_t x367 = INT16_MAX;
	int32_t x368 = INT32_MAX;
	volatile int32_t t81 = 3628;

	t81 = (x365<=((x366-x367)<x368));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x369 = UINT16_MAX;
	static int64_t x371 = INT64_MAX;
	int16_t x372 = 625;
	int32_t t82 = -356700141;

	t82 = (x369<=((x370-x371)<x372));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x373 = UINT64_MAX;
	static volatile uint8_t x374 = 4U;
	static int16_t x375 = INT16_MAX;
	int64_t x376 = -1LL;
	volatile int32_t t83 = -32;

	t83 = (x373<=((x374-x375)<x376));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x377 = 49846195892190976LL;
	int32_t x378 = -162598;
	int8_t x380 = -1;
	volatile int32_t t84 = 1212998;

	t84 = (x377<=((x378-x379)<x380));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x381 = INT64_MIN;
	volatile int16_t x382 = INT16_MIN;
	static uint32_t x383 = 35U;
	uint16_t x384 = UINT16_MAX;
	static volatile int32_t t85 = -1303;

	t85 = (x381<=((x382-x383)<x384));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x386 = 83074LLU;
	int32_t x387 = -2089775;
	int64_t x388 = INT64_MIN;
	int32_t t86 = -762439155;

	t86 = (x385<=((x386-x387)<x388));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x389 = INT8_MAX;
	int32_t x390 = INT32_MIN;
	int8_t x391 = INT8_MIN;
	int64_t x392 = INT64_MAX;
	int32_t t87 = 91430;

	t87 = (x389<=((x390-x391)<x392));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x393 = 5576149;
	uint16_t x394 = UINT16_MAX;
	int64_t x395 = INT64_MAX;
	int32_t x396 = -1;

	t88 = (x393<=((x394-x395)<x396));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x397 = 1599U;
	int64_t x398 = -1LL;
	uint8_t x399 = UINT8_MAX;
	static int32_t x400 = 381;
	int32_t t89 = 55536;

	t89 = (x397<=((x398-x399)<x400));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x401 = INT16_MAX;
	uint16_t x402 = UINT16_MAX;
	int32_t x404 = 33041613;
	volatile int32_t t90 = -5839;

	t90 = (x401<=((x402-x403)<x404));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x405 = -1;
	int64_t x406 = 16030906LL;
	volatile int64_t x408 = INT64_MIN;
	volatile int32_t t91 = 524;

	t91 = (x405<=((x406-x407)<x408));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x413 = INT16_MAX;
	int32_t x414 = INT32_MAX;
	static volatile int32_t x415 = INT32_MAX;
	int32_t x416 = -953432;

	t92 = (x413<=((x414-x415)<x416));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x421 = -1;
	static int64_t x422 = -288LL;
	int32_t x423 = INT32_MIN;
	int32_t x424 = -1;
	int32_t t93 = 429637125;

	t93 = (x421<=((x422-x423)<x424));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x425 = 1;
	int16_t x427 = -1026;
	int8_t x428 = -1;

	t94 = (x425<=((x426-x427)<x428));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x430 = -63;
	uint16_t x431 = 19397U;
	int32_t t95 = -17875;

	t95 = (x429<=((x430-x431)<x432));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x433 = 52U;
	volatile int32_t x434 = 1480;
	uint16_t x435 = 2362U;
	int8_t x436 = INT8_MIN;
	volatile int32_t t96 = -24;

	t96 = (x433<=((x434-x435)<x436));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x437 = 9U;
	int64_t x438 = 4332265904082653196LL;
	int32_t x439 = -1;
	volatile int32_t x440 = INT32_MIN;

	t97 = (x437<=((x438-x439)<x440));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x441 = INT16_MIN;
	int64_t x442 = 1660321LL;
	int64_t x443 = -1LL;
	int32_t x444 = 804;
	static volatile int32_t t98 = 141902438;

	t98 = (x441<=((x442-x443)<x444));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x445 = INT32_MIN;
	static int32_t x446 = -1;
	int8_t x447 = -23;
	int32_t x448 = -1;

	t99 = (x445<=((x446-x447)<x448));

	if (t99 != 1) { NG(); } else { ; }
	
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

