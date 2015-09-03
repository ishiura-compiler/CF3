#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x7 = INT16_MIN;
volatile uint16_t x10 = UINT16_MAX;
int32_t x11 = INT32_MIN;
uint64_t x12 = 3945346686927LLU;
static volatile uint64_t x16 = UINT64_MAX;
static uint8_t x19 = 32U;
uint64_t t5 = 1578488927LLU;
static int8_t x28 = INT8_MAX;
uint64_t t6 = 927430014608LLU;
static int64_t x45 = -63127550052LL;
int32_t x50 = INT32_MAX;
uint64_t x54 = 5227163696LLU;
int8_t x59 = -1;
static volatile int64_t t15 = -143792004723LL;
static volatile int32_t x77 = INT32_MAX;
volatile int64_t t17 = -7944322399LL;
volatile uint32_t t18 = UINT32_MAX;
int32_t x92 = INT32_MAX;
volatile int8_t x94 = 1;
uint64_t t21 = 104674638028LLU;
uint16_t x97 = UINT16_MAX;
uint32_t x98 = UINT32_MAX;
uint8_t x100 = 26U;
int16_t x105 = 14;
uint64_t t24 = 108LLU;
static uint32_t x122 = 324U;
volatile int64_t x123 = INT64_MAX;
int64_t x125 = -3262LL;
int64_t t29 = 225629866869090139LL;
static uint64_t t31 = 742LLU;
int32_t x142 = INT32_MIN;
volatile uint64_t x147 = 13410290291461846LLU;
uint64_t t34 = 31903282805370LLU;
uint16_t x152 = 7U;
static volatile uint64_t t35 = 0LLU;
static int64_t x158 = INT64_MIN;
volatile int8_t x168 = INT8_MIN;
int16_t x172 = INT16_MAX;
static int16_t x173 = INT16_MIN;
volatile int64_t x179 = -1LL;
static uint32_t x181 = 1485961106U;
int32_t x183 = INT32_MAX;
volatile int64_t t44 = 302802073932824385LL;
uint64_t x191 = 1107LLU;
volatile uint64_t t45 = 9418244250LLU;
uint32_t x195 = 8365289U;
int32_t x196 = 2;
volatile uint32_t t46 = 101U;
volatile uint16_t x199 = 9U;
uint64_t t47 = 176675LLU;
int32_t x202 = -6344381;
volatile int8_t x206 = 0;
static int16_t x216 = INT16_MIN;
int8_t x223 = 5;
uint32_t t53 = 135441007U;
uint8_t x225 = 7U;
static int64_t x228 = -1LL;
static int32_t x234 = INT32_MIN;
int32_t x239 = INT32_MIN;
uint32_t x242 = 276U;
int8_t x247 = 0;
int32_t t59 = 3;
static int32_t x255 = INT32_MIN;
uint64_t x272 = 1LLU;
static uint64_t t65 = 102LLU;
volatile int64_t x279 = -1LL;
uint64_t t69 = 4168697599LLU;
static uint64_t t70 = 8129896049LLU;
int8_t x300 = INT8_MAX;
uint32_t x307 = UINT32_MAX;
static volatile uint32_t x312 = UINT32_MAX;
uint32_t x313 = UINT32_MAX;
static uint16_t x318 = 72U;
uint64_t x319 = 3759709177LLU;
uint64_t t77 = 2654LLU;
uint32_t x322 = 303U;
volatile int64_t t78 = -57986336449113020LL;
uint64_t t79 = 191431867LLU;
static uint8_t x332 = 66U;
volatile int64_t x334 = INT64_MAX;
static uint64_t t81 = UINT64_MAX;
int16_t x349 = INT16_MIN;
int32_t x356 = 145085230;
int16_t x357 = INT16_MAX;
int32_t x365 = INT32_MIN;
int32_t x368 = -1;
volatile uint64_t t90 = 3905778806304653377LLU;
int64_t t91 = 8078582507LL;
volatile uint16_t x377 = UINT16_MAX;
uint64_t x390 = 144009LLU;
int16_t x392 = -1;
uint32_t x393 = 85870U;
int32_t x402 = INT32_MIN;


void f0(void) {
	int64_t x1 = 23LL;
	static uint32_t x2 = UINT32_MAX;
	uint32_t x3 = 678U;
	int32_t x4 = INT32_MAX;
	static int64_t t0 = -449998886490LL;

	t0 = (x1^((x2|x3)/x4));

	if (t0 != 21LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MIN;
	uint64_t x6 = 74LLU;
	int8_t x8 = INT8_MAX;
	uint64_t t1 = 210965863679322LLU;

	t1 = (x5^((x6|x7)/x8));

	if (t1 != 18301494119307968512LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = INT64_MAX;
	static volatile uint64_t t2 = 9LLU;

	t2 = (x9^((x10|x11)/x12));

	if (t2 != 9223372036850100238LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 123488387U;
	int16_t x14 = 27;
	int8_t x15 = INT8_MIN;
	uint64_t t3 = 18631225998LLU;

	t3 = (x13^((x14|x15)/x16));

	if (t3 != 123488387LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 11U;
	uint64_t x18 = 7365244945LLU;
	volatile int32_t x20 = INT32_MAX;
	volatile uint64_t t4 = 1440035855431322LLU;

	t4 = (x17^((x18|x19)/x20));

	if (t4 != 8LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = UINT32_MAX;
	uint64_t x22 = UINT64_MAX;
	int16_t x23 = 395;
	static int16_t x24 = 89;

	t5 = (x21^((x22|x23)/x24));

	if (t5 != 207266787296793082LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1864;
	uint64_t x26 = 42LLU;
	volatile uint64_t x27 = 211633LLU;

	t6 = (x25^((x26|x27)/x28));

	if (t6 != 18446744073709551162LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	int64_t x30 = -1LL;
	int64_t x31 = -1LL;
	uint32_t x32 = UINT32_MAX;
	int64_t t7 = 1LL;

	t7 = (x29^((x30|x31)/x32));

	if (t7 != -128LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x37 = INT32_MIN;
	int16_t x38 = INT16_MIN;
	uint8_t x39 = 112U;
	int8_t x40 = INT8_MIN;
	static volatile int32_t t8 = 13387;

	t8 = (x37^((x38|x39)/x40));

	if (t8 != -2147483393) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = INT64_MIN;
	int8_t x42 = -1;
	static uint32_t x43 = 2370U;
	int64_t x44 = INT64_MIN;
	volatile int64_t t9 = INT64_MIN;

	t9 = (x41^((x42|x43)/x44));

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x46 = 156629386221856029LLU;
	uint32_t x47 = 129735224U;
	volatile int8_t x48 = -1;
	static volatile uint64_t t10 = 36694LLU;

	t10 = (x45^((x46|x47)/x48));

	if (t10 != 18446744010582001564LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = -1;
	uint64_t x51 = UINT64_MAX;
	uint8_t x52 = 8U;
	volatile uint64_t t11 = 15176421637LLU;

	t11 = (x49^((x50|x51)/x52));

	if (t11 != 16140901064495857664LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = -1;
	volatile uint32_t x55 = UINT32_MAX;
	uint32_t x56 = UINT32_MAX;
	uint64_t t12 = 9LLU;

	t12 = (x53^((x54|x55)/x56));

	if (t12 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x57 = UINT32_MAX;
	static int32_t x58 = INT32_MIN;
	uint64_t x60 = UINT64_MAX;
	uint64_t t13 = 29672023090LLU;

	t13 = (x57^((x58|x59)/x60));

	if (t13 != 4294967294LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = INT8_MIN;
	uint32_t x62 = 13U;
	uint8_t x63 = UINT8_MAX;
	static uint16_t x64 = 1217U;
	uint32_t t14 = 26U;

	t14 = (x61^((x62|x63)/x64));

	if (t14 != 4294967168U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MAX;
	static volatile int16_t x66 = -1;
	int64_t x67 = 255440370LL;
	static int64_t x68 = INT64_MIN;

	t15 = (x65^((x66|x67)/x68));

	if (t15 != 32767LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x73 = INT64_MAX;
	static uint16_t x74 = 4470U;
	volatile int16_t x75 = -13207;
	uint32_t x76 = 30526U;
	volatile int64_t t16 = -114455008LL;

	t16 = (x73^((x74|x75)/x76));

	if (t16 != 9223372036854635109LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x78 = -1LL;
	uint16_t x79 = 2190U;
	int8_t x80 = INT8_MAX;

	t17 = (x77^((x78|x79)/x80));

	if (t17 != 2147483647LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x81 = UINT32_MAX;
	int16_t x82 = 1;
	static uint32_t x83 = 386U;
	uint32_t x84 = 287837357U;

	t18 = (x81^((x82|x83)/x84));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = INT8_MIN;
	static volatile uint32_t x86 = 1785U;
	static int16_t x87 = INT16_MIN;
	uint64_t x88 = UINT64_MAX;
	uint64_t t19 = 6658LLU;

	t19 = (x85^((x86|x87)/x88));

	if (t19 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x89 = -1195;
	volatile int64_t x90 = 41607139LL;
	int8_t x91 = INT8_MIN;
	static volatile int64_t t20 = -4464842890532639077LL;

	t20 = (x89^((x90|x91)/x92));

	if (t20 != -1195LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x93 = 0U;
	volatile uint64_t x95 = 50363166959930650LLU;
	volatile int64_t x96 = INT64_MIN;

	t21 = (x93^((x94|x95)/x96));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x99 = -1;
	volatile uint32_t t22 = 363503247U;

	t22 = (x97^((x98|x99)/x100));

	if (t22 != 165175926U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x101 = INT32_MIN;
	int8_t x102 = -4;
	static uint8_t x103 = 1U;
	static uint8_t x104 = 24U;
	volatile int32_t t23 = INT32_MIN;

	t23 = (x101^((x102|x103)/x104));

	if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint16_t x106 = 843U;
	static uint64_t x107 = 23404280LLU;
	int64_t x108 = 23375095083LL;

	t24 = (x105^((x106|x107)/x108));

	if (t24 != 14LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = 28;
	uint64_t x110 = 418890620947894LLU;
	int32_t x111 = 1;
	uint32_t x112 = 2063U;
	volatile uint64_t t25 = 4054527LLU;

	t25 = (x109^((x110|x111)/x112));

	if (t25 != 203049258841LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x113 = UINT32_MAX;
	int16_t x114 = 200;
	uint8_t x115 = 0U;
	static int32_t x116 = INT32_MAX;
	uint32_t t26 = UINT32_MAX;

	t26 = (x113^((x114|x115)/x116));

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x117 = 10U;
	uint64_t x118 = UINT64_MAX;
	int16_t x119 = -1;
	int8_t x120 = INT8_MIN;
	uint64_t t27 = 4730609700998675226LLU;

	t27 = (x117^((x118|x119)/x120));

	if (t27 != 11LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x121 = INT8_MAX;
	int32_t x124 = -1;
	int64_t t28 = -7109211855LL;

	t28 = (x121^((x122|x123)/x124));

	if (t28 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x126 = INT32_MIN;
	uint32_t x127 = UINT32_MAX;
	int8_t x128 = -1;

	t29 = (x125^((x126|x127)/x128));

	if (t29 != -3261LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = INT64_MAX;
	static int64_t x130 = INT64_MIN;
	static volatile int8_t x131 = 5;
	static volatile uint32_t x132 = 58U;
	volatile int64_t t30 = 63LL;

	t30 = (x129^((x130|x131)/x132));

	if (t30 != -9064348381046934847LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = INT8_MIN;
	int64_t x134 = -1LL;
	static uint64_t x135 = UINT64_MAX;
	uint64_t x136 = 201LLU;

	t31 = (x133^((x134|x135)/x136));

	if (t31 != 18354969227571693089LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x137 = -218;
	static int16_t x138 = 2;
	int64_t x139 = INT64_MAX;
	int32_t x140 = INT32_MAX;
	volatile int64_t t32 = -10054LL;

	t32 = (x137^((x138|x139)/x140));

	if (t32 != -4294967516LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x141 = 0;
	int16_t x143 = -1;
	static volatile int8_t x144 = -1;
	volatile int32_t t33 = 110756001;

	t33 = (x141^((x142|x143)/x144));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x145 = -1;
	uint8_t x146 = 12U;
	static uint16_t x148 = UINT16_MAX;

	t34 = (x145^((x146|x147)/x148));

	if (t34 != 18446743869081638417LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x149 = 5332023LLU;
	int64_t x150 = INT64_MIN;
	static uint64_t x151 = 60318LLU;

	t35 = (x149^((x150|x151)/x152));

	if (t35 != 1317624576698871749LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x153 = 6619U;
	uint32_t x154 = 7051611U;
	int32_t x155 = INT32_MIN;
	int64_t x156 = INT64_MIN;
	static volatile int64_t t36 = -336LL;

	t36 = (x153^((x154|x155)/x156));

	if (t36 != 6619LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = 1;
	int64_t x159 = INT64_MAX;
	uint32_t x160 = 9U;
	int64_t t37 = 35055LL;

	t37 = (x157^((x158|x159)/x160));

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x161 = UINT8_MAX;
	int16_t x162 = INT16_MIN;
	int8_t x163 = INT8_MAX;
	int32_t x164 = -1;
	volatile int32_t t38 = 831;

	t38 = (x161^((x162|x163)/x164));

	if (t38 != 32638) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x165 = INT16_MAX;
	volatile int8_t x166 = -1;
	int8_t x167 = 15;
	static int32_t t39 = 1008300;

	t39 = (x165^((x166|x167)/x168));

	if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x169 = INT64_MAX;
	volatile uint16_t x170 = UINT16_MAX;
	volatile int32_t x171 = -1;
	int64_t t40 = INT64_MAX;

	t40 = (x169^((x170|x171)/x172));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x174 = INT32_MIN;
	int16_t x175 = -1;
	volatile int64_t x176 = 966928161964582LL;
	static int64_t t41 = 31665843LL;

	t41 = (x173^((x174|x175)/x176));

	if (t41 != -32768LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x177 = UINT16_MAX;
	static int8_t x178 = INT8_MIN;
	uint32_t x180 = UINT32_MAX;
	static int64_t t42 = -16LL;

	t42 = (x177^((x178|x179)/x180));

	if (t42 != 65535LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x182 = INT16_MAX;
	int16_t x184 = INT16_MIN;
	static uint32_t t43 = 2598U;

	t43 = (x181^((x182|x183)/x184));

	if (t43 != 2809067411U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x185 = -2071990837112551LL;
	volatile int64_t x186 = INT64_MAX;
	volatile uint8_t x187 = UINT8_MAX;
	static volatile int64_t x188 = INT64_MIN;

	t44 = (x185^((x186|x187)/x188));

	if (t44 != -2071990837112551LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x189 = 7378618063LLU;
	uint8_t x190 = UINT8_MAX;
	uint16_t x192 = UINT16_MAX;

	t45 = (x189^((x190|x191)/x192));

	if (t45 != 7378618063LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x193 = 33U;
	int32_t x194 = -1;

	t46 = (x193^((x194|x195)/x196));

	if (t46 != 2147483614U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x197 = UINT32_MAX;
	uint64_t x198 = 625634703523LLU;
	int8_t x200 = -1;

	t47 = (x197^((x198|x199)/x200));

	if (t47 != 4294967295LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x201 = 37U;
	uint16_t x203 = 2U;
	int8_t x204 = INT8_MIN;
	volatile int32_t t48 = 10715;

	t48 = (x201^((x202|x203)/x204));

	if (t48 != 49592) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x205 = -1;
	static int32_t x207 = INT32_MIN;
	int16_t x208 = INT16_MIN;
	int32_t t49 = -24;

	t49 = (x205^((x206|x207)/x208));

	if (t49 != -65537) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x209 = -1;
	static volatile int8_t x210 = 0;
	static volatile int16_t x211 = -1332;
	int16_t x212 = -464;
	volatile int32_t t50 = 3;

	t50 = (x209^((x210|x211)/x212));

	if (t50 != -3) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x213 = INT8_MAX;
	int8_t x214 = INT8_MIN;
	int64_t x215 = -1LL;
	static volatile int64_t t51 = 11759258288LL;

	t51 = (x213^((x214|x215)/x216));

	if (t51 != 127LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x217 = -1;
	int32_t x218 = 249604458;
	int64_t x219 = INT64_MIN;
	int8_t x220 = INT8_MIN;
	volatile int64_t t52 = 2289805381453LL;

	t52 = (x217^((x218|x219)/x220));

	if (t52 != -72057594035977902LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x221 = INT8_MIN;
	static int8_t x222 = 14;
	uint32_t x224 = UINT32_MAX;

	t53 = (x221^((x222|x223)/x224));

	if (t53 != 4294967168U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x226 = 43LLU;
	int16_t x227 = INT16_MAX;
	uint64_t t54 = 13126502527LLU;

	t54 = (x225^((x226|x227)/x228));

	if (t54 != 7LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x229 = 0;
	uint16_t x230 = 305U;
	uint32_t x231 = UINT32_MAX;
	uint8_t x232 = UINT8_MAX;
	volatile uint32_t t55 = 0U;

	t55 = (x229^((x230|x231)/x232));

	if (t55 != 16843009U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x233 = INT8_MAX;
	static int32_t x235 = INT32_MIN;
	uint32_t x236 = 986416228U;
	uint32_t t56 = 1446494U;

	t56 = (x233^((x234|x235)/x236));

	if (t56 != 125U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x237 = INT32_MIN;
	int32_t x238 = INT32_MIN;
	int8_t x240 = INT8_MIN;
	int32_t t57 = -1672;

	t57 = (x237^((x238|x239)/x240));

	if (t57 != -2130706432) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x241 = -1;
	int8_t x243 = -53;
	int8_t x244 = -1;
	uint32_t t58 = UINT32_MAX;

	t58 = (x241^((x242|x243)/x244));

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x245 = 1732;
	volatile int32_t x246 = INT32_MAX;
	volatile int8_t x248 = -1;

	t59 = (x245^((x246|x247)/x248));

	if (t59 != -2147481915) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x249 = INT64_MAX;
	uint16_t x250 = 211U;
	uint32_t x251 = UINT32_MAX;
	int32_t x252 = INT32_MAX;
	volatile int64_t t60 = 446LL;

	t60 = (x249^((x250|x251)/x252));

	if (t60 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int64_t x253 = -1LL;
	int32_t x254 = INT32_MAX;
	static int32_t x256 = INT32_MAX;
	int64_t t61 = -98761772388430670LL;

	t61 = (x253^((x254|x255)/x256));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x257 = 1008336470420586845LL;
	int8_t x258 = INT8_MIN;
	uint16_t x259 = 1932U;
	int16_t x260 = INT16_MAX;
	int64_t t62 = -1620LL;

	t62 = (x257^((x258|x259)/x260));

	if (t62 != 1008336470420586845LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x261 = INT32_MIN;
	static int32_t x262 = INT32_MIN;
	uint32_t x263 = 0U;
	int16_t x264 = -75;
	volatile uint32_t t63 = 122324U;

	t63 = (x261^((x262|x263)/x264));

	if (t63 != 2147483648U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x265 = 6283059278467294LLU;
	static int8_t x266 = INT8_MIN;
	static int64_t x267 = INT64_MIN;
	uint8_t x268 = UINT8_MAX;
	uint64_t t64 = 1LLU;

	t64 = (x265^((x266|x267)/x268));

	if (t64 != 6283059278467294LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x269 = -1;
	uint8_t x270 = 3U;
	int8_t x271 = 3;

	t65 = (x269^((x270|x271)/x272));

	if (t65 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x273 = INT32_MIN;
	uint16_t x274 = 2U;
	volatile int8_t x275 = 2;
	int16_t x276 = INT16_MIN;
	int32_t t66 = INT32_MIN;

	t66 = (x273^((x274|x275)/x276));

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x277 = -1;
	int64_t x278 = INT64_MIN;
	uint64_t x280 = 46161185057664902LLU;
	uint64_t t67 = 3396633781LLU;

	t67 = (x277^((x278|x279)/x280));

	if (t67 != 18446744073709551216LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x281 = -2;
	uint64_t x282 = 14773761613948LLU;
	static volatile int8_t x283 = INT8_MAX;
	int16_t x284 = 86;
	volatile uint64_t t68 = 752LLU;

	t68 = (x281^((x282|x283)/x284));

	if (t68 != 18446743901921625873LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x285 = 2286U;
	int8_t x286 = -1;
	volatile int64_t x287 = INT64_MIN;
	volatile uint64_t x288 = 3009730LLU;

	t69 = (x285^((x286|x287)/x288));

	if (t69 != 6129036181926LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x289 = 10U;
	int16_t x290 = INT16_MIN;
	volatile uint64_t x291 = UINT64_MAX;
	static int32_t x292 = INT32_MAX;

	t70 = (x289^((x290|x291)/x292));

	if (t70 != 8589934606LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x293 = INT16_MIN;
	volatile int16_t x294 = INT16_MIN;
	int64_t x295 = INT64_MAX;
	uint32_t x296 = 11371U;
	static volatile int64_t t71 = -796950LL;

	t71 = (x293^((x294|x295)/x296));

	if (t71 != -32768LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x297 = INT32_MIN;
	static int16_t x298 = -1;
	uint8_t x299 = 1U;
	volatile int32_t t72 = INT32_MIN;

	t72 = (x297^((x298|x299)/x300));

	if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x301 = 1;
	int32_t x302 = -10;
	int32_t x303 = 1858271;
	static int16_t x304 = -1;
	int32_t t73 = 1478557;

	t73 = (x301^((x302|x303)/x304));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x305 = 0;
	int8_t x306 = INT8_MAX;
	volatile uint16_t x308 = UINT16_MAX;
	uint32_t t74 = 438U;

	t74 = (x305^((x306|x307)/x308));

	if (t74 != 65537U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x309 = 603LL;
	int32_t x310 = 434665;
	int64_t x311 = -551LL;
	volatile int64_t t75 = -26506651432LL;

	t75 = (x309^((x310|x311)/x312));

	if (t75 != 603LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x314 = 592455826051010700LL;
	volatile int8_t x315 = 0;
	uint64_t x316 = UINT64_MAX;
	uint64_t t76 = 5571LLU;

	t76 = (x313^((x314|x315)/x316));

	if (t76 != 4294967295LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x317 = 3926233751634554LL;
	volatile uint8_t x320 = UINT8_MAX;

	t77 = (x317^((x318|x319)/x320));

	if (t77 != 3926233766345711LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x321 = INT8_MAX;
	static int64_t x323 = 17717478LL;
	int32_t x324 = INT32_MIN;

	t78 = (x321^((x322|x323)/x324));

	if (t78 != 127LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x325 = 299917LLU;
	static volatile int8_t x326 = INT8_MAX;
	uint32_t x327 = 55U;
	static volatile uint32_t x328 = 22960688U;

	t79 = (x325^((x326|x327)/x328));

	if (t79 != 299917LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x329 = 1368796648U;
	static int64_t x330 = INT64_MAX;
	volatile int64_t x331 = -3LL;
	int64_t t80 = -108472094905191LL;

	t80 = (x329^((x330|x331)/x332));

	if (t80 != 1368796648LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x333 = UINT64_MAX;
	int32_t x335 = -15;
	volatile uint32_t x336 = 27580U;

	t81 = (x333^((x334|x335)/x336));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x337 = 52506911825049276LLU;
	static volatile int16_t x338 = 101;
	static volatile uint16_t x339 = 1962U;
	int64_t x340 = INT64_MIN;
	uint64_t t82 = 536055921873LLU;

	t82 = (x337^((x338|x339)/x340));

	if (t82 != 52506911825049276LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x341 = -1;
	volatile uint32_t x342 = 93277684U;
	int32_t x343 = 1;
	volatile uint16_t x344 = 50U;
	volatile uint32_t t83 = 4U;

	t83 = (x341^((x342|x343)/x344));

	if (t83 != 4293101742U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x345 = UINT64_MAX;
	volatile int16_t x346 = INT16_MAX;
	int64_t x347 = INT64_MIN;
	int8_t x348 = -1;
	static uint64_t t84 = 5189953459347LLU;

	t84 = (x345^((x346|x347)/x348));

	if (t84 != 9223372036854808574LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x350 = 121344U;
	int16_t x351 = -86;
	int8_t x352 = INT8_MIN;
	uint32_t t85 = 11764378U;

	t85 = (x349^((x350|x351)/x352));

	if (t85 != 4294934529U) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x353 = UINT64_MAX;
	volatile int16_t x354 = -1;
	int8_t x355 = INT8_MIN;
	volatile uint64_t t86 = UINT64_MAX;

	t86 = (x353^((x354|x355)/x356));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x358 = 4U;
	uint16_t x359 = UINT16_MAX;
	uint16_t x360 = 3U;
	volatile uint32_t t87 = 253877U;

	t87 = (x357^((x358|x359)/x360));

	if (t87 != 10922U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x361 = INT16_MIN;
	int16_t x362 = -3;
	volatile int8_t x363 = -1;
	uint8_t x364 = 28U;
	int32_t t88 = 14;

	t88 = (x361^((x362|x363)/x364));

	if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x366 = UINT16_MAX;
	static int8_t x367 = -1;
	volatile int32_t t89 = 121244303;

	t89 = (x365^((x366|x367)/x368));

	if (t89 != -2147483647) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x369 = -182;
	int64_t x370 = 151441354473348LL;
	static int64_t x371 = -4885206887271LL;
	uint64_t x372 = 35066048986301793LLU;

	t90 = (x369^((x370|x371)/x372));

	if (t90 != 18446744073709550916LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x373 = 11U;
	volatile int8_t x374 = 1;
	uint32_t x375 = UINT32_MAX;
	volatile int64_t x376 = 1707468916810LL;

	t91 = (x373^((x374|x375)/x376));

	if (t91 != 11LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x378 = UINT16_MAX;
	int8_t x379 = -1;
	int8_t x380 = -2;
	volatile int32_t t92 = 33;

	t92 = (x377^((x378|x379)/x380));

	if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x381 = 3612U;
	uint64_t x382 = 4613796354006222110LLU;
	int64_t x383 = INT64_MAX;
	int8_t x384 = 3;
	volatile uint64_t t93 = 172337766986051LLU;

	t93 = (x381^((x382|x383)/x384));

	if (t93 != 3074457345618257078LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x385 = UINT32_MAX;
	volatile int8_t x386 = -1;
	static volatile int16_t x387 = 11;
	volatile int8_t x388 = INT8_MAX;
	uint32_t t94 = UINT32_MAX;

	t94 = (x385^((x386|x387)/x388));

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x389 = 12U;
	volatile int8_t x391 = INT8_MAX;
	volatile uint64_t t95 = 1LLU;

	t95 = (x389^((x390|x391)/x392));

	if (t95 != 12LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x394 = 11U;
	int16_t x395 = INT16_MIN;
	int8_t x396 = -3;
	static uint32_t t96 = 60528U;

	t96 = (x393^((x394|x395)/x396));

	if (t96 != 91593U) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x397 = 10U;
	static volatile uint16_t x398 = 807U;
	static uint32_t x399 = 42849U;
	int32_t x400 = -1;
	volatile uint32_t t97 = 16006U;

	t97 = (x397^((x398|x399)/x400));

	if (t97 != 10U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x401 = INT32_MAX;
	int8_t x403 = INT8_MIN;
	volatile int32_t x404 = INT32_MIN;
	volatile int32_t t98 = INT32_MAX;

	t98 = (x401^((x402|x403)/x404));

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x405 = -1;
	int32_t x406 = INT32_MAX;
	volatile uint16_t x407 = 12U;
	uint16_t x408 = 5304U;
	static int32_t t99 = -2827287;

	t99 = (x405^((x406|x407)/x408));

	if (t99 != -404881) { NG(); } else { ; }
	
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

