#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MIN;
volatile int16_t x4 = -1;
int64_t x8 = -113475247856213LL;
int8_t x9 = -1;
uint16_t x10 = 114U;
static uint8_t x11 = 9U;
int8_t x14 = -1;
uint16_t x17 = UINT16_MAX;
int8_t x22 = -1;
uint16_t x25 = 0U;
uint32_t x26 = 98U;
uint32_t x31 = UINT32_MAX;
int64_t x35 = 1678682933LL;
volatile int8_t x37 = 1;
int8_t x40 = -29;
int8_t x41 = INT8_MIN;
uint64_t x46 = 62741LLU;
static int64_t x52 = 390653073659478522LL;
volatile int32_t x53 = INT32_MIN;
int64_t x55 = 98801340545033505LL;
static volatile uint8_t x58 = UINT8_MAX;
int64_t x59 = INT64_MIN;
static volatile uint64_t t15 = 1851271LLU;
int16_t x70 = INT16_MIN;
volatile int32_t x73 = 70285;
int8_t x79 = INT8_MAX;
int16_t x83 = 122;
int16_t x86 = INT16_MAX;
static uint64_t x89 = 505699457361982525LLU;
uint16_t x91 = 109U;
int64_t x106 = 190036055LL;
uint16_t x110 = UINT16_MAX;
volatile int64_t x111 = -2938367022LL;
int8_t x118 = INT8_MAX;
uint64_t x119 = UINT64_MAX;
int16_t x121 = INT16_MAX;
int16_t x122 = 11;
int8_t x123 = INT8_MIN;
int16_t x125 = INT16_MAX;
volatile uint64_t x128 = UINT64_MAX;
uint8_t x130 = 0U;
int8_t x132 = 45;
uint32_t x134 = 940549893U;
uint32_t x139 = UINT32_MAX;
volatile uint8_t x140 = UINT8_MAX;
int64_t x141 = INT64_MAX;
volatile int64_t t35 = -90737407LL;
uint16_t x146 = 551U;
int32_t x156 = -26;
int64_t x159 = INT64_MIN;
int64_t t39 = 67887LL;
static volatile int32_t x161 = INT32_MIN;
int64_t t43 = 453126287LL;
volatile int16_t x181 = INT16_MAX;
int16_t x185 = -13044;
volatile int8_t x189 = INT8_MIN;
int16_t x192 = -44;
volatile uint64_t x197 = 45096361LLU;
static int64_t x199 = INT64_MIN;
int32_t x203 = -224993132;
volatile int32_t t49 = -707;
int64_t x205 = INT64_MIN;
int64_t t50 = 234LL;
int32_t x211 = INT32_MIN;
volatile uint8_t x212 = 1U;
volatile int64_t t51 = 53453LL;
volatile int16_t x213 = -1;
static int8_t x223 = INT8_MIN;
volatile uint32_t t54 = 44U;
static volatile int64_t x225 = -1LL;
int32_t x227 = -22930456;
uint32_t x228 = 1420788U;
int64_t x232 = -1LL;
int16_t x236 = INT16_MIN;
volatile int32_t t57 = 1039398;
volatile int8_t x239 = 33;
int64_t x240 = 0LL;
int8_t x242 = INT8_MIN;
uint16_t x243 = 7521U;
int16_t x244 = INT16_MIN;
static uint16_t x253 = 29U;
static int8_t x257 = INT8_MAX;
uint32_t x269 = 1701U;
uint64_t x274 = 612540713LLU;
volatile int32_t x278 = 6429;
int16_t x279 = INT16_MIN;
volatile uint8_t x281 = 0U;
volatile int8_t x284 = INT8_MIN;
static volatile uint8_t x286 = 13U;
int32_t x288 = -1;
int64_t x289 = -868209546680479LL;
int8_t x300 = INT8_MIN;
uint16_t x305 = 58U;
int64_t x308 = INT64_MIN;
volatile int8_t x316 = -1;
int8_t x318 = INT8_MAX;
int32_t x319 = -1;
int8_t x322 = 2;
static int16_t x326 = INT16_MIN;
uint64_t t80 = 1885226729LLU;
uint16_t x335 = UINT16_MAX;
static int64_t t82 = -239LL;
volatile uint16_t x338 = 3U;
uint64_t x339 = 175963727LLU;
static int8_t x341 = INT8_MAX;
int64_t x342 = INT64_MAX;
uint8_t x351 = UINT8_MAX;
static uint16_t x352 = UINT16_MAX;
int16_t x354 = -4;
volatile uint64_t t87 = 134310059784973LLU;
int8_t x360 = INT8_MIN;
uint8_t x367 = 14U;
static int32_t t90 = 244394;
int32_t t91 = -103;
int64_t x374 = INT64_MIN;
int32_t x377 = -170498;
int16_t x379 = -1;
int32_t x381 = INT32_MIN;
uint8_t x382 = 8U;
uint8_t x383 = 14U;
volatile int8_t x384 = INT8_MIN;
int32_t t94 = 22;
int8_t x397 = INT8_MIN;


void f0(void) {
	static volatile uint64_t x2 = 1LLU;
	static int64_t x3 = -1LL;
	uint64_t t0 = 2340248918100LLU;

	t0 = ((x1^(x2%x3))^x4);

	if (t0 != 2147483646LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	static int8_t x6 = INT8_MAX;
	uint64_t x7 = 267252886553189LLU;
	uint64_t t1 = 158543LLU;

	t1 = ((x5^(x6%x7))^x8);

	if (t1 != 113475247856171LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x12 = INT64_MAX;
	volatile int64_t t2 = -1171LL;

	t2 = ((x9^(x10%x11))^x12);

	if (t2 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x13 = 18279U;
	static int8_t x15 = INT8_MIN;
	uint8_t x16 = UINT8_MAX;
	volatile uint32_t t3 = 2114U;

	t3 = ((x13^(x14%x15))^x16);

	if (t3 != 4294948967U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = INT16_MIN;
	int32_t x19 = 2615;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = -2;

	t4 = ((x17^(x18%x19))^x20);

	if (t4 != 2147419499) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x21 = UINT64_MAX;
	int16_t x23 = 41;
	uint32_t x24 = 45022738U;
	uint64_t t5 = 14082870382LLU;

	t5 = ((x21^(x22%x23))^x24);

	if (t5 != 45022738LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x27 = 1676623373339601LL;
	uint8_t x28 = 3U;
	volatile int64_t t6 = -764497814669LL;

	t6 = ((x25^(x26%x27))^x28);

	if (t6 != 97LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -1LL;
	static uint16_t x30 = 5294U;
	int32_t x32 = INT32_MAX;
	volatile int64_t t7 = 6866LL;

	t7 = ((x29^(x30%x31))^x32);

	if (t7 != -2147478354LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 2190U;
	int8_t x34 = -1;
	static uint8_t x36 = 44U;
	volatile int64_t t8 = 10012LL;

	t8 = ((x33^(x34%x35))^x36);

	if (t8 != -2211LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = INT64_MIN;
	uint8_t x39 = 1U;
	volatile int64_t t9 = -2911LL;

	t9 = ((x37^(x38%x39))^x40);

	if (t9 != -30LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = -1LL;
	int32_t x43 = INT32_MIN;
	uint32_t x44 = UINT32_MAX;
	int64_t t10 = 888365232867433LL;

	t10 = ((x41^(x42%x43))^x44);

	if (t10 != 4294967168LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	volatile int32_t x47 = INT32_MAX;
	volatile uint32_t x48 = UINT32_MAX;
	volatile uint64_t t11 = 0LLU;

	t11 = ((x45^(x46%x47))^x48);

	if (t11 != 18446744069414619882LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	int8_t x50 = -15;
	volatile uint16_t x51 = UINT16_MAX;
	int64_t t12 = 1398473LL;

	t12 = ((x49^(x50%x51))^x52);

	if (t12 != 390653073659478516LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x54 = 186455346LLU;
	static uint16_t x56 = 29U;
	volatile uint64_t t13 = 0LLU;

	t13 = ((x53^(x54%x55))^x56);

	if (t13 != 18446744071748523311LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = UINT16_MAX;
	volatile int16_t x60 = -1;
	static int64_t t14 = 139771LL;

	t14 = ((x57^(x58%x59))^x60);

	if (t14 != -65281LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = INT8_MAX;
	int64_t x62 = INT64_MIN;
	uint64_t x63 = 226513633655663LLU;
	int8_t x64 = 5;

	t15 = ((x61^(x62%x63))^x64);

	if (t15 != 189901663489684LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = -1;
	int16_t x66 = -1;
	static int64_t x67 = INT64_MIN;
	static uint16_t x68 = 2U;
	int64_t t16 = 3697069731346LL;

	t16 = ((x65^(x66%x67))^x68);

	if (t16 != 2LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x69 = -1;
	int16_t x71 = -1;
	uint32_t x72 = 0U;
	uint32_t t17 = UINT32_MAX;

	t17 = ((x69^(x70%x71))^x72);

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x74 = UINT16_MAX;
	int8_t x75 = -1;
	int16_t x76 = 0;
	volatile int32_t t18 = 577;

	t18 = ((x73^(x74%x75))^x76);

	if (t18 != 70285) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	int64_t x78 = 91934469398508LL;
	int8_t x80 = -1;
	volatile int64_t t19 = 10LL;

	t19 = ((x77^(x78%x79))^x80);

	if (t19 != 2147483549LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = -1LL;
	uint64_t x82 = UINT64_MAX;
	int8_t x84 = INT8_MAX;
	volatile uint64_t t20 = 57590163166LLU;

	t20 = ((x81^(x82%x83))^x84);

	if (t20 != 18446744073709551503LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = 50821231LL;
	uint32_t x87 = UINT32_MAX;
	int16_t x88 = 32;
	volatile int64_t t21 = -50636692055544LL;

	t21 = ((x85^(x86%x87))^x88);

	if (t21 != 50792368LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x90 = -909;
	uint16_t x92 = 45U;
	static volatile uint64_t t22 = 27012914275604711LLU;

	t22 = ((x89^(x90%x91))^x92);

	if (t22 != 17941044616347569099LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x93 = 133U;
	static int8_t x94 = INT8_MIN;
	uint64_t x95 = 33533LLU;
	int32_t x96 = -1;
	uint64_t t23 = 13284022245602255LLU;

	t23 = ((x93^(x94%x95))^x96);

	if (t23 != 18446744073709541445LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = UINT16_MAX;
	static volatile int16_t x98 = INT16_MIN;
	int8_t x99 = 22;
	volatile uint64_t x100 = UINT64_MAX;
	volatile uint64_t t24 = 4285786914827459LLU;

	t24 = ((x97^(x98%x99))^x100);

	if (t24 != 65526LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = 89;
	static uint64_t x102 = 56980LLU;
	volatile int32_t x103 = INT32_MIN;
	int16_t x104 = INT16_MAX;
	uint64_t t25 = 1564338191LLU;

	t25 = ((x101^(x102%x103))^x104);

	if (t25 != 41266LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x105 = 11568U;
	int16_t x107 = -19;
	static uint64_t x108 = 5192LLU;
	volatile uint64_t t26 = 14LLU;

	t26 = ((x105^(x106%x107))^x108);

	if (t26 != 14708LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 119U;
	uint32_t x112 = 1U;
	volatile int64_t t27 = -838701116381LL;

	t27 = ((x109^(x110%x111))^x112);

	if (t27 != 65417LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	int64_t x114 = 7535039LL;
	uint64_t x115 = UINT64_MAX;
	uint8_t x116 = 2U;
	uint64_t t28 = 129015925460271652LLU;

	t28 = ((x113^(x114%x115))^x116);

	if (t28 != 18446744073702046141LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = 103976483LL;
	volatile int64_t x120 = INT64_MIN;
	volatile uint64_t t29 = 241293920510194617LLU;

	t29 = ((x117^(x118%x119))^x120);

	if (t29 != 9223372036958752348LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x124 = 13;
	volatile int32_t t30 = 2576;

	t30 = ((x121^(x122%x123))^x124);

	if (t30 != 32761) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x126 = -929LL;
	uint64_t x127 = 6002845260398318700LLU;
	volatile uint64_t t31 = 110790006467LLU;

	t31 = ((x125^(x126%x127))^x128);

	if (t31 != 18008535781194989339LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 9621U;
	volatile int16_t x131 = -3447;
	volatile int32_t t32 = 196;

	t32 = ((x129^(x130%x131))^x132);

	if (t32 != 9656) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x133 = INT8_MIN;
	int64_t x135 = INT64_MIN;
	uint64_t x136 = 80484LLU;
	static uint64_t t33 = 0LLU;

	t33 = ((x133^(x134%x135))^x136);

	if (t33 != 18446744072769069793LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = UINT8_MAX;
	int16_t x138 = INT16_MIN;
	volatile uint32_t t34 = 253043U;

	t34 = ((x137^(x138%x139))^x140);

	if (t34 != 4294934528U) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x142 = INT16_MIN;
	int64_t x143 = 1261742077LL;
	uint32_t x144 = UINT32_MAX;

	t35 = ((x141^(x142%x143))^x144);

	if (t35 != -9223372032559841280LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x145 = INT64_MIN;
	volatile int32_t x147 = 1556971;
	volatile int16_t x148 = -1;
	int64_t t36 = 817621LL;

	t36 = ((x145^(x146%x147))^x148);

	if (t36 != 9223372036854775256LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint32_t x149 = 32899152U;
	int64_t x150 = INT64_MIN;
	int8_t x151 = 10;
	uint32_t x152 = UINT32_MAX;
	volatile int64_t t37 = 170324274LL;

	t37 = ((x149^(x150%x151))^x152);

	if (t37 != -4262068137LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = -1;
	int8_t x154 = -3;
	int32_t x155 = -1;
	volatile int32_t t38 = -220757994;

	t38 = ((x153^(x154%x155))^x156);

	if (t38 != 25) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x157 = INT64_MAX;
	int16_t x158 = INT16_MIN;
	int64_t x160 = INT64_MAX;

	t39 = ((x157^(x158%x159))^x160);

	if (t39 != -32768LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x162 = UINT32_MAX;
	uint32_t x163 = 470137615U;
	volatile int8_t x164 = INT8_MIN;
	volatile uint32_t t40 = 3U;

	t40 = ((x161^(x162%x163))^x164);

	if (t40 != 2083755000U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x169 = 5U;
	static int64_t x170 = INT64_MIN;
	int8_t x171 = INT8_MIN;
	uint16_t x172 = 10889U;
	int64_t t41 = -110488981605542LL;

	t41 = ((x169^(x170%x171))^x172);

	if (t41 != 10892LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x173 = UINT64_MAX;
	int16_t x174 = 25;
	int16_t x175 = -4;
	uint8_t x176 = 13U;
	uint64_t t42 = 433600268LLU;

	t42 = ((x173^(x174%x175))^x176);

	if (t42 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x177 = -1029922;
	int16_t x178 = 14;
	static int64_t x179 = -1LL;
	volatile int16_t x180 = 1;

	t43 = ((x177^(x178%x179))^x180);

	if (t43 != -1029921LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x182 = INT8_MIN;
	volatile uint64_t x183 = 142470075579817LLU;
	static int32_t x184 = INT32_MIN;
	uint64_t t44 = 6345707793LLU;

	t44 = ((x181^(x182%x183))^x184);

	if (t44 != 18446740445148287541LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x186 = INT8_MIN;
	static int16_t x187 = INT16_MAX;
	int32_t x188 = INT32_MIN;
	int32_t t45 = -2021;

	t45 = ((x185^(x186%x187))^x188);

	if (t45 != -2147470708) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x190 = -1;
	int64_t x191 = -816311039135263551LL;
	int64_t t46 = 2913LL;

	t46 = ((x189^(x190%x191))^x192);

	if (t46 != -85LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x193 = INT16_MIN;
	int8_t x194 = 7;
	int16_t x195 = -1881;
	uint8_t x196 = 74U;
	volatile int32_t t47 = 456848212;

	t47 = ((x193^(x194%x195))^x196);

	if (t47 != -32691) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x198 = INT16_MAX;
	int32_t x200 = INT32_MIN;
	static volatile uint64_t t48 = 6LLU;

	t48 = ((x197^(x198%x199))^x200);

	if (t48 != 18446744071607181910LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x201 = INT16_MIN;
	int32_t x202 = INT32_MAX;
	uint8_t x204 = UINT8_MAX;

	t49 = ((x201^(x202%x203))^x204);

	if (t49 != -122526260) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x206 = INT64_MIN;
	static volatile uint32_t x207 = 2509U;
	int64_t x208 = INT64_MAX;

	t50 = ((x205^(x206%x207))^x208);

	if (t50 != 813LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x209 = -1;
	int64_t x210 = INT64_MAX;

	t51 = ((x209^(x210%x211))^x212);

	if (t51 != -2147483647LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x214 = -8074;
	int32_t x215 = -1;
	volatile uint16_t x216 = 248U;
	volatile int32_t t52 = -13108600;

	t52 = ((x213^(x214%x215))^x216);

	if (t52 != -249) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x217 = 8LLU;
	int64_t x218 = 1LL;
	static uint16_t x219 = 16U;
	uint64_t x220 = 3285846118897LLU;
	volatile uint64_t t53 = 41347336572LLU;

	t53 = ((x217^(x218%x219))^x220);

	if (t53 != 3285846118904LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x221 = 29U;
	uint8_t x222 = 2U;
	static uint8_t x224 = 2U;

	t54 = ((x221^(x222%x223))^x224);

	if (t54 != 29U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x226 = -1;
	static volatile int64_t t55 = -34LL;

	t55 = ((x225^(x226%x227))^x228);

	if (t55 != 1420788LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x229 = INT32_MIN;
	uint64_t x230 = 55001349391331347LLU;
	int32_t x231 = -51;
	volatile uint64_t t56 = 130546897810548LLU;

	t56 = ((x229^(x230%x231))^x232);

	if (t56 != 55001350846337004LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x233 = -1933;
	uint16_t x234 = 232U;
	int16_t x235 = INT16_MAX;

	t57 = ((x233^(x234%x235))^x236);

	if (t57 != 30875) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x237 = -1LL;
	int32_t x238 = INT32_MIN;
	int64_t t58 = -374783487LL;

	t58 = ((x237^(x238%x239))^x240);

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x241 = UINT32_MAX;
	static uint32_t t59 = 1852U;

	t59 = ((x241^(x242%x243))^x244);

	if (t59 != 4294934655U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x245 = INT16_MIN;
	static int8_t x246 = INT8_MIN;
	int16_t x247 = INT16_MIN;
	int16_t x248 = 48;
	static volatile int32_t t60 = 331741252;

	t60 = ((x245^(x246%x247))^x248);

	if (t60 != 32688) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x249 = -1;
	int16_t x250 = 381;
	int8_t x251 = -1;
	static int64_t x252 = INT64_MAX;
	volatile int64_t t61 = INT64_MIN;

	t61 = ((x249^(x250%x251))^x252);

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x254 = INT16_MIN;
	int16_t x255 = INT16_MIN;
	static uint8_t x256 = UINT8_MAX;
	volatile int32_t t62 = -707;

	t62 = ((x253^(x254%x255))^x256);

	if (t62 != 226) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x258 = -1;
	int16_t x259 = INT16_MIN;
	int16_t x260 = INT16_MAX;
	int32_t t63 = -741682288;

	t63 = ((x257^(x258%x259))^x260);

	if (t63 != -32641) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x261 = INT8_MIN;
	static int8_t x262 = -1;
	static int8_t x263 = INT8_MIN;
	int32_t x264 = -25;
	volatile int32_t t64 = -2272237;

	t64 = ((x261^(x262%x263))^x264);

	if (t64 != -104) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x265 = 0U;
	volatile uint16_t x266 = 0U;
	int16_t x267 = INT16_MIN;
	int64_t x268 = INT64_MIN;
	volatile int64_t t65 = INT64_MIN;

	t65 = ((x265^(x266%x267))^x268);

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x270 = INT16_MAX;
	uint32_t x271 = 19522739U;
	int32_t x272 = INT32_MIN;
	volatile uint32_t t66 = 334U;

	t66 = ((x269^(x270%x271))^x272);

	if (t66 != 2147514714U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x273 = 12U;
	int16_t x275 = -5266;
	uint16_t x276 = UINT16_MAX;
	volatile uint64_t t67 = 16954307381602LLU;

	t67 = ((x273^(x274%x275))^x276);

	if (t67 != 612523738LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x277 = -755711744;
	uint32_t x280 = 1U;
	volatile uint32_t t68 = 32923U;

	t68 = ((x277^(x278%x279))^x280);

	if (t68 != 3539261468U) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x282 = 719U;
	uint16_t x283 = UINT16_MAX;
	int32_t t69 = -10549991;

	t69 = ((x281^(x282%x283))^x284);

	if (t69 != -689) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int64_t x285 = -7618542LL;
	static int16_t x287 = INT16_MIN;
	int64_t t70 = -1002988707456LL;

	t70 = ((x285^(x286%x287))^x288);

	if (t70 != 7618528LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x290 = UINT8_MAX;
	int64_t x291 = -1LL;
	static volatile uint8_t x292 = 20U;
	int64_t t71 = -6474LL;

	t71 = ((x289^(x290%x291))^x292);

	if (t71 != -868209546680459LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x293 = UINT32_MAX;
	int32_t x294 = INT32_MIN;
	int64_t x295 = -1LL;
	int16_t x296 = INT16_MIN;
	volatile int64_t t72 = 31958LL;

	t72 = ((x293^(x294%x295))^x296);

	if (t72 != -4294934529LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x297 = 1U;
	volatile int32_t x298 = -1;
	int8_t x299 = INT8_MAX;
	volatile uint32_t t73 = 262705U;

	t73 = ((x297^(x298%x299))^x300);

	if (t73 != 126U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x301 = 4403U;
	static uint32_t x302 = UINT32_MAX;
	volatile int64_t x303 = -1LL;
	uint8_t x304 = UINT8_MAX;
	static int64_t t74 = 1783074897842793LL;

	t74 = ((x301^(x302%x303))^x304);

	if (t74 != 4556LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x306 = UINT32_MAX;
	int64_t x307 = INT64_MAX;
	volatile int64_t t75 = -9069995LL;

	t75 = ((x305^(x306%x307))^x308);

	if (t75 != -9223372032559808571LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x309 = 41;
	static int8_t x310 = -1;
	uint64_t x311 = 3303843252600105399LLU;
	volatile uint16_t x312 = 2U;
	volatile uint64_t t76 = 658341037541249539LLU;

	t76 = ((x309^(x310%x311))^x312);

	if (t76 != 1927527810709024583LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x313 = INT16_MIN;
	static int16_t x314 = INT16_MIN;
	static int64_t x315 = INT64_MIN;
	static int64_t t77 = 3137819255850616873LL;

	t77 = ((x313^(x314%x315))^x316);

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x317 = 0;
	uint64_t x320 = 490516988800LLU;
	uint64_t t78 = 38459312446615925LLU;

	t78 = ((x317^(x318%x319))^x320);

	if (t78 != 490516988800LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x321 = 121U;
	int64_t x323 = INT64_MIN;
	uint64_t x324 = UINT64_MAX;
	uint64_t t79 = 64077754721774LLU;

	t79 = ((x321^(x322%x323))^x324);

	if (t79 != 18446744073709551492LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x325 = INT16_MIN;
	uint64_t x327 = UINT64_MAX;
	int16_t x328 = INT16_MIN;

	t80 = ((x325^(x326%x327))^x328);

	if (t80 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x329 = INT8_MIN;
	uint8_t x330 = 0U;
	static uint64_t x331 = 126LLU;
	int16_t x332 = INT16_MIN;
	static uint64_t t81 = 2525806774213105LLU;

	t81 = ((x329^(x330%x331))^x332);

	if (t81 != 32640LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x333 = -1LL;
	uint32_t x334 = UINT32_MAX;
	static int8_t x336 = INT8_MAX;

	t82 = ((x333^(x334%x335))^x336);

	if (t82 != -128LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x337 = INT64_MAX;
	static uint64_t x340 = UINT64_MAX;
	volatile uint64_t t83 = 42469984327LLU;

	t83 = ((x337^(x338%x339))^x340);

	if (t83 != 9223372036854775811LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x343 = INT8_MIN;
	int16_t x344 = -494;
	int64_t t84 = 951648879346631249LL;

	t84 = ((x341^(x342%x343))^x344);

	if (t84 != -494LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x345 = -1;
	volatile int64_t x346 = INT64_MAX;
	uint16_t x347 = 17U;
	static int16_t x348 = -4;
	int64_t t85 = -3513847877675462LL;

	t85 = ((x345^(x346%x347))^x348);

	if (t85 != 11LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x349 = INT16_MIN;
	uint16_t x350 = UINT16_MAX;
	volatile int32_t t86 = -1;

	t86 = ((x349^(x350%x351))^x352);

	if (t86 != -32769) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x353 = 2066688324439980353LLU;
	uint64_t x355 = 7215340LLU;
	int64_t x356 = 1LL;

	t87 = ((x353^(x354%x355))^x356);

	if (t87 != 2066688324437125276LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x357 = 1533734738U;
	volatile uint16_t x358 = 1U;
	int32_t x359 = INT32_MIN;
	uint32_t t88 = 24232U;

	t88 = ((x357^(x358%x359))^x360);

	if (t88 != 2761232595U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x361 = -1LL;
	volatile uint16_t x362 = 338U;
	volatile uint32_t x363 = UINT32_MAX;
	int16_t x364 = INT16_MAX;
	int64_t t89 = 1LL;

	t89 = ((x361^(x362%x363))^x364);

	if (t89 != -32430LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint16_t x365 = UINT16_MAX;
	static int16_t x366 = INT16_MIN;
	int8_t x368 = 19;

	t90 = ((x365^(x366%x367))^x368);

	if (t90 != -65516) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x369 = 15789U;
	int16_t x370 = -1;
	static volatile int8_t x371 = -1;
	int16_t x372 = INT16_MAX;

	t91 = ((x369^(x370%x371))^x372);

	if (t91 != 16978) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x373 = -1;
	static uint32_t x375 = UINT32_MAX;
	int64_t x376 = -378301307LL;
	int64_t t92 = 3075LL;

	t92 = ((x373^(x374%x375))^x376);

	if (t92 != -1769182342LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x378 = INT16_MIN;
	int32_t x380 = INT32_MIN;
	static int32_t t93 = -17;

	t93 = ((x377^(x378%x379))^x380);

	if (t93 != 2147313150) { NG(); } else { ; }
	
}

void f94(void) {


	t94 = ((x381^(x382%x383))^x384);

	if (t94 != 2147483528) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x385 = 4U;
	int8_t x386 = INT8_MIN;
	uint16_t x387 = UINT16_MAX;
	int8_t x388 = INT8_MAX;
	int32_t t95 = 4349;

	t95 = ((x385^(x386%x387))^x388);

	if (t95 != -5) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x389 = 0U;
	uint32_t x390 = 186959228U;
	int32_t x391 = 707;
	static volatile int16_t x392 = INT16_MIN;
	volatile uint32_t t96 = 1202956148U;

	t96 = ((x389^(x390%x391))^x392);

	if (t96 != 4294934676U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x393 = 270093967U;
	static uint8_t x394 = 37U;
	static int8_t x395 = -1;
	static volatile int32_t x396 = 253;
	uint32_t t97 = 216684388U;

	t97 = ((x393^(x394%x395))^x396);

	if (t97 != 270093938U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x398 = 117420LLU;
	volatile int16_t x399 = INT16_MIN;
	uint32_t x400 = 142U;
	static uint64_t t98 = 25630042782LLU;

	t98 = ((x397^(x398%x399))^x400);

	if (t98 != 18446744073709434274LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x401 = 1LL;
	static volatile int32_t x402 = -1;
	int32_t x403 = -1;
	uint32_t x404 = 657437U;
	volatile int64_t t99 = 55LL;

	t99 = ((x401^(x402%x403))^x404);

	if (t99 != 657436LL) { NG(); } else { ; }
	
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

