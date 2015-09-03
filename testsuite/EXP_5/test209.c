#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 64093180;
static uint64_t x8 = 2LLU;
static uint8_t x13 = 99U;
static int16_t x18 = INT16_MIN;
static int8_t x26 = INT8_MAX;
int64_t x34 = 118540LL;
uint64_t t9 = 1211950971558876531LLU;
volatile int16_t x45 = INT16_MAX;
uint16_t x46 = UINT16_MAX;
int64_t x48 = INT64_MAX;
volatile uint64_t t10 = 3668140178951LLU;
static volatile int64_t t11 = 51424LL;
volatile uint64_t t12 = 102LLU;
int32_t x61 = -5;
uint64_t x62 = 144LLU;
uint8_t x71 = 1U;
int64_t x75 = -672836550817LL;
int16_t x79 = -2547;
static int32_t x96 = -160005693;
int16_t x105 = 22;
int16_t x111 = -81;
uint16_t x117 = 47U;
static int8_t x122 = -1;
static uint32_t t26 = 3U;
uint8_t x125 = UINT8_MAX;
static int64_t x128 = INT64_MIN;
volatile int32_t x129 = 594836;
static int32_t t29 = -7897;
uint16_t x140 = UINT16_MAX;
volatile int8_t x141 = 12;
static int8_t x147 = INT8_MAX;
int32_t x149 = -1;
int32_t x154 = INT32_MAX;
volatile int64_t t35 = -13948942847235217LL;
int64_t x161 = INT64_MIN;
int8_t x166 = INT8_MAX;
int16_t x167 = INT16_MAX;
volatile uint32_t x174 = UINT32_MAX;
static uint64_t x176 = 28525LLU;
volatile uint64_t t38 = 2153LLU;
volatile uint64_t t40 = 2101120302320564311LLU;
static uint8_t x187 = UINT8_MAX;
static volatile int64_t x188 = INT64_MAX;
static volatile int64_t t41 = -746513546922234151LL;
int8_t x192 = -1;
volatile uint16_t x193 = UINT16_MAX;
int32_t x210 = 960682;
int32_t x212 = -1;
static volatile int64_t x220 = INT64_MAX;
int64_t t48 = 2220652525197LL;
int32_t x223 = 6077;
int64_t x230 = 30187231542LL;
int8_t x245 = INT8_MIN;
volatile int8_t x247 = INT8_MAX;
static uint64_t x256 = 68565871439382722LLU;
uint64_t t57 = 10129899735LLU;
volatile uint64_t t58 = 72183433429839313LLU;
int64_t x262 = INT64_MIN;
int64_t x267 = -1LL;
static int64_t x270 = 3545436582LL;
volatile uint16_t x279 = 6U;
volatile int32_t x280 = -1;
int16_t x289 = -52;
int64_t x292 = -1LL;
static volatile int64_t x300 = INT64_MIN;
static int8_t x302 = INT8_MIN;
static volatile uint64_t t68 = 12LLU;
static int64_t x311 = -1LL;
uint64_t x320 = 6330673663063LLU;
volatile uint8_t x331 = UINT8_MAX;
int8_t x333 = INT8_MIN;
uint32_t x342 = 9U;
int32_t x347 = INT32_MIN;
volatile uint64_t t76 = 202244429669LLU;
static uint8_t x349 = 0U;
static int32_t x353 = INT32_MAX;
int16_t x359 = -1;
int16_t x362 = 18;
uint64_t x366 = 3878LLU;
int16_t x368 = -1;
int8_t x369 = -1;
int64_t t82 = 354682541823LL;
static int64_t x380 = -85LL;
int64_t t84 = 11723731657LL;
static int32_t x394 = -1;
uint64_t t87 = 75848542764LLU;
int8_t x410 = 17;
int32_t x411 = -1;
int16_t x419 = 1;
static int64_t x431 = INT64_MAX;
int64_t t92 = -54980410LL;
int64_t x433 = -673901080640790282LL;
int16_t x447 = INT16_MIN;
uint16_t x450 = 15U;
int64_t x451 = -348324LL;
int8_t x455 = INT8_MIN;
uint64_t x456 = UINT64_MAX;


void f0(void) {
	volatile int16_t x1 = INT16_MIN;
	int8_t x2 = INT8_MAX;
	int8_t x3 = 0;
	int16_t x4 = -1;

	t0 = (x1+((x2-x3)/x4));

	if (t0 != -32895) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MIN;
	volatile uint16_t x6 = UINT16_MAX;
	int64_t x7 = -1868455LL;
	volatile uint64_t t1 = 40LLU;

	t1 = (x5+((x6-x7)/x8));

	if (t1 != 18446744071563034963LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -84694LL;
	int8_t x10 = INT8_MAX;
	uint8_t x11 = 1U;
	int32_t x12 = INT32_MAX;
	volatile int64_t t2 = -1093675239LL;

	t2 = (x9+((x10-x11)/x12));

	if (t2 != -84694LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = 13663187LL;
	int16_t x15 = INT16_MAX;
	static uint16_t x16 = 818U;
	volatile int64_t t3 = -155208483382988758LL;

	t3 = (x13+((x14-x15)/x16));

	if (t3 != 16762LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	int16_t x19 = 1626;
	static int32_t x20 = INT32_MIN;
	static volatile int32_t t4 = INT32_MAX;

	t4 = (x17+((x18-x19)/x20));

	if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MAX;
	uint64_t x22 = UINT64_MAX;
	int64_t x23 = -1LL;
	static int64_t x24 = INT64_MAX;
	volatile uint64_t t5 = 224481645745008180LLU;

	t5 = (x21+((x22-x23)/x24));

	if (t5 != 127LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = -1LL;
	static uint8_t x27 = 15U;
	static int8_t x28 = -3;
	int64_t t6 = -1195292LL;

	t6 = (x25+((x26-x27)/x28));

	if (t6 != -38LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = 4;
	uint8_t x30 = 112U;
	uint8_t x31 = UINT8_MAX;
	int32_t x32 = INT32_MIN;
	volatile int32_t t7 = -1205207;

	t7 = (x29+((x30-x31)/x32));

	if (t7 != 4) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1749LL;
	volatile int64_t x35 = -23584524079897883LL;
	volatile int16_t x36 = -1;
	int64_t t8 = 1097406984479726LL;

	t8 = (x33+((x34-x35)/x36));

	if (t8 != -23584524080018172LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x37 = UINT64_MAX;
	uint8_t x38 = 0U;
	static int8_t x39 = INT8_MAX;
	int8_t x40 = 4;

	t9 = (x37+((x38-x39)/x40));

	if (t9 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x47 = 32767856075112692LLU;

	t10 = (x45+((x46-x47)/x48));

	if (t10 != 32768LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = 0U;
	int8_t x50 = INT8_MIN;
	int64_t x51 = -98236468875LL;
	volatile int8_t x52 = -1;

	t11 = (x49+((x50-x51)/x52));

	if (t11 != -98236468747LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint32_t x53 = 396026U;
	uint64_t x54 = 42390261LLU;
	uint64_t x55 = UINT64_MAX;
	volatile int64_t x56 = INT64_MAX;

	t12 = (x53+((x54-x55)/x56));

	if (t12 != 396026LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = 13U;
	uint16_t x58 = 14520U;
	int32_t x59 = -3627369;
	static int32_t x60 = INT32_MIN;
	volatile int32_t t13 = 28829727;

	t13 = (x57+((x58-x59)/x60));

	if (t13 != 13) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x63 = 2636052818565920368LL;
	uint64_t x64 = 1LLU;
	uint64_t t14 = 242LLU;

	t14 = (x61+((x62-x63)/x64));

	if (t14 != 15810691255143631387LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = INT64_MIN;
	volatile int16_t x66 = -1;
	static uint8_t x67 = UINT8_MAX;
	static int64_t x68 = -3225985LL;
	int64_t t15 = INT64_MIN;

	t15 = (x65+((x66-x67)/x68));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x69 = 281068219824690392LLU;
	uint64_t x70 = 1LLU;
	static int16_t x72 = -1582;
	uint64_t t16 = 45739392739551LLU;

	t16 = (x69+((x70-x71)/x72));

	if (t16 != 281068219824690392LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = -88373337;
	int8_t x74 = 7;
	int64_t x76 = INT64_MAX;
	volatile int64_t t17 = -10744LL;

	t17 = (x73+((x74-x75)/x76));

	if (t17 != -88373337LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x77 = 3771001U;
	static int16_t x78 = -1;
	static int32_t x80 = -1;
	volatile uint32_t t18 = 93U;

	t18 = (x77+((x78-x79)/x80));

	if (t18 != 3768455U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = 1158;
	int8_t x82 = INT8_MAX;
	uint32_t x83 = 29U;
	int32_t x84 = INT32_MAX;
	volatile uint32_t t19 = 71034U;

	t19 = (x81+((x82-x83)/x84));

	if (t19 != 1158U) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x85 = 8098LLU;
	int16_t x86 = INT16_MIN;
	static int16_t x87 = INT16_MIN;
	static int32_t x88 = INT32_MIN;
	volatile uint64_t t20 = 2253279LLU;

	t20 = (x85+((x86-x87)/x88));

	if (t20 != 8098LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint32_t x93 = 15U;
	static uint32_t x94 = 2U;
	int16_t x95 = INT16_MIN;
	uint32_t t21 = 1120463U;

	t21 = (x93+((x94-x95)/x96));

	if (t21 != 15U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = 203;
	int64_t x98 = -505964838981828368LL;
	int16_t x99 = INT16_MIN;
	static volatile uint16_t x100 = 3457U;
	int64_t t22 = 118257LL;

	t22 = (x97+((x98-x99)/x100));

	if (t22 != -146359513734768LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x106 = INT32_MAX;
	static volatile uint32_t x107 = 1221406U;
	static int64_t x108 = INT64_MAX;
	int64_t t23 = 541371399LL;

	t23 = (x105+((x106-x107)/x108));

	if (t23 != 22LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x109 = INT64_MAX;
	int16_t x110 = INT16_MAX;
	static volatile int8_t x112 = INT8_MIN;
	int64_t t24 = 103256254107LL;

	t24 = (x109+((x110-x111)/x112));

	if (t24 != 9223372036854775551LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x118 = -118161781LL;
	uint64_t x119 = 2342902104490093LLU;
	volatile int64_t x120 = INT64_MIN;
	static uint64_t t25 = 0LLU;

	t25 = (x117+((x118-x119)/x120));

	if (t25 != 48LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x121 = 2U;
	static int32_t x123 = INT32_MIN;
	uint32_t x124 = 1418U;

	t26 = (x121+((x122-x123)/x124));

	if (t26 != 1514447U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x126 = -15;
	int16_t x127 = -1;
	static int64_t t27 = 531LL;

	t27 = (x125+((x126-x127)/x128));

	if (t27 != 255LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x130 = INT64_MIN;
	static volatile int64_t x131 = INT64_MIN;
	int32_t x132 = INT32_MAX;
	int64_t t28 = -1073717722082556LL;

	t28 = (x129+((x130-x131)/x132));

	if (t28 != 594836LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x133 = 3;
	int16_t x134 = INT16_MAX;
	int8_t x135 = -1;
	int16_t x136 = -1;

	t29 = (x133+((x134-x135)/x136));

	if (t29 != -32765) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x137 = INT16_MIN;
	int64_t x138 = -1LL;
	int32_t x139 = 116049395;
	int64_t t30 = -243661336663897LL;

	t30 = (x137+((x138-x139)/x140));

	if (t30 != -34538LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x142 = INT16_MAX;
	int8_t x143 = INT8_MAX;
	uint32_t x144 = 8115U;
	uint32_t t31 = 674U;

	t31 = (x141+((x142-x143)/x144));

	if (t31 != 16U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x145 = INT16_MAX;
	int8_t x146 = INT8_MAX;
	uint64_t x148 = UINT64_MAX;
	static uint64_t t32 = 40LLU;

	t32 = (x145+((x146-x147)/x148));

	if (t32 != 32767LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x150 = 104;
	int64_t x151 = -1LL;
	int16_t x152 = INT16_MIN;
	static volatile int64_t t33 = 649302806589463256LL;

	t33 = (x149+((x150-x151)/x152));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x153 = -65;
	volatile uint32_t x155 = 192953410U;
	int16_t x156 = INT16_MIN;
	volatile uint32_t t34 = 92305840U;

	t34 = (x153+((x154-x155)/x156));

	if (t34 != 4294967231U) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x157 = -1LL;
	static int16_t x158 = 11;
	uint8_t x159 = 4U;
	uint16_t x160 = UINT16_MAX;

	t35 = (x157+((x158-x159)/x160));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x162 = UINT16_MAX;
	static volatile int32_t x163 = -1127295;
	uint16_t x164 = 950U;
	volatile int64_t t36 = 3989866613482872LL;

	t36 = (x161+((x162-x163)/x164));

	if (t36 != -9223372036854774553LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x165 = -1;
	int64_t x168 = INT64_MIN;
	volatile int64_t t37 = -42579314LL;

	t37 = (x165+((x166-x167)/x168));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x173 = -1;
	int8_t x175 = INT8_MAX;

	t38 = (x173+((x174-x175)/x176));

	if (t38 != 150567LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x177 = INT64_MIN;
	uint8_t x178 = UINT8_MAX;
	int8_t x179 = -47;
	uint32_t x180 = 117U;
	volatile int64_t t39 = -450550869826LL;

	t39 = (x177+((x178-x179)/x180));

	if (t39 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x181 = UINT64_MAX;
	volatile int64_t x182 = -1LL;
	int16_t x183 = INT16_MAX;
	int64_t x184 = -1LL;

	t40 = (x181+((x182-x183)/x184));

	if (t40 != 32767LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x185 = -1LL;
	int64_t x186 = -1LL;

	t41 = (x185+((x186-x187)/x188));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x189 = INT32_MAX;
	int64_t x190 = -1LL;
	int16_t x191 = -1;
	volatile int64_t t42 = -40978344206LL;

	t42 = (x189+((x190-x191)/x192));

	if (t42 != 2147483647LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x194 = -1;
	int32_t x195 = 14684403;
	int64_t x196 = 9LL;
	volatile int64_t t43 = 3013111LL;

	t43 = (x193+((x194-x195)/x196));

	if (t43 != -1566065LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x197 = INT16_MIN;
	volatile uint16_t x198 = UINT16_MAX;
	int64_t x199 = INT64_MAX;
	uint32_t x200 = 5721U;
	static volatile int64_t t44 = 0LL;

	t44 = (x197+((x198-x199)/x200));

	if (t44 != -1612195776445057LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x201 = INT32_MIN;
	int32_t x202 = -17019;
	uint64_t x203 = 3LLU;
	int64_t x204 = INT64_MAX;
	uint64_t t45 = 159569678LLU;

	t45 = (x201+((x202-x203)/x204));

	if (t45 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x205 = INT64_MIN;
	uint8_t x206 = 5U;
	static volatile int32_t x207 = -1;
	uint64_t x208 = 231379LLU;
	uint64_t t46 = 38LLU;

	t46 = (x205+((x206-x207)/x208));

	if (t46 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x209 = -1;
	uint32_t x211 = UINT32_MAX;
	volatile uint32_t t47 = UINT32_MAX;

	t47 = (x209+((x210-x211)/x212));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x217 = 25U;
	uint8_t x218 = 1U;
	uint32_t x219 = 169897U;

	t48 = (x217+((x218-x219)/x220));

	if (t48 != 25LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x221 = -29LL;
	volatile int16_t x222 = 1;
	int8_t x224 = -1;
	int64_t t49 = -642735LL;

	t49 = (x221+((x222-x223)/x224));

	if (t49 != 6047LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x225 = 62;
	int16_t x226 = INT16_MIN;
	int16_t x227 = 3541;
	int8_t x228 = 14;
	int32_t t50 = 127274726;

	t50 = (x225+((x226-x227)/x228));

	if (t50 != -2531) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x229 = 0U;
	int8_t x231 = -14;
	volatile uint64_t x232 = UINT64_MAX;
	uint64_t t51 = 702288812768460LLU;

	t51 = (x229+((x230-x231)/x232));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x233 = INT16_MIN;
	int32_t x234 = 2863;
	volatile int64_t x235 = 6LL;
	uint64_t x236 = UINT64_MAX;
	volatile uint64_t t52 = 30669228272303683LLU;

	t52 = (x233+((x234-x235)/x236));

	if (t52 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x237 = INT32_MIN;
	uint8_t x238 = 0U;
	static int8_t x239 = 8;
	static uint32_t x240 = UINT32_MAX;
	volatile uint32_t t53 = 7U;

	t53 = (x237+((x238-x239)/x240));

	if (t53 != 2147483648U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x241 = UINT16_MAX;
	volatile int16_t x242 = -11339;
	volatile uint16_t x243 = 8254U;
	uint64_t x244 = 244976774018LLU;
	uint64_t t54 = 812867530523LLU;

	t54 = (x241+((x242-x243)/x244));

	if (t54 != 75365506LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x246 = -2;
	uint8_t x248 = UINT8_MAX;
	volatile int32_t t55 = -673092;

	t55 = (x245+((x246-x247)/x248));

	if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x249 = 320209;
	int8_t x250 = -8;
	uint8_t x251 = UINT8_MAX;
	static int8_t x252 = INT8_MIN;
	volatile int32_t t56 = -3102;

	t56 = (x249+((x250-x251)/x252));

	if (t56 != 320211) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x253 = 2093086306389338LLU;
	int64_t x254 = 252379LL;
	uint8_t x255 = UINT8_MAX;

	t57 = (x253+((x254-x255)/x256));

	if (t57 != 2093086306389338LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x257 = 4192563732508659LLU;
	uint8_t x258 = UINT8_MAX;
	uint32_t x259 = 5810508U;
	int8_t x260 = INT8_MIN;

	t58 = (x257+((x258-x259)/x260));

	if (t58 != 4192563732508659LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x261 = UINT8_MAX;
	int16_t x263 = -1;
	int64_t x264 = INT64_MIN;
	volatile int64_t t59 = -2441488024LL;

	t59 = (x261+((x262-x263)/x264));

	if (t59 != 255LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x265 = INT8_MIN;
	static int8_t x266 = INT8_MIN;
	volatile int16_t x268 = INT16_MIN;
	static volatile int64_t t60 = 308193614424592LL;

	t60 = (x265+((x266-x267)/x268));

	if (t60 != -128LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x269 = -1;
	uint8_t x271 = 26U;
	volatile uint64_t x272 = UINT64_MAX;
	volatile uint64_t t61 = UINT64_MAX;

	t61 = (x269+((x270-x271)/x272));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x273 = INT16_MIN;
	volatile int64_t x274 = -179LL;
	uint64_t x275 = 1349572157293323LLU;
	volatile int64_t x276 = -1LL;
	uint64_t t62 = 789LLU;

	t62 = (x273+((x274-x275)/x276));

	if (t62 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x277 = 107728383LLU;
	int64_t x278 = -1LL;
	uint64_t t63 = 5LLU;

	t63 = (x277+((x278-x279)/x280));

	if (t63 != 107728390LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x281 = UINT64_MAX;
	int64_t x282 = INT64_MIN;
	int32_t x283 = INT32_MIN;
	static uint64_t x284 = 537647426159899006LLU;
	volatile uint64_t t64 = 9939484LLU;

	t64 = (x281+((x282-x283)/x284));

	if (t64 != 16LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x290 = 6339059255LL;
	uint32_t x291 = UINT32_MAX;
	int64_t t65 = -48816321999LL;

	t65 = (x289+((x290-x291)/x292));

	if (t65 != -2044092012LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint64_t x297 = 1143649000518LLU;
	uint32_t x298 = 46U;
	static int32_t x299 = INT32_MIN;
	uint64_t t66 = 1036294LLU;

	t66 = (x297+((x298-x299)/x300));

	if (t66 != 1143649000518LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x301 = INT64_MAX;
	int32_t x303 = -316;
	static uint32_t x304 = UINT32_MAX;
	volatile int64_t t67 = INT64_MAX;

	t67 = (x301+((x302-x303)/x304));

	if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x305 = 52U;
	uint64_t x306 = UINT64_MAX;
	static int8_t x307 = -9;
	uint64_t x308 = UINT64_MAX;

	t68 = (x305+((x306-x307)/x308));

	if (t68 != 52LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x309 = -1;
	static volatile int16_t x310 = 577;
	int64_t x312 = -113549975LL;
	static int64_t t69 = 13794901103LL;

	t69 = (x309+((x310-x311)/x312));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x313 = INT16_MAX;
	int16_t x314 = -182;
	int8_t x315 = INT8_MAX;
	int8_t x316 = INT8_MIN;
	static volatile int32_t t70 = 40857;

	t70 = (x313+((x314-x315)/x316));

	if (t70 != 32769) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x317 = INT32_MIN;
	int8_t x318 = -1;
	volatile int8_t x319 = INT8_MIN;
	volatile uint64_t t71 = 136643LLU;

	t71 = (x317+((x318-x319)/x320));

	if (t71 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x329 = -229289368;
	uint64_t x330 = UINT64_MAX;
	uint64_t x332 = 13387LLU;
	volatile uint64_t t72 = 3120404742177474179LLU;

	t72 = (x329+((x330-x331)/x332));

	if (t72 != 1377959289177021LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x334 = UINT64_MAX;
	static int32_t x335 = INT32_MAX;
	volatile int16_t x336 = INT16_MIN;
	uint64_t t73 = 177200LLU;

	t73 = (x333+((x334-x335)/x336));

	if (t73 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x337 = INT32_MIN;
	int8_t x338 = INT8_MIN;
	uint32_t x339 = UINT32_MAX;
	volatile int16_t x340 = INT16_MIN;
	volatile uint32_t t74 = 4390380U;

	t74 = (x337+((x338-x339)/x340));

	if (t74 != 2147483649U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x341 = UINT8_MAX;
	int64_t x343 = -1LL;
	int16_t x344 = -1;
	volatile int64_t t75 = -1316579482744983542LL;

	t75 = (x341+((x342-x343)/x344));

	if (t75 != 245LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x345 = 0U;
	int64_t x346 = -2743256203LL;
	uint64_t x348 = 1158461542LLU;

	t76 = (x345+((x346-x347)/x348));

	if (t76 != 15923484211LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x350 = 2U;
	uint8_t x351 = 0U;
	uint8_t x352 = UINT8_MAX;
	static volatile int32_t t77 = -1;

	t77 = (x349+((x350-x351)/x352));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x354 = -1;
	uint64_t x355 = UINT64_MAX;
	volatile uint16_t x356 = 5741U;
	uint64_t t78 = 8147313LLU;

	t78 = (x353+((x354-x355)/x356));

	if (t78 != 2147483647LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x357 = -31413613442503LL;
	volatile int64_t x358 = 243197956792093088LL;
	static volatile int64_t x360 = -1LL;
	static volatile int64_t t79 = 3268876341751750LL;

	t79 = (x357+((x358-x359)/x360));

	if (t79 != -243229370405535592LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x361 = INT16_MAX;
	int16_t x363 = 0;
	uint8_t x364 = 32U;
	int32_t t80 = -42001609;

	t80 = (x361+((x362-x363)/x364));

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x365 = 687020LL;
	int16_t x367 = INT16_MIN;
	static uint64_t t81 = 137009LLU;

	t81 = (x365+((x366-x367)/x368));

	if (t81 != 687020LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int8_t x370 = INT8_MIN;
	int64_t x371 = INT64_MIN;
	static int16_t x372 = INT16_MIN;

	t82 = (x369+((x370-x371)/x372));

	if (t82 != -281474976710656LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x373 = 3204U;
	uint32_t x374 = 277987U;
	int16_t x375 = -1;
	int32_t x376 = INT32_MIN;
	volatile uint32_t t83 = 388892462U;

	t83 = (x373+((x374-x375)/x376));

	if (t83 != 3204U) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x377 = UINT16_MAX;
	int8_t x378 = 11;
	uint32_t x379 = 3U;

	t84 = (x377+((x378-x379)/x380));

	if (t84 != 65535LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x389 = INT32_MIN;
	uint8_t x390 = 0U;
	volatile int8_t x391 = -53;
	uint8_t x392 = UINT8_MAX;
	volatile int32_t t85 = INT32_MIN;

	t85 = (x389+((x390-x391)/x392));

	if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x393 = 0U;
	static int64_t x395 = 77955670195311018LL;
	volatile int8_t x396 = INT8_MAX;
	volatile int64_t t86 = 23416043LL;

	t86 = (x393+((x394-x395)/x396));

	if (t86 != -613824174766228LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x397 = 105373629808708008LLU;
	int64_t x398 = INT64_MIN;
	int64_t x399 = INT64_MIN;
	int32_t x400 = -22680;

	t87 = (x397+((x398-x399)/x400));

	if (t87 != 105373629808708008LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x409 = 15738408U;
	static int32_t x412 = INT32_MAX;
	volatile uint32_t t88 = 7449323U;

	t88 = (x409+((x410-x411)/x412));

	if (t88 != 15738408U) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x417 = 1U;
	volatile uint32_t x418 = 83396888U;
	uint8_t x420 = 38U;
	volatile uint32_t t89 = 145389U;

	t89 = (x417+((x418-x419)/x420));

	if (t89 != 2194655U) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x421 = 3874;
	int8_t x422 = -39;
	uint32_t x423 = UINT32_MAX;
	int64_t x424 = 13500944747801LL;
	volatile int64_t t90 = -84481224036233LL;

	t90 = (x421+((x422-x423)/x424));

	if (t90 != 3874LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x425 = INT32_MIN;
	int8_t x426 = INT8_MIN;
	int8_t x427 = INT8_MIN;
	volatile int16_t x428 = INT16_MIN;
	int32_t t91 = INT32_MIN;

	t91 = (x425+((x426-x427)/x428));

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x429 = 0U;
	int16_t x430 = INT16_MAX;
	int64_t x432 = -1LL;

	t92 = (x429+((x430-x431)/x432));

	if (t92 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x434 = INT16_MAX;
	volatile int8_t x435 = -27;
	uint16_t x436 = 17045U;
	volatile int64_t t93 = -4068LL;

	t93 = (x433+((x434-x435)/x436));

	if (t93 != -673901080640790281LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x437 = INT8_MAX;
	volatile uint8_t x438 = 62U;
	uint32_t x439 = 2146643615U;
	int8_t x440 = -1;
	uint32_t t94 = 540612U;

	t94 = (x437+((x438-x439)/x440));

	if (t94 != 127U) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x445 = INT32_MAX;
	static uint64_t x446 = UINT64_MAX;
	static int64_t x448 = INT64_MIN;
	static volatile uint64_t t95 = 38574660859062600LLU;

	t95 = (x445+((x446-x447)/x448));

	if (t95 != 2147483647LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x449 = UINT16_MAX;
	int64_t x452 = -870806167244417LL;
	int64_t t96 = 241722922982LL;

	t96 = (x449+((x450-x451)/x452));

	if (t96 != 65535LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x453 = UINT16_MAX;
	static int64_t x454 = INT64_MIN;
	volatile uint64_t t97 = 3969279834920616679LLU;

	t97 = (x453+((x454-x455)/x456));

	if (t97 != 65535LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x457 = INT8_MAX;
	int64_t x458 = 125406075LL;
	int16_t x459 = INT16_MIN;
	int32_t x460 = INT32_MIN;
	volatile int64_t t98 = 1536418895503425LL;

	t98 = (x457+((x458-x459)/x460));

	if (t98 != 127LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x461 = 1867896LLU;
	static uint32_t x462 = UINT32_MAX;
	int64_t x463 = INT64_MAX;
	int32_t x464 = -1;
	volatile uint64_t t99 = 1648097911134630LLU;

	t99 = (x461+((x462-x463)/x464));

	if (t99 != 9223372032561676408LLU) { NG(); } else { ; }
	
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

