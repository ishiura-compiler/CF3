#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = INT8_MAX;
volatile int64_t t0 = 2154295284317LL;
volatile int8_t x5 = 1;
static int32_t x16 = -141;
uint32_t x17 = UINT32_MAX;
uint8_t x19 = 1U;
int64_t x20 = INT64_MIN;
static volatile int8_t x21 = INT8_MIN;
static int16_t x25 = INT16_MIN;
static int64_t x27 = -1LL;
volatile uint32_t x29 = UINT32_MAX;
uint32_t t7 = UINT32_MAX;
uint64_t x34 = 4910318955362698227LLU;
static uint32_t x39 = 2410522U;
static uint8_t x46 = UINT8_MAX;
volatile int64_t t11 = 148309086622366619LL;
uint8_t x56 = UINT8_MAX;
static uint32_t t13 = UINT32_MAX;
volatile int64_t t14 = INT64_MIN;
static int64_t x62 = INT64_MIN;
static volatile int32_t t15 = 5980933;
uint16_t x72 = UINT16_MAX;
uint32_t x77 = 507U;
volatile int16_t x84 = INT16_MAX;
uint16_t x85 = 345U;
uint8_t x87 = 3U;
uint8_t x94 = UINT8_MAX;
uint64_t x99 = 28LLU;
volatile int64_t x107 = -63218751LL;
static uint32_t x108 = UINT32_MAX;
int8_t x109 = INT8_MAX;
static int8_t x118 = INT8_MIN;
int32_t t28 = -28301;
int16_t x121 = INT16_MIN;
int8_t x122 = INT8_MAX;
int16_t x128 = -1;
int64_t x129 = INT64_MAX;
uint16_t x137 = 688U;
uint32_t x138 = 51U;
int32_t x139 = -1;
static int32_t t34 = -1012893;
uint16_t x150 = 0U;
volatile int8_t x158 = 5;
uint32_t x162 = UINT32_MAX;
static uint64_t x174 = 1431032LLU;
uint8_t x175 = UINT8_MAX;
static int32_t t42 = -121087;
static volatile int64_t x182 = 27023451LL;
int64_t x184 = -590258055904003LL;
int64_t x192 = INT64_MAX;
static volatile uint32_t x202 = 15602054U;
int16_t x204 = INT16_MAX;
int32_t t49 = -6890636;
volatile int64_t x205 = -1LL;
int64_t x206 = INT64_MIN;
uint16_t x209 = 46U;
int32_t x215 = -1;
int32_t t53 = -3;
static int8_t x234 = 0;
int8_t x237 = INT8_MIN;
int8_t x240 = INT8_MIN;
int64_t x242 = 457343383367LL;
int32_t x255 = -1;
static int16_t x256 = 1;
static uint8_t x257 = 104U;
volatile int16_t x261 = INT16_MIN;
static uint8_t x267 = 2U;
uint64_t t64 = UINT64_MAX;
volatile int32_t x270 = INT32_MIN;
static int32_t x273 = INT32_MAX;
int32_t x274 = INT32_MAX;
int8_t x281 = -3;
int8_t x285 = -6;
volatile uint16_t x294 = 5U;
static uint32_t x298 = UINT32_MAX;
volatile uint32_t x299 = 124U;
volatile int64_t t72 = -251436067483104125LL;
int64_t x304 = 2033656873227161605LL;
int32_t t73 = -92456;
static volatile int32_t t76 = 215738093;
volatile int32_t x317 = -27832;
int16_t x321 = INT16_MIN;
int32_t x323 = INT32_MIN;
volatile uint32_t x324 = UINT32_MAX;
volatile int32_t t78 = -2147137;
int64_t x325 = -4201743006029LL;
volatile int32_t x328 = INT32_MIN;
int16_t x331 = INT16_MAX;
volatile int32_t x335 = INT32_MIN;
volatile int64_t x339 = INT64_MIN;
int32_t x340 = INT32_MAX;
volatile int32_t x346 = INT32_MIN;
int8_t x353 = -1;
volatile int16_t x371 = 583;
int32_t x373 = INT32_MAX;
volatile int8_t x377 = INT8_MAX;
int16_t x381 = -1;
int32_t x388 = -1;
uint64_t x393 = 40743036459628LLU;
uint16_t x397 = UINT16_MAX;
uint16_t x398 = UINT16_MAX;
static int64_t x403 = INT64_MAX;
volatile int64_t x405 = INT64_MIN;
static volatile int64_t x410 = 1439LL;
uint32_t x411 = UINT32_MAX;


void f0(void) {
	int64_t x1 = 60671LL;
	int8_t x2 = INT8_MAX;
	volatile uint8_t x3 = UINT8_MAX;

	t0 = (x1|((x2%x3)<x4));

	if (t0 != 60671LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x6 = 3173523U;
	volatile uint8_t x7 = UINT8_MAX;
	uint8_t x8 = 3U;
	static volatile int32_t t1 = -40;

	t1 = (x5|((x6%x7)<x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	volatile int16_t x10 = 35;
	int8_t x11 = INT8_MIN;
	uint8_t x12 = UINT8_MAX;
	int64_t t2 = INT64_MAX;

	t2 = (x9|((x10%x11)<x12));

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -8;
	static volatile int8_t x14 = INT8_MIN;
	static volatile int8_t x15 = INT8_MAX;
	int32_t t3 = 48;

	t3 = (x13|((x14%x15)<x16));

	if (t3 != -8) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = INT8_MAX;
	static volatile uint32_t t4 = UINT32_MAX;

	t4 = (x17|((x18%x19)<x20));

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = -1;
	volatile int8_t x23 = INT8_MIN;
	static int16_t x24 = INT16_MAX;
	static volatile int32_t t5 = 39049440;

	t5 = (x21|((x22%x23)<x24));

	if (t5 != -127) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = -423536781;
	int32_t x28 = -1;
	int32_t t6 = -17;

	t6 = (x25|((x26%x27)<x28));

	if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = INT64_MAX;
	static int8_t x31 = -2;
	int64_t x32 = INT64_MAX;

	t7 = (x29|((x30%x31)<x32));

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = 0U;
	int64_t x35 = 13LL;
	volatile int16_t x36 = -5320;
	uint32_t t8 = 1463U;

	t8 = (x33|((x34%x35)<x36));

	if (t8 != 1U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x37 = 1U;
	static int32_t x38 = -1;
	volatile uint8_t x40 = UINT8_MAX;
	volatile uint32_t t9 = 190569216U;

	t9 = (x37|((x38%x39)<x40));

	if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x41 = UINT64_MAX;
	int64_t x42 = -1125343354875152488LL;
	volatile int32_t x43 = INT32_MIN;
	uint8_t x44 = 0U;
	uint64_t t10 = UINT64_MAX;

	t10 = (x41|((x42%x43)<x44));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1526474LL;
	int16_t x47 = INT16_MAX;
	static uint16_t x48 = 8860U;

	t11 = (x45|((x46%x47)<x48));

	if (t11 != -1526473LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = -1;
	static volatile uint16_t x50 = UINT16_MAX;
	uint32_t x51 = 22236U;
	int32_t x52 = INT32_MAX;
	int32_t t12 = 427241;

	t12 = (x49|((x50%x51)<x52));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x53 = UINT32_MAX;
	int64_t x54 = 272927LL;
	volatile int64_t x55 = 4LL;

	t13 = (x53|((x54%x55)<x56));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	int8_t x58 = INT8_MIN;
	uint64_t x59 = UINT64_MAX;
	int8_t x60 = INT8_MIN;

	t14 = (x57|((x58%x59)<x60));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = INT32_MIN;
	static volatile int32_t x63 = INT32_MIN;
	int32_t x64 = INT32_MAX;

	t15 = (x61|((x62%x63)<x64));

	if (t15 != -2147483647) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x69 = UINT32_MAX;
	uint16_t x70 = 14U;
	int8_t x71 = 3;
	volatile uint32_t t16 = UINT32_MAX;

	t16 = (x69|((x70%x71)<x72));

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = 1120281;
	volatile int32_t x74 = INT32_MIN;
	uint8_t x75 = 119U;
	int32_t x76 = -1;
	volatile int32_t t17 = 46851917;

	t17 = (x73|((x74%x75)<x76));

	if (t17 != 1120281) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x78 = -1LL;
	int8_t x79 = INT8_MIN;
	volatile int32_t x80 = 14;
	static volatile uint32_t t18 = 167616U;

	t18 = (x77|((x78%x79)<x80));

	if (t18 != 507U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x81 = INT32_MAX;
	int32_t x82 = 7675774;
	int64_t x83 = INT64_MIN;
	volatile int32_t t19 = INT32_MAX;

	t19 = (x81|((x82%x83)<x84));

	if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x86 = 1796523188026046548LLU;
	volatile uint64_t x88 = 3095529LLU;
	int32_t t20 = 241;

	t20 = (x85|((x86%x87)<x88));

	if (t20 != 345) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = INT16_MIN;
	int64_t x90 = INT64_MIN;
	uint16_t x91 = UINT16_MAX;
	int8_t x92 = INT8_MIN;
	volatile int32_t t21 = 29;

	t21 = (x89|((x90%x91)<x92));

	if (t21 != -32767) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = INT64_MIN;
	uint64_t x95 = UINT64_MAX;
	volatile uint64_t x96 = UINT64_MAX;
	static int64_t t22 = 134413465441051LL;

	t22 = (x93|((x94%x95)<x96));

	if (t22 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x97 = INT32_MAX;
	int32_t x98 = -115;
	static int8_t x100 = 9;
	int32_t t23 = INT32_MAX;

	t23 = (x97|((x98%x99)<x100));

	if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = INT8_MAX;
	static volatile int8_t x102 = INT8_MAX;
	static volatile uint32_t x103 = 319U;
	uint8_t x104 = 1U;
	static volatile int32_t t24 = -108202;

	t24 = (x101|((x102%x103)<x104));

	if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x105 = INT16_MIN;
	static int64_t x106 = INT64_MAX;
	volatile int32_t t25 = -84;

	t25 = (x105|((x106%x107)<x108));

	if (t25 != -32767) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x110 = INT16_MAX;
	int32_t x111 = -1;
	uint32_t x112 = UINT32_MAX;
	volatile int32_t t26 = 49497592;

	t26 = (x109|((x110%x111)<x112));

	if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = 0LL;
	uint16_t x114 = 117U;
	int8_t x115 = -10;
	int16_t x116 = INT16_MIN;
	int64_t t27 = -1237861982209845056LL;

	t27 = (x113|((x114%x115)<x116));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = 0;
	int16_t x119 = -1;
	int16_t x120 = INT16_MIN;

	t28 = (x117|((x118%x119)<x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x123 = 892U;
	static int16_t x124 = INT16_MIN;
	int32_t t29 = 791247261;

	t29 = (x121|((x122%x123)<x124));

	if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x125 = INT16_MIN;
	volatile uint64_t x126 = 4976114122534648LLU;
	int8_t x127 = 1;
	int32_t t30 = -43;

	t30 = (x125|((x126%x127)<x128));

	if (t30 != -32767) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x130 = INT16_MIN;
	volatile uint16_t x131 = 9244U;
	uint16_t x132 = 1003U;
	int64_t t31 = INT64_MAX;

	t31 = (x129|((x130%x131)<x132));

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x133 = 7;
	volatile int32_t x134 = -643656182;
	static int64_t x135 = INT64_MIN;
	int32_t x136 = -121045;
	int32_t t32 = 0;

	t32 = (x133|((x134%x135)<x136));

	if (t32 != 7) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x140 = 3U;
	int32_t t33 = 6597;

	t33 = (x137|((x138%x139)<x140));

	if (t33 != 688) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x141 = 15U;
	uint16_t x142 = UINT16_MAX;
	int64_t x143 = INT64_MAX;
	volatile int64_t x144 = 50767390867432LL;

	t34 = (x141|((x142%x143)<x144));

	if (t34 != 15) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = -1;
	int16_t x146 = -22;
	uint8_t x147 = UINT8_MAX;
	static int32_t x148 = 5312;
	int32_t t35 = -3;

	t35 = (x145|((x146%x147)<x148));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x149 = INT32_MIN;
	uint32_t x151 = 232U;
	int16_t x152 = INT16_MIN;
	static int32_t t36 = 985;

	t36 = (x149|((x150%x151)<x152));

	if (t36 != -2147483647) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x153 = UINT8_MAX;
	volatile int32_t x154 = INT32_MIN;
	int8_t x155 = -9;
	int64_t x156 = -1LL;
	volatile int32_t t37 = -804;

	t37 = (x153|((x154%x155)<x156));

	if (t37 != 255) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x157 = 6269293104974LLU;
	static volatile int16_t x159 = INT16_MIN;
	uint8_t x160 = 2U;
	static volatile uint64_t t38 = 2137LLU;

	t38 = (x157|((x158%x159)<x160));

	if (t38 != 6269293104974LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x161 = -1;
	int16_t x163 = INT16_MAX;
	int16_t x164 = -1;
	volatile int32_t t39 = 176;

	t39 = (x161|((x162%x163)<x164));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x165 = INT8_MIN;
	uint8_t x166 = 1U;
	int32_t x167 = -1;
	int8_t x168 = -2;
	int32_t t40 = 1;

	t40 = (x165|((x166%x167)<x168));

	if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x169 = INT64_MIN;
	int16_t x170 = INT16_MIN;
	int64_t x171 = INT64_MAX;
	static int32_t x172 = -1;
	volatile int64_t t41 = -31LL;

	t41 = (x169|((x170%x171)<x172));

	if (t41 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = INT16_MIN;
	uint16_t x176 = UINT16_MAX;

	t42 = (x173|((x174%x175)<x176));

	if (t42 != -32767) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x177 = INT32_MAX;
	int64_t x178 = 45LL;
	uint8_t x179 = 36U;
	static volatile uint32_t x180 = UINT32_MAX;
	int32_t t43 = INT32_MAX;

	t43 = (x177|((x178%x179)<x180));

	if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = INT8_MIN;
	uint32_t x183 = UINT32_MAX;
	static volatile int32_t t44 = 22536;

	t44 = (x181|((x182%x183)<x184));

	if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x185 = 1U;
	int16_t x186 = -1;
	static int32_t x187 = INT32_MIN;
	uint8_t x188 = 0U;
	volatile int32_t t45 = -4034;

	t45 = (x185|((x186%x187)<x188));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x189 = 17U;
	int64_t x190 = INT64_MIN;
	int8_t x191 = INT8_MAX;
	volatile uint32_t t46 = 20437409U;

	t46 = (x189|((x190%x191)<x192));

	if (t46 != 17U) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x193 = 44U;
	static int32_t x194 = -3703687;
	static uint16_t x195 = 12U;
	int8_t x196 = 0;
	int32_t t47 = -367021;

	t47 = (x193|((x194%x195)<x196));

	if (t47 != 45) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x197 = 11;
	int64_t x198 = INT64_MAX;
	uint8_t x199 = 17U;
	volatile uint16_t x200 = UINT16_MAX;
	static int32_t t48 = -862943800;

	t48 = (x197|((x198%x199)<x200));

	if (t48 != 11) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x201 = INT16_MIN;
	int32_t x203 = INT32_MAX;

	t49 = (x201|((x202%x203)<x204));

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint32_t x207 = 12U;
	static volatile uint32_t x208 = 16851599U;
	int64_t t50 = 1LL;

	t50 = (x205|((x206%x207)<x208));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x210 = 164U;
	int8_t x211 = INT8_MIN;
	int32_t x212 = -1;
	volatile int32_t t51 = -508507305;

	t51 = (x209|((x210%x211)<x212));

	if (t51 != 46) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x213 = 16053U;
	uint8_t x214 = 27U;
	int32_t x216 = 733948796;
	volatile int32_t t52 = 2423;

	t52 = (x213|((x214%x215)<x216));

	if (t52 != 16053) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x217 = -2024;
	volatile uint16_t x218 = UINT16_MAX;
	uint8_t x219 = 2U;
	static int64_t x220 = INT64_MIN;

	t53 = (x217|((x218%x219)<x220));

	if (t53 != -2024) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x221 = 39715496;
	static int8_t x222 = INT8_MAX;
	uint64_t x223 = 43079584285978395LLU;
	int16_t x224 = -5;
	static int32_t t54 = 182;

	t54 = (x221|((x222%x223)<x224));

	if (t54 != 39715497) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x225 = UINT8_MAX;
	int32_t x226 = INT32_MIN;
	uint8_t x227 = 44U;
	int8_t x228 = INT8_MIN;
	volatile int32_t t55 = 1;

	t55 = (x225|((x226%x227)<x228));

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x229 = INT16_MIN;
	uint8_t x230 = 8U;
	int16_t x231 = -3;
	int8_t x232 = INT8_MAX;
	volatile int32_t t56 = 1013;

	t56 = (x229|((x230%x231)<x232));

	if (t56 != -32767) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x233 = -13;
	static volatile uint64_t x235 = 81169LLU;
	volatile uint16_t x236 = UINT16_MAX;
	int32_t t57 = -951159898;

	t57 = (x233|((x234%x235)<x236));

	if (t57 != -13) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x238 = 0U;
	int16_t x239 = 133;
	int32_t t58 = 7953;

	t58 = (x237|((x238%x239)<x240));

	if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x241 = UINT32_MAX;
	volatile int32_t x243 = INT32_MIN;
	volatile int64_t x244 = -186233772LL;
	volatile uint32_t t59 = UINT32_MAX;

	t59 = (x241|((x242%x243)<x244));

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x245 = 457487U;
	int64_t x246 = -3629LL;
	volatile uint8_t x247 = UINT8_MAX;
	int32_t x248 = INT32_MIN;
	static volatile uint32_t t60 = 28311U;

	t60 = (x245|((x246%x247)<x248));

	if (t60 != 457487U) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint8_t x253 = UINT8_MAX;
	int16_t x254 = INT16_MIN;
	int32_t t61 = 8;

	t61 = (x253|((x254%x255)<x256));

	if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x258 = -56;
	int64_t x259 = -2LL;
	int32_t x260 = INT32_MIN;
	volatile int32_t t62 = -783998;

	t62 = (x257|((x258%x259)<x260));

	if (t62 != 104) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x262 = -1;
	volatile int32_t x263 = INT32_MIN;
	volatile int32_t x264 = -104694212;
	int32_t t63 = -82967941;

	t63 = (x261|((x262%x263)<x264));

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x265 = UINT64_MAX;
	static uint8_t x266 = 111U;
	int64_t x268 = 719294790326641107LL;

	t64 = (x265|((x266%x267)<x268));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x269 = 1;
	int64_t x271 = INT64_MIN;
	static int8_t x272 = INT8_MAX;
	int32_t t65 = 0;

	t65 = (x269|((x270%x271)<x272));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x275 = INT64_MIN;
	int16_t x276 = INT16_MAX;
	int32_t t66 = INT32_MAX;

	t66 = (x273|((x274%x275)<x276));

	if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x277 = INT32_MIN;
	volatile int64_t x278 = -232070173613LL;
	int64_t x279 = -1LL;
	volatile int8_t x280 = 1;
	volatile int32_t t67 = 376876;

	t67 = (x277|((x278%x279)<x280));

	if (t67 != -2147483647) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x282 = INT32_MIN;
	int8_t x283 = INT8_MIN;
	int16_t x284 = -1;
	int32_t t68 = -215;

	t68 = (x281|((x282%x283)<x284));

	if (t68 != -3) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x286 = INT16_MIN;
	volatile int32_t x287 = -1;
	int16_t x288 = 490;
	int32_t t69 = 24873067;

	t69 = (x285|((x286%x287)<x288));

	if (t69 != -5) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x289 = 308865108347LLU;
	int8_t x290 = INT8_MIN;
	static int64_t x291 = INT64_MIN;
	int32_t x292 = INT32_MIN;
	volatile uint64_t t70 = 2166897111948189490LLU;

	t70 = (x289|((x290%x291)<x292));

	if (t70 != 308865108347LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x293 = -20982343143913LL;
	uint8_t x295 = UINT8_MAX;
	static int8_t x296 = INT8_MIN;
	volatile int64_t t71 = -2959613LL;

	t71 = (x293|((x294%x295)<x296));

	if (t71 != -20982343143913LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x297 = INT64_MIN;
	int16_t x300 = INT16_MIN;

	t72 = (x297|((x298%x299)<x300));

	if (t72 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x301 = 710;
	int32_t x302 = INT32_MAX;
	int64_t x303 = INT64_MIN;

	t73 = (x301|((x302%x303)<x304));

	if (t73 != 711) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x305 = 569745710417775767LLU;
	static uint32_t x306 = UINT32_MAX;
	static int8_t x307 = -48;
	int16_t x308 = -14509;
	volatile uint64_t t74 = 3232961744913619035LLU;

	t74 = (x305|((x306%x307)<x308));

	if (t74 != 569745710417775767LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x309 = 1069826323285825LLU;
	uint16_t x310 = UINT16_MAX;
	volatile uint32_t x311 = 1836U;
	static volatile uint16_t x312 = 7U;
	volatile uint64_t t75 = 2848283262429386817LLU;

	t75 = (x309|((x310%x311)<x312));

	if (t75 != 1069826323285825LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x313 = INT16_MAX;
	static int32_t x314 = 108;
	static int8_t x315 = -1;
	int8_t x316 = INT8_MAX;

	t76 = (x313|((x314%x315)<x316));

	if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x318 = 94454LLU;
	int32_t x319 = 3727;
	int16_t x320 = INT16_MAX;
	volatile int32_t t77 = 185;

	t77 = (x317|((x318%x319)<x320));

	if (t77 != -27831) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x322 = 231;

	t78 = (x321|((x322%x323)<x324));

	if (t78 != -32767) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x326 = INT16_MIN;
	volatile int16_t x327 = -12;
	volatile int64_t t79 = 69160343498999964LL;

	t79 = (x325|((x326%x327)<x328));

	if (t79 != -4201743006029LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint32_t x329 = UINT32_MAX;
	static int64_t x330 = INT64_MAX;
	uint8_t x332 = 1U;
	uint32_t t80 = UINT32_MAX;

	t80 = (x329|((x330%x331)<x332));

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x333 = 16537312U;
	static volatile int8_t x334 = INT8_MIN;
	uint16_t x336 = UINT16_MAX;
	volatile uint32_t t81 = 44U;

	t81 = (x333|((x334%x335)<x336));

	if (t81 != 16537313U) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x337 = INT8_MIN;
	int32_t x338 = INT32_MIN;
	int32_t t82 = -1986;

	t82 = (x337|((x338%x339)<x340));

	if (t82 != -127) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x345 = INT64_MAX;
	volatile int64_t x347 = INT64_MAX;
	uint32_t x348 = UINT32_MAX;
	int64_t t83 = INT64_MAX;

	t83 = (x345|((x346%x347)<x348));

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint32_t x349 = UINT32_MAX;
	int32_t x350 = -405949811;
	int16_t x351 = INT16_MIN;
	int16_t x352 = INT16_MAX;
	static uint32_t t84 = UINT32_MAX;

	t84 = (x349|((x350%x351)<x352));

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x354 = INT8_MIN;
	uint8_t x355 = 78U;
	static int16_t x356 = INT16_MIN;
	int32_t t85 = -37981147;

	t85 = (x353|((x354%x355)<x356));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x357 = INT64_MAX;
	int32_t x358 = -1;
	uint16_t x359 = UINT16_MAX;
	volatile int32_t x360 = -530590;
	volatile int64_t t86 = INT64_MAX;

	t86 = (x357|((x358%x359)<x360));

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x361 = INT32_MIN;
	int64_t x362 = 818735638721131LL;
	static int64_t x363 = -1LL;
	int64_t x364 = INT64_MIN;
	static volatile int32_t t87 = INT32_MIN;

	t87 = (x361|((x362%x363)<x364));

	if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x365 = INT16_MIN;
	uint64_t x366 = UINT64_MAX;
	int64_t x367 = -97802965642LL;
	uint16_t x368 = 1617U;
	volatile int32_t t88 = -5820585;

	t88 = (x365|((x366%x367)<x368));

	if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x369 = 0U;
	uint16_t x370 = 354U;
	int32_t x372 = INT32_MAX;
	volatile int32_t t89 = 32;

	t89 = (x369|((x370%x371)<x372));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x374 = 32;
	int32_t x375 = -515521837;
	int16_t x376 = 2904;
	int32_t t90 = INT32_MAX;

	t90 = (x373|((x374%x375)<x376));

	if (t90 != INT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x378 = INT8_MAX;
	int64_t x379 = INT64_MIN;
	uint16_t x380 = 1U;
	int32_t t91 = 315;

	t91 = (x377|((x378%x379)<x380));

	if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x382 = 21;
	volatile uint16_t x383 = UINT16_MAX;
	int8_t x384 = -63;
	int32_t t92 = -2645586;

	t92 = (x381|((x382%x383)<x384));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x385 = -17;
	static volatile int8_t x386 = -1;
	int8_t x387 = 6;
	volatile int32_t t93 = -73;

	t93 = (x385|((x386%x387)<x388));

	if (t93 != -17) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x389 = INT16_MIN;
	int64_t x390 = INT64_MAX;
	uint32_t x391 = 171140478U;
	uint32_t x392 = UINT32_MAX;
	int32_t t94 = 0;

	t94 = (x389|((x390%x391)<x392));

	if (t94 != -32767) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x394 = UINT32_MAX;
	static int16_t x395 = INT16_MAX;
	int8_t x396 = INT8_MIN;
	uint64_t t95 = 30000599LLU;

	t95 = (x393|((x394%x395)<x396));

	if (t95 != 40743036459629LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x399 = 25U;
	static int16_t x400 = INT16_MIN;
	volatile int32_t t96 = 2111674;

	t96 = (x397|((x398%x399)<x400));

	if (t96 != 65535) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x401 = -12310;
	static int8_t x402 = INT8_MAX;
	uint64_t x404 = 591307252962LLU;
	int32_t t97 = -85905;

	t97 = (x401|((x402%x403)<x404));

	if (t97 != -12309) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x406 = 10946566186948502LL;
	int8_t x407 = INT8_MAX;
	int16_t x408 = INT16_MIN;
	int64_t t98 = INT64_MIN;

	t98 = (x405|((x406%x407)<x408));

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x409 = -1;
	uint16_t x412 = 989U;
	volatile int32_t t99 = 66;

	t99 = (x409|((x410%x411)<x412));

	if (t99 != -1) { NG(); } else { ; }
	
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

