#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = 1067;
volatile int32_t x5 = -842;
int16_t x11 = -1;
uint8_t x15 = UINT8_MAX;
uint8_t x20 = UINT8_MAX;
int64_t x22 = -391LL;
int32_t x23 = -1;
int32_t x25 = -1;
uint32_t t6 = 58332326U;
volatile uint16_t x34 = 145U;
static int64_t x35 = INT64_MIN;
volatile int64_t t8 = -7706784406449314LL;
uint8_t x49 = 5U;
int64_t x54 = INT64_MIN;
volatile int8_t x59 = -1;
int64_t x63 = INT64_MIN;
int8_t x64 = INT8_MIN;
int16_t x65 = 108;
int16_t x66 = -1;
static int16_t x69 = INT16_MAX;
static int16_t x73 = INT16_MIN;
int8_t x76 = -1;
static volatile uint64_t t19 = 8017LLU;
int64_t x81 = 68LL;
static int16_t x83 = INT16_MAX;
uint64_t t20 = 112184847611925021LLU;
static volatile uint32_t x86 = 67694591U;
volatile uint32_t t21 = 1275998U;
int64_t t22 = -521334211LL;
uint32_t x97 = 10288305U;
uint8_t x102 = 39U;
uint64_t x105 = 449LLU;
volatile uint8_t x112 = 6U;
uint8_t x115 = UINT8_MAX;
int8_t x118 = 1;
volatile uint8_t x119 = UINT8_MAX;
int32_t x121 = INT32_MAX;
static volatile int64_t t31 = 3323315932857402510LL;
uint64_t x130 = UINT64_MAX;
int32_t x131 = 204857;
static int64_t x138 = -1LL;
volatile uint32_t x142 = UINT32_MAX;
static int8_t x143 = 8;
uint32_t x158 = 1216725U;
volatile int8_t x165 = 22;
int32_t x170 = INT32_MIN;
static uint8_t x171 = 0U;
volatile uint32_t x174 = 2U;
volatile uint32_t t43 = 144973607U;
volatile int32_t x179 = -144134;
uint32_t t44 = 687618U;
int8_t x182 = INT8_MIN;
int32_t x187 = 47818;
volatile int8_t x192 = INT8_MAX;
volatile int32_t x194 = -834;
uint16_t x199 = UINT16_MAX;
volatile int8_t x206 = -4;
volatile int64_t x207 = 486LL;
int64_t x208 = 64490618515LL;
volatile uint64_t t54 = 196445LLU;
uint16_t x224 = UINT16_MAX;
static int64_t x227 = -1LL;
int64_t x230 = INT64_MIN;
int32_t x235 = INT32_MAX;
volatile int32_t x239 = -1;
uint16_t x245 = 1569U;
volatile int32_t x246 = -329974525;
int32_t t61 = -149966;
int32_t x253 = INT32_MAX;
uint16_t x256 = 2436U;
static int64_t x259 = INT64_MIN;
int16_t x265 = INT16_MIN;
static int64_t t67 = 36526946010839LL;
volatile int16_t x275 = 1;
uint64_t x277 = 1446333LLU;
int64_t x279 = INT64_MIN;
uint32_t x281 = UINT32_MAX;
uint16_t x297 = UINT16_MAX;
volatile int64_t x300 = 1697853637964LL;
int8_t x307 = INT8_MIN;
static volatile int32_t t76 = 5;
volatile int32_t x312 = -1;
int32_t t78 = 921696270;
uint8_t x318 = UINT8_MAX;
volatile int16_t x322 = INT16_MAX;
static uint8_t x326 = 2U;
int64_t x338 = INT64_MAX;
volatile int64_t x346 = -1LL;
volatile int64_t x349 = INT64_MIN;
uint8_t x355 = UINT8_MAX;
volatile uint64_t t89 = 875793040185282201LLU;
static int16_t x366 = -1;
static int64_t x371 = INT64_MIN;
volatile int64_t t92 = -1313118496783139LL;
int64_t x376 = -1LL;
int32_t x381 = INT32_MAX;
volatile int32_t x386 = -127;
uint64_t x391 = UINT64_MAX;
int8_t x392 = 0;
static volatile int16_t x399 = INT16_MAX;


void f0(void) {
	int8_t x1 = -1;
	static volatile int16_t x3 = INT16_MIN;
	int16_t x4 = INT16_MAX;
	volatile int32_t t0 = -1804;

	t0 = (x1^(x2^(x3^x4)));

	if (t0 != 1067) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = 0;
	uint16_t x7 = UINT16_MAX;
	int16_t x8 = INT16_MIN;
	static int32_t t1 = 14;

	t1 = (x5^(x6^(x7^x8)));

	if (t1 != 33609) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 193U;
	int32_t x10 = INT32_MAX;
	static uint64_t x12 = UINT64_MAX;
	uint64_t t2 = 15378LLU;

	t2 = (x9^(x10^(x11^x12)));

	if (t2 != 2147483454LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = INT64_MAX;
	int16_t x14 = -1408;
	int16_t x16 = -1;
	int64_t t3 = -234005942430322LL;

	t3 = (x13^(x14^(x15^x16)));

	if (t3 != 9223372036854774399LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MIN;
	uint16_t x18 = 1512U;
	int64_t x19 = -1LL;
	volatile int64_t t4 = -841512758780LL;

	t4 = (x17^(x18^(x19^x20)));

	if (t4 != 1384LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	static int8_t x24 = INT8_MAX;
	int64_t t5 = 158425LL;

	t5 = (x21^(x22^(x23^x24)));

	if (t5 != 65030LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x26 = INT32_MAX;
	uint32_t x27 = 164773U;
	int32_t x28 = INT32_MIN;

	t6 = (x25^(x26^(x27^x28)));

	if (t6 != 164773U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x29 = UINT8_MAX;
	static int32_t x30 = 89;
	static uint8_t x31 = 3U;
	uint64_t x32 = 110562929LLU;
	volatile uint64_t t7 = 43002802LLU;

	t7 = (x29^(x30^(x31^x32)));

	if (t7 != 110563028LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 6;
	uint16_t x36 = 1630U;

	t8 = (x33^(x34^(x35^x36)));

	if (t8 != -9223372036854774071LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MAX;
	int16_t x38 = 0;
	uint32_t x39 = UINT32_MAX;
	int8_t x40 = 7;
	uint32_t t9 = 3074118U;

	t9 = (x37^(x38^(x39^x40)));

	if (t9 != 4294934535U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x41 = UINT64_MAX;
	static uint8_t x42 = UINT8_MAX;
	volatile uint32_t x43 = 119547468U;
	int8_t x44 = -1;
	volatile uint64_t t10 = 59048303113LLU;

	t10 = (x41^(x42^(x43^x44)));

	if (t10 != 18446744069534131891LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MAX;
	uint32_t x46 = 854474899U;
	int16_t x47 = 0;
	int16_t x48 = -1;
	int64_t t11 = 146054198432225LL;

	t11 = (x45^(x46^(x47^x48)));

	if (t11 != 9223372033414283411LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x50 = UINT32_MAX;
	int32_t x51 = -640;
	int16_t x52 = INT16_MAX;
	uint32_t t12 = 1U;

	t12 = (x49^(x50^(x51^x52)));

	if (t12 != 32133U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = INT32_MIN;
	int64_t x55 = INT64_MIN;
	static uint8_t x56 = UINT8_MAX;
	volatile int64_t t13 = -203692369378LL;

	t13 = (x53^(x54^(x55^x56)));

	if (t13 != -2147483393LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 82839973U;
	volatile uint8_t x58 = 119U;
	static int64_t x60 = INT64_MIN;
	volatile int64_t t14 = 8199298377071LL;

	t14 = (x57^(x58^(x59^x60)));

	if (t14 != 9223372036771935789LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -8755;
	int16_t x62 = INT16_MAX;
	int64_t t15 = -64265LL;

	t15 = (x61^(x62^(x63^x64)));

	if (t15 != -9223372036854751822LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x67 = 1;
	static volatile uint32_t x68 = 518146U;
	uint32_t t16 = 536138556U;

	t16 = (x65^(x66^(x67^x68)));

	if (t16 != 4294449040U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x70 = 242936LL;
	static int16_t x71 = INT16_MIN;
	int16_t x72 = INT16_MIN;
	int64_t t17 = -182LL;

	t17 = (x69^(x70^(x71^x72)));

	if (t17 != 248583LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x74 = 34U;
	int16_t x75 = -1;
	volatile int32_t t18 = 7235;

	t18 = (x73^(x74^(x75^x76)));

	if (t18 != -32734) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = INT64_MAX;
	int32_t x78 = INT32_MIN;
	volatile uint64_t x79 = 34263104373753086LLU;
	uint64_t x80 = 12690012177854LLU;

	t19 = (x77^(x78^(x79^x80)));

	if (t19 != 9257625768002682559LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x82 = 12497LLU;
	uint32_t x84 = 497U;

	t20 = (x81^(x82^(x83^x84)));

	if (t20 != 20123LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x85 = INT8_MIN;
	volatile int32_t x87 = INT32_MIN;
	int8_t x88 = INT8_MIN;

	t21 = (x85^(x86^(x87^x88)));

	if (t21 != 2215178239U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MAX;
	uint16_t x90 = 3625U;
	int64_t x91 = -45851290114LL;
	static uint32_t x92 = 188692U;

	t22 = (x89^(x90^(x91^x92)));

	if (t22 != -9223371991003577028LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -1;
	int64_t x94 = -1LL;
	int64_t x95 = INT64_MAX;
	uint8_t x96 = 50U;
	static volatile int64_t t23 = -81944LL;

	t23 = (x93^(x94^(x95^x96)));

	if (t23 != 9223372036854775757LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x98 = INT32_MAX;
	int32_t x99 = INT32_MAX;
	int16_t x100 = INT16_MAX;
	volatile uint32_t t24 = 14U;

	t24 = (x97^(x98^(x99^x100)));

	if (t24 != 10257230U) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint16_t x101 = 224U;
	uint16_t x103 = 13U;
	int64_t x104 = INT64_MAX;
	int64_t t25 = -947720LL;

	t25 = (x101^(x102^(x103^x104)));

	if (t25 != 9223372036854775605LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x106 = -1;
	int16_t x107 = INT16_MIN;
	static uint32_t x108 = UINT32_MAX;
	volatile uint64_t t26 = 32LLU;

	t26 = (x105^(x106^(x107^x108)));

	if (t26 != 4294934977LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	static int8_t x110 = -4;
	static int16_t x111 = -1;
	int32_t t27 = 601666213;

	t27 = (x109^(x110^(x111^x112)));

	if (t27 != -2147483643) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -1;
	int8_t x114 = -16;
	volatile int8_t x116 = INT8_MIN;
	int32_t t28 = 105857;

	t28 = (x113^(x114^(x115^x116)));

	if (t28 != -144) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = 1;
	int32_t x120 = INT32_MIN;
	int32_t t29 = -1;

	t29 = (x117^(x118^(x119^x120)));

	if (t29 != -2147483393) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = 2;
	int32_t x123 = -1;
	int8_t x124 = -1;
	int32_t t30 = -3;

	t30 = (x121^(x122^(x123^x124)));

	if (t30 != 2147483645) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	static int64_t x126 = INT64_MIN;
	static int32_t x127 = INT32_MIN;
	int8_t x128 = INT8_MIN;

	t31 = (x125^(x126^(x127^x128)));

	if (t31 != 9223372034707324800LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	volatile uint32_t x132 = 469829U;
	static volatile uint64_t t32 = 80LLU;

	t32 = (x129^(x130^(x131^x132)));

	if (t32 != 9223372036854510723LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x133 = 84U;
	static volatile int64_t x134 = INT64_MIN;
	static uint64_t x135 = UINT64_MAX;
	int8_t x136 = 63;
	uint64_t t33 = 4152LLU;

	t33 = (x133^(x134^(x135^x136)));

	if (t33 != 9223372036854775700LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x137 = -1;
	static volatile int32_t x139 = -1;
	uint16_t x140 = UINT16_MAX;
	int64_t t34 = 2959236722LL;

	t34 = (x137^(x138^(x139^x140)));

	if (t34 != -65536LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = UINT8_MAX;
	static uint64_t x144 = UINT64_MAX;
	uint64_t t35 = 135793LLU;

	t35 = (x141^(x142^(x143^x144)));

	if (t35 != 18446744069414584567LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	static int8_t x146 = INT8_MIN;
	int64_t x147 = -340578327672923LL;
	volatile int64_t x148 = -13859316275284LL;
	int64_t t36 = 15867LL;

	t36 = (x145^(x146^(x147^x148)));

	if (t36 != 344541431504905LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -1;
	volatile int64_t x150 = -22632502LL;
	static uint8_t x151 = 3U;
	volatile uint64_t x152 = 5486LLU;
	uint64_t t37 = 81258812003495LLU;

	t37 = (x149^(x150^(x151^x152)));

	if (t37 != 22629720LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x153 = 1U;
	int8_t x154 = INT8_MIN;
	int16_t x155 = INT16_MAX;
	uint8_t x156 = 40U;
	volatile uint32_t t38 = 1U;

	t38 = (x153^(x154^(x155^x156)));

	if (t38 != 4294934614U) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x157 = -1LL;
	volatile int64_t x159 = 18887039957716LL;
	static int8_t x160 = INT8_MAX;
	volatile int64_t t39 = 40156925819965LL;

	t39 = (x157^(x158^(x159^x160)));

	if (t39 != -18887040838271LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -6173;
	int16_t x162 = -1;
	int8_t x163 = INT8_MIN;
	static volatile int64_t x164 = INT64_MIN;
	volatile int64_t t40 = 11335LL;

	t40 = (x161^(x162^(x163^x164)));

	if (t40 != 9223372036854769564LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x166 = 1;
	volatile int8_t x167 = 12;
	static int64_t x168 = 97726LL;
	int64_t t41 = 3LL;

	t41 = (x165^(x166^(x167^x168)));

	if (t41 != 97701LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = 229484697LL;
	uint32_t x172 = 65682660U;
	static volatile int64_t t42 = -62667425LL;

	t42 = (x169^(x170^(x171^x172)));

	if (t42 != 2387055741LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -17;
	uint8_t x175 = 31U;
	int8_t x176 = -1;

	t43 = (x173^(x174^(x175^x176)));

	if (t43 != 13U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MAX;
	uint32_t x178 = UINT32_MAX;
	uint8_t x180 = UINT8_MAX;

	t44 = (x177^(x178^(x179^x180)));

	if (t44 != 150533U) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x181 = -1;
	int64_t x183 = INT64_MIN;
	uint8_t x184 = UINT8_MAX;
	int64_t t45 = -5103LL;

	t45 = (x181^(x182^(x183^x184)));

	if (t45 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 2981135616LLU;
	int64_t x186 = -1LL;
	uint32_t x188 = 14403U;
	uint64_t t46 = 25740565480LLU;

	t46 = (x185^(x186^(x187^x188)));

	if (t46 != 18446744070728448118LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	static int16_t x190 = INT16_MAX;
	int8_t x191 = INT8_MAX;
	volatile int32_t t47 = -2444;

	t47 = (x189^(x190^(x191^x192)));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 1107U;
	int32_t x195 = -67;
	volatile int8_t x196 = -40;
	int32_t t48 = -160383;

	t48 = (x193^(x194^(x195^x196)));

	if (t48 != -1912) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 305U;
	volatile int8_t x198 = -1;
	int16_t x200 = INT16_MAX;
	uint32_t t49 = 2119758981U;

	t49 = (x197^(x198^(x199^x200)));

	if (t49 != 4294934222U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MAX;
	int64_t x202 = 1327527875145LL;
	int8_t x203 = INT8_MIN;
	uint64_t x204 = 2068227024461LLU;
	volatile uint64_t t50 = 36551LLU;

	t50 = (x201^(x202^(x203^x204)));

	if (t50 != 18446743160538516475LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x205 = INT64_MIN;
	static volatile int64_t t51 = -17452527593LL;

	t51 = (x205^(x206^(x207^x208)));

	if (t51 != 9223371972364157065LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x209 = -775383;
	volatile int8_t x210 = INT8_MIN;
	static volatile int8_t x211 = -1;
	volatile uint64_t x212 = 548LLU;
	volatile uint64_t t52 = 2LLU;

	t52 = (x209^(x210^(x211^x212)));

	if (t52 != 18446744073708775794LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = UINT16_MAX;
	volatile int64_t x214 = INT64_MIN;
	static volatile int8_t x215 = INT8_MIN;
	int32_t x216 = -118876;
	volatile int64_t t53 = -1885614LL;

	t53 = (x213^(x214^(x215^x216)));

	if (t53 != -9223372036854698021LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	static int64_t x218 = 56371839141401LL;
	static int16_t x219 = -1;
	uint64_t x220 = UINT64_MAX;

	t54 = (x217^(x218^(x219^x220)));

	if (t54 != 9223428408693917209LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x221 = INT8_MIN;
	uint16_t x222 = 303U;
	int8_t x223 = 14;
	int32_t t55 = 589302;

	t55 = (x221^(x222^(x223^x224)));

	if (t55 != -65186) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = UINT16_MAX;
	uint32_t x226 = 40531U;
	static int64_t x228 = 2757960LL;
	int64_t t56 = -112705LL;

	t56 = (x225^(x226^(x227^x228)));

	if (t56 != -2782437LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MIN;
	volatile int16_t x231 = INT16_MIN;
	int64_t x232 = INT64_MAX;
	int64_t t57 = 14424540371LL;

	t57 = (x229^(x230^(x231^x232)));

	if (t57 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = -1;
	int8_t x234 = 1;
	int16_t x236 = INT16_MIN;
	volatile int32_t t58 = 24347421;

	t58 = (x233^(x234^(x235^x236)));

	if (t58 != 2147450881) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = 23U;
	static int32_t x238 = INT32_MIN;
	volatile int16_t x240 = INT16_MIN;
	int32_t t59 = 121763093;

	t59 = (x237^(x238^(x239^x240)));

	if (t59 != -2147450904) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x241 = UINT32_MAX;
	uint8_t x242 = 0U;
	volatile int16_t x243 = INT16_MIN;
	uint32_t x244 = UINT32_MAX;
	uint32_t t60 = 31950U;

	t60 = (x241^(x242^(x243^x244)));

	if (t60 != 4294934528U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x247 = INT32_MIN;
	int16_t x248 = 63;

	t61 = (x245^(x246^(x247^x248)));

	if (t61 != 1817508637) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x249 = UINT64_MAX;
	int32_t x250 = INT32_MAX;
	static uint16_t x251 = 505U;
	static int16_t x252 = -1;
	uint64_t t62 = 14LLU;

	t62 = (x249^(x250^(x251^x252)));

	if (t62 != 2147483142LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x254 = INT16_MAX;
	volatile int32_t x255 = 837;
	volatile int32_t t63 = 1;

	t63 = (x253^(x254^(x255^x256)));

	if (t63 != 2147453633) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = -1LL;
	static int16_t x258 = INT16_MIN;
	uint8_t x260 = 0U;
	int64_t t64 = 6069204LL;

	t64 = (x257^(x258^(x259^x260)));

	if (t64 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = 3491;
	int32_t x262 = -254919;
	int8_t x263 = INT8_MIN;
	static int16_t x264 = 6687;
	int32_t t65 = -3;

	t65 = (x261^(x262^(x263^x264)));

	if (t65 != 259077) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x266 = INT64_MAX;
	int8_t x267 = -1;
	volatile uint16_t x268 = UINT16_MAX;
	volatile int64_t t66 = 57896877579LL;

	t66 = (x265^(x266^(x267^x268)));

	if (t66 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = 198812;
	int64_t x270 = INT64_MIN;
	int32_t x271 = INT32_MAX;
	int64_t x272 = INT64_MAX;

	t67 = (x269^(x270^(x271^x272)));

	if (t67 != -2147284836LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = -1;
	int8_t x274 = -1;
	uint16_t x276 = 3110U;
	int32_t t68 = 18383332;

	t68 = (x273^(x274^(x275^x276)));

	if (t68 != 3111) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x278 = INT8_MIN;
	uint32_t x280 = UINT32_MAX;
	volatile uint64_t t69 = 175393001081309081LLU;

	t69 = (x277^(x278^(x279^x280)));

	if (t69 != 9223372032561254850LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x282 = -1;
	int16_t x283 = INT16_MAX;
	static uint16_t x284 = 589U;
	volatile uint32_t t70 = 13573436U;

	t70 = (x281^(x282^(x283^x284)));

	if (t70 != 32178U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x285 = -1;
	int8_t x286 = -2;
	volatile uint64_t x287 = 7071503LLU;
	static int8_t x288 = INT8_MIN;
	static volatile uint64_t t71 = 8004197347051LLU;

	t71 = (x285^(x286^(x287^x288)));

	if (t71 != 18446744073702480014LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MAX;
	static int16_t x290 = -1;
	uint32_t x291 = 793U;
	uint16_t x292 = 1U;
	int64_t t72 = 34226434LL;

	t72 = (x289^(x290^(x291^x292)));

	if (t72 != 9223372032559809304LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MIN;
	static volatile uint32_t x294 = 3U;
	uint32_t x295 = 74U;
	int64_t x296 = -15152932251893LL;
	volatile int64_t t73 = 63128474561211820LL;

	t73 = (x293^(x294^(x295^x296)));

	if (t73 != 15152932230978LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x298 = 1;
	int32_t x299 = -17;
	static volatile int64_t t74 = 267473872LL;

	t74 = (x297^(x298^(x299^x300)));

	if (t74 != -1697853635235LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x301 = -1456;
	uint64_t x302 = 40930LLU;
	uint8_t x303 = UINT8_MAX;
	static int32_t x304 = 1;
	uint64_t t75 = 57940394868LLU;

	t75 = (x301^(x302^(x303^x304)));

	if (t75 != 18446744073709512012LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint8_t x305 = UINT8_MAX;
	static uint8_t x306 = UINT8_MAX;
	int16_t x308 = -1;

	t76 = (x305^(x306^(x307^x308)));

	if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x309 = INT16_MAX;
	int16_t x310 = 2476;
	int32_t x311 = INT32_MAX;
	int32_t t77 = -16;

	t77 = (x309^(x310^(x311^x312)));

	if (t77 != -2147453357) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = 183;
	uint8_t x314 = 57U;
	int32_t x315 = INT32_MIN;
	int8_t x316 = INT8_MIN;

	t78 = (x313^(x314^(x315^x316)));

	if (t78 != 2147483406) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x317 = 0;
	int8_t x319 = INT8_MAX;
	uint8_t x320 = 51U;
	volatile int32_t t79 = -1921;

	t79 = (x317^(x318^(x319^x320)));

	if (t79 != 179) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = 4LL;
	static uint16_t x323 = UINT16_MAX;
	static int32_t x324 = INT32_MIN;
	volatile int64_t t80 = 6931722641LL;

	t80 = (x321^(x322^(x323^x324)));

	if (t80 != -2147450876LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x325 = -1;
	int8_t x327 = 1;
	int8_t x328 = INT8_MIN;
	static int32_t t81 = -26;

	t81 = (x325^(x326^(x327^x328)));

	if (t81 != 124) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int8_t x329 = 17;
	uint32_t x330 = 2946U;
	int64_t x331 = -59637330LL;
	uint16_t x332 = 22U;
	int64_t t82 = 16594098533937132LL;

	t82 = (x329^(x330^(x331^x332)));

	if (t82 != -59635157LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x333 = INT16_MIN;
	int32_t x334 = -35;
	static int8_t x335 = -2;
	volatile int16_t x336 = INT16_MIN;
	int32_t t83 = 169817;

	t83 = (x333^(x334^(x335^x336)));

	if (t83 != 35) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MAX;
	int32_t x339 = -1;
	int32_t x340 = INT32_MIN;
	static int64_t t84 = 2LL;

	t84 = (x337^(x338^(x339^x340)));

	if (t84 != 9223372034707324927LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MIN;
	static volatile uint8_t x342 = UINT8_MAX;
	static volatile int8_t x343 = -1;
	int8_t x344 = 0;
	volatile int32_t t85 = -223534318;

	t85 = (x341^(x342^(x343^x344)));

	if (t85 != 32512) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x345 = UINT8_MAX;
	static volatile uint16_t x347 = UINT16_MAX;
	uint8_t x348 = 0U;
	static int64_t t86 = 367290577159193LL;

	t86 = (x345^(x346^(x347^x348)));

	if (t86 != -65281LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x350 = INT16_MIN;
	int16_t x351 = INT16_MIN;
	volatile int64_t x352 = INT64_MIN;
	int64_t t87 = 260548316331747026LL;

	t87 = (x349^(x350^(x351^x352)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x353 = INT32_MIN;
	int32_t x354 = -1;
	int64_t x356 = -1LL;
	int64_t t88 = -315159083062003LL;

	t88 = (x353^(x354^(x355^x356)));

	if (t88 != -2147483393LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = UINT64_MAX;
	static uint64_t x358 = 84LLU;
	int16_t x359 = -1844;
	volatile int8_t x360 = INT8_MIN;

	t89 = (x357^(x358^(x359^x360)));

	if (t89 != 18446744073709549799LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MAX;
	volatile uint8_t x362 = 29U;
	int32_t x363 = INT32_MIN;
	int16_t x364 = -2;
	volatile int32_t t90 = 2615960;

	t90 = (x361^(x362^(x363^x364)));

	if (t90 != 2147450908) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x365 = -1;
	int16_t x367 = 0;
	int64_t x368 = 15LL;
	int64_t t91 = -1149512589734723LL;

	t91 = (x365^(x366^(x367^x368)));

	if (t91 != 15LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = UINT32_MAX;
	int16_t x370 = 225;
	int64_t x372 = INT64_MAX;

	t92 = (x369^(x370^(x371^x372)));

	if (t92 != -4294967071LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = 1U;
	static int32_t x374 = -1;
	uint16_t x375 = UINT16_MAX;
	volatile int64_t t93 = 1LL;

	t93 = (x373^(x374^(x375^x376)));

	if (t93 != 65534LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = -1;
	volatile int8_t x378 = 0;
	int16_t x379 = 0;
	uint64_t x380 = 223LLU;
	uint64_t t94 = 2LLU;

	t94 = (x377^(x378^(x379^x380)));

	if (t94 != 18446744073709551392LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x382 = 7LL;
	int32_t x383 = INT32_MIN;
	volatile uint64_t x384 = 4359955635340594945LLU;
	static uint64_t t95 = 70149320209311568LLU;

	t95 = (x381^(x382^(x383^x384)));

	if (t95 != 14086788438368956665LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = UINT64_MAX;
	uint32_t x387 = 1579966444U;
	int16_t x388 = 58;
	volatile uint64_t t96 = 39669078529755LLU;

	t96 = (x385^(x386^(x387^x388)));

	if (t96 != 18446744070994550696LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = -2657;
	int8_t x390 = -1;
	volatile uint64_t t97 = 127223787728085235LLU;

	t97 = (x389^(x390^(x391^x392)));

	if (t97 != 18446744073709548959LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = -1;
	int16_t x394 = INT16_MIN;
	static uint16_t x395 = UINT16_MAX;
	volatile uint16_t x396 = UINT16_MAX;
	int32_t t98 = -48879;

	t98 = (x393^(x394^(x395^x396)));

	if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 13U;
	volatile uint64_t x398 = 990551LLU;
	uint32_t x400 = 1008034U;
	uint64_t t99 = 5250LLU;

	t99 = (x397^(x398^(x399^x400)));

	if (t99 != 775LLU) { NG(); } else { ; }
	
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

