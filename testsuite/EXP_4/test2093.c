#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t0 = 389732LL;
uint8_t x6 = 23U;
static int16_t x22 = 3803;
int8_t x29 = INT8_MIN;
uint16_t x31 = 13946U;
int8_t x32 = -1;
uint64_t x33 = 2072177731309LLU;
static int32_t x36 = INT32_MAX;
int32_t x44 = INT32_MIN;
int16_t x51 = 13;
uint32_t x56 = UINT32_MAX;
int16_t x57 = -1;
static int64_t x59 = INT64_MIN;
int64_t t14 = 5790748124LL;
static int64_t x65 = INT64_MAX;
int8_t x73 = INT8_MIN;
int16_t x76 = 0;
uint64_t t18 = 2038883LLU;
uint32_t x77 = 16142624U;
uint32_t t19 = 2812114U;
int8_t x84 = INT8_MIN;
volatile int64_t t22 = 257360736574613LL;
uint64_t t23 = 8161497526943946534LLU;
int32_t x98 = INT32_MIN;
int64_t t24 = 246958035737323LL;
int64_t x101 = INT64_MIN;
volatile int32_t x105 = INT32_MAX;
int64_t x107 = -32508LL;
volatile uint16_t x113 = UINT16_MAX;
static volatile int64_t x127 = INT64_MIN;
int64_t x129 = INT64_MIN;
int8_t x140 = INT8_MIN;
static volatile int64_t x151 = INT64_MIN;
volatile uint8_t x154 = UINT8_MAX;
volatile uint64_t t38 = 4520900429962LLU;
int32_t x165 = -15483069;
static int16_t x167 = -1;
volatile int8_t x168 = INT8_MAX;
uint64_t x169 = 2015420670227LLU;
int8_t x171 = INT8_MIN;
volatile uint64_t t42 = 182LLU;
volatile int32_t x185 = INT32_MIN;
int64_t x187 = INT64_MIN;
volatile uint32_t x200 = 3U;
int8_t x204 = -1;
volatile uint64_t t50 = 37468574LLU;
int16_t x206 = INT16_MIN;
static uint64_t t51 = 127768365487LLU;
uint16_t x210 = 36U;
int16_t x214 = 14;
int32_t x216 = -1;
volatile int32_t t53 = -156166;
uint32_t x218 = 0U;
static int64_t t54 = -153LL;
int64_t x236 = INT64_MIN;
static int64_t t58 = -32105LL;
int8_t x239 = -1;
int8_t x245 = -33;
int64_t x247 = INT64_MAX;
int64_t t61 = 34182640984LL;
volatile int64_t x251 = INT64_MIN;
uint32_t x253 = UINT32_MAX;
int8_t x254 = 10;
int64_t x258 = 1166342659427180533LL;
int64_t x269 = -81795236LL;
int32_t x270 = -1;
uint16_t x275 = UINT16_MAX;
volatile int32_t t68 = 41;
static volatile uint64_t t69 = 67853620060274LLU;
uint16_t x287 = 70U;
volatile uint32_t x296 = UINT32_MAX;
uint32_t x298 = 87503U;
volatile uint32_t t74 = 880U;
volatile uint8_t x306 = 25U;
volatile int32_t x307 = -1;
volatile int64_t t76 = 122936519LL;
static int16_t x315 = 119;
volatile uint8_t x325 = 68U;
volatile int32_t x334 = -2639428;
static int8_t x335 = INT8_MIN;
uint64_t x344 = 2750LLU;
int32_t x346 = INT32_MIN;
volatile uint32_t x351 = 21196898U;
int32_t x353 = INT32_MIN;
int16_t x355 = -381;
int32_t x356 = 16739821;
int64_t x360 = INT64_MIN;
int32_t x361 = INT32_MAX;
uint32_t x367 = 3386735U;
int64_t x372 = INT64_MIN;
volatile int64_t x375 = -1LL;
volatile int16_t x381 = -3;
static uint32_t t95 = 0U;
int16_t x386 = -1;
volatile uint32_t t97 = 16578767U;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int64_t x2 = INT64_MIN;
	int8_t x3 = INT8_MIN;
	int32_t x4 = 10535489;

	t0 = (x1^(x2%(x3^x4)));

	if (t0 != 8855895LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 3283190803101LLU;
	int32_t x7 = INT32_MAX;
	int16_t x8 = 423;
	volatile uint64_t t1 = 576LLU;

	t1 = (x5^(x6%(x7^x8)));

	if (t1 != 3283190803082LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	volatile int16_t x10 = INT16_MIN;
	int8_t x11 = -1;
	int8_t x12 = INT8_MAX;
	volatile int32_t t2 = INT32_MAX;

	t2 = (x9^(x10%(x11^x12)));

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 5;
	int32_t x14 = -1765176;
	int32_t x15 = -1;
	volatile uint16_t x16 = UINT16_MAX;
	int32_t t3 = -226;

	t3 = (x13^(x14%(x15^x16)));

	if (t3 != -61235) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x17 = 45U;
	int64_t x18 = -1059LL;
	int8_t x19 = INT8_MIN;
	int32_t x20 = 113524;
	static volatile int64_t t4 = 1177200324736881LL;

	t4 = (x17^(x18%(x19^x20)));

	if (t4 != -1040LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	static int8_t x23 = INT8_MAX;
	int8_t x24 = 1;
	volatile int64_t t5 = 8937916108979788LL;

	t5 = (x21^(x22%(x23^x24)));

	if (t5 != 9223372036854775784LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 821325;
	int8_t x26 = -2;
	uint16_t x27 = 29U;
	int8_t x28 = -1;
	volatile int32_t t6 = 928;

	t6 = (x25^(x26%(x27^x28)));

	if (t6 != -821325) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x30 = INT32_MAX;
	int32_t t7 = -9942;

	t7 = (x29^(x30%(x31^x32)));

	if (t7 != -8243) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x34 = 1633711U;
	int16_t x35 = INT16_MIN;
	uint64_t t8 = 12702LLU;

	t8 = (x33^(x34%(x35^x36)));

	if (t8 != 2072178199362LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -60;
	uint8_t x38 = 1U;
	static uint8_t x39 = UINT8_MAX;
	int64_t x40 = INT64_MIN;
	static int64_t t9 = -147530036LL;

	t9 = (x37^(x38%(x39^x40)));

	if (t9 != -59LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x41 = 10U;
	volatile uint16_t x42 = 165U;
	int16_t x43 = -1;
	volatile int32_t t10 = 146;

	t10 = (x41^(x42%(x43^x44)));

	if (t10 != 175) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = -1;
	static int8_t x46 = -1;
	int64_t x47 = -472270LL;
	int16_t x48 = INT16_MIN;
	static int64_t t11 = -135109942LL;

	t11 = (x45^(x46%(x47^x48)));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = 886;
	uint8_t x50 = 51U;
	static uint16_t x52 = 1U;
	int32_t t12 = -1822;

	t12 = (x49^(x50%(x51^x52)));

	if (t12 != 885) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 923620661U;
	static int64_t x54 = 0LL;
	static uint8_t x55 = 1U;
	static volatile int64_t t13 = 30889556LL;

	t13 = (x53^(x54%(x55^x56)));

	if (t13 != 923620661LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x58 = 1U;
	uint8_t x60 = 6U;

	t14 = (x57^(x58%(x59^x60)));

	if (t14 != -2LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	int64_t x62 = 177841LL;
	volatile int32_t x63 = -1;
	int64_t x64 = INT64_MIN;
	int64_t t15 = 2419604543765LL;

	t15 = (x61^(x62%(x63^x64)));

	if (t15 != -2147305807LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x66 = INT8_MIN;
	int32_t x67 = 40;
	static int64_t x68 = -783583302LL;
	int64_t t16 = -149447591371682821LL;

	t16 = (x65^(x66%(x67^x68)));

	if (t16 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	uint64_t x70 = 628910801LLU;
	int64_t x71 = INT64_MIN;
	int32_t x72 = INT32_MAX;
	volatile uint64_t t17 = 2114289650345LLU;

	t17 = (x69^(x70%(x71^x72)));

	if (t17 != 18446744073080640849LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x74 = 659264LLU;
	static int64_t x75 = -1LL;

	t18 = (x73^(x74%(x75^x76)));

	if (t18 != 18446744073708892352LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x78 = -5;
	int32_t x79 = INT32_MAX;
	int32_t x80 = 135719879;

	t19 = (x77^(x78%(x79^x80)));

	if (t19 != 4278824667U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -1;
	int8_t x82 = -60;
	int8_t x83 = 15;
	volatile int32_t t20 = -2503714;

	t20 = (x81^(x82%(x83^x84)));

	if (t20 != 59) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x85 = 79U;
	uint16_t x86 = 1U;
	int32_t x87 = INT32_MAX;
	int32_t x88 = INT32_MIN;
	static volatile int32_t t21 = 182136;

	t21 = (x85^(x86%(x87^x88)));

	if (t21 != 79) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = -2;
	int32_t x90 = INT32_MIN;
	int64_t x91 = INT64_MIN;
	int16_t x92 = INT16_MAX;

	t22 = (x89^(x90%(x91^x92)));

	if (t22 != 2147483646LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 79U;
	int16_t x94 = INT16_MAX;
	int16_t x95 = -1;
	static uint64_t x96 = 283201587777LLU;

	t23 = (x93^(x94%(x95^x96)));

	if (t23 != 32688LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = INT16_MAX;
	int64_t x99 = 247571LL;
	int16_t x100 = INT16_MAX;

	t24 = (x97^(x98%(x99^x100)));

	if (t24 != -23365LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x102 = -1;
	int64_t x103 = 2126712487256726LL;
	int64_t x104 = 64799LL;
	volatile int64_t t25 = INT64_MAX;

	t25 = (x101^(x102%(x103^x104)));

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x106 = 4U;
	uint8_t x108 = 0U;
	int64_t t26 = -635LL;

	t26 = (x105^(x106%(x107^x108)));

	if (t26 != 2147483643LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = -1;
	uint64_t x110 = UINT64_MAX;
	static uint16_t x111 = 2112U;
	volatile int16_t x112 = -456;
	volatile uint64_t t27 = 96LLU;

	t27 = (x109^(x110%(x111^x112)));

	if (t27 != 18446744073709549176LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x114 = -1;
	static int64_t x115 = 498021839636023LL;
	volatile int32_t x116 = INT32_MIN;
	volatile int64_t t28 = -48448LL;

	t28 = (x113^(x114%(x115^x116)));

	if (t28 != -65536LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = 7;
	uint16_t x118 = 4723U;
	uint16_t x119 = UINT16_MAX;
	uint32_t x120 = UINT32_MAX;
	uint32_t t29 = 148U;

	t29 = (x117^(x118%(x119^x120)));

	if (t29 != 4724U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = -99;
	uint16_t x122 = 1673U;
	static uint16_t x123 = 21U;
	volatile int16_t x124 = INT16_MIN;
	int32_t t30 = 66207806;

	t30 = (x121^(x122%(x123^x124)));

	if (t30 != -1772) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x125 = 16637367LLU;
	volatile int64_t x126 = INT64_MIN;
	uint64_t x128 = 64208918041353106LLU;
	volatile uint64_t t31 = 320677189353LLU;

	t31 = (x125^(x126%(x127^x128)));

	if (t31 != 9223372036871413175LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x130 = INT32_MAX;
	int32_t x131 = INT32_MIN;
	int64_t x132 = INT64_MAX;
	volatile int64_t t32 = -4LL;

	t32 = (x129^(x130%(x131^x132)));

	if (t32 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -53LL;
	int16_t x134 = -757;
	int8_t x135 = -1;
	volatile int64_t x136 = -1448223LL;
	static volatile int64_t t33 = -114566767395LL;

	t33 = (x133^(x134%(x135^x136)));

	if (t33 != 704LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -1;
	int8_t x138 = INT8_MAX;
	uint32_t x139 = UINT32_MAX;
	uint32_t t34 = UINT32_MAX;

	t34 = (x137^(x138%(x139^x140)));

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = INT64_MIN;
	volatile int8_t x142 = INT8_MIN;
	int64_t x143 = INT64_MAX;
	int8_t x144 = 28;
	int64_t t35 = -2616740183635300LL;

	t35 = (x141^(x142%(x143^x144)));

	if (t35 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = 11;
	int64_t x146 = 522011666LL;
	static int16_t x147 = INT16_MAX;
	int64_t x148 = INT64_MIN;
	volatile int64_t t36 = -286753644LL;

	t36 = (x145^(x146%(x147^x148)));

	if (t36 != 522011673LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x149 = INT64_MIN;
	int64_t x150 = -359952472LL;
	uint64_t x152 = 7929232LLU;
	static uint64_t t37 = 79264252462LLU;

	t37 = (x149^(x150%(x151^x152)));

	if (t37 != 18446744073341669912LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 7LLU;
	int32_t x155 = 7;
	int64_t x156 = INT64_MAX;

	t38 = (x153^(x154%(x155^x156)));

	if (t38 != 248LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x157 = INT8_MAX;
	static uint16_t x158 = UINT16_MAX;
	int32_t x159 = -452362164;
	volatile int64_t x160 = INT64_MIN;
	volatile int64_t t39 = -54780661LL;

	t39 = (x157^(x158%(x159^x160)));

	if (t39 != 65408LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x161 = UINT32_MAX;
	int32_t x162 = INT32_MIN;
	int64_t x163 = INT64_MIN;
	int8_t x164 = INT8_MIN;
	volatile int64_t t40 = 175LL;

	t40 = (x161^(x162%(x163^x164)));

	if (t40 != -2147483649LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x166 = INT16_MAX;
	int32_t t41 = 764496;

	t41 = (x165^(x166%(x167^x168)));

	if (t41 != -15483076) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x170 = -95;
	uint32_t x172 = 13647851U;

	t42 = (x169^(x170%(x171^x172)));

	if (t42 != 2015425912357LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MIN;
	static int64_t x174 = INT64_MIN;
	static int32_t x175 = -1;
	static int16_t x176 = 0;
	volatile int64_t t43 = -498751LL;

	t43 = (x173^(x174%(x175^x176)));

	if (t43 != -2147483648LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x177 = INT8_MAX;
	int8_t x178 = -10;
	volatile int64_t x179 = 45193258436353014LL;
	uint16_t x180 = UINT16_MAX;
	static int64_t t44 = 52539942435980562LL;

	t44 = (x177^(x178%(x179^x180)));

	if (t44 != -119LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MIN;
	static int8_t x182 = INT8_MIN;
	int32_t x183 = INT32_MIN;
	volatile int16_t x184 = -1;
	volatile int32_t t45 = -657;

	t45 = (x181^(x182%(x183^x184)));

	if (t45 != 2147483520) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x186 = 322267726858901LLU;
	static uint64_t x188 = 7764215306424LLU;
	uint64_t t46 = 3289800LLU;

	t46 = (x185^(x186%(x187^x188)));

	if (t46 != 18446421806431718037LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x189 = UINT32_MAX;
	uint16_t x190 = 9U;
	static uint16_t x191 = UINT16_MAX;
	uint8_t x192 = 2U;
	volatile uint32_t t47 = 30027U;

	t47 = (x189^(x190%(x191^x192)));

	if (t47 != 4294967286U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = 894;
	volatile int16_t x194 = -2661;
	uint8_t x195 = 39U;
	static volatile int64_t x196 = INT64_MIN;
	volatile int64_t t48 = 1179167147619LL;

	t48 = (x193^(x194%(x195^x196)));

	if (t48 != -2331LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x197 = 6189;
	int8_t x198 = INT8_MAX;
	uint8_t x199 = 7U;
	volatile uint32_t t49 = 28U;

	t49 = (x197^(x198%(x199^x200)));

	if (t49 != 6190U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MIN;
	static volatile uint64_t x202 = UINT64_MAX;
	volatile int16_t x203 = INT16_MIN;

	t50 = (x201^(x202%(x203^x204)));

	if (t50 != 9223372036854775823LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 4889821265594236447LLU;
	volatile int8_t x207 = INT8_MAX;
	volatile int8_t x208 = -25;

	t51 = (x205^(x206%(x207^x208)));

	if (t51 != 13556922808115315175LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -214;
	uint32_t x211 = 1U;
	uint8_t x212 = 64U;
	uint32_t t52 = 40U;

	t52 = (x209^(x210%(x211^x212)));

	if (t52 != 4294967054U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x213 = INT16_MIN;
	uint8_t x215 = 88U;

	t53 = (x213^(x214%(x215^x216)));

	if (t53 != -32754) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = UINT32_MAX;
	int64_t x219 = INT64_MIN;
	int16_t x220 = 0;

	t54 = (x217^(x218%(x219^x220)));

	if (t54 != 4294967295LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x221 = 23U;
	volatile uint64_t x222 = UINT64_MAX;
	int16_t x223 = -1301;
	static int16_t x224 = INT16_MIN;
	volatile uint64_t t55 = 1545857LLU;

	t55 = (x221^(x222%(x223^x224)));

	if (t55 != 5189LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MAX;
	int32_t x226 = 307;
	static volatile uint16_t x227 = 14U;
	uint8_t x228 = UINT8_MAX;
	int32_t t56 = -43737;

	t56 = (x225^(x226%(x227^x228)));

	if (t56 != 61) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = -4800482;
	int8_t x230 = INT8_MAX;
	uint64_t x231 = UINT64_MAX;
	int32_t x232 = INT32_MIN;
	volatile uint64_t t57 = 32377916LLU;

	t57 = (x229^(x230%(x231^x232)));

	if (t57 != 18446744073704751201LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = 5LL;
	int64_t x234 = -1LL;
	uint16_t x235 = 1041U;

	t58 = (x233^(x234%(x235^x236)));

	if (t58 != -6LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 31U;
	uint32_t x238 = 265U;
	int8_t x240 = -2;
	volatile uint32_t t59 = 1254461U;

	t59 = (x237^(x238%(x239^x240)));

	if (t59 != 31U) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x241 = 5;
	int64_t x242 = -391LL;
	uint16_t x243 = UINT16_MAX;
	uint64_t x244 = 227762746790072961LLU;
	uint64_t t60 = 1935382765424LLU;

	t60 = (x241^(x242%(x243^x244)));

	if (t60 != 225724330501850908LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x246 = -1;
	volatile int8_t x248 = INT8_MAX;

	t61 = (x245^(x246%(x247^x248)));

	if (t61 != 32LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x249 = INT32_MIN;
	static volatile int8_t x250 = -20;
	uint32_t x252 = UINT32_MAX;
	int64_t t62 = -10089966235735872LL;

	t62 = (x249^(x250%(x251^x252)));

	if (t62 != 2147483628LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x255 = INT16_MIN;
	int8_t x256 = INT8_MAX;
	volatile uint32_t t63 = 6777U;

	t63 = (x253^(x254%(x255^x256)));

	if (t63 != 4294967285U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x257 = -1LL;
	int32_t x259 = -107;
	int16_t x260 = 1710;
	int64_t t64 = 5LL;

	t64 = (x257^(x258%(x259^x260)));

	if (t64 != -1140LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 2U;
	volatile int64_t x262 = -1LL;
	int16_t x263 = -1;
	static int8_t x264 = 0;
	static int64_t t65 = -746348LL;

	t65 = (x261^(x262%(x263^x264)));

	if (t65 != 2LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x265 = INT32_MIN;
	int16_t x266 = 23;
	int8_t x267 = 2;
	int32_t x268 = -1;
	int32_t t66 = 927856;

	t66 = (x265^(x266%(x267^x268)));

	if (t66 != -2147483646) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x271 = 18751720089244206LL;
	uint8_t x272 = 0U;
	volatile int64_t t67 = 922101350442100516LL;

	t67 = (x269^(x270%(x271^x272)));

	if (t67 != 81795235LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = -1;
	uint8_t x274 = 1U;
	uint16_t x276 = 23U;

	t68 = (x273^(x274%(x275^x276)));

	if (t68 != -2) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x277 = INT8_MIN;
	uint16_t x278 = 458U;
	volatile int32_t x279 = INT32_MAX;
	uint64_t x280 = UINT64_MAX;

	t69 = (x277^(x278%(x279^x280)));

	if (t69 != 18446744073709551178LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = 97440LLU;
	int32_t x282 = 84656309;
	static uint8_t x283 = UINT8_MAX;
	int16_t x284 = INT16_MAX;
	volatile uint64_t t70 = 14569256339373LLU;

	t70 = (x281^(x282%(x283^x284)));

	if (t70 != 71445LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = 50;
	volatile int32_t x286 = INT32_MIN;
	uint64_t x288 = 8LLU;
	volatile uint64_t t71 = 2937245089366172593LLU;

	t71 = (x285^(x286%(x287^x288)));

	if (t71 != 30LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x289 = UINT64_MAX;
	uint8_t x290 = 11U;
	int16_t x291 = INT16_MAX;
	static volatile uint16_t x292 = 27U;
	volatile uint64_t t72 = 58876839758LLU;

	t72 = (x289^(x290%(x291^x292)));

	if (t72 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x293 = -1;
	volatile int8_t x294 = -1;
	int32_t x295 = 0;
	static uint32_t t73 = UINT32_MAX;

	t73 = (x293^(x294%(x295^x296)));

	if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	int32_t x299 = INT32_MIN;
	int8_t x300 = 26;

	t74 = (x297^(x298%(x299^x300)));

	if (t74 != 4294879823U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = 1;
	int64_t x302 = INT64_MIN;
	uint8_t x303 = 66U;
	int64_t x304 = INT64_MIN;
	volatile int64_t t75 = 37862LL;

	t75 = (x301^(x302%(x303^x304)));

	if (t75 != -65LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MAX;
	int64_t x308 = 5631587LL;

	t76 = (x305^(x306%(x307^x308)));

	if (t76 != 102LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x309 = -47;
	uint32_t x310 = 0U;
	int8_t x311 = 0;
	uint32_t x312 = 2U;
	uint32_t t77 = 48U;

	t77 = (x309^(x310%(x311^x312)));

	if (t77 != 4294967249U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = UINT64_MAX;
	uint32_t x314 = 54U;
	int8_t x316 = -1;
	volatile uint64_t t78 = 1671789526185534LLU;

	t78 = (x313^(x314%(x315^x316)));

	if (t78 != 18446744073709551561LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MAX;
	volatile int16_t x318 = INT16_MAX;
	static int64_t x319 = INT64_MIN;
	uint64_t x320 = 11638315899598LLU;
	volatile uint64_t t79 = 192068867558LLU;

	t79 = (x317^(x318%(x319^x320)));

	if (t79 != 32640LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x321 = 12;
	int32_t x322 = -1;
	int32_t x323 = -31600;
	volatile uint8_t x324 = UINT8_MAX;
	int32_t t80 = 81322;

	t80 = (x321^(x322%(x323^x324)));

	if (t80 != -13) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x326 = UINT16_MAX;
	int8_t x327 = 17;
	static int8_t x328 = 3;
	static int32_t t81 = 550057;

	t81 = (x325^(x326%(x327^x328)));

	if (t81 != 75) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = UINT8_MAX;
	int64_t x330 = INT64_MIN;
	int16_t x331 = INT16_MAX;
	volatile uint64_t x332 = 106589598990833891LLU;
	uint64_t t82 = 259723205428722751LLU;

	t82 = (x329^(x330%(x331^x332)));

	if (t82 != 56666523641338983LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MIN;
	static int32_t x336 = INT32_MIN;
	static int64_t t83 = 492507LL;

	t83 = (x333^(x334%(x335^x336)));

	if (t83 != 9223372036852136380LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MIN;
	int8_t x338 = 4;
	uint64_t x339 = 1141894658384561898LLU;
	static int8_t x340 = INT8_MAX;
	uint64_t t84 = 2531769990212913LLU;

	t84 = (x337^(x338%(x339^x340)));

	if (t84 != 18446744073709518852LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MIN;
	static int16_t x342 = 37;
	uint16_t x343 = 5466U;
	volatile uint64_t t85 = 27385585509773525LLU;

	t85 = (x341^(x342%(x343^x344)));

	if (t85 != 18446744073709518885LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	uint16_t x347 = UINT16_MAX;
	uint64_t x348 = UINT64_MAX;
	uint64_t t86 = 229500816LLU;

	t86 = (x345^(x346%(x347^x348)));

	if (t86 != 2147450880LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 13U;
	int32_t x350 = INT32_MAX;
	int64_t x352 = -15944509454992960LL;
	volatile int64_t t87 = -39737251065LL;

	t87 = (x349^(x350%(x351^x352)));

	if (t87 != 2147483634LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x354 = 107U;
	int32_t t88 = -150626390;

	t88 = (x353^(x354%(x355^x356)));

	if (t88 != -2147483541) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = -1;
	int8_t x358 = -1;
	uint16_t x359 = 1U;
	static volatile int64_t t89 = 1901435LL;

	t89 = (x357^(x358%(x359^x360)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x362 = 5077U;
	int16_t x363 = INT16_MIN;
	int32_t x364 = -1;
	volatile uint32_t t90 = 24880460U;

	t90 = (x361^(x362%(x363^x364)));

	if (t90 != 2147478570U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x365 = INT16_MIN;
	static int8_t x366 = INT8_MIN;
	int64_t x368 = -276333600911779LL;
	volatile int64_t t91 = 382LL;

	t91 = (x365^(x366%(x367^x368)));

	if (t91 != 32640LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x369 = 1;
	uint64_t x370 = UINT64_MAX;
	int16_t x371 = -265;
	uint64_t t92 = 13717813507053927LLU;

	t92 = (x369^(x370%(x371^x372)));

	if (t92 != 528LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = 78U;
	volatile int8_t x374 = -1;
	int64_t x376 = -32721799594747LL;
	volatile int64_t t93 = 145957LL;

	t93 = (x373^(x374%(x375^x376)));

	if (t93 != -79LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = UINT32_MAX;
	int16_t x378 = INT16_MIN;
	static uint8_t x379 = 2U;
	static volatile uint32_t x380 = 2544758U;
	static volatile uint32_t t94 = 0U;

	t94 = (x377^(x378%(x379^x380)));

	if (t94 != 4293036139U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x382 = -2946;
	uint32_t x383 = UINT32_MAX;
	uint16_t x384 = 1U;

	t95 = (x381^(x382%(x383^x384)));

	if (t95 != 2947U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x385 = INT8_MAX;
	int64_t x387 = INT64_MAX;
	static volatile int64_t x388 = INT64_MIN;
	int64_t t96 = 51693LL;

	t96 = (x385^(x386%(x387^x388)));

	if (t96 != 127LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x389 = -1;
	static int8_t x390 = -22;
	uint32_t x391 = 197U;
	int8_t x392 = 0;

	t97 = (x389^(x390%(x391^x392)));

	if (t97 != 4294967229U) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x393 = INT64_MAX;
	int32_t x394 = INT32_MAX;
	volatile int32_t x395 = -1;
	static volatile int16_t x396 = 741;
	int64_t t98 = -120053448144LL;

	t98 = (x393^(x394%(x395^x396)));

	if (t98 != 9223372036854775204LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = 831593U;
	int16_t x398 = INT16_MIN;
	int16_t x399 = INT16_MIN;
	volatile int64_t x400 = INT64_MIN;
	int64_t t99 = -261LL;

	t99 = (x397^(x398%(x399^x400)));

	if (t99 != -839575LL) { NG(); } else { ; }
	
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

