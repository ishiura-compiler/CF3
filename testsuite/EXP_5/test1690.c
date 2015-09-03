#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = -6275052162LL;
volatile int64_t t1 = -140027707369LL;
int64_t x12 = INT64_MIN;
static int32_t x13 = INT32_MIN;
int64_t x16 = INT64_MIN;
int16_t x19 = -1;
int32_t x23 = -3321743;
volatile uint8_t x30 = UINT8_MAX;
uint64_t x36 = UINT64_MAX;
static uint64_t x37 = 352707468677LLU;
int16_t x47 = INT16_MAX;
int64_t x48 = -1LL;
int64_t t12 = 11LL;
static int16_t x53 = -1;
int8_t x55 = INT8_MIN;
static int64_t x58 = INT64_MIN;
volatile uint16_t x76 = 1U;
volatile int64_t t18 = 31155178654383LL;
static uint32_t x80 = UINT32_MAX;
volatile int32_t t22 = -508542;
static volatile uint64_t x98 = 34341311766247LLU;
int32_t t24 = 78020;
int32_t t25 = 2498882;
volatile uint8_t x111 = UINT8_MAX;
volatile uint32_t x113 = 302U;
int8_t x117 = INT8_MAX;
volatile int8_t x119 = INT8_MAX;
volatile int8_t x121 = INT8_MIN;
int64_t x124 = -1LL;
volatile int64_t t30 = 0LL;
uint64_t x125 = 34669601918635LLU;
int64_t x130 = 2000918767645657LL;
static volatile int32_t t33 = -27;
static int16_t x140 = INT16_MAX;
volatile int32_t t34 = -4;
int16_t x142 = INT16_MIN;
int16_t x144 = INT16_MAX;
int32_t t35 = -195875;
uint32_t x145 = UINT32_MAX;
volatile uint32_t t36 = 2U;
volatile int8_t x149 = INT8_MIN;
static int16_t x151 = INT16_MIN;
int32_t x152 = -1;
int64_t x153 = INT64_MIN;
volatile int32_t x155 = -42812431;
static int32_t x157 = -180844;
static uint64_t x159 = 3LLU;
int32_t t39 = -6;
static int8_t x161 = -1;
static int64_t x166 = INT64_MAX;
static int64_t t41 = -117578LL;
uint8_t x173 = 6U;
static int32_t x183 = 14019432;
int32_t x187 = INT32_MIN;
int64_t x188 = INT64_MIN;
uint32_t x189 = 138881276U;
static int64_t x194 = INT64_MIN;
uint32_t x200 = 21181U;
uint64_t x203 = 7505231283LLU;
static volatile uint64_t t50 = 784668310LLU;
int64_t x207 = -1LL;
int16_t x208 = -8;
static int32_t x209 = INT32_MAX;
int16_t x211 = 114;
static int8_t x224 = -1;
int64_t x225 = 154LL;
int16_t x226 = -1;
uint32_t x229 = UINT32_MAX;
int8_t x235 = INT8_MIN;
volatile int16_t x236 = INT16_MIN;
int16_t x237 = -1;
volatile int32_t x243 = -1744;
volatile int16_t x247 = INT16_MIN;
uint32_t x249 = 535621U;
volatile uint32_t t64 = 343U;
uint32_t x262 = UINT32_MAX;
uint64_t x273 = 64260LLU;
int16_t x275 = 51;
uint32_t x277 = UINT32_MAX;
int64_t x290 = 597702314962529LL;
int16_t x296 = -920;
uint16_t x304 = 1U;
int16_t x307 = -4060;
volatile int16_t x314 = INT16_MIN;
int8_t x316 = 1;
int32_t t79 = 1389795;
volatile uint16_t x326 = 1348U;
static volatile int64_t t81 = 1LL;
static int64_t x338 = 434LL;
uint32_t x345 = 1723351443U;
int64_t x346 = INT64_MIN;
static int64_t x350 = -111459116LL;
volatile int32_t t90 = 94;
volatile uint32_t x367 = 2776U;
int64_t x370 = -59699335LL;
uint32_t x375 = 949951353U;
uint8_t x386 = UINT8_MAX;
int64_t x389 = INT64_MAX;
uint32_t x390 = UINT32_MAX;
volatile int8_t x395 = INT8_MAX;


void f0(void) {
	uint8_t x1 = 2U;
	int8_t x2 = -1;
	int8_t x3 = INT8_MIN;
	int8_t x4 = -3;
	int32_t t0 = 15;

	t0 = (x1^((x2<=x3)^x4));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x6 = 944;
	int16_t x7 = INT16_MAX;
	volatile int16_t x8 = -1;

	t1 = (x5^((x6<=x7)^x8));

	if (t1 != 6275052160LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 9302;
	volatile int16_t x10 = -1;
	int16_t x11 = INT16_MIN;
	int64_t t2 = 3LL;

	t2 = (x9^((x10<=x11)^x12));

	if (t2 != -9223372036854766506LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = INT64_MIN;
	int32_t x15 = INT32_MIN;
	volatile int64_t t3 = 10343672883444463LL;

	t3 = (x13^((x14<=x15)^x16));

	if (t3 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MAX;
	volatile int64_t x18 = INT64_MAX;
	volatile int8_t x20 = INT8_MIN;
	static int64_t t4 = -36770LL;

	t4 = (x17^((x18<=x19)^x20));

	if (t4 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = -1;
	static int32_t x22 = -11;
	uint32_t x24 = 1196649U;
	uint32_t t5 = 55U;

	t5 = (x21^((x22<=x23)^x24));

	if (t5 != 4293770646U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -213;
	int32_t x26 = -35251;
	int16_t x27 = -28;
	int64_t x28 = INT64_MIN;
	int64_t t6 = -349692123411LL;

	t6 = (x25^((x26<=x27)^x28));

	if (t6 != 9223372036854775594LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	int16_t x31 = INT16_MAX;
	static int64_t x32 = INT64_MIN;
	volatile int64_t t7 = -103908466695LL;

	t7 = (x29^((x30<=x31)^x32));

	if (t7 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = INT64_MIN;
	int16_t x34 = INT16_MIN;
	int32_t x35 = INT32_MIN;
	uint64_t t8 = 15LLU;

	t8 = (x33^((x34<=x35)^x36));

	if (t8 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x38 = -1LL;
	int64_t x39 = INT64_MAX;
	int32_t x40 = INT32_MIN;
	volatile uint64_t t9 = 404525833359491355LLU;

	t9 = (x37^((x38<=x39)^x40));

	if (t9 != 18446743719894900100LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -11159;
	uint8_t x42 = 0U;
	int64_t x43 = INT64_MIN;
	int64_t x44 = -1LL;
	volatile int64_t t10 = -55910709LL;

	t10 = (x41^((x42<=x43)^x44));

	if (t10 != 11158LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = INT32_MAX;
	static volatile int32_t x46 = INT32_MAX;
	int64_t t11 = 4609878533867663LL;

	t11 = (x45^((x46<=x47)^x48));

	if (t11 != -2147483648LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x49 = 11U;
	volatile int32_t x50 = 229748;
	uint16_t x51 = 7894U;
	int64_t x52 = INT64_MIN;

	t12 = (x49^((x50<=x51)^x52));

	if (t12 != -9223372036854775797LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = -1;
	uint32_t x56 = 58U;
	uint32_t t13 = 18678U;

	t13 = (x53^((x54<=x55)^x56));

	if (t13 != 4294967237U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	uint16_t x59 = 15U;
	int8_t x60 = -1;
	volatile int32_t t14 = 407608;

	t14 = (x57^((x58<=x59)^x60));

	if (t14 != 2147483646) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = 60416754LL;
	int64_t x62 = INT64_MIN;
	int16_t x63 = INT16_MAX;
	uint16_t x64 = 3687U;
	static int64_t t15 = -5484230LL;

	t15 = (x61^((x62<=x63)^x64));

	if (t15 != 60419220LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -1LL;
	volatile int8_t x66 = INT8_MIN;
	uint16_t x67 = 299U;
	uint64_t x68 = 26642880706LLU;
	static volatile uint64_t t16 = 4551855748148LLU;

	t16 = (x65^((x66<=x67)^x68));

	if (t16 != 18446744047066670908LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x69 = 506U;
	volatile uint8_t x70 = 65U;
	uint32_t x71 = UINT32_MAX;
	volatile int32_t x72 = INT32_MIN;
	volatile int32_t t17 = -469001;

	t17 = (x69^((x70<=x71)^x72));

	if (t17 != -2147483141) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	uint8_t x74 = 26U;
	volatile int32_t x75 = INT32_MIN;

	t18 = (x73^((x74<=x75)^x76));

	if (t18 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	int16_t x78 = INT16_MIN;
	static volatile uint8_t x79 = 1U;
	volatile int64_t t19 = -71686994699784833LL;

	t19 = (x77^((x78<=x79)^x80));

	if (t19 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 139723346U;
	volatile int32_t x82 = 5044249;
	int32_t x83 = -81340950;
	uint16_t x84 = UINT16_MAX;
	uint32_t t20 = 32102821U;

	t20 = (x81^((x82<=x83)^x84));

	if (t20 != 139787693U) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x85 = -1LL;
	int8_t x86 = INT8_MIN;
	static int16_t x87 = -1;
	int16_t x88 = INT16_MIN;
	int64_t t21 = 1738LL;

	t21 = (x85^((x86<=x87)^x88));

	if (t21 != 32766LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -1;
	int32_t x90 = 18009;
	volatile int32_t x91 = INT32_MAX;
	int8_t x92 = INT8_MIN;

	t22 = (x89^((x90<=x91)^x92));

	if (t22 != 126) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x93 = 26U;
	uint8_t x94 = 2U;
	volatile int8_t x95 = -1;
	uint32_t x96 = 162U;
	static volatile uint32_t t23 = 2805466U;

	t23 = (x93^((x94<=x95)^x96));

	if (t23 != 184U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	uint32_t x99 = 213840U;
	static volatile int8_t x100 = INT8_MAX;

	t24 = (x97^((x98<=x99)^x100));

	if (t24 != -2147483521) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MAX;
	int64_t x102 = INT64_MIN;
	uint8_t x103 = 0U;
	int16_t x104 = -4;

	t25 = (x101^((x102<=x103)^x104));

	if (t25 != -126) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = UINT8_MAX;
	volatile int32_t x106 = -1;
	volatile int8_t x107 = 0;
	static int8_t x108 = INT8_MAX;
	volatile int32_t t26 = -15100702;

	t26 = (x105^((x106<=x107)^x108));

	if (t26 != 129) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -21;
	int8_t x110 = INT8_MIN;
	volatile int16_t x112 = INT16_MIN;
	static int32_t t27 = 588011559;

	t27 = (x109^((x110<=x111)^x112));

	if (t27 != 32746) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x114 = -1;
	int16_t x115 = INT16_MIN;
	uint16_t x116 = 65U;
	uint32_t t28 = 6234U;

	t28 = (x113^((x114<=x115)^x116));

	if (t28 != 367U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x118 = 1;
	int32_t x120 = INT32_MAX;
	int32_t t29 = 109294334;

	t29 = (x117^((x118<=x119)^x120));

	if (t29 != 2147483521) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x122 = 657636U;
	int16_t x123 = -48;

	t30 = (x121^((x122<=x123)^x124));

	if (t30 != 126LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x126 = INT64_MIN;
	volatile uint64_t x127 = 2824463366117LLU;
	int8_t x128 = INT8_MIN;
	volatile uint64_t t31 = 2738376342LLU;

	t31 = (x125^((x126<=x127)^x128));

	if (t31 != 18446709404107632939LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	uint32_t x131 = 225865718U;
	volatile int16_t x132 = -16231;
	int32_t t32 = 34618859;

	t32 = (x129^((x130<=x131)^x132));

	if (t32 != 16153) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	int8_t x134 = INT8_MIN;
	int8_t x135 = 8;
	static int32_t x136 = 120358371;

	t33 = (x133^((x134<=x135)^x136));

	if (t33 != -2027125278) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x137 = UINT8_MAX;
	int32_t x138 = -1;
	int16_t x139 = 14021;

	t34 = (x137^((x138<=x139)^x140));

	if (t34 != 32513) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 707U;
	int8_t x143 = INT8_MIN;

	t35 = (x141^((x142<=x143)^x144));

	if (t35 != 32061) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x146 = INT64_MAX;
	int64_t x147 = 42583837309LL;
	volatile uint8_t x148 = UINT8_MAX;

	t36 = (x145^((x146<=x147)^x148));

	if (t36 != 4294967040U) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x150 = 1752LLU;
	int32_t t37 = 5;

	t37 = (x149^((x150<=x151)^x152));

	if (t37 != 126) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x154 = INT8_MIN;
	int64_t x156 = INT64_MAX;
	static int64_t t38 = 209LL;

	t38 = (x153^((x154<=x155)^x156));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x158 = 336LL;
	static volatile int32_t x160 = -1;

	t39 = (x157^((x158<=x159)^x160));

	if (t39 != 180843) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x162 = INT16_MAX;
	int8_t x163 = INT8_MIN;
	int64_t x164 = -49LL;
	volatile int64_t t40 = -36LL;

	t40 = (x161^((x162<=x163)^x164));

	if (t40 != 48LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x165 = -78462LL;
	volatile int8_t x167 = -1;
	volatile int16_t x168 = -939;

	t41 = (x165^((x166<=x167)^x168));

	if (t41 != 78295LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	volatile int8_t x170 = 1;
	int64_t x171 = -168052617384754LL;
	volatile uint64_t x172 = 15753170236598LLU;
	uint64_t t42 = 468261258335765LLU;

	t42 = (x169^((x170<=x171)^x172));

	if (t42 != 9223387790025012406LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x174 = INT8_MAX;
	volatile int64_t x175 = INT64_MAX;
	uint32_t x176 = 1344346U;
	uint32_t t43 = 1054005U;

	t43 = (x173^((x174<=x175)^x176));

	if (t43 != 1344349U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MAX;
	volatile uint16_t x178 = UINT16_MAX;
	int16_t x179 = INT16_MIN;
	int64_t x180 = INT64_MIN;
	int64_t t44 = 10944LL;

	t44 = (x177^((x178<=x179)^x180));

	if (t44 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = -1;
	uint32_t x182 = UINT32_MAX;
	uint16_t x184 = 3U;
	static volatile int32_t t45 = -26283;

	t45 = (x181^((x182<=x183)^x184));

	if (t45 != -4) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	static int64_t x186 = -530868938LL;
	volatile int64_t t46 = -1LL;

	t46 = (x185^((x186<=x187)^x188));

	if (t46 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x190 = 16;
	volatile uint64_t x191 = 5359378LLU;
	uint32_t x192 = 2002U;
	uint32_t t47 = 34469594U;

	t47 = (x189^((x190<=x191)^x192));

	if (t47 != 138882863U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 0LLU;
	static uint16_t x195 = 34U;
	int8_t x196 = 0;
	static uint64_t t48 = 4515922368306LLU;

	t48 = (x193^((x194<=x195)^x196));

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x197 = -1;
	int8_t x198 = -1;
	static volatile int64_t x199 = -1LL;
	uint32_t t49 = 30288U;

	t49 = (x197^((x198<=x199)^x200));

	if (t49 != 4294946115U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = UINT64_MAX;
	int8_t x202 = -1;
	uint64_t x204 = 8420179LLU;

	t50 = (x201^((x202<=x203)^x204));

	if (t50 != 18446744073701131436LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = 58675052;
	volatile int8_t x206 = -1;
	static volatile int32_t t51 = 263631302;

	t51 = (x205^((x206<=x207)^x208));

	if (t51 != -58675051) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x210 = -2;
	int8_t x212 = INT8_MIN;
	volatile int32_t t52 = -15175;

	t52 = (x209^((x210<=x211)^x212));

	if (t52 != -2147483522) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint64_t x213 = 1024093549135LLU;
	volatile int32_t x214 = -25225;
	uint16_t x215 = 337U;
	volatile int16_t x216 = INT16_MIN;
	volatile uint64_t t53 = 818490710LLU;

	t53 = (x213^((x214<=x215)^x216));

	if (t53 != 18446743049616028238LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = -1;
	static int8_t x218 = 27;
	int32_t x219 = INT32_MIN;
	volatile int32_t x220 = -312367613;
	volatile int32_t t54 = -15956;

	t54 = (x217^((x218<=x219)^x220));

	if (t54 != 312367612) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = 798254LLU;
	static int8_t x222 = -3;
	uint64_t x223 = UINT64_MAX;
	uint64_t t55 = 87526681483352LLU;

	t55 = (x221^((x222<=x223)^x224));

	if (t55 != 18446744073708753360LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x227 = INT64_MIN;
	int64_t x228 = INT64_MIN;
	volatile int64_t t56 = 1872066721364769LL;

	t56 = (x225^((x226<=x227)^x228));

	if (t56 != -9223372036854775654LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x230 = 7270279;
	static uint8_t x231 = 0U;
	int64_t x232 = -1LL;
	int64_t t57 = 169669908114514LL;

	t57 = (x229^((x230<=x231)^x232));

	if (t57 != -4294967296LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = -36487;
	volatile uint32_t x234 = 3U;
	static volatile int32_t t58 = -5462;

	t58 = (x233^((x234<=x235)^x236));

	if (t58 != 61816) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x238 = -4089735LL;
	int16_t x239 = INT16_MAX;
	volatile int8_t x240 = 0;
	int32_t t59 = -9118;

	t59 = (x237^((x238<=x239)^x240));

	if (t59 != -2) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x241 = 4548371176LLU;
	int32_t x242 = INT32_MIN;
	int8_t x244 = -1;
	volatile uint64_t t60 = 399675220442902LLU;

	t60 = (x241^((x242<=x243)^x244));

	if (t60 != 18446744069161180438LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MAX;
	static volatile uint64_t x246 = 6LLU;
	uint16_t x248 = UINT16_MAX;
	volatile int32_t t61 = 256881815;

	t61 = (x245^((x246<=x247)^x248));

	if (t61 != 65409) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x250 = -146947024711292056LL;
	int8_t x251 = INT8_MIN;
	uint8_t x252 = 0U;
	volatile uint32_t t62 = 889319U;

	t62 = (x249^((x250<=x251)^x252));

	if (t62 != 535620U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = 1092U;
	uint64_t x254 = 83090587LLU;
	volatile uint16_t x255 = 31U;
	int32_t x256 = -1;
	volatile uint32_t t63 = 624657U;

	t63 = (x253^((x254<=x255)^x256));

	if (t63 != 4294966203U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = UINT32_MAX;
	volatile int64_t x258 = -785550LL;
	uint16_t x259 = UINT16_MAX;
	static int16_t x260 = INT16_MIN;

	t64 = (x257^((x258<=x259)^x260));

	if (t64 != 32766U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = -4;
	int16_t x263 = INT16_MIN;
	int8_t x264 = INT8_MAX;
	int32_t t65 = 6;

	t65 = (x261^((x262<=x263)^x264));

	if (t65 != -125) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MIN;
	int64_t x266 = INT64_MIN;
	uint16_t x267 = 4U;
	int32_t x268 = -1;
	volatile int32_t t66 = 11752;

	t66 = (x265^((x266<=x267)^x268));

	if (t66 != 32766) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x269 = INT32_MAX;
	volatile int16_t x270 = INT16_MIN;
	int16_t x271 = -1;
	uint8_t x272 = 2U;
	volatile int32_t t67 = 42317;

	t67 = (x269^((x270<=x271)^x272));

	if (t67 != 2147483644) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x274 = INT8_MAX;
	static int16_t x276 = 0;
	uint64_t t68 = 2148969965677LLU;

	t68 = (x273^((x274<=x275)^x276));

	if (t68 != 64260LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x278 = 13;
	int32_t x279 = -1;
	int32_t x280 = INT32_MAX;
	volatile uint32_t t69 = 1185005U;

	t69 = (x277^((x278<=x279)^x280));

	if (t69 != 2147483648U) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = UINT32_MAX;
	static uint8_t x282 = UINT8_MAX;
	volatile int16_t x283 = -12;
	static int16_t x284 = INT16_MIN;
	volatile uint32_t t70 = 24284U;

	t70 = (x281^((x282<=x283)^x284));

	if (t70 != 32767U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x285 = -1;
	volatile uint64_t x286 = 166911LLU;
	int16_t x287 = 1;
	volatile int64_t x288 = 209632055080LL;
	volatile int64_t t71 = 5331883028654LL;

	t71 = (x285^((x286<=x287)^x288));

	if (t71 != -209632055081LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MAX;
	static int8_t x291 = INT8_MIN;
	int64_t x292 = -1LL;
	volatile int64_t t72 = 3672875051673834LL;

	t72 = (x289^((x290<=x291)^x292));

	if (t72 != -128LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MAX;
	int16_t x294 = -1;
	int64_t x295 = -408220LL;
	int32_t t73 = 0;

	t73 = (x293^((x294<=x295)^x296));

	if (t73 != -31849) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x297 = UINT32_MAX;
	volatile int8_t x298 = INT8_MIN;
	volatile int32_t x299 = INT32_MIN;
	static uint16_t x300 = UINT16_MAX;
	static uint32_t t74 = 1020U;

	t74 = (x297^((x298<=x299)^x300));

	if (t74 != 4294901760U) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x301 = -1LL;
	int16_t x302 = 1;
	volatile uint16_t x303 = 112U;
	volatile int64_t t75 = -1057098995LL;

	t75 = (x301^((x302<=x303)^x304));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x305 = INT64_MIN;
	uint16_t x306 = 4U;
	int8_t x308 = INT8_MAX;
	int64_t t76 = -243370LL;

	t76 = (x305^((x306<=x307)^x308));

	if (t76 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x309 = INT16_MAX;
	static int16_t x310 = -1;
	uint32_t x311 = 694U;
	static uint64_t x312 = UINT64_MAX;
	static uint64_t t77 = 1472657680041LLU;

	t77 = (x309^((x310<=x311)^x312));

	if (t77 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x313 = 1U;
	static uint32_t x315 = 432U;
	int32_t t78 = -3645304;

	t78 = (x313^((x314<=x315)^x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x317 = 155;
	int64_t x318 = 46973738105LL;
	uint8_t x319 = 5U;
	uint8_t x320 = UINT8_MAX;

	t79 = (x317^((x318<=x319)^x320));

	if (t79 != 100) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x321 = 1156;
	uint64_t x322 = UINT64_MAX;
	int64_t x323 = 4277267673156681LL;
	int64_t x324 = INT64_MAX;
	int64_t t80 = -27510454949492LL;

	t80 = (x321^((x322<=x323)^x324));

	if (t80 != 9223372036854774651LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = -1;
	uint64_t x327 = 185422421495932LLU;
	int64_t x328 = INT64_MAX;

	t81 = (x325^((x326<=x327)^x328));

	if (t81 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = 1;
	volatile int8_t x330 = 2;
	int8_t x331 = 0;
	static volatile int8_t x332 = 11;
	volatile int32_t t82 = 514830;

	t82 = (x329^((x330<=x331)^x332));

	if (t82 != 10) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = 52LL;
	volatile uint32_t x334 = 24466448U;
	volatile uint16_t x335 = UINT16_MAX;
	static int32_t x336 = INT32_MAX;
	volatile int64_t t83 = 847657263071LL;

	t83 = (x333^((x334<=x335)^x336));

	if (t83 != 2147483595LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint8_t x337 = UINT8_MAX;
	uint16_t x339 = 19236U;
	volatile int8_t x340 = INT8_MIN;
	static volatile int32_t t84 = -7;

	t84 = (x337^((x338<=x339)^x340));

	if (t84 != -130) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = 241LLU;
	int64_t x342 = INT64_MIN;
	int8_t x343 = 1;
	static int16_t x344 = 13;
	uint64_t t85 = 122826908LLU;

	t85 = (x341^((x342<=x343)^x344));

	if (t85 != 253LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x347 = UINT16_MAX;
	uint32_t x348 = 8358U;
	volatile uint32_t t86 = 64682U;

	t86 = (x345^((x346<=x347)^x348));

	if (t86 != 1723359540U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = -34;
	static int64_t x351 = -1LL;
	uint32_t x352 = UINT32_MAX;
	volatile uint32_t t87 = 4030577U;

	t87 = (x349^((x350<=x351)^x352));

	if (t87 != 32U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x353 = -1;
	uint16_t x354 = 56U;
	int16_t x355 = INT16_MIN;
	static int32_t x356 = -6;
	int32_t t88 = 22;

	t88 = (x353^((x354<=x355)^x356));

	if (t88 != 5) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MAX;
	static volatile int64_t x358 = INT64_MAX;
	int8_t x359 = 12;
	static uint8_t x360 = 1U;
	int32_t t89 = 55243;

	t89 = (x357^((x358<=x359)^x360));

	if (t89 != 32766) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = UINT8_MAX;
	uint16_t x362 = 20054U;
	int64_t x363 = -126284LL;
	int8_t x364 = -1;

	t90 = (x361^((x362<=x363)^x364));

	if (t90 != -256) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MIN;
	uint8_t x366 = 33U;
	int16_t x368 = 846;
	volatile int64_t t91 = 5403242307938LL;

	t91 = (x365^((x366<=x367)^x368));

	if (t91 != -9223372036854774961LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x369 = -1;
	uint16_t x371 = 2743U;
	uint8_t x372 = UINT8_MAX;
	int32_t t92 = -11219;

	t92 = (x369^((x370<=x371)^x372));

	if (t92 != -255) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = 2272U;
	static int32_t x374 = 9320447;
	int8_t x376 = INT8_MAX;
	static int32_t t93 = -290;

	t93 = (x373^((x374<=x375)^x376));

	if (t93 != 2206) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	int32_t x378 = 60822890;
	static int8_t x379 = -1;
	int32_t x380 = -1601817;
	volatile int32_t t94 = 42;

	t94 = (x377^((x378<=x379)^x380));

	if (t94 != 1576679) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = 5804LLU;
	uint8_t x382 = 7U;
	uint16_t x383 = UINT16_MAX;
	int32_t x384 = 8;
	volatile uint64_t t95 = 1072716583857LLU;

	t95 = (x381^((x382<=x383)^x384));

	if (t95 != 5797LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x385 = INT32_MAX;
	uint64_t x387 = UINT64_MAX;
	volatile int8_t x388 = -1;
	int32_t t96 = -77759;

	t96 = (x385^((x386<=x387)^x388));

	if (t96 != -2147483647) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x391 = INT16_MIN;
	int8_t x392 = 6;
	int64_t t97 = 1083651426558717LL;

	t97 = (x389^((x390<=x391)^x392));

	if (t97 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = 1U;
	volatile uint64_t x394 = UINT64_MAX;
	int64_t x396 = -1LL;
	static volatile int64_t t98 = -897205027LL;

	t98 = (x393^((x394<=x395)^x396));

	if (t98 != -2LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MAX;
	volatile int16_t x398 = INT16_MIN;
	int64_t x399 = INT64_MAX;
	uint8_t x400 = 0U;
	int64_t t99 = 2583466368LL;

	t99 = (x397^((x398<=x399)^x400));

	if (t99 != 9223372036854775806LL) { NG(); } else { ; }
	
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

