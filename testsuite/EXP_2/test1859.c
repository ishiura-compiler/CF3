#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x2 = INT8_MAX;
static int8_t x15 = INT8_MIN;
int16_t x46 = INT16_MIN;
int64_t x53 = INT64_MAX;
int32_t x55 = INT32_MIN;
volatile int64_t x56 = -1LL;
int64_t x57 = 7806746098747509LL;
int8_t x58 = -1;
int16_t x63 = 3075;
uint32_t x67 = 78518U;
volatile int64_t t16 = -1LL;
int64_t x71 = INT64_MIN;
int64_t t17 = -50LL;
static volatile uint8_t x73 = UINT8_MAX;
int8_t x81 = -1;
int64_t x87 = -883537350825LL;
int64_t t21 = 20120772219513998LL;
static int64_t x92 = INT64_MAX;
int64_t x94 = INT64_MIN;
volatile int16_t x103 = -62;
uint8_t x106 = 99U;
uint64_t x111 = 21773LLU;
volatile int32_t x113 = INT32_MIN;
int64_t x116 = INT64_MAX;
int64_t t28 = 94LL;
volatile int16_t x120 = INT16_MIN;
volatile uint32_t x123 = UINT32_MAX;
volatile int64_t t34 = 6855LL;
static int16_t x146 = INT16_MIN;
int64_t t36 = -708624056015757LL;
int16_t x149 = INT16_MAX;
static int64_t t38 = 350081LL;
int64_t x158 = -988302422882122LL;
int16_t x159 = -1;
volatile int64_t t42 = -47LL;
int16_t x173 = INT16_MIN;
static uint8_t x178 = 7U;
static int32_t x181 = INT32_MAX;
int32_t x182 = -1;
int16_t x184 = INT16_MIN;
int32_t t45 = -197;
uint8_t x187 = 60U;
volatile int8_t x188 = 59;
int32_t x189 = 13;
int32_t x192 = -1;
static volatile int8_t x197 = INT8_MIN;
static int32_t x203 = -1;
static int16_t x214 = 1555;
int16_t x219 = -1;
int16_t x227 = 210;
int64_t x228 = INT64_MIN;
volatile uint8_t x231 = 0U;
static int64_t x236 = INT64_MIN;
int32_t x238 = INT32_MAX;
int64_t x239 = INT64_MIN;
volatile uint64_t x248 = 1413LLU;
int64_t x255 = INT64_MIN;
static int64_t t63 = 270093116LL;
uint32_t x260 = 15553993U;
static volatile int64_t t64 = -79214LL;
volatile int32_t t65 = 0;
uint16_t x267 = 4487U;
volatile int64_t t66 = -116611825760LL;
int8_t x272 = -1;
int32_t t67 = 644345049;
static volatile int64_t t68 = -3LL;
uint64_t x277 = UINT64_MAX;
uint8_t x285 = 94U;
volatile int8_t x291 = -1;
static int64_t t75 = 90447LL;
int8_t x305 = -3;
uint8_t x310 = 113U;
static int16_t x314 = INT16_MAX;
volatile uint8_t x320 = 3U;
volatile int32_t t79 = -527365587;
volatile uint16_t x328 = 1502U;
int8_t x330 = 53;
static volatile uint32_t x331 = 14U;
static volatile uint32_t t82 = 1725403688U;
volatile int64_t x340 = INT64_MAX;
int16_t x349 = -5544;
int16_t x351 = -452;
int32_t x352 = -1;
int32_t x354 = 20407;
volatile uint32_t x360 = 217U;
volatile int64_t t90 = 7467LL;
static int32_t x366 = 30;
int32_t x369 = INT32_MIN;
static volatile int32_t x382 = INT32_MIN;
static volatile int16_t x388 = INT16_MAX;
int8_t x390 = INT8_MAX;
static volatile int32_t t97 = 788335;
uint64_t x398 = 25867123038504227LLU;


void f0(void) {
	int64_t x1 = INT64_MAX;
	static int64_t x3 = -9933976LL;
	uint8_t x4 = 2U;
	volatile int64_t t0 = 29LL;

	t0 = ((x1^(x2&x3))^x4);

	if (t0 != 9223372036854775701LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 114U;
	int32_t x6 = 296;
	uint32_t x7 = UINT32_MAX;
	int8_t x8 = -1;
	uint32_t t1 = 13U;

	t1 = ((x5^(x6&x7))^x8);

	if (t1 != 4294966949U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	int16_t x10 = 1279;
	int8_t x11 = INT8_MAX;
	volatile int8_t x12 = 7;
	static volatile int32_t t2 = 40281539;

	t2 = ((x9^(x10&x11))^x12);

	if (t2 != 2147483527) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	int64_t x14 = 0LL;
	static volatile uint64_t x16 = 11037191033458986LLU;
	volatile uint64_t t3 = 592250898823LLU;

	t3 = ((x13^(x14&x15))^x16);

	if (t3 != 11037190668807893LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = UINT8_MAX;
	int16_t x18 = INT16_MAX;
	volatile int16_t x19 = INT16_MIN;
	int64_t x20 = -1LL;
	int64_t t4 = 12507359264032926LL;

	t4 = ((x17^(x18&x19))^x20);

	if (t4 != -256LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MAX;
	uint16_t x22 = 0U;
	static volatile int8_t x23 = -6;
	int32_t x24 = INT32_MAX;
	int32_t t5 = 67;

	t5 = ((x21^(x22&x23))^x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	uint32_t x26 = UINT32_MAX;
	static int64_t x27 = 203573458579695LL;
	static int64_t x28 = INT64_MAX;
	volatile int64_t t6 = -929049409LL;

	t6 = ((x25^(x26&x27))^x28);

	if (t6 != 9223372036256092015LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	volatile int32_t x30 = INT32_MAX;
	static int16_t x31 = 90;
	uint32_t x32 = UINT32_MAX;
	volatile uint32_t t7 = 29257906U;

	t7 = ((x29^(x30&x31))^x32);

	if (t7 != 2147483557U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x33 = UINT16_MAX;
	int16_t x34 = INT16_MIN;
	int32_t x35 = 6;
	static uint16_t x36 = 4U;
	volatile int32_t t8 = 25709915;

	t8 = ((x33^(x34&x35))^x36);

	if (t8 != 65531) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = -36LL;
	int16_t x38 = -30;
	int32_t x39 = -2;
	int32_t x40 = -1;
	int64_t t9 = -101031080360106085LL;

	t9 = ((x37^(x38&x39))^x40);

	if (t9 != -63LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	int8_t x42 = INT8_MIN;
	uint32_t x43 = 188439844U;
	static int64_t x44 = -1LL;
	int64_t t10 = -190010767133440LL;

	t10 = ((x41^(x42&x43))^x44);

	if (t10 != -4106527361LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	static int32_t x47 = -1;
	static volatile int16_t x48 = INT16_MIN;
	int32_t t11 = INT32_MIN;

	t11 = ((x45^(x46&x47))^x48);

	if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	int8_t x50 = -1;
	int32_t x51 = INT32_MIN;
	int32_t x52 = 1;
	static volatile int32_t t12 = 57452;

	t12 = ((x49^(x50&x51))^x52);

	if (t12 != 2147450881) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = 7952;
	static int64_t t13 = INT64_MIN;

	t13 = ((x53^(x54&x55))^x56);

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x59 = 1331;
	uint64_t x60 = UINT64_MAX;
	uint64_t t14 = 69610394946404LLU;

	t14 = ((x57^(x58&x59))^x60);

	if (t14 != 18438937327610802873LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	uint16_t x62 = 118U;
	uint8_t x64 = 1U;
	int32_t t15 = 1;

	t15 = ((x61^(x62&x63))^x64);

	if (t15 != 32764) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	uint32_t x66 = 3242423U;
	uint32_t x68 = 1018U;

	t16 = ((x65^(x66&x67))^x68);

	if (t16 != -9223372036854697140LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = INT64_MAX;
	int8_t x70 = -2;
	int32_t x72 = 0;

	t17 = ((x69^(x70&x71))^x72);

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x74 = 1076U;
	volatile uint32_t x75 = 1U;
	int64_t x76 = 7551652724935185LL;
	int64_t t18 = 258435186265288887LL;

	t18 = ((x73^(x74&x75))^x76);

	if (t18 != 7551652724935406LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MAX;
	static uint16_t x78 = 7U;
	volatile uint32_t x79 = 6778714U;
	static int64_t x80 = -353344565708LL;
	volatile int64_t t19 = 7422406457LL;

	t19 = ((x77^(x78&x79))^x80);

	if (t19 != -353344565687LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x82 = INT8_MIN;
	volatile uint8_t x83 = 112U;
	static volatile uint8_t x84 = 2U;
	volatile int32_t t20 = -1540020;

	t20 = ((x81^(x82&x83))^x84);

	if (t20 != -3) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = 520802LL;
	int8_t x86 = 47;
	static volatile uint8_t x88 = 1U;

	t21 = ((x85^(x86&x87))^x88);

	if (t21 != 520804LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x89 = 5355U;
	int16_t x90 = -1;
	volatile int64_t x91 = INT64_MIN;
	int64_t t22 = -164775954LL;

	t22 = ((x89^(x90&x91))^x92);

	if (t22 != -5356LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	static volatile uint64_t x95 = UINT64_MAX;
	int32_t x96 = 37196;
	uint64_t t23 = 74207LLU;

	t23 = ((x93^(x94&x95))^x96);

	if (t23 != 9223372036854738636LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int32_t x97 = INT32_MAX;
	uint64_t x98 = 6769905005LLU;
	volatile int8_t x99 = INT8_MIN;
	int16_t x100 = -385;
	volatile uint64_t t24 = 1LLU;

	t24 = ((x97^(x98&x99))^x100);

	if (t24 != 18446744065447070848LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = -1;
	int32_t x102 = INT32_MIN;
	uint8_t x104 = UINT8_MAX;
	volatile int32_t t25 = 16021;

	t25 = ((x101^(x102&x103))^x104);

	if (t25 != 2147483392) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x105 = UINT32_MAX;
	static int8_t x107 = INT8_MIN;
	uint8_t x108 = UINT8_MAX;
	uint32_t t26 = 10533345U;

	t26 = ((x105^(x106&x107))^x108);

	if (t26 != 4294967040U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = UINT8_MAX;
	int16_t x110 = -1;
	uint16_t x112 = 5490U;
	uint64_t t27 = 5106943712LLU;

	t27 = ((x109^(x110&x111))^x112);

	if (t27 != 16512LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x114 = 264482U;
	int32_t x115 = INT32_MAX;

	t28 = ((x113^(x114&x115))^x116);

	if (t28 != 9223372034707027677LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x117 = INT64_MIN;
	volatile uint32_t x118 = 138548U;
	int16_t x119 = -4519;
	volatile int64_t t29 = -45843LL;

	t29 = ((x117^(x118&x119))^x120);

	if (t29 != 9223372036854615056LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -2000240LL;
	int32_t x122 = 85551;
	static volatile int32_t x124 = INT32_MIN;
	static int64_t t30 = 701091662484512LL;

	t30 = ((x121^(x122&x123))^x124);

	if (t30 != 2145399999LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = 3U;
	uint64_t x126 = UINT64_MAX;
	int32_t x127 = INT32_MIN;
	uint8_t x128 = 11U;
	volatile uint64_t t31 = 194933251LLU;

	t31 = ((x125^(x126&x127))^x128);

	if (t31 != 18446744071562067976LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = 74972;
	uint8_t x130 = 6U;
	uint16_t x131 = 2U;
	static int64_t x132 = -12974418LL;
	static int64_t t32 = -5346032LL;

	t32 = ((x129^(x130&x131))^x132);

	if (t32 != -12901776LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x133 = 1U;
	int8_t x134 = -10;
	uint16_t x135 = UINT16_MAX;
	int32_t x136 = 155;
	int32_t t33 = -3817759;

	t33 = ((x133^(x134&x135))^x136);

	if (t33 != 65388) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x137 = INT16_MAX;
	volatile int64_t x138 = 0LL;
	int16_t x139 = INT16_MAX;
	int64_t x140 = -949138LL;

	t34 = ((x137^(x138&x139))^x140);

	if (t34 != -918639LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = -245132261840LL;
	static int16_t x142 = INT16_MIN;
	int8_t x143 = 1;
	static volatile int8_t x144 = -1;
	volatile int64_t t35 = -90686325LL;

	t35 = ((x141^(x142&x143))^x144);

	if (t35 != 245132261839LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = 1U;
	volatile int64_t x147 = 704152247464352736LL;
	static int8_t x148 = -1;

	t36 = ((x145^(x146&x147))^x148);

	if (t36 != -704152247464329218LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x150 = INT64_MIN;
	uint8_t x151 = 12U;
	int16_t x152 = INT16_MAX;
	volatile int64_t t37 = -48534040LL;

	t37 = ((x149^(x150&x151))^x152);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 5503U;
	int64_t x154 = INT64_MIN;
	int32_t x155 = 504441;
	static int8_t x156 = INT8_MIN;

	t38 = ((x153^(x154&x155))^x156);

	if (t38 != -5377LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x157 = INT64_MAX;
	volatile uint32_t x160 = 83898908U;
	static int64_t t39 = 130621832655LL;

	t39 = ((x157^(x158&x159))^x160);

	if (t39 != -9222383734482238123LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x161 = INT16_MIN;
	int8_t x162 = 1;
	int8_t x163 = 12;
	int32_t x164 = -139056901;
	static int32_t t40 = 2;

	t40 = ((x161^(x162&x163))^x164);

	if (t40 != 139045115) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 1110486LLU;
	volatile uint8_t x166 = UINT8_MAX;
	uint64_t x167 = 102659623572LLU;
	volatile uint64_t x168 = 3LLU;
	uint64_t t41 = 14052LLU;

	t41 = ((x165^(x166&x167))^x168);

	if (t41 != 1110337LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -1;
	uint32_t x170 = UINT32_MAX;
	int64_t x171 = 32LL;
	static int8_t x172 = INT8_MAX;

	t42 = ((x169^(x170&x171))^x172);

	if (t42 != -96LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x174 = 367U;
	static volatile uint64_t x175 = 1106224910LLU;
	int32_t x176 = INT32_MIN;
	uint64_t t43 = 46239400665LLU;

	t43 = ((x173^(x174&x175))^x176);

	if (t43 != 2147451150LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x177 = UINT16_MAX;
	static int32_t x179 = INT32_MIN;
	uint16_t x180 = UINT16_MAX;
	volatile int32_t t44 = 473;

	t44 = ((x177^(x178&x179))^x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x183 = INT8_MAX;

	t45 = ((x181^(x182&x183))^x184);

	if (t45 != -2147451008) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 762U;
	volatile int16_t x186 = -1;
	uint32_t t46 = 1U;

	t46 = ((x185^(x186&x187))^x188);

	if (t46 != 765U) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x190 = -390708092;
	static volatile int32_t x191 = -1;
	int32_t t47 = -136;

	t47 = ((x189^(x190&x191))^x192);

	if (t47 != 390708086) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = UINT64_MAX;
	static uint32_t x194 = 19563U;
	int32_t x195 = 1;
	int8_t x196 = -1;
	uint64_t t48 = 47423008LLU;

	t48 = ((x193^(x194&x195))^x196);

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x198 = 1U;
	uint8_t x199 = UINT8_MAX;
	uint32_t x200 = 92873U;
	static volatile uint32_t t49 = 1364991273U;

	t49 = ((x197^(x198&x199))^x200);

	if (t49 != 4294874440U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -4;
	static int64_t x202 = INT64_MIN;
	int64_t x204 = INT64_MAX;
	int64_t t50 = -4261334192429013917LL;

	t50 = ((x201^(x202&x203))^x204);

	if (t50 != 3LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x205 = INT16_MIN;
	int64_t x206 = -45309709LL;
	uint64_t x207 = 33170662840676LLU;
	uint64_t x208 = 6LLU;
	uint64_t t51 = 3682LLU;

	t51 = ((x205^(x206&x207))^x208);

	if (t51 != 18446710903056334950LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = 23;
	uint32_t x210 = 42U;
	uint64_t x211 = 8089695616298LLU;
	int32_t x212 = 189833;
	volatile uint64_t t52 = 119816LLU;

	t52 = ((x209^(x210&x211))^x212);

	if (t52 != 189876LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x213 = -3LL;
	static int64_t x215 = INT64_MIN;
	int16_t x216 = INT16_MIN;
	static int64_t t53 = 6LL;

	t53 = ((x213^(x214&x215))^x216);

	if (t53 != 32765LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = UINT64_MAX;
	int32_t x218 = INT32_MAX;
	static volatile uint8_t x220 = 56U;
	volatile uint64_t t54 = 1684820684500943330LLU;

	t54 = ((x217^(x218&x219))^x220);

	if (t54 != 18446744071562068024LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	volatile int32_t x222 = INT32_MIN;
	uint16_t x223 = 2U;
	uint8_t x224 = 0U;
	int32_t t55 = INT32_MIN;

	t55 = ((x221^(x222&x223))^x224);

	if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = 71229353U;
	uint64_t x226 = UINT64_MAX;
	volatile uint64_t t56 = 4503322LLU;

	t56 = ((x225^(x226&x227))^x228);

	if (t56 != 9223372036926005115LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x229 = INT8_MIN;
	static int64_t x230 = 217640734621LL;
	uint16_t x232 = UINT16_MAX;
	int64_t t57 = -231275009LL;

	t57 = ((x229^(x230&x231))^x232);

	if (t57 != -65409LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = UINT16_MAX;
	volatile int64_t x234 = -16332781990541LL;
	static int64_t x235 = 53065560314LL;
	int64_t t58 = -8822353754LL;

	t58 = ((x233^(x234&x235))^x236);

	if (t58 != -9223372019233128563LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = -41;
	int32_t x240 = INT32_MIN;
	int64_t t59 = 91321738203819536LL;

	t59 = ((x237^(x238&x239))^x240);

	if (t59 != 2147483607LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = 800548;
	static uint32_t x242 = UINT32_MAX;
	static int64_t x243 = 2488951905267LL;
	int32_t x244 = -1;
	static int64_t t60 = 9756650870365502LL;

	t60 = ((x241^(x242&x243))^x244);

	if (t60 != -2165583064LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x245 = 71904862U;
	volatile uint64_t x246 = UINT64_MAX;
	static int64_t x247 = INT64_MIN;
	uint64_t t61 = 4944962LLU;

	t61 = ((x245^(x246&x247))^x248);

	if (t61 != 9223372036926680027LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MIN;
	uint16_t x250 = 77U;
	static uint64_t x251 = 169823LLU;
	uint8_t x252 = 1U;
	volatile uint64_t t62 = 126112903012LLU;

	t62 = ((x249^(x250&x251))^x252);

	if (t62 != 18446744073709518924LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MIN;
	uint16_t x254 = UINT16_MAX;
	volatile int8_t x256 = 1;

	t63 = ((x253^(x254&x255))^x256);

	if (t63 != -32767LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = 3728;
	int64_t x258 = -1LL;
	uint8_t x259 = UINT8_MAX;

	t64 = ((x257^(x258&x259))^x260);

	if (t64 != 15555494LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = 952U;
	int32_t x262 = INT32_MIN;
	static int16_t x263 = -1018;
	volatile int32_t x264 = 201379042;

	t65 = ((x261^(x262&x263))^x264);

	if (t65 != -1946103974) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MAX;
	int64_t x266 = 311668LL;
	static int8_t x268 = INT8_MIN;

	t66 = ((x265^(x266&x267))^x268);

	if (t66 != -32389LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x269 = 99U;
	static uint8_t x270 = 2U;
	int16_t x271 = INT16_MIN;

	t67 = ((x269^(x270&x271))^x272);

	if (t67 != -100) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = 170;
	volatile uint32_t x274 = UINT32_MAX;
	int64_t x275 = 5460643321LL;
	int16_t x276 = -291;

	t68 = ((x273^(x274&x275))^x276);

	if (t68 != -1165675634LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x278 = INT32_MIN;
	uint32_t x279 = 179335U;
	int64_t x280 = -24LL;
	static volatile uint64_t t69 = 1214176LLU;

	t69 = ((x277^(x278&x279))^x280);

	if (t69 != 23LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = 63U;
	int64_t x282 = 24916161488956861LL;
	uint16_t x283 = 5199U;
	volatile int16_t x284 = INT16_MAX;
	int64_t t70 = -3634784774LL;

	t70 = ((x281^(x282&x283))^x284);

	if (t70 != 31693LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x286 = -2;
	static int64_t x287 = -29332269418094LL;
	int32_t x288 = 948;
	int64_t t71 = 156LL;

	t71 = ((x285^(x286&x287))^x288);

	if (t71 != -29332269417864LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = -15810870;
	int16_t x290 = INT16_MIN;
	volatile int8_t x292 = -52;
	static volatile int32_t t72 = -15;

	t72 = ((x289^(x290&x291))^x292);

	if (t72 != -15810298) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x293 = 15;
	int64_t x294 = -1LL;
	volatile int64_t x295 = INT64_MAX;
	static uint8_t x296 = 14U;
	int64_t t73 = 1756287141350679LL;

	t73 = ((x293^(x294&x295))^x296);

	if (t73 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = 18;
	int8_t x298 = INT8_MIN;
	volatile uint16_t x299 = 2U;
	int32_t x300 = INT32_MAX;
	volatile int32_t t74 = -27;

	t74 = ((x297^(x298&x299))^x300);

	if (t74 != 2147483629) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = 2016032;
	uint16_t x302 = UINT16_MAX;
	volatile int64_t x303 = 127304LL;
	int64_t x304 = -10393666041LL;

	t75 = ((x301^(x302&x303))^x304);

	if (t75 != -10395382673LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x306 = 1060646775884LL;
	uint32_t x307 = 415469U;
	volatile int16_t x308 = INT16_MIN;
	static volatile int64_t t76 = -776502394435LL;

	t76 = ((x305^(x306&x307))^x308);

	if (t76 != 15281LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x309 = INT8_MIN;
	int32_t x311 = -1;
	volatile int8_t x312 = INT8_MIN;
	volatile int32_t t77 = -647024;

	t77 = ((x309^(x310&x311))^x312);

	if (t77 != 113) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = UINT8_MAX;
	int16_t x315 = INT16_MAX;
	int8_t x316 = INT8_MIN;
	static int32_t t78 = 7715598;

	t78 = ((x313^(x314&x315))^x316);

	if (t78 != -32640) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x317 = UINT8_MAX;
	int16_t x318 = INT16_MIN;
	int8_t x319 = -1;

	t79 = ((x317^(x318&x319))^x320);

	if (t79 != -32516) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = UINT32_MAX;
	uint32_t x322 = 1922U;
	uint16_t x323 = 116U;
	int16_t x324 = INT16_MIN;
	volatile uint32_t t80 = 562551942U;

	t80 = ((x321^(x322&x323))^x324);

	if (t80 != 32767U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = -1;
	static int32_t x326 = -1;
	static int32_t x327 = 420664933;
	volatile int32_t t81 = 349;

	t81 = ((x325^(x326&x327))^x328);

	if (t81 != -420664252) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = 2452U;
	volatile int32_t x332 = 492364294;

	t82 = ((x329^(x330&x331))^x332);

	if (t82 != 492366742U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x333 = -1;
	volatile uint64_t x334 = 343672792695482771LLU;
	volatile int64_t x335 = -1LL;
	int64_t x336 = -1LL;
	uint64_t t83 = 582182245477675764LLU;

	t83 = ((x333^(x334&x335))^x336);

	if (t83 != 343672792695482771LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MAX;
	int32_t x338 = INT32_MIN;
	int8_t x339 = -1;
	int64_t t84 = 432LL;

	t84 = ((x337^(x338&x339))^x340);

	if (t84 != -2147483648LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = UINT16_MAX;
	uint32_t x342 = UINT32_MAX;
	static int32_t x343 = INT32_MIN;
	uint64_t x344 = UINT64_MAX;
	volatile uint64_t t85 = 134LLU;

	t85 = ((x341^(x342&x343))^x344);

	if (t85 != 18446744071562002432LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = 59U;
	int16_t x346 = INT16_MAX;
	int64_t x347 = INT64_MAX;
	volatile int8_t x348 = -57;
	int64_t t86 = 63043580312961LL;

	t86 = ((x345^(x346&x347))^x348);

	if (t86 != -32765LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x350 = INT64_MIN;
	static int64_t t87 = -599989LL;

	t87 = ((x349^(x350&x351))^x352);

	if (t87 != -9223372036854770265LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = UINT16_MAX;
	volatile uint64_t x355 = UINT64_MAX;
	int64_t x356 = INT64_MIN;
	static uint64_t t88 = 13085382798532501LLU;

	t88 = ((x353^(x354&x355))^x356);

	if (t88 != 9223372036854820936LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x357 = 12678;
	int32_t x358 = INT32_MIN;
	static int64_t x359 = 1038731011735935583LL;
	static volatile int64_t t89 = -47LL;

	t89 = ((x357^(x358&x359))^x360);

	if (t89 != 1038731011539611999LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x361 = INT8_MIN;
	int16_t x362 = -1;
	int64_t x363 = INT64_MAX;
	uint8_t x364 = 2U;

	t90 = ((x361^(x362&x363))^x364);

	if (t90 != -9223372036854775683LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -413978783547628306LL;
	uint8_t x367 = 70U;
	uint8_t x368 = 15U;
	volatile int64_t t91 = -123570LL;

	t91 = ((x365^(x366&x367))^x368);

	if (t91 != -413978783547628313LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x370 = INT32_MAX;
	static int32_t x371 = -7291;
	int64_t x372 = INT64_MIN;
	int64_t t92 = -379LL;

	t92 = ((x369^(x370&x371))^x372);

	if (t92 != 9223372036854768517LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = 73U;
	int64_t x374 = INT64_MAX;
	int8_t x375 = -1;
	int8_t x376 = INT8_MIN;
	volatile int64_t t93 = 3568974202089856LL;

	t93 = ((x373^(x374&x375))^x376);

	if (t93 != -9223372036854775754LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x377 = 1508U;
	int8_t x378 = INT8_MAX;
	int8_t x379 = 0;
	int8_t x380 = -1;
	volatile int32_t t94 = 68369;

	t94 = ((x377^(x378&x379))^x380);

	if (t94 != -1509) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x381 = 18U;
	uint32_t x383 = UINT32_MAX;
	uint8_t x384 = UINT8_MAX;
	volatile uint32_t t95 = 5071U;

	t95 = ((x381^(x382&x383))^x384);

	if (t95 != 2147483885U) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = 1U;
	uint16_t x386 = 17U;
	volatile int8_t x387 = INT8_MIN;
	int32_t t96 = 29372053;

	t96 = ((x385^(x386&x387))^x388);

	if (t96 != 32766) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -1;
	volatile int16_t x391 = 0;
	static int8_t x392 = 22;

	t97 = ((x389^(x390&x391))^x392);

	if (t97 != -23) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x393 = -1;
	int16_t x394 = INT16_MAX;
	int32_t x395 = 1866399;
	int16_t x396 = INT16_MIN;
	volatile int32_t t98 = -64;

	t98 = ((x393^(x394&x395))^x396);

	if (t98 != 1376) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x397 = UINT16_MAX;
	uint8_t x399 = UINT8_MAX;
	int64_t x400 = 140588067279422531LL;
	volatile uint64_t t99 = 21LLU;

	t99 = ((x397^(x398&x399))^x400);

	if (t99 != 140588067279453087LLU) { NG(); } else { ; }
	
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

