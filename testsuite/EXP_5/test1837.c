#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x9 = 1;
int32_t x24 = INT32_MIN;
static volatile int16_t x25 = -340;
int32_t x27 = INT32_MIN;
uint8_t x34 = UINT8_MAX;
int64_t x37 = -979120266LL;
volatile int32_t x43 = 184;
uint32_t x46 = UINT32_MAX;
uint8_t x55 = UINT8_MAX;
volatile int8_t x58 = -1;
static int64_t x61 = INT64_MAX;
uint16_t x62 = 27U;
int64_t t16 = 69677052238345735LL;
static volatile int64_t x72 = INT64_MAX;
int64_t x75 = INT64_MIN;
int32_t x77 = -1615338;
int32_t x82 = 1000038;
static volatile int64_t t20 = -94010LL;
volatile int32_t t21 = -1205;
int64_t x91 = INT64_MIN;
volatile int16_t x93 = -7;
uint64_t x95 = 294850755155LLU;
volatile int32_t x96 = INT32_MIN;
int8_t x99 = INT8_MIN;
int64_t x122 = -1LL;
uint32_t x127 = 24041U;
int8_t x128 = INT8_MAX;
int64_t t32 = 12LL;
int16_t x135 = -1;
int16_t x139 = INT16_MIN;
volatile int32_t x156 = -1;
static uint32_t x159 = 94348548U;
static volatile int16_t x161 = INT16_MAX;
static int32_t t40 = -263878;
int32_t x166 = 3;
int64_t x175 = INT64_MIN;
int64_t x185 = INT64_MAX;
static int32_t x187 = 7;
int16_t x192 = INT16_MIN;
int32_t x204 = -1658138;
int16_t x208 = -1;
int8_t x223 = -53;
volatile int64_t x224 = 481506614199684LL;
int32_t x231 = 111;
volatile int32_t x233 = INT32_MIN;
int16_t x235 = INT16_MIN;
volatile int16_t x239 = -1153;
uint32_t x240 = 2940U;
int64_t x242 = -871950LL;
uint32_t x243 = UINT32_MAX;
int16_t x244 = -1;
int32_t x260 = 4896;
static uint8_t x261 = 0U;
int8_t x265 = -1;
int32_t x274 = INT32_MAX;
int16_t x280 = INT16_MIN;
int64_t x281 = 1577107406673097LL;
static volatile int64_t x287 = INT64_MAX;
int8_t x289 = -1;
int64_t x290 = INT64_MAX;
int64_t x291 = -22780615323914LL;
int8_t x297 = INT8_MAX;
static int32_t x305 = INT32_MIN;
int8_t x307 = -2;
static int8_t x314 = -19;
int64_t x321 = INT64_MAX;
int8_t x332 = INT8_MIN;
int32_t x333 = -12282554;
uint64_t x334 = 93911539712LLU;
int32_t x335 = INT32_MIN;
uint64_t x341 = 6681776LLU;
int32_t x353 = INT32_MIN;
uint64_t t86 = 3LLU;
int16_t x360 = INT16_MAX;
volatile int32_t t87 = 983944091;
int32_t t88 = -1;
static volatile int8_t x370 = INT8_MIN;
uint64_t x376 = UINT64_MAX;
int64_t x377 = -1LL;
volatile uint64_t t93 = 117549692812LLU;
int16_t x387 = INT16_MIN;
static int16_t x390 = INT16_MIN;
static int32_t t95 = 75;
int64_t t98 = 824595571950311337LL;
int16_t x407 = 0;
int64_t t99 = -18208296069LL;


void f0(void) {
	static uint8_t x1 = 85U;
	uint8_t x2 = UINT8_MAX;
	static int32_t x3 = -1;
	static volatile int8_t x4 = -43;
	volatile int32_t t0 = 5527604;

	t0 = (x1/((x2&x3)|x4));

	if (t0 != -85) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MAX;
	static int64_t x6 = INT64_MIN;
	uint32_t x7 = UINT32_MAX;
	int64_t x8 = -1LL;
	static volatile int64_t t1 = -4395298061LL;

	t1 = (x5/((x6&x7)|x8));

	if (t1 != -32767LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = -1;
	uint16_t x11 = 15U;
	volatile int64_t x12 = INT64_MIN;
	int64_t t2 = 14987232467159LL;

	t2 = (x9/((x10&x11)|x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	uint8_t x14 = UINT8_MAX;
	int32_t x15 = -223852430;
	uint8_t x16 = 13U;
	static volatile int32_t t3 = -6;

	t3 = (x13/((x14&x15)|x16));

	if (t3 != 258) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = INT32_MAX;
	static uint64_t x18 = UINT64_MAX;
	int64_t x19 = INT64_MIN;
	uint8_t x20 = 13U;
	uint64_t t4 = 253LLU;

	t4 = (x17/((x18&x19)|x20));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x21 = UINT64_MAX;
	int32_t x22 = -1;
	volatile int64_t x23 = INT64_MIN;
	uint64_t t5 = 35511570LLU;

	t5 = (x21/((x22&x23)|x24));

	if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x26 = 26617U;
	int32_t x28 = INT32_MAX;
	volatile uint32_t t6 = 44U;

	t6 = (x25/((x26&x27)|x28));

	if (t6 != 1U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	int64_t x30 = -1LL;
	int32_t x31 = -1;
	volatile uint8_t x32 = UINT8_MAX;
	static volatile int64_t t7 = -5768846097500273LL;

	t7 = (x29/((x30&x31)|x32));

	if (t7 != 128LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	uint8_t x35 = 2U;
	int32_t x36 = INT32_MIN;
	static int32_t t8 = 489;

	t8 = (x33/((x34&x35)|x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = INT32_MIN;
	static int8_t x39 = -58;
	int8_t x40 = -1;
	int64_t t9 = -1804664LL;

	t9 = (x37/((x38&x39)|x40));

	if (t9 != 979120266LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 48U;
	volatile int64_t x42 = -3947091528690LL;
	volatile uint64_t x44 = 134139993LLU;
	uint64_t t10 = 3779438372329LLU;

	t10 = (x41/((x42&x43)|x44));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = INT64_MIN;
	static int16_t x47 = INT16_MIN;
	int8_t x48 = INT8_MIN;
	int64_t t11 = -1149313764LL;

	t11 = (x45/((x46&x47)|x48));

	if (t11 != -2147483712LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	volatile int64_t x50 = INT64_MIN;
	int64_t x51 = -1LL;
	int8_t x52 = INT8_MAX;
	int64_t t12 = 0LL;

	t12 = (x49/((x50&x51)|x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = INT8_MIN;
	uint32_t x54 = UINT32_MAX;
	static uint32_t x56 = 936U;
	volatile uint32_t t13 = 33U;

	t13 = (x53/((x54&x55)|x56));

	if (t13 != 4198403U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	uint64_t x59 = 20LLU;
	int16_t x60 = INT16_MIN;
	volatile uint64_t t14 = 138318593LLU;

	t14 = (x57/((x58&x59)|x60));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x63 = 556U;
	static volatile int16_t x64 = -1;
	int64_t t15 = -145LL;

	t15 = (x61/((x62&x63)|x64));

	if (t15 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	volatile int64_t x66 = INT64_MIN;
	volatile int64_t x67 = INT64_MAX;
	int16_t x68 = 68;

	t16 = (x65/((x66&x67)|x68));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x69 = UINT16_MAX;
	uint32_t x70 = UINT32_MAX;
	volatile int32_t x71 = -113;
	int64_t t17 = 32321LL;

	t17 = (x69/((x70&x71)|x72));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	static int32_t x74 = INT32_MIN;
	int8_t x76 = INT8_MIN;
	volatile int64_t t18 = -151LL;

	t18 = (x73/((x74&x75)|x76));

	if (t18 != 16777216LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x78 = 3158340LLU;
	uint8_t x79 = 0U;
	uint8_t x80 = 81U;
	volatile uint64_t t19 = 0LLU;

	t19 = (x77/((x78&x79)|x80));

	if (t19 != 227737581156888102LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	uint16_t x83 = UINT16_MAX;
	int64_t x84 = -45LL;

	t20 = (x81/((x82&x83)|x84));

	if (t20 != 238609294LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x85 = -11;
	static int32_t x86 = 58150;
	uint16_t x87 = 889U;
	static int32_t x88 = INT32_MIN;

	t21 = (x85/((x86&x87)|x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x89 = -3;
	volatile uint16_t x90 = 18859U;
	static volatile int64_t x92 = -152LL;
	int64_t t22 = 2908LL;

	t22 = (x89/((x90&x91)|x92));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x94 = -1;
	volatile uint64_t t23 = 7779720157392142LLU;

	t23 = (x93/((x94&x95)|x96));

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = 2958;
	int16_t x98 = -1;
	int64_t x100 = INT64_MAX;
	int64_t t24 = 965332189LL;

	t24 = (x97/((x98&x99)|x100));

	if (t24 != -2958LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = 2158;
	uint32_t x102 = 43543U;
	int64_t x103 = 28303015300276837LL;
	volatile uint64_t x104 = 652007331681529875LLU;
	static uint64_t t25 = 1954801500834LLU;

	t25 = (x101/((x102&x103)|x104));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x105 = 899319U;
	int64_t x106 = INT64_MAX;
	uint16_t x107 = 3413U;
	int32_t x108 = 60;
	int64_t t26 = -6183948LL;

	t26 = (x105/((x106&x107)|x108));

	if (t26 != 260LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x109 = UINT16_MAX;
	uint32_t x110 = UINT32_MAX;
	static int64_t x111 = INT64_MIN;
	volatile uint16_t x112 = 9887U;
	int64_t t27 = 12878043372793200LL;

	t27 = (x109/((x110&x111)|x112));

	if (t27 != 6LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = 23486;
	int64_t x114 = -1022516499LL;
	int64_t x115 = INT64_MAX;
	int8_t x116 = INT8_MAX;
	volatile int64_t t28 = 940329315LL;

	t28 = (x113/((x114&x115)|x116));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x117 = 2431845086168LL;
	int64_t x118 = -199921139564LL;
	static int32_t x119 = INT32_MAX;
	uint64_t x120 = 3693LLU;
	uint64_t t29 = 946996396141880473LLU;

	t29 = (x117/((x118&x119)|x120));

	if (t29 != 1252LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x121 = 1221632U;
	static int64_t x123 = -1LL;
	int8_t x124 = INT8_MAX;
	int64_t t30 = -79409733LL;

	t30 = (x121/((x122&x123)|x124));

	if (t30 != -1221632LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = 2U;
	volatile int16_t x126 = -1;
	volatile uint32_t t31 = 14342U;

	t31 = (x125/((x126&x127)|x128));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int64_t x129 = 14784LL;
	int32_t x130 = INT32_MAX;
	static int64_t x131 = -1LL;
	int8_t x132 = INT8_MAX;

	t32 = (x129/((x130&x131)|x132));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 1U;
	volatile int32_t x134 = INT32_MAX;
	static int32_t x136 = 11378;
	volatile int32_t t33 = -6428;

	t33 = (x133/((x134&x135)|x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -6220277;
	int32_t x138 = -2;
	int64_t x140 = INT64_MAX;
	volatile int64_t t34 = 35564541294LL;

	t34 = (x137/((x138&x139)|x140));

	if (t34 != 6220277LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint16_t x141 = UINT16_MAX;
	volatile int64_t x142 = 891162899LL;
	int32_t x143 = INT32_MIN;
	int16_t x144 = INT16_MIN;
	volatile int64_t t35 = 130738301204345LL;

	t35 = (x141/((x142&x143)|x144));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x145 = INT64_MIN;
	int16_t x146 = INT16_MIN;
	static uint8_t x147 = UINT8_MAX;
	uint64_t x148 = 369813967121227582LLU;
	volatile uint64_t t36 = 26281478402206LLU;

	t36 = (x145/((x146&x147)|x148));

	if (t36 != 24LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x149 = 488LLU;
	volatile int16_t x150 = -1;
	volatile uint64_t x151 = 6280LLU;
	static volatile int16_t x152 = 120;
	static volatile uint64_t t37 = 222818LLU;

	t37 = (x149/((x150&x151)|x152));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x153 = -1;
	static volatile int8_t x154 = -57;
	uint8_t x155 = UINT8_MAX;
	int32_t t38 = -73;

	t38 = (x153/((x154&x155)|x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MAX;
	volatile int32_t x158 = -8497;
	uint32_t x160 = 105754507U;
	volatile uint32_t t39 = 54515833U;

	t39 = (x157/((x158&x159)|x160));

	if (t39 != 16U) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x162 = -130;
	int32_t x163 = -3;
	int8_t x164 = -25;

	t40 = (x161/((x162&x163)|x164));

	if (t40 != -32767) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = UINT8_MAX;
	static uint32_t x167 = 15642U;
	int64_t x168 = -355326LL;
	int64_t t41 = -64907208LL;

	t41 = (x165/((x166&x167)|x168));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x169 = INT8_MAX;
	int64_t x170 = INT64_MIN;
	int64_t x171 = INT64_MIN;
	volatile int32_t x172 = INT32_MIN;
	int64_t t42 = 5141980248756007LL;

	t42 = (x169/((x170&x171)|x172));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x173 = INT64_MAX;
	static int8_t x174 = INT8_MAX;
	uint8_t x176 = 50U;
	static volatile int64_t t43 = -20065438886314382LL;

	t43 = (x173/((x174&x175)|x176));

	if (t43 != 184467440737095516LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x181 = INT32_MIN;
	int8_t x182 = INT8_MIN;
	int8_t x183 = INT8_MIN;
	static int32_t x184 = INT32_MIN;
	volatile int32_t t44 = -252050;

	t44 = (x181/((x182&x183)|x184));

	if (t44 != 16777216) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x186 = INT8_MIN;
	int64_t x188 = INT64_MAX;
	static volatile int64_t t45 = -2502LL;

	t45 = (x185/((x186&x187)|x188));

	if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = -1;
	static int8_t x190 = 57;
	volatile int8_t x191 = 1;
	volatile int32_t t46 = 1604123;

	t46 = (x189/((x190&x191)|x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x193 = 33U;
	volatile int8_t x194 = INT8_MIN;
	uint8_t x195 = 0U;
	int8_t x196 = -1;
	volatile int32_t t47 = -258871;

	t47 = (x193/((x194&x195)|x196));

	if (t47 != -33) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x197 = 0U;
	int32_t x198 = 948;
	int32_t x199 = 1144523;
	int64_t x200 = -1LL;
	int64_t t48 = 1LL;

	t48 = (x197/((x198&x199)|x200));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x201 = -1LL;
	uint32_t x202 = 266701119U;
	int64_t x203 = INT64_MAX;
	int64_t t49 = -487773085034247972LL;

	t49 = (x201/((x202&x203)|x204));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x205 = 24492LL;
	static uint16_t x206 = UINT16_MAX;
	int8_t x207 = INT8_MIN;
	volatile int64_t t50 = 4777LL;

	t50 = (x205/((x206&x207)|x208));

	if (t50 != -24492LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x209 = INT64_MIN;
	int32_t x210 = INT32_MAX;
	int16_t x211 = INT16_MAX;
	int64_t x212 = 2733877524077517LL;
	int64_t t51 = -1058195918285184LL;

	t51 = (x209/((x210&x211)|x212));

	if (t51 != -3373LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x213 = 508504LLU;
	static int8_t x214 = INT8_MAX;
	int8_t x215 = INT8_MIN;
	int32_t x216 = 4147750;
	uint64_t t52 = 193877490921LLU;

	t52 = (x213/((x214&x215)|x216));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x221 = UINT64_MAX;
	uint32_t x222 = 5U;
	volatile uint64_t t53 = 63868LLU;

	t53 = (x221/((x222&x223)|x224));

	if (t53 != 38310LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint8_t x225 = UINT8_MAX;
	int32_t x226 = INT32_MIN;
	volatile int64_t x227 = INT64_MIN;
	int64_t x228 = -1LL;
	volatile int64_t t54 = -8414006046004682LL;

	t54 = (x225/((x226&x227)|x228));

	if (t54 != -255LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x229 = 6078870LL;
	int8_t x230 = -1;
	uint32_t x232 = UINT32_MAX;
	static volatile int64_t t55 = -18378499LL;

	t55 = (x229/((x230&x231)|x232));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x234 = -29;
	volatile int64_t x236 = INT64_MIN;
	static volatile int64_t t56 = -81LL;

	t56 = (x233/((x234&x235)|x236));

	if (t56 != 65536LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x237 = 203U;
	volatile int16_t x238 = INT16_MIN;
	static uint32_t t57 = 21913U;

	t57 = (x237/((x238&x239)|x240));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x241 = 85260;
	volatile int64_t t58 = -3399217648835935860LL;

	t58 = (x241/((x242&x243)|x244));

	if (t58 != -85260LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x245 = -4251703;
	int16_t x246 = -7456;
	static int8_t x247 = INT8_MIN;
	uint64_t x248 = 194307177308LLU;
	volatile uint64_t t59 = 32222537889290LLU;

	t59 = (x245/((x246&x247)|x248));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x249 = INT8_MIN;
	static int8_t x250 = INT8_MIN;
	uint8_t x251 = 62U;
	uint32_t x252 = 82026U;
	volatile uint32_t t60 = 1U;

	t60 = (x249/((x250&x251)|x252));

	if (t60 != 52361U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x253 = -149942;
	int64_t x254 = -5437669523LL;
	uint16_t x255 = 9U;
	static int64_t x256 = -788938778475642LL;
	static int64_t t61 = -49035996LL;

	t61 = (x253/((x254&x255)|x256));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x257 = INT64_MIN;
	int8_t x258 = INT8_MIN;
	int32_t x259 = -95;
	int64_t t62 = 91574628585LL;

	t62 = (x257/((x258&x259)|x260));

	if (t62 != 96076792050570581LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x262 = UINT64_MAX;
	volatile int16_t x263 = INT16_MIN;
	int64_t x264 = INT64_MIN;
	uint64_t t63 = 391650582974270LLU;

	t63 = (x261/((x262&x263)|x264));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x266 = -1;
	static volatile uint32_t x267 = UINT32_MAX;
	int64_t x268 = -8429968LL;
	volatile int64_t t64 = 2522880356203987LL;

	t64 = (x265/((x266&x267)|x268));

	if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x269 = 7986;
	uint64_t x270 = 1682858LLU;
	volatile uint64_t x271 = UINT64_MAX;
	int32_t x272 = -1;
	volatile uint64_t t65 = 93291685864099111LLU;

	t65 = (x269/((x270&x271)|x272));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x273 = UINT16_MAX;
	uint8_t x275 = UINT8_MAX;
	uint64_t x276 = 1LLU;
	uint64_t t66 = 1541322LLU;

	t66 = (x273/((x274&x275)|x276));

	if (t66 != 257LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x277 = INT64_MIN;
	int32_t x278 = 46;
	static volatile int8_t x279 = -1;
	int64_t t67 = -223229402831788834LL;

	t67 = (x277/((x278&x279)|x280));

	if (t67 != 281870669178374LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x282 = -1LL;
	uint8_t x283 = UINT8_MAX;
	uint32_t x284 = UINT32_MAX;
	volatile int64_t t68 = -5049359654LL;

	t68 = (x281/((x282&x283)|x284));

	if (t68 != 367198LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x285 = -1;
	static int64_t x286 = -1LL;
	int8_t x288 = 0;
	int64_t t69 = 2622LL;

	t69 = (x285/((x286&x287)|x288));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x292 = 260548LLU;
	uint64_t t70 = 208861LLU;

	t70 = (x289/((x290&x291)|x292));

	if (t70 != 2LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x293 = -1;
	volatile int64_t x294 = INT64_MIN;
	uint8_t x295 = 1U;
	int16_t x296 = INT16_MAX;
	int64_t t71 = -2016LL;

	t71 = (x293/((x294&x295)|x296));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x298 = INT8_MAX;
	uint8_t x299 = UINT8_MAX;
	static int32_t x300 = 42;
	volatile int32_t t72 = 1;

	t72 = (x297/((x298&x299)|x300));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x301 = INT8_MIN;
	static int16_t x302 = 13;
	static int8_t x303 = INT8_MAX;
	int32_t x304 = -1;
	int32_t t73 = 8905;

	t73 = (x301/((x302&x303)|x304));

	if (t73 != 128) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x306 = -1687118021302LL;
	uint16_t x308 = 42U;
	int64_t t74 = 6884LL;

	t74 = (x305/((x306&x307)|x308));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x309 = UINT8_MAX;
	int32_t x310 = INT32_MIN;
	int8_t x311 = INT8_MIN;
	static volatile int8_t x312 = INT8_MIN;
	int32_t t75 = -221847;

	t75 = (x309/((x310&x311)|x312));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x313 = -1;
	static uint64_t x315 = UINT64_MAX;
	uint16_t x316 = 16034U;
	volatile uint64_t t76 = 26083164162614LLU;

	t76 = (x313/((x314&x315)|x316));

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x317 = 14;
	static int16_t x318 = -1;
	int32_t x319 = 4089;
	volatile int32_t x320 = INT32_MAX;
	int32_t t77 = 3;

	t77 = (x317/((x318&x319)|x320));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x322 = 43U;
	uint32_t x323 = 4116U;
	int64_t x324 = 201486229LL;
	volatile int64_t t78 = 8576453552LL;

	t78 = (x321/((x322&x323)|x324));

	if (t78 != 45776686985LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x325 = 106LL;
	int32_t x326 = -7;
	int8_t x327 = INT8_MAX;
	int32_t x328 = 1;
	int64_t t79 = 276031674435878LL;

	t79 = (x325/((x326&x327)|x328));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x329 = INT16_MAX;
	static volatile uint64_t x330 = UINT64_MAX;
	static int8_t x331 = 2;
	volatile uint64_t t80 = 50888531261LLU;

	t80 = (x329/((x330&x331)|x332));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x336 = INT16_MIN;
	volatile uint64_t t81 = 3581537776669528568LLU;

	t81 = (x333/((x334&x335)|x336));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x337 = 0U;
	int16_t x338 = INT16_MAX;
	int32_t x339 = -1;
	uint64_t x340 = UINT64_MAX;
	volatile uint64_t t82 = 1LLU;

	t82 = (x337/((x338&x339)|x340));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x342 = UINT16_MAX;
	int8_t x343 = INT8_MIN;
	int32_t x344 = 84049;
	volatile uint64_t t83 = 2847101LLU;

	t83 = (x341/((x342&x343)|x344));

	if (t83 != 50LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x345 = -1;
	volatile int8_t x346 = 0;
	volatile int32_t x347 = INT32_MAX;
	int64_t x348 = INT64_MIN;
	volatile int64_t t84 = -3945790529LL;

	t84 = (x345/((x346&x347)|x348));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x349 = INT8_MAX;
	static uint64_t x350 = 406LLU;
	uint16_t x351 = 0U;
	static uint64_t x352 = 30274LLU;
	volatile uint64_t t85 = 1286379896572560LLU;

	t85 = (x349/((x350&x351)|x352));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x354 = 0;
	static uint64_t x355 = 97708339194LLU;
	static int64_t x356 = 11217612314LL;

	t86 = (x353/((x354&x355)|x356));

	if (t86 != 1644444785LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x357 = 228;
	volatile int16_t x358 = -1;
	int32_t x359 = INT32_MIN;

	t87 = (x357/((x358&x359)|x360));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x361 = INT8_MIN;
	int16_t x362 = -1;
	volatile uint16_t x363 = UINT16_MAX;
	int16_t x364 = INT16_MIN;

	t88 = (x361/((x362&x363)|x364));

	if (t88 != 128) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x365 = 1U;
	uint16_t x366 = UINT16_MAX;
	uint16_t x367 = 0U;
	uint16_t x368 = 25U;
	int32_t t89 = 519939;

	t89 = (x365/((x366&x367)|x368));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x369 = INT64_MIN;
	int32_t x371 = -1;
	static int32_t x372 = -10588;
	int64_t t90 = 1519987LL;

	t90 = (x369/((x370&x371)|x372));

	if (t90 != 100254043878856258LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x373 = 3U;
	volatile uint16_t x374 = 5526U;
	uint16_t x375 = UINT16_MAX;
	volatile uint64_t t91 = 3144089828419523825LLU;

	t91 = (x373/((x374&x375)|x376));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x378 = INT64_MIN;
	volatile int64_t x379 = -1LL;
	uint64_t x380 = 14556LLU;
	uint64_t t92 = 45701082896LLU;

	t92 = (x377/((x378&x379)|x380));

	if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x381 = 29U;
	static uint64_t x382 = UINT64_MAX;
	volatile int32_t x383 = INT32_MIN;
	uint8_t x384 = UINT8_MAX;

	t93 = (x381/((x382&x383)|x384));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x385 = 0;
	int16_t x386 = INT16_MIN;
	int8_t x388 = INT8_MIN;
	int32_t t94 = -112;

	t94 = (x385/((x386&x387)|x388));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x389 = 5;
	volatile int8_t x391 = INT8_MAX;
	uint16_t x392 = 20127U;

	t95 = (x389/((x390&x391)|x392));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x393 = INT16_MAX;
	int8_t x394 = -1;
	uint64_t x395 = 4862289480LLU;
	uint8_t x396 = 16U;
	volatile uint64_t t96 = 962LLU;

	t96 = (x393/((x394&x395)|x396));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x397 = -13;
	int64_t x398 = 80836317846658LL;
	int32_t x399 = INT32_MIN;
	int64_t x400 = INT64_MAX;
	volatile int64_t t97 = -17769923755857960LL;

	t97 = (x397/((x398&x399)|x400));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x401 = -1;
	uint16_t x402 = 29684U;
	int32_t x403 = 3;
	volatile int64_t x404 = INT64_MIN;

	t98 = (x401/((x402&x403)|x404));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x405 = -180138LL;
	uint16_t x406 = 45U;
	int64_t x408 = -1LL;

	t99 = (x405/((x406&x407)|x408));

	if (t99 != 180138LL) { NG(); } else { ; }
	
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
