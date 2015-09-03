#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = INT32_MIN;
volatile uint64_t t0 = 13231LLU;
int32_t x9 = INT32_MAX;
static int8_t x12 = INT8_MIN;
int32_t x19 = INT32_MAX;
int16_t x20 = INT16_MAX;
int32_t x22 = INT32_MIN;
uint32_t x29 = 1698737292U;
uint16_t x34 = 309U;
static uint8_t x37 = 13U;
volatile int32_t t10 = INT32_MAX;
int32_t x45 = -1;
static int64_t x50 = INT64_MAX;
volatile int64_t t12 = -112041434971022438LL;
int8_t x53 = INT8_MIN;
int32_t x56 = 43980137;
uint64_t x59 = UINT64_MAX;
int64_t x63 = 330776648358255LL;
int64_t x64 = -1LL;
int8_t x66 = INT8_MAX;
int8_t x68 = INT8_MIN;
int64_t x71 = 175335LL;
uint32_t x72 = 191306909U;
uint64_t x74 = UINT64_MAX;
uint8_t x85 = UINT8_MAX;
volatile uint32_t x90 = UINT32_MAX;
int64_t x91 = INT64_MIN;
uint8_t x92 = 33U;
volatile int64_t t22 = 2LL;
uint8_t x94 = 82U;
int16_t x100 = -176;
static int32_t t27 = -1;
int16_t x113 = INT16_MIN;
uint32_t x114 = 1945791U;
volatile int32_t x116 = -1;
int64_t x121 = 5685937901665LL;
int64_t x136 = -15LL;
uint16_t x139 = 13931U;
int32_t t34 = -69934390;
uint32_t t40 = 2085757395U;
volatile int64_t t42 = -1188170360272LL;
int8_t x174 = -1;
volatile uint32_t t44 = 2130U;
int16_t x181 = INT16_MIN;
static volatile int16_t x189 = INT16_MAX;
int8_t x191 = INT8_MIN;
uint16_t x194 = 6165U;
uint16_t x195 = 1629U;
static volatile int32_t t48 = 9642;
int32_t t49 = 3;
uint8_t x205 = UINT8_MAX;
static volatile int8_t x208 = INT8_MIN;
int8_t x216 = INT8_MIN;
static int32_t t53 = 43497467;
int64_t x217 = -12LL;
int32_t t55 = -910758;
int64_t x229 = INT64_MIN;
volatile uint32_t t57 = 1U;
int16_t x233 = INT16_MIN;
static uint8_t x235 = UINT8_MAX;
static int32_t t58 = 41451;
static uint16_t x247 = 15705U;
int32_t t62 = 7;
static int32_t x255 = INT32_MIN;
static uint64_t x256 = 808985LLU;
static int32_t x258 = INT32_MIN;
uint16_t x262 = 19293U;
static uint32_t x269 = UINT32_MAX;
int8_t x272 = INT8_MIN;
int64_t x273 = INT64_MAX;
volatile int64_t t68 = 518413789406803LL;
static int32_t x277 = INT32_MIN;
int16_t x286 = -1;
static int32_t x292 = -1;
static volatile int32_t t72 = 9420;
int32_t x294 = INT32_MIN;
static int16_t x295 = -1;
int32_t t73 = 1001514737;
uint32_t x299 = 618U;
int32_t x300 = INT32_MIN;
uint16_t x305 = 777U;
volatile uint8_t x306 = UINT8_MAX;
uint16_t x307 = 10U;
int64_t x319 = INT64_MIN;
static uint8_t x322 = UINT8_MAX;
int32_t x323 = -1;
static uint32_t x327 = 10U;
volatile uint8_t x334 = 5U;
int64_t t83 = -51814233898182LL;
int16_t x340 = INT16_MIN;
int64_t x342 = INT64_MAX;
int64_t x343 = -9880751637LL;
int8_t x346 = -1;
volatile int32_t t87 = -2937291;
uint64_t x355 = UINT64_MAX;
uint64_t t88 = 134541928866014118LLU;
static volatile int16_t x357 = 439;
static volatile int8_t x358 = INT8_MIN;
static int16_t x363 = INT16_MAX;
int8_t x365 = INT8_MIN;
static int16_t x372 = INT16_MAX;
volatile uint64_t x378 = UINT64_MAX;
static int32_t x381 = INT32_MAX;
volatile uint32_t x383 = UINT32_MAX;
static uint8_t x387 = 17U;
int64_t t96 = -32538LL;
static volatile uint64_t x390 = 8735013203490377444LLU;
static volatile int64_t t98 = -13195LL;
uint64_t x398 = 6LLU;
volatile int64_t x400 = -1270362013902954747LL;


void f0(void) {
	int64_t x1 = -1LL;
	uint64_t x3 = UINT64_MAX;
	uint64_t x4 = 84915977395323LLU;

	t0 = (((x1==x2)|x3)^x4);

	if (t0 != 18446659157732156292LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = 53LL;
	volatile uint32_t x6 = UINT32_MAX;
	uint16_t x7 = 36U;
	uint16_t x8 = 5U;
	int32_t t1 = -1853;

	t1 = (((x5==x6)|x7)^x8);

	if (t1 != 33) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x10 = UINT16_MAX;
	uint64_t x11 = 38141804407633071LLU;
	uint64_t t2 = 43445117251LLU;

	t2 = (((x9==x10)|x11)^x12);

	if (t2 != 18408602269301918511LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	static int64_t x14 = -1LL;
	uint16_t x15 = UINT16_MAX;
	uint16_t x16 = UINT16_MAX;
	int32_t t3 = -4929490;

	t3 = (((x13==x14)|x15)^x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = INT16_MIN;
	uint32_t x18 = 131605506U;
	volatile int32_t t4 = 392316;

	t4 = (((x17==x18)|x19)^x20);

	if (t4 != 2147450880) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = -26164302;
	int8_t x23 = INT8_MAX;
	uint64_t x24 = UINT64_MAX;
	volatile uint64_t t5 = 732589246LLU;

	t5 = (((x21==x22)|x23)^x24);

	if (t5 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -27042356LL;
	int64_t x26 = INT64_MIN;
	static uint16_t x27 = 0U;
	volatile int8_t x28 = INT8_MIN;
	volatile int32_t t6 = 868086928;

	t6 = (((x25==x26)|x27)^x28);

	if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = INT64_MIN;
	static int32_t x31 = -1;
	static volatile int64_t x32 = -1LL;
	int64_t t7 = 1122LL;

	t7 = (((x29==x30)|x31)^x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	int8_t x35 = -1;
	uint8_t x36 = 1U;
	static volatile int32_t t8 = 45;

	t8 = (((x33==x34)|x35)^x36);

	if (t8 != -2) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = 31660612;
	static int64_t x39 = -1LL;
	int16_t x40 = INT16_MIN;
	volatile int64_t t9 = 1926LL;

	t9 = (((x37==x38)|x39)^x40);

	if (t9 != 32767LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x41 = 2338907U;
	static uint32_t x42 = 1798304108U;
	static int32_t x43 = INT32_MIN;
	int32_t x44 = -1;

	t10 = (((x41==x42)|x43)^x44);

	if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x46 = 786972651689270217LLU;
	int64_t x47 = INT64_MAX;
	volatile int8_t x48 = -36;
	volatile int64_t t11 = 14168613321972LL;

	t11 = (((x45==x46)|x47)^x48);

	if (t11 != -9223372036854775773LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 3397U;
	int64_t x51 = INT64_MIN;
	static volatile int64_t x52 = -152081492777982289LL;

	t12 = (((x49==x50)|x51)^x52);

	if (t12 != 9071290544076793519LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x54 = 1;
	volatile int64_t x55 = 442353440728342LL;
	volatile int64_t t13 = -12LL;

	t13 = (((x53==x54)|x55)^x56);

	if (t13 != 442353398329471LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MAX;
	static int32_t x58 = -1;
	uint32_t x60 = 2445U;
	volatile uint64_t t14 = 33LLU;

	t14 = (((x57==x58)|x59)^x60);

	if (t14 != 18446744073709549170LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	int8_t x62 = 18;
	static volatile int64_t t15 = 279157507912092LL;

	t15 = (((x61==x62)|x63)^x64);

	if (t15 != -330776648358256LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x65 = UINT8_MAX;
	volatile int8_t x67 = INT8_MAX;
	volatile int32_t t16 = -438089;

	t16 = (((x65==x66)|x67)^x68);

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x69 = INT16_MIN;
	int64_t x70 = 2172LL;
	int64_t t17 = -6985131909LL;

	t17 = (((x69==x70)|x71)^x72);

	if (t17 != 191213690LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x73 = 0U;
	uint32_t x75 = 9U;
	volatile int64_t x76 = INT64_MAX;
	int64_t t18 = -1604360806913LL;

	t18 = (((x73==x74)|x75)^x76);

	if (t18 != 9223372036854775798LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x77 = INT16_MIN;
	int64_t x78 = -1748762LL;
	volatile uint16_t x79 = 430U;
	int32_t x80 = INT32_MIN;
	static volatile int32_t t19 = 1;

	t19 = (((x77==x78)|x79)^x80);

	if (t19 != -2147483218) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MAX;
	uint16_t x82 = 19U;
	int8_t x83 = INT8_MIN;
	static volatile int64_t x84 = 7LL;
	static volatile int64_t t20 = 1LL;

	t20 = (((x81==x82)|x83)^x84);

	if (t20 != -121LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x86 = UINT64_MAX;
	volatile int64_t x87 = 138143279130222902LL;
	int64_t x88 = -1LL;
	int64_t t21 = -803275783458LL;

	t21 = (((x85==x86)|x87)^x88);

	if (t21 != -138143279130222903LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = UINT32_MAX;

	t22 = (((x89==x90)|x91)^x92);

	if (t22 != -9223372036854775776LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = 94;
	int64_t x95 = -1LL;
	int32_t x96 = INT32_MIN;
	volatile int64_t t23 = -188132606603987LL;

	t23 = (((x93==x94)|x95)^x96);

	if (t23 != 2147483647LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	static uint8_t x98 = UINT8_MAX;
	int32_t x99 = 601565;
	static int32_t t24 = -3517086;

	t24 = (((x97==x98)|x99)^x100);

	if (t24 != -601459) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MAX;
	uint16_t x102 = 361U;
	uint64_t x103 = 830923468LLU;
	static uint32_t x104 = UINT32_MAX;
	volatile uint64_t t25 = 1755649461LLU;

	t25 = (((x101==x102)|x103)^x104);

	if (t25 != 3464043827LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x105 = INT32_MIN;
	volatile int64_t x106 = -1LL;
	int8_t x107 = INT8_MIN;
	int8_t x108 = INT8_MIN;
	static int32_t t26 = -207459;

	t26 = (((x105==x106)|x107)^x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x109 = UINT8_MAX;
	static uint8_t x110 = 15U;
	int16_t x111 = -1;
	int8_t x112 = -1;

	t27 = (((x109==x110)|x111)^x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x115 = INT8_MAX;
	int32_t t28 = -11;

	t28 = (((x113==x114)|x115)^x116);

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 1328U;
	int16_t x118 = INT16_MAX;
	uint16_t x119 = UINT16_MAX;
	int8_t x120 = 1;
	volatile int32_t t29 = 150;

	t29 = (((x117==x118)|x119)^x120);

	if (t29 != 65534) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x122 = 7;
	uint16_t x123 = 23754U;
	int32_t x124 = 147;
	int32_t t30 = 20389;

	t30 = (((x121==x122)|x123)^x124);

	if (t30 != 23641) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x125 = -1;
	int16_t x126 = INT16_MIN;
	uint64_t x127 = 849198619914LLU;
	static int32_t x128 = 208801;
	uint64_t t31 = 170561771627638LLU;

	t31 = (((x125==x126)|x127)^x128);

	if (t31 != 849198559915LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MAX;
	uint16_t x130 = UINT16_MAX;
	int32_t x131 = INT32_MAX;
	int8_t x132 = INT8_MIN;
	int32_t t32 = -113975;

	t32 = (((x129==x130)|x131)^x132);

	if (t32 != -2147483521) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MAX;
	static int8_t x134 = INT8_MAX;
	int8_t x135 = INT8_MIN;
	int64_t t33 = -1881908016493113LL;

	t33 = (((x133==x134)|x135)^x136);

	if (t33 != 113LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 145084893821188211LLU;
	int64_t x138 = 1674256499825992LL;
	volatile int8_t x140 = 35;

	t34 = (((x137==x138)|x139)^x140);

	if (t34 != 13896) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 4210016449LLU;
	uint16_t x142 = 110U;
	int32_t x143 = -629942930;
	static uint32_t x144 = UINT32_MAX;
	volatile uint32_t t35 = 28970110U;

	t35 = (((x141==x142)|x143)^x144);

	if (t35 != 629942929U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 1456323991030LLU;
	uint8_t x146 = 0U;
	uint32_t x147 = 54U;
	uint8_t x148 = UINT8_MAX;
	uint32_t t36 = 294U;

	t36 = (((x145==x146)|x147)^x148);

	if (t36 != 201U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 1939870768U;
	uint8_t x150 = 1U;
	int32_t x151 = 911483;
	int32_t x152 = INT32_MIN;
	volatile int32_t t37 = -548;

	t37 = (((x149==x150)|x151)^x152);

	if (t37 != -2146572165) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = 278925510939LL;
	uint16_t x154 = 24U;
	static volatile int32_t x155 = INT32_MIN;
	static uint64_t x156 = UINT64_MAX;
	volatile uint64_t t38 = 5719LLU;

	t38 = (((x153==x154)|x155)^x156);

	if (t38 != 2147483647LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MAX;
	static volatile int32_t x158 = INT32_MIN;
	static volatile int8_t x159 = INT8_MIN;
	int64_t x160 = INT64_MIN;
	volatile int64_t t39 = -198LL;

	t39 = (((x157==x158)|x159)^x160);

	if (t39 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x161 = INT64_MAX;
	uint8_t x162 = 1U;
	volatile uint16_t x163 = 154U;
	uint32_t x164 = 45U;

	t40 = (((x161==x162)|x163)^x164);

	if (t40 != 183U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = 147079U;
	volatile int64_t x166 = INT64_MIN;
	static uint32_t x167 = UINT32_MAX;
	uint16_t x168 = 0U;
	volatile uint32_t t41 = UINT32_MAX;

	t41 = (((x165==x166)|x167)^x168);

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -1;
	uint16_t x170 = UINT16_MAX;
	int64_t x171 = INT64_MAX;
	uint16_t x172 = 120U;

	t42 = (((x169==x170)|x171)^x172);

	if (t42 != 9223372036854775687LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x173 = 792881;
	volatile int16_t x175 = INT16_MIN;
	uint64_t x176 = 212634822529560LLU;
	volatile uint64_t t43 = 147661468243994815LLU;

	t43 = (((x173==x174)|x175)^x176);

	if (t43 != 18446531438887031320LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -1LL;
	static int32_t x178 = -1;
	uint16_t x179 = 31305U;
	uint32_t x180 = 1126093194U;

	t44 = (((x177==x178)|x179)^x180);

	if (t44 != 1126083523U) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x182 = INT8_MAX;
	volatile int16_t x183 = INT16_MIN;
	volatile int32_t x184 = INT32_MIN;
	int32_t t45 = -39931833;

	t45 = (((x181==x182)|x183)^x184);

	if (t45 != 2147450880) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x185 = -1;
	static volatile uint64_t x186 = 159585684807124126LLU;
	volatile int8_t x187 = -7;
	int16_t x188 = INT16_MIN;
	int32_t t46 = -243581;

	t46 = (((x185==x186)|x187)^x188);

	if (t46 != 32761) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x190 = UINT8_MAX;
	int8_t x192 = -5;
	static volatile int32_t t47 = -449;

	t47 = (((x189==x190)|x191)^x192);

	if (t47 != 123) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	int16_t x196 = -1;

	t48 = (((x193==x194)|x195)^x196);

	if (t48 != -1630) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	uint64_t x198 = 1991411336606LLU;
	int16_t x199 = -1;
	volatile int8_t x200 = INT8_MAX;

	t49 = (((x197==x198)|x199)^x200);

	if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = -1;
	int8_t x202 = INT8_MAX;
	int16_t x203 = INT16_MAX;
	int64_t x204 = INT64_MAX;
	int64_t t50 = -604626047849LL;

	t50 = (((x201==x202)|x203)^x204);

	if (t50 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x206 = 676524415LL;
	int64_t x207 = INT64_MIN;
	int64_t t51 = -651364786964348670LL;

	t51 = (((x205==x206)|x207)^x208);

	if (t51 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 84U;
	uint16_t x210 = UINT16_MAX;
	volatile int8_t x211 = INT8_MAX;
	static uint8_t x212 = UINT8_MAX;
	static volatile int32_t t52 = 168551;

	t52 = (((x209==x210)|x211)^x212);

	if (t52 != 128) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x213 = 4210414153LL;
	static int32_t x214 = INT32_MIN;
	volatile int32_t x215 = INT32_MIN;

	t53 = (((x213==x214)|x215)^x216);

	if (t53 != 2147483520) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x218 = 52;
	volatile uint8_t x219 = 96U;
	int64_t x220 = -1LL;
	volatile int64_t t54 = -94417654721830254LL;

	t54 = (((x217==x218)|x219)^x220);

	if (t54 != -97LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x221 = 67100;
	int64_t x222 = INT64_MIN;
	static int32_t x223 = INT32_MAX;
	static int8_t x224 = -56;

	t55 = (((x221==x222)|x223)^x224);

	if (t55 != -2147483593) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = 3080294535347LLU;
	int8_t x226 = INT8_MIN;
	int64_t x227 = -286410363LL;
	int32_t x228 = 209165;
	int64_t t56 = 7397293527498LL;

	t56 = (((x225==x226)|x227)^x228);

	if (t56 != -286357368LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x230 = INT16_MIN;
	uint32_t x231 = 223008U;
	static volatile int32_t x232 = INT32_MIN;

	t57 = (((x229==x230)|x231)^x232);

	if (t57 != 2147706656U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x234 = INT16_MAX;
	int16_t x236 = INT16_MIN;

	t58 = (((x233==x234)|x235)^x236);

	if (t58 != -32513) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = 9569091448666581LL;
	int16_t x238 = INT16_MIN;
	static int16_t x239 = 28;
	volatile uint32_t x240 = 2804U;
	uint32_t t59 = 509202U;

	t59 = (((x237==x238)|x239)^x240);

	if (t59 != 2792U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = UINT32_MAX;
	int16_t x242 = INT16_MAX;
	int8_t x243 = INT8_MIN;
	uint16_t x244 = 1805U;
	int32_t t60 = 8167522;

	t60 = (((x241==x242)|x243)^x244);

	if (t60 != -1907) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 5U;
	volatile int16_t x246 = INT16_MIN;
	int64_t x248 = INT64_MIN;
	volatile int64_t t61 = 56808174325LL;

	t61 = (((x245==x246)|x247)^x248);

	if (t61 != -9223372036854760103LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x249 = UINT64_MAX;
	uint32_t x250 = 0U;
	volatile int16_t x251 = -1;
	volatile int16_t x252 = INT16_MAX;

	t62 = (((x249==x250)|x251)^x252);

	if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x253 = UINT16_MAX;
	int64_t x254 = -630409072212761LL;
	static volatile uint64_t t63 = 273268613LLU;

	t63 = (((x253==x254)|x255)^x256);

	if (t63 != 18446744071562876953LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = -1;
	int8_t x259 = -1;
	int32_t x260 = INT32_MAX;
	volatile int32_t t64 = INT32_MIN;

	t64 = (((x257==x258)|x259)^x260);

	if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x261 = INT32_MIN;
	uint16_t x263 = UINT16_MAX;
	static int8_t x264 = 1;
	int32_t t65 = 6;

	t65 = (((x261==x262)|x263)^x264);

	if (t65 != 65534) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = -1;
	uint32_t x266 = 0U;
	uint16_t x267 = 0U;
	uint32_t x268 = UINT32_MAX;
	uint32_t t66 = UINT32_MAX;

	t66 = (((x265==x266)|x267)^x268);

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x270 = -1LL;
	int16_t x271 = INT16_MAX;
	int32_t t67 = 265357026;

	t67 = (((x269==x270)|x271)^x272);

	if (t67 != -32641) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x274 = -1;
	volatile int16_t x275 = INT16_MIN;
	static int64_t x276 = INT64_MIN;

	t68 = (((x273==x274)|x275)^x276);

	if (t68 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x278 = INT16_MIN;
	static int8_t x279 = 5;
	int64_t x280 = -98320298551350LL;
	static volatile int64_t t69 = -2LL;

	t69 = (((x277==x278)|x279)^x280);

	if (t69 != -98320298551345LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = 1;
	volatile int16_t x282 = INT16_MIN;
	static int64_t x283 = -1LL;
	int16_t x284 = 12787;
	static volatile int64_t t70 = 239251462LL;

	t70 = (((x281==x282)|x283)^x284);

	if (t70 != -12788LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MIN;
	int8_t x287 = INT8_MIN;
	int8_t x288 = INT8_MAX;
	static volatile int32_t t71 = -2377;

	t71 = (((x285==x286)|x287)^x288);

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x289 = 1429284744289LL;
	int16_t x290 = INT16_MAX;
	uint16_t x291 = UINT16_MAX;

	t72 = (((x289==x290)|x291)^x292);

	if (t72 != -65536) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MAX;
	uint8_t x296 = 0U;

	t73 = (((x293==x294)|x295)^x296);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	static int64_t x298 = -1961377226259646LL;
	uint32_t t74 = 707551908U;

	t74 = (((x297==x298)|x299)^x300);

	if (t74 != 2147484266U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MAX;
	volatile int16_t x302 = INT16_MAX;
	int64_t x303 = -1LL;
	static int32_t x304 = INT32_MAX;
	volatile int64_t t75 = -3815213LL;

	t75 = (((x301==x302)|x303)^x304);

	if (t75 != -2147483648LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x308 = INT64_MIN;
	int64_t t76 = 8LL;

	t76 = (((x305==x306)|x307)^x308);

	if (t76 != -9223372036854775798LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = 1062U;
	volatile int16_t x310 = 8;
	int16_t x311 = -1;
	static int8_t x312 = INT8_MIN;
	static int32_t t77 = 121963016;

	t77 = (((x309==x310)|x311)^x312);

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 42775U;
	uint16_t x314 = 25852U;
	static uint64_t x315 = 7737881469546777855LLU;
	int32_t x316 = INT32_MIN;
	static uint64_t t78 = 5349097LLU;

	t78 = (((x313==x314)|x315)^x316);

	if (t78 != 10708862602633137407LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x317 = UINT64_MAX;
	int64_t x318 = -1LL;
	int64_t x320 = INT64_MIN;
	static volatile int64_t t79 = 17350374869859LL;

	t79 = (((x317==x318)|x319)^x320);

	if (t79 != 1LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x321 = -4223;
	int8_t x324 = INT8_MAX;
	int32_t t80 = -1;

	t80 = (((x321==x322)|x323)^x324);

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MIN;
	uint32_t x326 = UINT32_MAX;
	int8_t x328 = 3;
	volatile uint32_t t81 = 30593689U;

	t81 = (((x325==x326)|x327)^x328);

	if (t81 != 9U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = -1;
	int8_t x330 = INT8_MIN;
	static uint32_t x331 = UINT32_MAX;
	volatile int16_t x332 = INT16_MIN;
	static volatile uint32_t t82 = 195811U;

	t82 = (((x329==x330)|x331)^x332);

	if (t82 != 32767U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = 6406872;
	int64_t x335 = INT64_MIN;
	uint8_t x336 = 71U;

	t83 = (((x333==x334)|x335)^x336);

	if (t83 != -9223372036854775737LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MIN;
	volatile int16_t x338 = -1;
	static uint8_t x339 = UINT8_MAX;
	int32_t t84 = -461031444;

	t84 = (((x337==x338)|x339)^x340);

	if (t84 != -32513) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x341 = 0LL;
	int64_t x344 = 423682053545LL;
	volatile int64_t t85 = -43LL;

	t85 = (((x341==x342)|x343)^x344);

	if (t85 != -416236133310LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = -388;
	uint64_t x347 = UINT64_MAX;
	uint8_t x348 = 5U;
	volatile uint64_t t86 = 10066350LLU;

	t86 = (((x345==x346)|x347)^x348);

	if (t86 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	volatile int32_t x350 = INT32_MAX;
	uint8_t x351 = UINT8_MAX;
	int16_t x352 = 1;

	t87 = (((x349==x350)|x351)^x352);

	if (t87 != 254) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MAX;
	uint16_t x354 = 0U;
	volatile int8_t x356 = 52;

	t88 = (((x353==x354)|x355)^x356);

	if (t88 != 18446744073709551563LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x359 = 19U;
	int16_t x360 = -5;
	int32_t t89 = -2840756;

	t89 = (((x357==x358)|x359)^x360);

	if (t89 != -24) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = -1;
	uint8_t x362 = 31U;
	volatile int16_t x364 = INT16_MIN;
	volatile int32_t t90 = -419104;

	t90 = (((x361==x362)|x363)^x364);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x366 = 64U;
	int32_t x367 = INT32_MIN;
	static int16_t x368 = INT16_MIN;
	int32_t t91 = 1469030;

	t91 = (((x365==x366)|x367)^x368);

	if (t91 != 2147450880) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = 0LL;
	uint8_t x370 = 120U;
	static int16_t x371 = INT16_MIN;
	int32_t t92 = 0;

	t92 = (((x369==x370)|x371)^x372);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = -1;
	int8_t x374 = 0;
	static int8_t x375 = 11;
	uint64_t x376 = 3419807LLU;
	static volatile uint64_t t93 = 397617179318555984LLU;

	t93 = (((x373==x374)|x375)^x376);

	if (t93 != 3419796LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x377 = 18U;
	uint16_t x379 = 0U;
	int64_t x380 = -459228063277816LL;
	int64_t t94 = -133341233951395LL;

	t94 = (((x377==x378)|x379)^x380);

	if (t94 != -459228063277816LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x382 = INT32_MIN;
	int32_t x384 = -622;
	uint32_t t95 = 0U;

	t95 = (((x381==x382)|x383)^x384);

	if (t95 != 621U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 103466649LLU;
	uint8_t x386 = 4U;
	int64_t x388 = -1LL;

	t96 = (((x385==x386)|x387)^x388);

	if (t96 != -18LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = -475067;
	int64_t x391 = INT64_MIN;
	uint8_t x392 = 11U;
	static int64_t t97 = -1LL;

	t97 = (((x389==x390)|x391)^x392);

	if (t97 != -9223372036854775797LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = 484962U;
	int16_t x394 = -6;
	int64_t x395 = INT64_MIN;
	volatile uint32_t x396 = 1U;

	t98 = (((x393==x394)|x395)^x396);

	if (t98 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = 701U;
	int16_t x399 = -1;
	int64_t t99 = 486979053410LL;

	t99 = (((x397==x398)|x399)^x400);

	if (t99 != 1270362013902954746LL) { NG(); } else { ; }
	
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

