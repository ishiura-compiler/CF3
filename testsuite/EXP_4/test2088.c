#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x1 = -209;
int8_t x2 = INT8_MIN;
int8_t x4 = -1;
static uint8_t x14 = UINT8_MAX;
int8_t x18 = INT8_MIN;
volatile int32_t t3 = 923044610;
volatile int8_t x22 = 0;
int32_t t5 = -114503826;
uint32_t x32 = 134035972U;
int64_t x33 = -1LL;
volatile int16_t x39 = INT16_MIN;
volatile int16_t x43 = -1;
volatile int32_t x46 = INT32_MAX;
volatile int32_t t10 = 1291;
int8_t x54 = INT8_MAX;
int32_t x61 = 31;
static int64_t x67 = INT64_MIN;
uint32_t x73 = 1363U;
int32_t x81 = INT32_MIN;
int16_t x95 = INT16_MIN;
static uint32_t x99 = 11U;
int32_t x100 = -36;
uint8_t x101 = UINT8_MAX;
int32_t x103 = -1;
int64_t x111 = -2827LL;
static int8_t x112 = INT8_MAX;
volatile int32_t t24 = 30216;
int16_t x113 = INT16_MIN;
int16_t x115 = -1;
int32_t t25 = 1;
static int64_t x121 = INT64_MIN;
volatile int32_t t27 = 1773;
uint32_t x128 = 1124U;
uint16_t x133 = 951U;
uint32_t x138 = 243U;
int32_t t31 = 8530267;
int32_t x150 = 266;
uint8_t x155 = 45U;
int32_t x158 = INT32_MIN;
uint32_t x160 = 699841U;
int8_t x162 = INT8_MIN;
int16_t x164 = -1;
int8_t x167 = INT8_MAX;
int32_t t38 = -261;
volatile int32_t t39 = -444732783;
volatile int64_t x187 = INT64_MIN;
uint8_t x188 = UINT8_MAX;
int32_t t42 = 3006;
int32_t x190 = INT32_MIN;
int16_t x200 = INT16_MIN;
volatile int32_t t45 = -105;
static volatile int32_t t46 = 0;
int64_t x206 = INT64_MIN;
int16_t x209 = -14075;
int32_t x212 = INT32_MIN;
int8_t x217 = INT8_MIN;
volatile uint8_t x223 = UINT8_MAX;
volatile int32_t t50 = 50373399;
int8_t x226 = INT8_MAX;
int64_t x228 = INT64_MIN;
int8_t x231 = INT8_MIN;
int16_t x242 = INT16_MAX;
int16_t x247 = INT16_MIN;
int8_t x248 = -1;
static uint8_t x249 = 3U;
volatile int32_t t58 = 1;
uint16_t x257 = UINT16_MAX;
static uint64_t x270 = UINT64_MAX;
uint32_t x283 = 6641U;
int32_t t66 = -1;
static int8_t x290 = -1;
int32_t x297 = -260181;
volatile int8_t x298 = -1;
int16_t x303 = INT16_MAX;
int64_t x306 = INT64_MAX;
int32_t t72 = 6637;
volatile int16_t x317 = -9;
int64_t x332 = INT64_MAX;
int32_t t77 = -1;
static int8_t x334 = 0;
int32_t x335 = INT32_MAX;
int16_t x336 = -1;
static volatile int64_t x337 = -1LL;
static uint64_t x338 = UINT64_MAX;
int16_t x346 = 1;
int8_t x347 = -3;
volatile int32_t t81 = -1106724;
uint64_t x349 = UINT64_MAX;
int8_t x351 = 1;
volatile int32_t x352 = 1835184;
int8_t x358 = -6;
uint64_t x366 = 87620862826018LLU;
static uint32_t x373 = 497619968U;
static int8_t x377 = -6;
volatile int32_t x381 = INT32_MIN;
volatile int16_t x388 = INT16_MIN;
int16_t x390 = 7289;
volatile int16_t x396 = -1;
int64_t x403 = 16722129LL;
volatile uint16_t x407 = 5U;
uint64_t x409 = 2854799877005LLU;
uint16_t x411 = 24U;
int16_t x415 = -1;
int16_t x416 = 276;
int8_t x419 = INT8_MAX;


void f0(void) {
	uint32_t x3 = 3U;
	volatile int32_t t0 = 282755123;

	t0 = (x1==(x2%(x3^x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 18014U;
	volatile uint16_t x6 = 6U;
	int32_t x7 = -266826156;
	uint16_t x8 = 42U;
	int32_t t1 = -11991394;

	t1 = (x5==(x6%(x7^x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = 1573U;
	volatile uint32_t x15 = UINT32_MAX;
	static int64_t x16 = -5992684LL;
	volatile int32_t t2 = 4073567;

	t2 = (x13==(x14%(x15^x16)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 2409193881155032464LLU;
	int8_t x19 = -4;
	static volatile uint8_t x20 = UINT8_MAX;

	t3 = (x17==(x18%(x19^x20)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = -849;
	int8_t x23 = INT8_MAX;
	int32_t x24 = -72;
	volatile int32_t t4 = 4819048;

	t4 = (x21==(x22%(x23^x24)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x25 = INT8_MIN;
	int16_t x26 = INT16_MAX;
	static volatile uint8_t x27 = UINT8_MAX;
	int8_t x28 = INT8_MAX;

	t5 = (x25==(x26%(x27^x28)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MIN;
	int32_t x30 = 34740;
	uint64_t x31 = 3786449LLU;
	volatile int32_t t6 = -2708;

	t6 = (x29==(x30%(x31^x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x34 = 144U;
	uint16_t x35 = 108U;
	static int16_t x36 = 0;
	static int32_t t7 = -1;

	t7 = (x33==(x34%(x35^x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MIN;
	uint8_t x38 = 3U;
	volatile uint16_t x40 = UINT16_MAX;
	static volatile int32_t t8 = -11;

	t8 = (x37==(x38%(x39^x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = 26U;
	int8_t x42 = INT8_MIN;
	static volatile int8_t x44 = 11;
	volatile int32_t t9 = -237839;

	t9 = (x41==(x42%(x43^x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MIN;
	uint16_t x47 = 15379U;
	uint16_t x48 = UINT16_MAX;

	t10 = (x45==(x46%(x47^x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MAX;
	uint16_t x50 = 115U;
	uint16_t x51 = 9U;
	int8_t x52 = INT8_MIN;
	int32_t t11 = 1;

	t11 = (x49==(x50%(x51^x52)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x53 = UINT8_MAX;
	volatile int32_t x55 = INT32_MAX;
	int32_t x56 = -660852;
	int32_t t12 = -36969808;

	t12 = (x53==(x54%(x55^x56)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x57 = 4U;
	int32_t x58 = -27849555;
	static int16_t x59 = INT16_MIN;
	volatile uint64_t x60 = 459455LLU;
	static int32_t t13 = 179909;

	t13 = (x57==(x58%(x59^x60)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x62 = -1LL;
	uint32_t x63 = 26349U;
	int32_t x64 = -1;
	static volatile int32_t t14 = 141353;

	t14 = (x61==(x62%(x63^x64)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MIN;
	uint32_t x66 = 498425U;
	volatile int32_t x68 = INT32_MIN;
	static volatile int32_t t15 = 28925263;

	t15 = (x65==(x66%(x67^x68)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x69 = 23460U;
	int64_t x70 = -1LL;
	static uint32_t x71 = 0U;
	static int8_t x72 = -1;
	volatile int32_t t16 = 5812;

	t16 = (x69==(x70%(x71^x72)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x74 = INT64_MIN;
	static volatile uint32_t x75 = 5U;
	int32_t x76 = -785178;
	int32_t t17 = 3232;

	t17 = (x73==(x74%(x75^x76)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x82 = INT8_MIN;
	static volatile int32_t x83 = INT32_MAX;
	int64_t x84 = INT64_MIN;
	int32_t t18 = 705;

	t18 = (x81==(x82%(x83^x84)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x85 = UINT8_MAX;
	int16_t x86 = INT16_MAX;
	int64_t x87 = 3570138LL;
	volatile int32_t x88 = 22480083;
	int32_t t19 = 260221;

	t19 = (x85==(x86%(x87^x88)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x93 = INT16_MIN;
	static int32_t x94 = INT32_MAX;
	static int8_t x96 = INT8_MIN;
	int32_t t20 = -4378910;

	t20 = (x93==(x94%(x95^x96)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint8_t x97 = UINT8_MAX;
	int32_t x98 = 90736;
	int32_t t21 = 24659;

	t21 = (x97==(x98%(x99^x100)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x102 = UINT16_MAX;
	int8_t x104 = -2;
	static int32_t t22 = 274780;

	t22 = (x101==(x102%(x103^x104)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x105 = -1;
	int32_t x106 = 6;
	uint64_t x107 = 30LLU;
	volatile int32_t x108 = -1;
	static volatile int32_t t23 = -7;

	t23 = (x105==(x106%(x107^x108)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x109 = 9938823457650LLU;
	uint32_t x110 = UINT32_MAX;

	t24 = (x109==(x110%(x111^x112)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x114 = INT64_MIN;
	volatile int8_t x116 = INT8_MAX;

	t25 = (x113==(x114%(x115^x116)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x117 = -1;
	int8_t x118 = INT8_MAX;
	int8_t x119 = 1;
	static volatile int64_t x120 = INT64_MIN;
	int32_t t26 = 403;

	t26 = (x117==(x118%(x119^x120)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x122 = -59;
	uint32_t x123 = UINT32_MAX;
	int32_t x124 = INT32_MAX;

	t27 = (x121==(x122%(x123^x124)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x125 = INT16_MAX;
	uint32_t x126 = 240219U;
	int64_t x127 = -1726490LL;
	static int32_t t28 = -209;

	t28 = (x125==(x126%(x127^x128)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x129 = 171731LLU;
	volatile int64_t x130 = -1LL;
	uint8_t x131 = 1U;
	int16_t x132 = -3338;
	int32_t t29 = 821480;

	t29 = (x129==(x130%(x131^x132)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x134 = INT32_MIN;
	int32_t x135 = 7701;
	int64_t x136 = 2598158390LL;
	volatile int32_t t30 = 18841;

	t30 = (x133==(x134%(x135^x136)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x137 = 232LLU;
	volatile int32_t x139 = 0;
	int64_t x140 = 24565LL;

	t31 = (x137==(x138%(x139^x140)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x141 = INT32_MIN;
	static int16_t x142 = -1;
	int64_t x143 = -1LL;
	uint16_t x144 = 2U;
	volatile int32_t t32 = -194272;

	t32 = (x141==(x142%(x143^x144)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x145 = -1;
	static int16_t x146 = 3857;
	int32_t x147 = -1;
	static int16_t x148 = -4;
	int32_t t33 = 536;

	t33 = (x145==(x146%(x147^x148)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x149 = INT16_MAX;
	uint64_t x151 = 2610578908739LLU;
	int8_t x152 = -1;
	volatile int32_t t34 = -30449364;

	t34 = (x149==(x150%(x151^x152)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x153 = UINT64_MAX;
	int64_t x154 = INT64_MIN;
	static int32_t x156 = INT32_MIN;
	volatile int32_t t35 = -3096;

	t35 = (x153==(x154%(x155^x156)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x157 = UINT8_MAX;
	int32_t x159 = INT32_MIN;
	int32_t t36 = 54264;

	t36 = (x157==(x158%(x159^x160)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x161 = UINT32_MAX;
	static uint64_t x163 = 60LLU;
	int32_t t37 = -11897752;

	t37 = (x161==(x162%(x163^x164)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x165 = 589568U;
	uint64_t x166 = 2880528LLU;
	uint16_t x168 = 17U;

	t38 = (x165==(x166%(x167^x168)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x169 = 10U;
	int64_t x170 = 80446LL;
	int16_t x171 = -1;
	int32_t x172 = INT32_MIN;

	t39 = (x169==(x170%(x171^x172)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x177 = INT16_MIN;
	uint32_t x178 = 8U;
	int64_t x179 = INT64_MIN;
	uint32_t x180 = 55771223U;
	int32_t t40 = -3;

	t40 = (x177==(x178%(x179^x180)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x181 = 58812U;
	uint16_t x182 = 607U;
	volatile uint8_t x183 = 2U;
	int32_t x184 = -2563;
	volatile int32_t t41 = -4;

	t41 = (x181==(x182%(x183^x184)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x185 = -2;
	int32_t x186 = -5406652;

	t42 = (x185==(x186%(x187^x188)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x189 = -1;
	int32_t x191 = INT32_MIN;
	volatile int32_t x192 = -30494734;
	int32_t t43 = 0;

	t43 = (x189==(x190%(x191^x192)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x193 = -1;
	uint64_t x194 = UINT64_MAX;
	volatile uint8_t x195 = 0U;
	static int8_t x196 = -2;
	int32_t t44 = 971;

	t44 = (x193==(x194%(x195^x196)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x197 = INT64_MAX;
	static uint32_t x198 = UINT32_MAX;
	int8_t x199 = INT8_MIN;

	t45 = (x197==(x198%(x199^x200)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x201 = -86LL;
	int32_t x202 = INT32_MAX;
	uint16_t x203 = 28U;
	int8_t x204 = 0;

	t46 = (x201==(x202%(x203^x204)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x205 = INT8_MAX;
	int16_t x207 = INT16_MIN;
	volatile int64_t x208 = 628LL;
	static int32_t t47 = 162352;

	t47 = (x205==(x206%(x207^x208)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x210 = 14LLU;
	uint32_t x211 = 274688664U;
	volatile int32_t t48 = 2067;

	t48 = (x209==(x210%(x211^x212)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x218 = -1;
	volatile uint16_t x219 = 24U;
	int16_t x220 = INT16_MAX;
	volatile int32_t t49 = -600762;

	t49 = (x217==(x218%(x219^x220)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x221 = 28LLU;
	volatile uint32_t x222 = UINT32_MAX;
	int32_t x224 = INT32_MIN;

	t50 = (x221==(x222%(x223^x224)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x225 = INT16_MIN;
	int16_t x227 = 1;
	int32_t t51 = -425;

	t51 = (x225==(x226%(x227^x228)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x229 = 1698U;
	volatile int32_t x230 = -1;
	volatile int32_t x232 = INT32_MIN;
	static volatile int32_t t52 = 0;

	t52 = (x229==(x230%(x231^x232)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x233 = INT8_MIN;
	int32_t x234 = -121862560;
	static int16_t x235 = INT16_MAX;
	static uint16_t x236 = UINT16_MAX;
	volatile int32_t t53 = 26794;

	t53 = (x233==(x234%(x235^x236)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x237 = 151U;
	uint16_t x238 = 44U;
	int64_t x239 = 0LL;
	static int8_t x240 = 29;
	int32_t t54 = 85160;

	t54 = (x237==(x238%(x239^x240)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x241 = -1;
	volatile uint32_t x243 = UINT32_MAX;
	static int64_t x244 = -1LL;
	int32_t t55 = 24898;

	t55 = (x241==(x242%(x243^x244)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x245 = INT32_MIN;
	uint32_t x246 = 23U;
	static volatile int32_t t56 = 11162;

	t56 = (x245==(x246%(x247^x248)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x250 = -40384;
	int8_t x251 = 2;
	int32_t x252 = INT32_MIN;
	volatile int32_t t57 = 3;

	t57 = (x249==(x250%(x251^x252)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x253 = INT16_MIN;
	int8_t x254 = -1;
	static volatile int64_t x255 = INT64_MIN;
	uint32_t x256 = 1U;

	t58 = (x253==(x254%(x255^x256)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x258 = -1;
	int64_t x259 = INT64_MIN;
	int8_t x260 = -3;
	volatile int32_t t59 = -57509;

	t59 = (x257==(x258%(x259^x260)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x261 = INT16_MIN;
	static int8_t x262 = -1;
	int8_t x263 = INT8_MIN;
	int32_t x264 = INT32_MAX;
	volatile int32_t t60 = -337035;

	t60 = (x261==(x262%(x263^x264)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x265 = -1;
	int16_t x266 = -1;
	static int64_t x267 = 7138089LL;
	int16_t x268 = -3509;
	int32_t t61 = -439075275;

	t61 = (x265==(x266%(x267^x268)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x269 = 1063363870;
	volatile int64_t x271 = 12007110LL;
	volatile int8_t x272 = -1;
	int32_t t62 = -993108;

	t62 = (x269==(x270%(x271^x272)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x273 = UINT32_MAX;
	static volatile int8_t x274 = -25;
	uint32_t x275 = UINT32_MAX;
	int32_t x276 = INT32_MAX;
	static int32_t t63 = -940;

	t63 = (x273==(x274%(x275^x276)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x277 = INT16_MAX;
	uint16_t x278 = 1465U;
	int8_t x279 = INT8_MIN;
	int64_t x280 = 6810LL;
	static int32_t t64 = 1;

	t64 = (x277==(x278%(x279^x280)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x281 = INT8_MIN;
	volatile uint16_t x282 = UINT16_MAX;
	static volatile uint64_t x284 = 349LLU;
	volatile int32_t t65 = 13;

	t65 = (x281==(x282%(x283^x284)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x285 = 6U;
	uint16_t x286 = 456U;
	uint8_t x287 = UINT8_MAX;
	static volatile uint16_t x288 = UINT16_MAX;

	t66 = (x285==(x286%(x287^x288)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x289 = -1LL;
	int16_t x291 = -1;
	volatile int8_t x292 = 7;
	static volatile int32_t t67 = 63673959;

	t67 = (x289==(x290%(x291^x292)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x293 = INT64_MIN;
	int64_t x294 = INT64_MAX;
	uint16_t x295 = 277U;
	int32_t x296 = 65593;
	static int32_t t68 = 21727299;

	t68 = (x293==(x294%(x295^x296)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x299 = INT16_MIN;
	int32_t x300 = INT32_MIN;
	static int32_t t69 = -1891;

	t69 = (x297==(x298%(x299^x300)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x301 = 20U;
	uint8_t x302 = UINT8_MAX;
	volatile int64_t x304 = INT64_MAX;
	int32_t t70 = -5721038;

	t70 = (x301==(x302%(x303^x304)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x305 = INT8_MIN;
	uint8_t x307 = 6U;
	static uint8_t x308 = 2U;
	volatile int32_t t71 = 1556;

	t71 = (x305==(x306%(x307^x308)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x309 = 15693827LL;
	static int32_t x310 = INT32_MAX;
	int64_t x311 = INT64_MIN;
	int8_t x312 = -1;

	t72 = (x309==(x310%(x311^x312)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x313 = INT32_MAX;
	volatile uint64_t x314 = UINT64_MAX;
	int8_t x315 = INT8_MIN;
	uint16_t x316 = 6U;
	int32_t t73 = 0;

	t73 = (x313==(x314%(x315^x316)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x318 = INT16_MIN;
	static int8_t x319 = 0;
	int64_t x320 = 303809LL;
	volatile int32_t t74 = -582;

	t74 = (x317==(x318%(x319^x320)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x321 = INT16_MAX;
	uint16_t x322 = 26U;
	uint8_t x323 = 2U;
	int32_t x324 = INT32_MAX;
	volatile int32_t t75 = -50778;

	t75 = (x321==(x322%(x323^x324)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x325 = 2;
	static uint64_t x326 = 60531121LLU;
	uint32_t x327 = 106269545U;
	uint8_t x328 = 1U;
	int32_t t76 = -3430285;

	t76 = (x325==(x326%(x327^x328)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x329 = 1;
	uint16_t x330 = UINT16_MAX;
	int64_t x331 = -1906945881709314095LL;

	t77 = (x329==(x330%(x331^x332)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x333 = 464785184882405LLU;
	int32_t t78 = 17056300;

	t78 = (x333==(x334%(x335^x336)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x339 = 1;
	volatile uint32_t x340 = 65U;
	volatile int32_t t79 = 194007;

	t79 = (x337==(x338%(x339^x340)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x341 = 102973607455033LLU;
	int64_t x342 = INT64_MIN;
	uint64_t x343 = 235LLU;
	uint8_t x344 = 7U;
	int32_t t80 = 253;

	t80 = (x341==(x342%(x343^x344)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x345 = -1;
	int32_t x348 = INT32_MIN;

	t81 = (x345==(x346%(x347^x348)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x350 = INT32_MAX;
	static int32_t t82 = -3514;

	t82 = (x349==(x350%(x351^x352)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x353 = UINT64_MAX;
	int32_t x354 = INT32_MAX;
	int8_t x355 = -1;
	volatile int16_t x356 = 3461;
	int32_t t83 = 52;

	t83 = (x353==(x354%(x355^x356)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x357 = 5;
	uint32_t x359 = 1474438417U;
	int32_t x360 = 7;
	static volatile int32_t t84 = -201;

	t84 = (x357==(x358%(x359^x360)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x361 = -1;
	static volatile int8_t x362 = -24;
	int32_t x363 = 0;
	int8_t x364 = INT8_MIN;
	int32_t t85 = -15695;

	t85 = (x361==(x362%(x363^x364)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x365 = 102907233U;
	static int64_t x367 = INT64_MAX;
	volatile int8_t x368 = -1;
	int32_t t86 = 219935828;

	t86 = (x365==(x366%(x367^x368)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x369 = INT8_MAX;
	int32_t x370 = INT32_MAX;
	static volatile int64_t x371 = INT64_MAX;
	volatile uint32_t x372 = 8U;
	volatile int32_t t87 = 2;

	t87 = (x369==(x370%(x371^x372)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x374 = UINT16_MAX;
	static int32_t x375 = INT32_MAX;
	static volatile int64_t x376 = INT64_MIN;
	int32_t t88 = 0;

	t88 = (x373==(x374%(x375^x376)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x378 = 156434LLU;
	int16_t x379 = 104;
	uint64_t x380 = 1365766LLU;
	static int32_t t89 = 136968;

	t89 = (x377==(x378%(x379^x380)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x382 = 3345185LLU;
	uint32_t x383 = UINT32_MAX;
	int32_t x384 = -555093;
	volatile int32_t t90 = -498652;

	t90 = (x381==(x382%(x383^x384)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x385 = INT8_MAX;
	uint32_t x386 = 12U;
	uint16_t x387 = 1818U;
	int32_t t91 = 152;

	t91 = (x385==(x386%(x387^x388)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x389 = INT32_MIN;
	static int16_t x391 = INT16_MIN;
	int8_t x392 = -21;
	volatile int32_t t92 = 32419;

	t92 = (x389==(x390%(x391^x392)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x393 = 16526578737553775LL;
	uint16_t x394 = UINT16_MAX;
	volatile int32_t x395 = 31833827;
	int32_t t93 = 69237;

	t93 = (x393==(x394%(x395^x396)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x397 = UINT16_MAX;
	volatile int64_t x398 = -1LL;
	int32_t x399 = -20;
	int8_t x400 = -1;
	int32_t t94 = 0;

	t94 = (x397==(x398%(x399^x400)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x401 = 7141;
	uint16_t x402 = 57U;
	int64_t x404 = 531LL;
	volatile int32_t t95 = -5994;

	t95 = (x401==(x402%(x403^x404)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x405 = 0U;
	uint32_t x406 = 166422247U;
	static volatile int16_t x408 = INT16_MAX;
	static int32_t t96 = -15009;

	t96 = (x405==(x406%(x407^x408)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x410 = 1U;
	volatile uint32_t x412 = UINT32_MAX;
	static int32_t t97 = 636363;

	t97 = (x409==(x410%(x411^x412)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x413 = 206LL;
	int16_t x414 = 10641;
	int32_t t98 = -116783;

	t98 = (x413==(x414%(x415^x416)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x417 = INT8_MIN;
	uint8_t x418 = 118U;
	static int16_t x420 = -1;
	volatile int32_t t99 = 4;

	t99 = (x417==(x418%(x419^x420)));

	if (t99 != 0) { NG(); } else { ; }
	
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

