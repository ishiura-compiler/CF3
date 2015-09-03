#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint16_t x1 = 974U;
volatile uint64_t x12 = 13573899168675294LLU;
int32_t t2 = 3927;
static int32_t x20 = INT32_MIN;
static volatile uint64_t x23 = UINT64_MAX;
uint64_t x28 = 560060124504291LLU;
static volatile int64_t t6 = -3869031094LL;
int64_t x33 = INT64_MIN;
uint8_t x37 = 102U;
int16_t x38 = 0;
int8_t x39 = 0;
uint16_t x40 = 37U;
int8_t x45 = -1;
uint32_t x57 = 997992U;
int8_t x63 = INT8_MAX;
volatile int32_t t12 = -11;
static int64_t x65 = INT64_MAX;
static uint8_t x67 = 0U;
volatile uint16_t x70 = UINT16_MAX;
int16_t x71 = -14;
int16_t x74 = 7;
int32_t t17 = 4748;
int8_t x88 = INT8_MIN;
static volatile int32_t t19 = 21;
uint16_t x97 = UINT16_MAX;
volatile uint64_t x98 = 1956LLU;
static int8_t x107 = -2;
int64_t x119 = INT64_MIN;
uint64_t t25 = 127345410LLU;
static int16_t x127 = INT16_MAX;
int64_t x134 = INT64_MIN;
int64_t x138 = -1LL;
volatile int16_t x144 = -1;
volatile uint16_t x147 = 215U;
int8_t x151 = INT8_MIN;
static uint64_t x155 = 13973462553883LLU;
int32_t t33 = INT32_MIN;
uint16_t x161 = UINT16_MAX;
volatile int16_t x162 = INT16_MIN;
static volatile int64_t x175 = INT64_MAX;
volatile int32_t t36 = 33090282;
int64_t x181 = INT64_MIN;
int8_t x182 = INT8_MIN;
uint64_t x183 = 2062126314347LLU;
int64_t t38 = -60587903LL;
uint32_t x197 = UINT32_MAX;
uint32_t x199 = 1910556U;
int16_t x211 = INT16_MIN;
volatile int32_t x217 = -4;
uint16_t x218 = 1012U;
uint64_t x224 = UINT64_MAX;
volatile uint64_t x232 = 1528766401730679LLU;
uint64_t t49 = 77LLU;
volatile int64_t x238 = INT64_MAX;
int64_t x240 = -1LL;
volatile int64_t x251 = INT64_MIN;
static int8_t x255 = 1;
int32_t x256 = INT32_MIN;
uint8_t x259 = 116U;
uint32_t x277 = 6665U;
volatile int32_t t61 = 93556190;
uint64_t x296 = 129699389274LLU;
volatile uint32_t x298 = 2481656U;
static int64_t x299 = -1LL;
volatile uint64_t t64 = 5316LLU;
volatile int16_t x302 = INT16_MIN;
uint16_t x304 = 78U;
uint32_t x305 = 1U;
volatile int8_t x307 = -1;
int8_t x309 = INT8_MIN;
int64_t x310 = INT64_MIN;
volatile int16_t x313 = -1;
int32_t t69 = -23;
int64_t t73 = 819533346509LL;
int16_t x346 = -12894;
uint32_t x348 = UINT32_MAX;
uint16_t x355 = UINT16_MAX;
uint64_t t75 = 201349LLU;
int32_t x363 = INT32_MIN;
uint16_t x374 = UINT16_MAX;
int8_t x387 = INT8_MIN;
volatile uint16_t x392 = UINT16_MAX;
static volatile uint32_t x415 = 798082187U;
int8_t x419 = 0;
int8_t x423 = INT8_MIN;
volatile int16_t x424 = INT16_MIN;
uint32_t t93 = 8U;
volatile int64_t x436 = 2016188LL;
int32_t x441 = INT32_MAX;
static volatile uint32_t x443 = 2061680U;
int16_t x448 = -301;
int64_t x449 = -19LL;
volatile uint16_t x450 = UINT16_MAX;
static int8_t x456 = 0;


void f0(void) {
	static int8_t x2 = INT8_MAX;
	volatile int64_t x3 = -374645021199511LL;
	static int64_t x4 = -1LL;
	int64_t t0 = 54LL;

	t0 = (x1-((x2<=x3)+x4));

	if (t0 != 975LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x9 = -1;
	volatile int16_t x10 = -2857;
	uint16_t x11 = 1U;
	uint64_t t1 = 3LLU;

	t1 = (x9-((x10<=x11)+x12));

	if (t1 != 18433170174540876320LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = -1;
	int8_t x14 = 0;
	volatile uint32_t x15 = 6U;
	int16_t x16 = INT16_MIN;

	t2 = (x13-((x14<=x15)+x16));

	if (t2 != 32766) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = INT32_MIN;
	int8_t x18 = INT8_MAX;
	static int16_t x19 = INT16_MIN;
	int32_t t3 = -935515;

	t3 = (x17-((x18<=x19)+x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = -1;
	static uint16_t x22 = 14625U;
	static int16_t x24 = -1;
	int32_t t4 = -14381;

	t4 = (x21-((x22<=x23)+x24));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x25 = 11U;
	uint32_t x26 = 36U;
	uint32_t x27 = 312U;
	uint64_t t5 = 3233241LLU;

	t5 = (x25-((x26<=x27)+x28));

	if (t5 != 18446184013585047335LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = 5551289LL;
	volatile int8_t x30 = -1;
	volatile int16_t x31 = 2;
	static int32_t x32 = INT32_MIN;

	t6 = (x29-((x30<=x31)+x32));

	if (t6 != 2153034936LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x34 = INT8_MIN;
	int32_t x35 = INT32_MIN;
	static int16_t x36 = -1;
	static volatile int64_t t7 = -966092304109LL;

	t7 = (x33-((x34<=x35)+x36));

	if (t7 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t t8 = 144;

	t8 = (x37-((x38<=x39)+x40));

	if (t8 != 64) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = INT16_MIN;
	uint64_t x42 = 101LLU;
	uint32_t x43 = UINT32_MAX;
	int64_t x44 = INT64_MIN;
	volatile int64_t t9 = 2048939674119LL;

	t9 = (x41-((x42<=x43)+x44));

	if (t9 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x46 = UINT16_MAX;
	uint16_t x47 = UINT16_MAX;
	int16_t x48 = -1;
	int32_t t10 = 1;

	t10 = (x45-((x46<=x47)+x48));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x58 = 280U;
	int64_t x59 = INT64_MIN;
	static int64_t x60 = INT64_MAX;
	int64_t t11 = -1583074987276190667LL;

	t11 = (x57-((x58<=x59)+x60));

	if (t11 != -9223372036853777815LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x61 = INT16_MIN;
	volatile int64_t x62 = -1LL;
	int8_t x64 = -1;

	t12 = (x61-((x62<=x63)+x64));

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint64_t x66 = 186124986791045414LLU;
	int8_t x68 = INT8_MAX;
	int64_t t13 = 6795LL;

	t13 = (x65-((x66<=x67)+x68));

	if (t13 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = INT8_MAX;
	int16_t x72 = INT16_MAX;
	volatile int32_t t14 = -863385;

	t14 = (x69-((x70<=x71)+x72));

	if (t14 != -32640) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = INT8_MAX;
	int16_t x75 = -1;
	volatile uint32_t x76 = 10U;
	volatile uint32_t t15 = 9U;

	t15 = (x73-((x74<=x75)+x76));

	if (t15 != 117U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x77 = INT64_MIN;
	uint32_t x78 = UINT32_MAX;
	static int8_t x79 = 61;
	int32_t x80 = INT32_MIN;
	static volatile int64_t t16 = 821228001770LL;

	t16 = (x77-((x78<=x79)+x80));

	if (t16 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x81 = UINT16_MAX;
	uint32_t x82 = UINT32_MAX;
	int64_t x83 = -1LL;
	int32_t x84 = -75846196;

	t17 = (x81-((x82<=x83)+x84));

	if (t17 != 75911731) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = -1;
	uint32_t x86 = 1263204U;
	static uint32_t x87 = 3598141U;
	static int32_t t18 = -5028;

	t18 = (x85-((x86<=x87)+x88));

	if (t18 != 126) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x89 = UINT8_MAX;
	volatile int16_t x90 = -788;
	volatile int32_t x91 = INT32_MIN;
	int32_t x92 = -1;

	t19 = (x89-((x90<=x91)+x92));

	if (t19 != 256) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x93 = INT16_MIN;
	int8_t x94 = INT8_MIN;
	int16_t x95 = -1;
	int32_t x96 = -53;
	volatile int32_t t20 = 237054;

	t20 = (x93-((x94<=x95)+x96));

	if (t20 != -32716) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x99 = -1;
	uint16_t x100 = 47U;
	int32_t t21 = -39403;

	t21 = (x97-((x98<=x99)+x100));

	if (t21 != 65487) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x101 = INT64_MAX;
	int16_t x102 = 326;
	uint64_t x103 = 346150779737LLU;
	int8_t x104 = -1;
	int64_t t22 = INT64_MAX;

	t22 = (x101-((x102<=x103)+x104));

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x105 = 1LLU;
	volatile int16_t x106 = -1971;
	static uint8_t x108 = 1U;
	static volatile uint64_t t23 = UINT64_MAX;

	t23 = (x105-((x106<=x107)+x108));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x113 = 5LLU;
	uint64_t x114 = 1LLU;
	int64_t x115 = INT64_MIN;
	int32_t x116 = 12;
	uint64_t t24 = 7384066098LLU;

	t24 = (x113-((x114<=x115)+x116));

	if (t24 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x117 = UINT64_MAX;
	static volatile int64_t x118 = INT64_MAX;
	int16_t x120 = INT16_MIN;

	t25 = (x117-((x118<=x119)+x120));

	if (t25 != 32767LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x125 = 2000312385LL;
	static int16_t x126 = INT16_MIN;
	int16_t x128 = 1;
	int64_t t26 = 2158870219843134911LL;

	t26 = (x125-((x126<=x127)+x128));

	if (t26 != 2000312383LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x133 = 676643854U;
	int16_t x135 = 1839;
	static uint64_t x136 = 1271268942LLU;
	uint64_t t27 = 48928395550291LLU;

	t27 = (x133-((x134<=x135)+x136));

	if (t27 != 18446744073114926527LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x137 = UINT16_MAX;
	volatile int8_t x139 = -1;
	int8_t x140 = 21;
	volatile int32_t t28 = 4;

	t28 = (x137-((x138<=x139)+x140));

	if (t28 != 65513) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x141 = INT8_MIN;
	uint32_t x142 = 27286969U;
	uint8_t x143 = 14U;
	static volatile int32_t t29 = -29;

	t29 = (x141-((x142<=x143)+x144));

	if (t29 != -127) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x145 = INT64_MIN;
	int32_t x146 = INT32_MAX;
	int8_t x148 = INT8_MIN;
	int64_t t30 = 114853622LL;

	t30 = (x145-((x146<=x147)+x148));

	if (t30 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x149 = INT64_MIN;
	int16_t x150 = -1;
	int16_t x152 = INT16_MIN;
	int64_t t31 = -120476LL;

	t31 = (x149-((x150<=x151)+x152));

	if (t31 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint16_t x153 = UINT16_MAX;
	uint16_t x154 = 18U;
	volatile uint8_t x156 = 41U;
	int32_t t32 = -57051;

	t32 = (x153-((x154<=x155)+x156));

	if (t32 != 65493) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x157 = -1;
	uint16_t x158 = UINT16_MAX;
	static int32_t x159 = INT32_MIN;
	volatile int32_t x160 = INT32_MAX;

	t33 = (x157-((x158<=x159)+x160));

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x163 = 715LLU;
	int16_t x164 = INT16_MIN;
	static int32_t t34 = 12312;

	t34 = (x161-((x162<=x163)+x164));

	if (t34 != 98303) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x169 = INT8_MIN;
	int64_t x170 = INT64_MIN;
	uint8_t x171 = 1U;
	volatile int64_t x172 = INT64_MIN;
	int64_t t35 = 160879LL;

	t35 = (x169-((x170<=x171)+x172));

	if (t35 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x173 = INT16_MAX;
	static int8_t x174 = INT8_MIN;
	static int8_t x176 = INT8_MIN;

	t36 = (x173-((x174<=x175)+x176));

	if (t36 != 32894) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x177 = INT64_MAX;
	uint64_t x178 = 195613813LLU;
	int8_t x179 = -1;
	uint16_t x180 = 248U;
	int64_t t37 = -675408209LL;

	t37 = (x177-((x178<=x179)+x180));

	if (t37 != 9223372036854775558LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x184 = INT16_MIN;

	t38 = (x181-((x182<=x183)+x184));

	if (t38 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x185 = 551462533672093LLU;
	volatile int16_t x186 = -4192;
	volatile int32_t x187 = -23;
	int8_t x188 = -1;
	volatile uint64_t t39 = 15285987969LLU;

	t39 = (x185-((x186<=x187)+x188));

	if (t39 != 551462533672093LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x189 = 5LL;
	uint32_t x190 = 86381209U;
	int8_t x191 = -2;
	uint32_t x192 = 169199727U;
	volatile int64_t t40 = -96238348LL;

	t40 = (x189-((x190<=x191)+x192));

	if (t40 != -169199723LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x193 = UINT64_MAX;
	int8_t x194 = INT8_MAX;
	static uint8_t x195 = UINT8_MAX;
	volatile int32_t x196 = -1;
	volatile uint64_t t41 = UINT64_MAX;

	t41 = (x193-((x194<=x195)+x196));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x198 = -1LL;
	uint32_t x200 = UINT32_MAX;
	volatile uint32_t t42 = UINT32_MAX;

	t42 = (x197-((x198<=x199)+x200));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x201 = 50LL;
	volatile int16_t x202 = -2;
	volatile int64_t x203 = INT64_MIN;
	int32_t x204 = -1;
	int64_t t43 = 3LL;

	t43 = (x201-((x202<=x203)+x204));

	if (t43 != 51LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x205 = -6;
	static uint8_t x206 = 1U;
	int64_t x207 = INT64_MIN;
	int16_t x208 = INT16_MIN;
	volatile int32_t t44 = 1;

	t44 = (x205-((x206<=x207)+x208));

	if (t44 != 32762) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x209 = 13624057678321LLU;
	int32_t x210 = INT32_MAX;
	uint16_t x212 = 425U;
	volatile uint64_t t45 = 480285866339LLU;

	t45 = (x209-((x210<=x211)+x212));

	if (t45 != 13624057677896LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x213 = 0;
	uint16_t x214 = UINT16_MAX;
	uint16_t x215 = 20U;
	static int32_t x216 = -1;
	volatile int32_t t46 = 62;

	t46 = (x213-((x214<=x215)+x216));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x219 = INT16_MAX;
	int32_t x220 = -1;
	static int32_t t47 = 227386;

	t47 = (x217-((x218<=x219)+x220));

	if (t47 != -4) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x221 = INT32_MIN;
	uint64_t x222 = UINT64_MAX;
	uint16_t x223 = UINT16_MAX;
	static volatile uint64_t t48 = 226LLU;

	t48 = (x221-((x222<=x223)+x224));

	if (t48 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x229 = INT8_MAX;
	int64_t x230 = -18410217689LL;
	int32_t x231 = INT32_MAX;

	t49 = (x229-((x230<=x231)+x232));

	if (t49 != 18445215307307821063LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x233 = UINT8_MAX;
	uint8_t x234 = 26U;
	volatile int8_t x235 = 0;
	static volatile int8_t x236 = 3;
	int32_t t50 = 50472618;

	t50 = (x233-((x234<=x235)+x236));

	if (t50 != 252) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x237 = 0;
	int8_t x239 = 0;
	int64_t t51 = -1828999LL;

	t51 = (x237-((x238<=x239)+x240));

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x241 = INT32_MIN;
	int64_t x242 = INT64_MIN;
	uint8_t x243 = 6U;
	uint64_t x244 = 1990899LLU;
	uint64_t t52 = 2091508LLU;

	t52 = (x241-((x242<=x243)+x244));

	if (t52 != 18446744071560077068LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x245 = -74;
	int64_t x246 = INT64_MIN;
	int8_t x247 = -4;
	int64_t x248 = INT64_MIN;
	int64_t t53 = 177LL;

	t53 = (x245-((x246<=x247)+x248));

	if (t53 != 9223372036854775733LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x249 = UINT16_MAX;
	int8_t x250 = -16;
	int8_t x252 = INT8_MIN;
	int32_t t54 = 5336;

	t54 = (x249-((x250<=x251)+x252));

	if (t54 != 65663) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x253 = 10368LLU;
	int32_t x254 = -1;
	uint64_t t55 = 834699541341220916LLU;

	t55 = (x253-((x254<=x255)+x256));

	if (t55 != 2147494015LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x257 = -1;
	int16_t x258 = -52;
	uint16_t x260 = UINT16_MAX;
	int32_t t56 = 190468460;

	t56 = (x257-((x258<=x259)+x260));

	if (t56 != -65537) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x261 = 0;
	volatile int16_t x262 = INT16_MAX;
	int64_t x263 = -139748432840131LL;
	static int16_t x264 = INT16_MIN;
	volatile int32_t t57 = 25865261;

	t57 = (x261-((x262<=x263)+x264));

	if (t57 != 32768) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x273 = -4090;
	int32_t x274 = -3;
	volatile uint64_t x275 = 716LLU;
	volatile int16_t x276 = 15;
	int32_t t58 = 0;

	t58 = (x273-((x274<=x275)+x276));

	if (t58 != -4105) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x278 = UINT16_MAX;
	int32_t x279 = INT32_MIN;
	int32_t x280 = -1599;
	static volatile uint32_t t59 = 29883966U;

	t59 = (x277-((x278<=x279)+x280));

	if (t59 != 8264U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x281 = UINT32_MAX;
	int16_t x282 = -1;
	int64_t x283 = INT64_MAX;
	uint16_t x284 = 1338U;
	volatile uint32_t t60 = 408832U;

	t60 = (x281-((x282<=x283)+x284));

	if (t60 != 4294965956U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x285 = -1;
	int32_t x286 = INT32_MIN;
	uint32_t x287 = UINT32_MAX;
	int8_t x288 = INT8_MIN;

	t61 = (x285-((x286<=x287)+x288));

	if (t61 != 126) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x289 = 12180U;
	static volatile uint8_t x290 = 43U;
	volatile int16_t x291 = INT16_MIN;
	static int16_t x292 = INT16_MIN;
	volatile int32_t t62 = 159;

	t62 = (x289-((x290<=x291)+x292));

	if (t62 != 44948) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x293 = INT64_MIN;
	uint32_t x294 = UINT32_MAX;
	int32_t x295 = -7;
	volatile uint64_t t63 = 1992014LLU;

	t63 = (x293-((x294<=x295)+x296));

	if (t63 != 9223371907155386534LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x297 = UINT64_MAX;
	int8_t x300 = -1;

	t64 = (x297-((x298<=x299)+x300));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x301 = -1;
	int32_t x303 = 6;
	volatile int32_t t65 = -259817852;

	t65 = (x301-((x302<=x303)+x304));

	if (t65 != -80) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x306 = INT32_MAX;
	int16_t x308 = 2022;
	uint32_t t66 = 1U;

	t66 = (x305-((x306<=x307)+x308));

	if (t66 != 4294965275U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x311 = -1;
	int32_t x312 = -27378;
	volatile int32_t t67 = -11533250;

	t67 = (x309-((x310<=x311)+x312));

	if (t67 != 27249) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x314 = -828333LL;
	int32_t x315 = -1;
	volatile int32_t x316 = -1;
	volatile int32_t t68 = 0;

	t68 = (x313-((x314<=x315)+x316));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x321 = 1400U;
	uint64_t x322 = 6121440438338LLU;
	int8_t x323 = INT8_MAX;
	volatile int16_t x324 = 1;

	t69 = (x321-((x322<=x323)+x324));

	if (t69 != 1399) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x325 = -1;
	uint8_t x326 = 3U;
	int64_t x327 = 50523702LL;
	int16_t x328 = INT16_MAX;
	volatile int32_t t70 = 354;

	t70 = (x325-((x326<=x327)+x328));

	if (t70 != -32769) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x329 = 3174U;
	int16_t x330 = INT16_MIN;
	int8_t x331 = INT8_MIN;
	int8_t x332 = 1;
	volatile int32_t t71 = 5793574;

	t71 = (x329-((x330<=x331)+x332));

	if (t71 != 3172) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x333 = UINT16_MAX;
	int8_t x334 = -8;
	int64_t x335 = -444669695LL;
	static uint8_t x336 = 119U;
	static volatile int32_t t72 = -1;

	t72 = (x333-((x334<=x335)+x336));

	if (t72 != 65416) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x337 = 17780496LL;
	volatile int8_t x338 = INT8_MIN;
	static volatile int32_t x339 = 3;
	uint32_t x340 = 115U;

	t73 = (x337-((x338<=x339)+x340));

	if (t73 != 17780380LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x345 = 98LLU;
	volatile uint16_t x347 = 1U;
	uint64_t t74 = 8610904220969752056LLU;

	t74 = (x345-((x346<=x347)+x348));

	if (t74 != 98LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x353 = 2033265369004LLU;
	int64_t x354 = INT64_MIN;
	int16_t x356 = -11588;

	t75 = (x353-((x354<=x355)+x356));

	if (t75 != 2033265380591LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x357 = -1;
	uint64_t x358 = 1185LLU;
	static volatile int16_t x359 = -1;
	volatile int64_t x360 = INT64_MIN;
	int64_t t76 = 6145869955386572LL;

	t76 = (x357-((x358<=x359)+x360));

	if (t76 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x361 = 2240402LLU;
	uint16_t x362 = 0U;
	volatile int8_t x364 = 0;
	uint64_t t77 = 343639407152LLU;

	t77 = (x361-((x362<=x363)+x364));

	if (t77 != 2240402LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x369 = -1LL;
	uint32_t x370 = 30167U;
	int64_t x371 = INT64_MIN;
	int64_t x372 = INT64_MAX;
	volatile int64_t t78 = INT64_MIN;

	t78 = (x369-((x370<=x371)+x372));

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x373 = UINT16_MAX;
	int64_t x375 = INT64_MIN;
	uint64_t x376 = 197LLU;
	volatile uint64_t t79 = 258797LLU;

	t79 = (x373-((x374<=x375)+x376));

	if (t79 != 65338LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x377 = 0U;
	int16_t x378 = -1;
	int64_t x379 = -1462408688194709440LL;
	int16_t x380 = -2581;
	int32_t t80 = -4;

	t80 = (x377-((x378<=x379)+x380));

	if (t80 != 2581) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x381 = -62;
	uint8_t x382 = UINT8_MAX;
	volatile uint64_t x383 = 49917131LLU;
	int8_t x384 = -1;
	static volatile int32_t t81 = -1102947;

	t81 = (x381-((x382<=x383)+x384));

	if (t81 != -62) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x385 = 142922927U;
	static int8_t x386 = INT8_MIN;
	int8_t x388 = -1;
	static uint32_t t82 = 14U;

	t82 = (x385-((x386<=x387)+x388));

	if (t82 != 142922927U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x389 = 19144U;
	volatile int32_t x390 = -115627;
	uint64_t x391 = 6904267LLU;
	uint32_t t83 = 12U;

	t83 = (x389-((x390<=x391)+x392));

	if (t83 != 4294920905U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x393 = 2LLU;
	uint64_t x394 = 2076631878755845LLU;
	uint64_t x395 = 98786812775039LLU;
	uint8_t x396 = 16U;
	uint64_t t84 = 192930159LLU;

	t84 = (x393-((x394<=x395)+x396));

	if (t84 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x397 = INT64_MIN;
	int32_t x398 = -1;
	uint8_t x399 = 54U;
	int64_t x400 = -1LL;
	int64_t t85 = INT64_MIN;

	t85 = (x397-((x398<=x399)+x400));

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x401 = 1291666975030LLU;
	int8_t x402 = 2;
	int16_t x403 = INT16_MAX;
	volatile uint32_t x404 = 3586848U;
	uint64_t t86 = 13LLU;

	t86 = (x401-((x402<=x403)+x404));

	if (t86 != 1291663388181LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x405 = INT64_MAX;
	int64_t x406 = INT64_MIN;
	uint16_t x407 = 199U;
	int64_t x408 = -1LL;
	int64_t t87 = INT64_MAX;

	t87 = (x405-((x406<=x407)+x408));

	if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x409 = -7030;
	uint8_t x410 = UINT8_MAX;
	uint32_t x411 = 2903U;
	int8_t x412 = INT8_MIN;
	int32_t t88 = 12946159;

	t88 = (x409-((x410<=x411)+x412));

	if (t88 != -6903) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x413 = -1;
	int8_t x414 = -1;
	int32_t x416 = INT32_MIN;
	int32_t t89 = INT32_MAX;

	t89 = (x413-((x414<=x415)+x416));

	if (t89 != INT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x417 = INT32_MIN;
	int8_t x418 = 1;
	volatile int64_t x420 = INT64_MIN;
	static volatile int64_t t90 = -172LL;

	t90 = (x417-((x418<=x419)+x420));

	if (t90 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x421 = -3;
	static int32_t x422 = 3;
	int32_t t91 = -53191;

	t91 = (x421-((x422<=x423)+x424));

	if (t91 != 32765) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x425 = 17U;
	static int16_t x426 = -1;
	volatile uint64_t x427 = 7105546552757465746LLU;
	int8_t x428 = -2;
	volatile int32_t t92 = -6;

	t92 = (x425-((x426<=x427)+x428));

	if (t92 != 19) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x429 = INT16_MIN;
	volatile int8_t x430 = INT8_MAX;
	int16_t x431 = INT16_MIN;
	volatile uint32_t x432 = 52U;

	t93 = (x429-((x430<=x431)+x432));

	if (t93 != 4294934476U) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x433 = 1U;
	static int64_t x434 = INT64_MIN;
	static volatile int8_t x435 = INT8_MAX;
	volatile int64_t t94 = 10306215LL;

	t94 = (x433-((x434<=x435)+x436));

	if (t94 != -2016188LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x437 = 3;
	int32_t x438 = -1282191;
	uint32_t x439 = 5U;
	int16_t x440 = -1;
	volatile int32_t t95 = 63;

	t95 = (x437-((x438<=x439)+x440));

	if (t95 != 4) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x442 = UINT32_MAX;
	int8_t x444 = 15;
	int32_t t96 = 0;

	t96 = (x441-((x442<=x443)+x444));

	if (t96 != 2147483632) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x445 = INT8_MAX;
	static volatile int32_t x446 = 773205064;
	int16_t x447 = 0;
	int32_t t97 = 1789;

	t97 = (x445-((x446<=x447)+x448));

	if (t97 != 428) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x451 = INT32_MIN;
	static volatile int64_t x452 = INT64_MIN;
	static int64_t t98 = 3912941LL;

	t98 = (x449-((x450<=x451)+x452));

	if (t98 != 9223372036854775789LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x453 = -1LL;
	static int64_t x454 = -1LL;
	static int16_t x455 = 1;
	int64_t t99 = -975590105763444845LL;

	t99 = (x453-((x454<=x455)+x456));

	if (t99 != -2LL) { NG(); } else { ; }
	
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

