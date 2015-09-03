#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x7 = 154525253;
int8_t x9 = -25;
static volatile int32_t t2 = 138434;
uint32_t x15 = UINT32_MAX;
int16_t x18 = INT16_MAX;
static volatile uint64_t t4 = 1786330237589088LLU;
uint32_t x21 = 113579U;
uint32_t x28 = 3648U;
int32_t x31 = INT32_MIN;
int32_t x33 = INT32_MIN;
uint8_t x41 = UINT8_MAX;
static int32_t t13 = 149192841;
volatile uint16_t x62 = 4U;
volatile uint32_t x68 = UINT32_MAX;
static int8_t x69 = INT8_MIN;
static int8_t x79 = INT8_MAX;
static int16_t x82 = -198;
volatile int32_t x88 = INT32_MIN;
static int32_t x90 = -1;
uint32_t t22 = 16746461U;
int8_t x93 = -1;
int64_t x102 = INT64_MAX;
volatile int64_t t26 = -3799280977333005LL;
static int64_t x109 = -7339117688649920LL;
volatile int64_t t27 = -187593618460654465LL;
static volatile uint64_t t28 = 2681726503457877LLU;
int16_t x119 = -1;
int16_t x128 = INT16_MAX;
static volatile uint64_t t32 = 80979604056000523LLU;
volatile uint8_t x136 = 2U;
static int8_t x141 = INT8_MAX;
uint16_t x142 = UINT16_MAX;
static int16_t x148 = -1;
volatile int64_t t36 = 105843LL;
uint32_t x153 = 467821543U;
static int16_t x154 = INT16_MIN;
uint32_t x156 = 2336601U;
int64_t t39 = -1120053964902750LL;
int32_t x162 = 62;
int8_t x166 = 10;
int8_t x171 = INT8_MAX;
uint16_t x176 = UINT16_MAX;
int32_t t43 = 29132326;
static uint64_t t45 = 10117LLU;
volatile uint64_t x186 = 6376304019LLU;
volatile uint64_t t46 = 686315847LLU;
static int32_t x199 = INT32_MAX;
volatile int64_t x203 = INT64_MIN;
int8_t x204 = INT8_MIN;
int64_t x208 = INT64_MAX;
volatile int64_t x209 = INT64_MIN;
uint32_t x212 = 35833U;
int64_t t52 = 76637589037333LL;
uint32_t x213 = 3021U;
static int64_t x221 = 1815LL;
int16_t x222 = INT16_MAX;
uint32_t x231 = 200190U;
static int8_t x232 = INT8_MIN;
volatile uint64_t x236 = 63925982895388LLU;
volatile int32_t x237 = INT32_MIN;
int32_t t61 = 1772;
static int8_t x251 = INT8_MIN;
int64_t t62 = -3LL;
int8_t x257 = INT8_MAX;
int16_t x267 = -10565;
uint8_t x268 = 2U;
int64_t x270 = -1LL;
int8_t x273 = -1;
volatile uint64_t x274 = 1447029307505738336LLU;
static int8_t x275 = -1;
int64_t x279 = INT64_MAX;
static uint8_t x282 = UINT8_MAX;
int8_t x283 = INT8_MAX;
static volatile int32_t t70 = -20;
int64_t x286 = -30635760397435LL;
int8_t x292 = INT8_MIN;
int8_t x293 = -7;
uint16_t x296 = 10174U;
volatile int64_t t75 = 957267591LL;
static int64_t t78 = INT64_MAX;
int16_t x323 = INT16_MAX;
int16_t x327 = INT16_MAX;
int64_t x333 = INT64_MIN;
static volatile uint8_t x340 = 9U;
int16_t x341 = 44;
int32_t x348 = INT32_MAX;
volatile uint8_t x349 = 1U;
uint64_t x363 = UINT64_MAX;
int32_t x371 = INT32_MAX;
volatile int64_t t92 = 9299915041075383LL;
volatile int8_t x374 = INT8_MIN;
int64_t x379 = INT64_MIN;
int16_t x383 = INT16_MAX;
int16_t x384 = INT16_MIN;
volatile int64_t t95 = 744123193LL;
volatile int32_t t98 = 853462;
volatile int8_t x398 = INT8_MIN;
uint64_t t99 = 31499LLU;


void f0(void) {
	static int8_t x1 = INT8_MAX;
	uint8_t x2 = 1U;
	static volatile int64_t x3 = 5141431349762LL;
	int64_t x4 = -1LL;
	int64_t t0 = -27177647LL;

	t0 = (x1^(x2&(x3^x4)));

	if (t0 != 126LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	int32_t x6 = 3326517;
	int16_t x8 = -1781;
	static volatile int32_t t1 = -14245;

	t1 = (x5^(x6&(x7^x8)));

	if (t1 != -131589) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MIN;
	int16_t x11 = 7908;
	uint8_t x12 = UINT8_MAX;

	t2 = (x9^(x10&(x11^x12)));

	if (t2 != -25) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = INT32_MIN;
	int16_t x14 = INT16_MAX;
	int16_t x16 = INT16_MIN;
	volatile uint32_t t3 = 546774452U;

	t3 = (x13^(x14&(x15^x16)));

	if (t3 != 2147516415U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 0;
	uint64_t x19 = 942391792LLU;
	int64_t x20 = -6917LL;

	t4 = (x17^(x18&(x19^x20)));

	if (t4 != 9483LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = -111;
	int32_t x23 = -1;
	int32_t x24 = 158234464;
	volatile uint32_t t5 = 133664284U;

	t5 = (x21^(x22&(x23^x24)));

	if (t5 != 4136645434U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	static int16_t x26 = 0;
	int64_t x27 = INT64_MIN;
	volatile int64_t t6 = 616486LL;

	t6 = (x25^(x26&(x27^x28)));

	if (t6 != -32768LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -5690145LL;
	int32_t x30 = INT32_MIN;
	volatile uint16_t x32 = UINT16_MAX;
	static volatile int64_t t7 = 57LL;

	t7 = (x29^(x30&(x31^x32)));

	if (t7 != 2141793503LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x34 = INT8_MAX;
	int64_t x35 = -5835168052978160LL;
	int32_t x36 = -1;
	volatile int64_t t8 = 61200LL;

	t8 = (x33^(x34&(x35^x36)));

	if (t8 != -2147483537LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	volatile int64_t x38 = INT64_MIN;
	uint32_t x39 = 11303606U;
	static uint32_t x40 = 473397U;
	volatile int64_t t9 = 10344364LL;

	t9 = (x37^(x38&(x39^x40)));

	if (t9 != -32768LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x42 = -1;
	volatile int8_t x43 = -1;
	int16_t x44 = -29;
	int32_t t10 = 16828561;

	t10 = (x41^(x42&(x43^x44)));

	if (t10 != 227) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x45 = 0U;
	int64_t x46 = 5941LL;
	uint8_t x47 = 1U;
	uint64_t x48 = 5051LLU;
	uint64_t t11 = 6952523993905978733LLU;

	t11 = (x45^(x46&(x47^x48)));

	if (t11 != 4912LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	int16_t x50 = INT16_MIN;
	int16_t x51 = -1;
	int8_t x52 = INT8_MAX;
	static int32_t t12 = 560383;

	t12 = (x49^(x50&(x51^x52)));

	if (t12 != 32640) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -1;
	uint16_t x54 = UINT16_MAX;
	uint16_t x55 = 4927U;
	int8_t x56 = -1;

	t13 = (x53^(x54&(x55^x56)));

	if (t13 != -60609) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = INT64_MIN;
	static uint16_t x58 = UINT16_MAX;
	uint64_t x59 = 12296941119180268LLU;
	volatile int8_t x60 = INT8_MIN;
	uint64_t t14 = 165877LLU;

	t14 = (x57^(x58&(x59^x60)));

	if (t14 != 9223372036854805100LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = 1;
	uint32_t x63 = 23088U;
	int64_t x64 = -207264750091050LL;
	static int64_t t15 = 6597277LL;

	t15 = (x61^(x62&(x63^x64)));

	if (t15 != 5LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x65 = 244281LLU;
	volatile int32_t x66 = INT32_MAX;
	int16_t x67 = -598;
	uint64_t t16 = 469602215388304LLU;

	t16 = (x65^(x66&(x67^x68)));

	if (t16 != 243820LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x70 = INT16_MIN;
	uint8_t x71 = 3U;
	uint64_t x72 = 0LLU;
	volatile uint64_t t17 = 3631575516466378LLU;

	t17 = (x69^(x70&(x71^x72)));

	if (t17 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MAX;
	static uint16_t x74 = UINT16_MAX;
	int8_t x75 = INT8_MIN;
	uint32_t x76 = UINT32_MAX;
	volatile int64_t t18 = 1408800LL;

	t18 = (x73^(x74&(x75^x76)));

	if (t18 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -1;
	int8_t x78 = INT8_MAX;
	int8_t x80 = INT8_MIN;
	static volatile int32_t t19 = -192171198;

	t19 = (x77^(x78&(x79^x80)));

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x81 = INT8_MIN;
	static volatile int32_t x83 = INT32_MIN;
	int8_t x84 = INT8_MAX;
	volatile int32_t t20 = -1343842;

	t20 = (x81^(x82&(x83^x84)));

	if (t20 != 2147483578) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	uint16_t x86 = UINT16_MAX;
	int16_t x87 = -418;
	volatile int32_t t21 = -2358354;

	t21 = (x85^(x86&(x87^x88)));

	if (t21 != -33186) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -1;
	volatile uint32_t x91 = 196257U;
	uint16_t x92 = 20507U;

	t22 = (x89^(x90&(x91^x92)));

	if (t22 != 4294791493U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x94 = INT8_MIN;
	uint16_t x95 = 18U;
	int8_t x96 = INT8_MAX;
	volatile int32_t t23 = -1;

	t23 = (x93^(x94&(x95^x96)));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -59618157397088LL;
	static int16_t x98 = INT16_MIN;
	int16_t x99 = INT16_MIN;
	int16_t x100 = INT16_MAX;
	volatile int64_t t24 = 9661912937453LL;

	t24 = (x97^(x98&(x99^x100)));

	if (t24 != 59618157427616LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	volatile uint8_t x103 = 3U;
	int64_t x104 = 553510875892443LL;
	int64_t t25 = 598994718046882585LL;

	t25 = (x101^(x102&(x103^x104)));

	if (t25 != -553510875919656LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = 1389605384LL;
	int32_t x106 = INT32_MIN;
	int32_t x107 = INT32_MIN;
	int64_t x108 = 81313LL;

	t26 = (x105^(x106&(x107^x108)));

	if (t26 != -757878264LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x110 = 4U;
	static uint8_t x111 = 0U;
	volatile int16_t x112 = 0;

	t27 = (x109^(x110&(x111^x112)));

	if (t27 != -7339117688649920LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = 3699470LLU;
	int64_t x114 = INT64_MIN;
	int8_t x115 = INT8_MIN;
	int32_t x116 = -1;

	t28 = (x113^(x114&(x115^x116)));

	if (t28 != 3699470LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x117 = INT64_MAX;
	volatile int16_t x118 = INT16_MAX;
	volatile int32_t x120 = INT32_MIN;
	volatile int64_t t29 = -115434133441323797LL;

	t29 = (x117^(x118&(x119^x120)));

	if (t29 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	volatile int16_t x122 = 104;
	uint8_t x123 = UINT8_MAX;
	int8_t x124 = 6;
	int32_t t30 = 39143856;

	t30 = (x121^(x122&(x123^x124)));

	if (t30 != -32664) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x125 = INT8_MIN;
	uint64_t x126 = 2687587894LLU;
	uint32_t x127 = UINT32_MAX;
	uint64_t t31 = 3757220402751948380LLU;

	t31 = (x125^(x126&(x127^x128)));

	if (t31 != 18446744071021985664LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = INT64_MIN;
	int32_t x130 = 310366709;
	int32_t x131 = INT32_MIN;
	uint64_t x132 = 2483725725608630936LLU;

	t32 = (x129^(x130&(x131^x132)));

	if (t32 != 9223372037163503760LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 98U;
	int32_t x134 = 59451560;
	int64_t x135 = -31792LL;
	int64_t t33 = -6529401697LL;

	t33 = (x133^(x134&(x135^x136)));

	if (t33 != 59441378LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x137 = -1;
	volatile int16_t x138 = -1;
	uint32_t x139 = 253U;
	int8_t x140 = 3;
	uint32_t t34 = 162156643U;

	t34 = (x137^(x138&(x139^x140)));

	if (t34 != 4294967041U) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x143 = 5U;
	volatile int16_t x144 = INT16_MAX;
	static volatile int32_t t35 = 81806;

	t35 = (x141^(x142&(x143^x144)));

	if (t35 != 32645) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x145 = INT32_MIN;
	volatile int32_t x146 = INT32_MAX;
	static volatile int64_t x147 = -656910630470LL;

	t36 = (x145^(x146&(x147^x148)));

	if (t36 != -219365819LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -1;
	int8_t x150 = INT8_MIN;
	volatile uint64_t x151 = UINT64_MAX;
	int32_t x152 = 22947522;
	volatile uint64_t t37 = 73995809027025LLU;

	t37 = (x149^(x150&(x151^x152)));

	if (t37 != 22947583LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x155 = 456446524839617559LLU;
	uint64_t t38 = 320LLU;

	t38 = (x153^(x154&(x155^x156)));

	if (t38 != 456446525036782567LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x157 = 3U;
	int64_t x158 = -1LL;
	volatile int16_t x159 = -1;
	static int16_t x160 = -2;

	t39 = (x157^(x158&(x159^x160)));

	if (t39 != 2LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	uint16_t x163 = 1915U;
	static int8_t x164 = INT8_MIN;
	static volatile int64_t t40 = -5961142LL;

	t40 = (x161^(x162&(x163^x164)));

	if (t40 != -9223372036854775750LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x165 = INT8_MIN;
	int16_t x167 = 7;
	int64_t x168 = INT64_MAX;
	volatile int64_t t41 = 15LL;

	t41 = (x165^(x166&(x167^x168)));

	if (t41 != -120LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	static int8_t x170 = INT8_MAX;
	int8_t x172 = -1;
	static volatile int32_t t42 = 557822;

	t42 = (x169^(x170&(x171^x172)));

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	static volatile int32_t x174 = INT32_MIN;
	static int32_t x175 = -247;

	t43 = (x173^(x174&(x175^x176)));

	if (t43 != 2147483520) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x177 = INT8_MAX;
	static int16_t x178 = INT16_MIN;
	uint32_t x179 = UINT32_MAX;
	uint16_t x180 = UINT16_MAX;
	uint32_t t44 = 52U;

	t44 = (x177^(x178&(x179^x180)));

	if (t44 != 4294901887U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x181 = 1886143556LLU;
	int32_t x182 = -220487562;
	uint32_t x183 = UINT32_MAX;
	int16_t x184 = INT16_MIN;

	t45 = (x181^(x182&(x183^x184)));

	if (t45 != 1886151730LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x185 = 2U;
	int8_t x187 = INT8_MIN;
	static int64_t x188 = -54575LL;

	t46 = (x185^(x186&(x187^x188)));

	if (t46 != 34067LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = UINT16_MAX;
	int32_t x190 = INT32_MAX;
	volatile int32_t x191 = 470;
	volatile int16_t x192 = -1;
	int32_t t47 = 48;

	t47 = (x189^(x190&(x191^x192)));

	if (t47 != 2147418582) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MIN;
	static uint8_t x194 = 11U;
	uint32_t x195 = 44U;
	static int64_t x196 = -3841584706517610430LL;
	static int64_t t48 = 6847721853560LL;

	t48 = (x193^(x194&(x195^x196)));

	if (t48 != -2147483638LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = UINT16_MAX;
	uint64_t x198 = UINT64_MAX;
	int32_t x200 = -1;
	volatile uint64_t t49 = 511808771937845LLU;

	t49 = (x197^(x198&(x199^x200)));

	if (t49 != 18446744071562133503LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x201 = 424LLU;
	static int8_t x202 = -3;
	uint64_t t50 = 1386538131856207091LLU;

	t50 = (x201^(x202&(x203^x204)));

	if (t50 != 9223372036854775336LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = -1;
	int16_t x206 = INT16_MAX;
	int64_t x207 = -1LL;
	volatile int64_t t51 = 17973170601LL;

	t51 = (x205^(x206&(x207^x208)));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x210 = INT32_MIN;
	int8_t x211 = INT8_MIN;

	t52 = (x209^(x210&(x211^x212)));

	if (t52 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x214 = 57U;
	volatile int16_t x215 = INT16_MIN;
	uint8_t x216 = UINT8_MAX;
	uint32_t t53 = 127270492U;

	t53 = (x213^(x214&(x215^x216)));

	if (t53 != 3060U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = -1;
	volatile int8_t x218 = INT8_MIN;
	uint16_t x219 = 48U;
	static int64_t x220 = 16214971491965909LL;
	static int64_t t54 = -4107824LL;

	t54 = (x217^(x218&(x219^x220)));

	if (t54 != -16214971491965825LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x223 = UINT64_MAX;
	uint8_t x224 = UINT8_MAX;
	uint64_t t55 = 1391458137941LLU;

	t55 = (x221^(x222&(x223^x224)));

	if (t55 != 30743LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	int16_t x226 = INT16_MIN;
	static uint32_t x227 = 54886368U;
	int8_t x228 = -1;
	uint32_t t56 = 634139331U;

	t56 = (x225^(x226&(x227^x228)));

	if (t56 != 54853632U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = -1;
	int64_t x230 = -1LL;
	int64_t t57 = -7455596384852616LL;

	t57 = (x229^(x230&(x231^x232)));

	if (t57 != -4294767231LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int64_t x233 = INT64_MIN;
	static volatile int8_t x234 = INT8_MIN;
	int8_t x235 = INT8_MIN;
	static uint64_t t58 = 1291558955825LLU;

	t58 = (x233^(x234&(x235^x236)));

	if (t58 != 9223308110871880320LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x238 = INT16_MIN;
	volatile int16_t x239 = -250;
	static int32_t x240 = -13369;
	static volatile int32_t t59 = INT32_MIN;

	t59 = (x237^(x238&(x239^x240)));

	if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = 0U;
	int64_t x242 = -2495545034191LL;
	volatile uint8_t x243 = 31U;
	volatile int32_t x244 = 12457335;
	volatile int64_t t60 = 1753LL;

	t60 = (x241^(x242&(x243^x244)));

	if (t60 != 11276320LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 126U;
	int8_t x246 = -1;
	uint16_t x247 = 8U;
	static int8_t x248 = -1;

	t61 = (x245^(x246&(x247^x248)));

	if (t61 != -119) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x249 = -396269201;
	int32_t x250 = INT32_MIN;
	int64_t x252 = INT64_MAX;

	t62 = (x249^(x250&(x251^x252)));

	if (t62 != 9223372036458506607LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x253 = 474U;
	int16_t x254 = 747;
	int16_t x255 = INT16_MIN;
	int64_t x256 = -2338259877090395357LL;
	volatile int64_t t63 = 2LL;

	t63 = (x253^(x254&(x255^x256)));

	if (t63 != 1017LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x258 = 106U;
	static int16_t x259 = -753;
	volatile int64_t x260 = INT64_MIN;
	static volatile int64_t t64 = 7LL;

	t64 = (x257^(x258&(x259^x260)));

	if (t64 != 117LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x261 = -1;
	int64_t x262 = -1LL;
	int64_t x263 = -31LL;
	int32_t x264 = 472;
	int64_t t65 = -2795944586LL;

	t65 = (x261^(x262&(x263^x264)));

	if (t65 != 454LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 91339877LLU;
	int16_t x266 = INT16_MAX;
	uint64_t t66 = 31013488151517336LLU;

	t66 = (x265^(x266&(x267^x268)));

	if (t66 != 91351772LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = UINT32_MAX;
	static int16_t x271 = -1;
	static uint32_t x272 = 52531064U;
	volatile int64_t t67 = -45691LL;

	t67 = (x269^(x270&(x271^x272)));

	if (t67 != 52531064LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x276 = -14227560LL;
	volatile uint64_t t68 = 1683808921017LLU;

	t68 = (x273^(x274&(x275^x276)));

	if (t68 != 18446744073704243103LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = -21381;
	int8_t x278 = -1;
	static uint32_t x280 = UINT32_MAX;
	int64_t t69 = 269928145LL;

	t69 = (x277^(x278&(x279^x280)));

	if (t69 != -9223372032559829893LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = -1;
	static int8_t x284 = 3;

	t70 = (x281^(x282&(x283^x284)));

	if (t70 != -125) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = -1;
	int8_t x287 = INT8_MAX;
	uint32_t x288 = 4U;
	int64_t t71 = -121LL;

	t71 = (x285^(x286&(x287^x288)));

	if (t71 != -2LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MIN;
	int8_t x290 = -1;
	static uint64_t x291 = UINT64_MAX;
	static volatile uint64_t t72 = 179975LLU;

	t72 = (x289^(x290&(x291^x292)));

	if (t72 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x294 = UINT8_MAX;
	uint8_t x295 = 53U;
	volatile int32_t t73 = 52;

	t73 = (x293^(x294&(x295^x296)));

	if (t73 != -142) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = -4;
	volatile uint16_t x298 = 4756U;
	uint16_t x299 = 1U;
	int32_t x300 = INT32_MIN;
	static int32_t t74 = 20;

	t74 = (x297^(x298&(x299^x300)));

	if (t74 != -4) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = 335178574173811572LL;
	int8_t x302 = -1;
	int64_t x303 = INT64_MIN;
	uint16_t x304 = UINT16_MAX;

	t75 = (x301^(x302&(x303^x304)));

	if (t75 != -8888193462680990581LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = 17331497992978479LLU;
	uint64_t x306 = 244117804472668LLU;
	volatile int16_t x307 = INT16_MAX;
	static int16_t x308 = INT16_MIN;
	static volatile uint64_t t76 = 2022LLU;

	t76 = (x305^(x306&(x307^x308)));

	if (t76 != 17254506291583347LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MIN;
	volatile int32_t x310 = -109309546;
	uint8_t x311 = 2U;
	int8_t x312 = 63;
	int64_t t77 = 69934434159072923LL;

	t77 = (x309^(x310&(x311^x312)));

	if (t77 != -9223372036854775788LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = -1;
	int64_t x314 = INT64_MIN;
	int64_t x315 = INT64_MIN;
	int8_t x316 = 1;

	t78 = (x313^(x314&(x315^x316)));

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = -1LL;
	int32_t x318 = -766;
	uint8_t x319 = 1U;
	int64_t x320 = 5529LL;
	static int64_t t79 = 1148621903LL;

	t79 = (x317^(x318&(x319^x320)));

	if (t79 != -5377LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MAX;
	int64_t x322 = INT64_MIN;
	uint16_t x324 = 822U;
	int64_t t80 = 0LL;

	t80 = (x321^(x322&(x323^x324)));

	if (t80 != 32767LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MAX;
	static int8_t x326 = INT8_MIN;
	static uint64_t x328 = 5617903LLU;
	uint64_t t81 = 1714536656353285LLU;

	t81 = (x325^(x326&(x327^x328)));

	if (t81 != 9223372036849154303LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 8U;
	int16_t x330 = -7;
	uint16_t x331 = 493U;
	static volatile uint8_t x332 = UINT8_MAX;
	int32_t t82 = 23739;

	t82 = (x329^(x330&(x331^x332)));

	if (t82 != 280) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x334 = INT32_MIN;
	int64_t x335 = INT64_MAX;
	static uint64_t x336 = 198LLU;
	static uint64_t t83 = 4424872LLU;

	t83 = (x333^(x334&(x335^x336)));

	if (t83 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x337 = 7U;
	uint16_t x338 = 2U;
	volatile uint8_t x339 = 90U;
	int32_t t84 = -15;

	t84 = (x337^(x338&(x339^x340)));

	if (t84 != 5) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x342 = 8448U;
	int32_t x343 = -17;
	volatile int64_t x344 = -1LL;
	int64_t t85 = -294358335068LL;

	t85 = (x341^(x342&(x343^x344)));

	if (t85 != 44LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MAX;
	int32_t x346 = -1;
	volatile int16_t x347 = -3;
	int64_t t86 = -2LL;

	t86 = (x345^(x346&(x347^x348)));

	if (t86 != -9223372034707292163LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x350 = INT8_MIN;
	int64_t x351 = INT64_MAX;
	uint16_t x352 = UINT16_MAX;
	volatile int64_t t87 = 38712352851878606LL;

	t87 = (x349^(x350&(x351^x352)));

	if (t87 != 9223372036854710273LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = 58U;
	uint8_t x354 = 1U;
	static volatile int16_t x355 = INT16_MIN;
	volatile int16_t x356 = INT16_MIN;
	int32_t t88 = -177473608;

	t88 = (x353^(x354&(x355^x356)));

	if (t88 != 58) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 2016728LLU;
	static uint8_t x358 = 1U;
	volatile int64_t x359 = INT64_MIN;
	uint16_t x360 = 2693U;
	volatile uint64_t t89 = 14091316LLU;

	t89 = (x357^(x358&(x359^x360)));

	if (t89 != 2016729LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -1LL;
	static uint64_t x362 = UINT64_MAX;
	static uint8_t x364 = 1U;
	static volatile uint64_t t90 = 3443LLU;

	t90 = (x361^(x362&(x363^x364)));

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x365 = 32730475368LLU;
	uint8_t x366 = 26U;
	uint8_t x367 = 55U;
	int32_t x368 = -811669;
	volatile uint64_t t91 = 1601LLU;

	t91 = (x365^(x366&(x367^x368)));

	if (t91 != 32730475376LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x369 = 6297LL;
	uint8_t x370 = 3U;
	uint8_t x372 = 4U;

	t92 = (x369^(x370&(x371^x372)));

	if (t92 != 6298LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MIN;
	uint16_t x375 = 4412U;
	int32_t x376 = INT32_MIN;
	volatile int32_t t93 = 151982723;

	t93 = (x373^(x374&(x375^x376)));

	if (t93 != 2147479168) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x377 = -52;
	volatile int64_t x378 = -4LL;
	static int8_t x380 = 3;
	static int64_t t94 = -2788LL;

	t94 = (x377^(x378&(x379^x380)));

	if (t94 != 9223372036854775756LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	int64_t x382 = -1LL;

	t95 = (x381^(x382&(x383^x384)));

	if (t95 != 2147483647LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = UINT8_MAX;
	int8_t x386 = -1;
	uint16_t x387 = UINT16_MAX;
	uint64_t x388 = 1160409622350104LLU;
	uint64_t t96 = 1565LLU;

	t96 = (x385^(x386&(x387^x388)));

	if (t96 != 1160409622345240LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MIN;
	int32_t x390 = INT32_MAX;
	int64_t x391 = INT64_MIN;
	uint64_t x392 = 8905031LLU;
	static volatile uint64_t t97 = 40867599990701LLU;

	t97 = (x389^(x390&(x391^x392)));

	if (t97 != 18446744073700646599LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = -1;
	uint16_t x394 = UINT16_MAX;
	uint8_t x395 = 1U;
	int16_t x396 = INT16_MIN;

	t98 = (x393^(x394&(x395^x396)));

	if (t98 != -32770) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MIN;
	uint64_t x399 = UINT64_MAX;
	static int32_t x400 = -1;

	t99 = (x397^(x398&(x399^x400)));

	if (t99 != 9223372036854775808LLU) { NG(); } else { ; }
	
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

