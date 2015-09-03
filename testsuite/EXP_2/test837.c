#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = -797369LL;
int8_t x17 = INT8_MAX;
uint16_t x21 = 1902U;
volatile int64_t t4 = 68803026724902564LL;
static volatile uint8_t x25 = UINT8_MAX;
uint32_t x39 = 222441359U;
volatile uint32_t t8 = 0U;
uint32_t x44 = 22U;
static int64_t t11 = 208LL;
int64_t x53 = INT64_MIN;
static uint32_t x56 = 3591U;
volatile int64_t x63 = INT64_MAX;
int64_t t14 = -29912857382418LL;
uint8_t x74 = 0U;
int32_t x79 = INT32_MAX;
static int64_t x82 = INT64_MIN;
int8_t x83 = -1;
int32_t x88 = -309749;
uint32_t x95 = 27U;
uint64_t x105 = 226709990590933LLU;
int32_t x108 = INT32_MAX;
uint64_t t24 = 227392963LLU;
volatile int32_t x109 = 3000387;
static volatile int8_t x115 = INT8_MAX;
volatile uint8_t x116 = UINT8_MAX;
volatile int16_t x123 = -1;
uint16_t x125 = 23U;
static volatile int16_t x132 = -1;
int8_t x147 = -1;
static int16_t x148 = -1;
int32_t x156 = -1;
int8_t x162 = -1;
volatile int32_t t37 = -170;
volatile int64_t t39 = -1296541458495115996LL;
volatile int32_t t41 = 14;
volatile int64_t x183 = -1LL;
static volatile int64_t x187 = 1946LL;
int8_t x203 = INT8_MIN;
int64_t x218 = INT64_MIN;
int8_t x221 = INT8_MIN;
volatile int8_t x228 = -3;
static volatile int64_t x232 = INT64_MIN;
int32_t x245 = 241982299;
static int64_t t55 = 1093065288825400LL;
int16_t x254 = -1;
int8_t x263 = 31;
int8_t x274 = 5;
static int64_t x275 = 572480LL;
uint64_t x287 = UINT64_MAX;
volatile int8_t x289 = INT8_MIN;
int64_t t67 = -20226899888445278LL;
uint32_t x305 = UINT32_MAX;
int64_t x306 = 8267841351328LL;
uint32_t x312 = 50330168U;
int64_t t70 = 7548950276395LL;
volatile int8_t x319 = INT8_MIN;
int16_t x321 = 6;
int16_t x324 = INT16_MAX;
int8_t x326 = -1;
int8_t x329 = -1;
static volatile uint32_t x333 = 20113U;
static uint16_t x334 = 32U;
volatile uint64_t x339 = 184886406346407LLU;
uint32_t x346 = UINT32_MAX;
volatile uint16_t x351 = 9U;
volatile int64_t x352 = INT64_MAX;
int8_t x353 = -1;
volatile uint32_t x355 = 50801U;
int64_t x361 = INT64_MIN;
volatile int8_t x365 = -40;
int32_t x367 = 7695177;
volatile int8_t x387 = INT8_MIN;
volatile uint32_t x396 = 1U;
uint64_t x397 = 2210LLU;
volatile int16_t x398 = -25;
volatile uint64_t t91 = 69909575LLU;
uint8_t x402 = 79U;
int32_t x410 = INT32_MIN;
int64_t x416 = INT64_MIN;
volatile int64_t t96 = -9780LL;
int32_t x422 = -207;
volatile int32_t t97 = -743110785;
int32_t x431 = 12;
int8_t x432 = INT8_MAX;


void f0(void) {
	static int64_t x1 = INT64_MIN;
	int64_t x2 = INT64_MIN;
	static int16_t x3 = INT16_MIN;
	static volatile int8_t x4 = INT8_MAX;
	volatile int64_t t0 = -1828LL;

	t0 = ((x1^(x2%x3))%x4);

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x6 = 0U;
	uint16_t x7 = UINT16_MAX;
	volatile int16_t x8 = -13;
	int64_t t1 = 16595947780103LL;

	t1 = ((x5^(x6%x7))%x8);

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = -50;
	volatile int32_t x10 = -243377888;
	int16_t x11 = INT16_MAX;
	static int8_t x12 = INT8_MIN;
	static int32_t t2 = -3;

	t2 = ((x9^(x10%x11))%x12);

	if (t2 != 83) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x18 = UINT8_MAX;
	volatile int16_t x19 = -1;
	static int8_t x20 = 10;
	static volatile int32_t t3 = -4;

	t3 = ((x17^(x18%x19))%x20);

	if (t3 != 7) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x22 = INT64_MIN;
	int32_t x23 = INT32_MIN;
	static volatile uint8_t x24 = 5U;

	t4 = ((x21^(x22%x23))%x24);

	if (t4 != 2LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x26 = -7;
	static int16_t x27 = INT16_MIN;
	static int8_t x28 = INT8_MAX;
	int32_t t5 = 666;

	t5 = ((x25^(x26%x27))%x28);

	if (t5 != -123) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MIN;
	int8_t x30 = -1;
	static int8_t x31 = INT8_MIN;
	static int16_t x32 = INT16_MIN;
	volatile int64_t t6 = 284845201895839811LL;

	t6 = ((x29^(x30%x31))%x32);

	if (t6 != 32767LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x33 = INT16_MAX;
	static int32_t x34 = -1;
	volatile int32_t x35 = 458075366;
	static volatile int32_t x36 = 1845;
	volatile int32_t t7 = 497;

	t7 = ((x33^(x34%x35))%x36);

	if (t7 != -1403) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MIN;
	volatile int8_t x38 = 15;
	uint8_t x40 = UINT8_MAX;

	t8 = ((x37^(x38%x39))%x40);

	if (t8 != 143U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = -1LL;
	int16_t x42 = -5;
	volatile int32_t x43 = -1;
	static volatile int64_t t9 = -11380191703066LL;

	t9 = ((x41^(x42%x43))%x44);

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x45 = -1;
	volatile uint8_t x46 = 34U;
	static int64_t x47 = -1LL;
	static uint32_t x48 = 1U;
	static volatile int64_t t10 = -207286249067257LL;

	t10 = ((x45^(x46%x47))%x48);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x49 = -34619;
	int16_t x50 = INT16_MAX;
	int64_t x51 = INT64_MIN;
	uint32_t x52 = 51685U;

	t11 = ((x49^(x50%x51))%x52);

	if (t11 != -12001LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x54 = 1445U;
	static uint8_t x55 = 19U;
	volatile int64_t t12 = 259LL;

	t12 = ((x53^(x54%x55))%x56);

	if (t12 != -511LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = INT64_MAX;
	uint16_t x58 = 0U;
	uint8_t x59 = 5U;
	static volatile uint32_t x60 = 345763U;
	volatile int64_t t13 = -121855LL;

	t13 = ((x57^(x58%x59))%x60);

	if (t13 != 6706LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x61 = -56231982994LL;
	volatile int8_t x62 = INT8_MIN;
	int16_t x64 = INT16_MIN;

	t14 = ((x61^(x62%x63))%x64);

	if (t14 != 30702LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x65 = -1;
	int64_t x66 = -23080LL;
	int32_t x67 = 63900;
	volatile int16_t x68 = INT16_MIN;
	static int64_t t15 = -34343924955269233LL;

	t15 = ((x65^(x66%x67))%x68);

	if (t15 != 23079LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = INT32_MAX;
	static int32_t x75 = INT32_MIN;
	int32_t x76 = 675342945;
	volatile int32_t t16 = -202324;

	t16 = ((x73^(x74%x75))%x76);

	if (t16 != 121454812) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint32_t x77 = 688U;
	uint64_t x78 = 40677948175889140LLU;
	int16_t x80 = -1;
	static uint64_t t17 = 18000LLU;

	t17 = ((x77^(x78%x79))%x80);

	if (t17 != 1549285637LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x81 = UINT16_MAX;
	static int32_t x84 = 5459891;
	volatile int64_t t18 = -10099056LL;

	t18 = ((x81^(x82%x83))%x84);

	if (t18 != 65535LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = 2;
	volatile uint8_t x86 = 12U;
	volatile int16_t x87 = -1;
	int32_t t19 = -37128016;

	t19 = ((x85^(x86%x87))%x88);

	if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = INT16_MIN;
	int64_t x90 = INT64_MIN;
	int32_t x91 = INT32_MIN;
	uint32_t x92 = 389839U;
	volatile int64_t t20 = -77680854LL;

	t20 = ((x89^(x90%x91))%x92);

	if (t20 != -32768LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x93 = 974U;
	int32_t x94 = INT32_MAX;
	int8_t x96 = 6;
	uint32_t t21 = 106941U;

	t21 = ((x93^(x94%x95))%x96);

	if (t21 != 4U) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x97 = INT32_MIN;
	int16_t x98 = INT16_MIN;
	int64_t x99 = -4LL;
	volatile int8_t x100 = INT8_MAX;
	int64_t t22 = 59LL;

	t22 = ((x97^(x98%x99))%x100);

	if (t22 != -8LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x101 = 28U;
	static volatile uint16_t x102 = 1U;
	uint64_t x103 = UINT64_MAX;
	uint8_t x104 = UINT8_MAX;
	uint64_t t23 = 191009730LLU;

	t23 = ((x101^(x102%x103))%x104);

	if (t23 != 29LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x106 = 206799765684LLU;
	int32_t x107 = INT32_MIN;

	t24 = ((x105^(x106%x107))%x108);

	if (t24 != 777020771LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x110 = -1;
	int64_t x111 = INT64_MIN;
	volatile int64_t x112 = INT64_MIN;
	static int64_t t25 = 5237LL;

	t25 = ((x109^(x110%x111))%x112);

	if (t25 != -3000388LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x113 = INT8_MIN;
	int8_t x114 = -1;
	volatile int32_t t26 = -153643;

	t26 = ((x113^(x114%x115))%x116);

	if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x117 = 13U;
	static uint32_t x118 = 210U;
	uint16_t x119 = 7012U;
	int64_t x120 = 185909693LL;
	static volatile int64_t t27 = -6595319770830LL;

	t27 = ((x117^(x118%x119))%x120);

	if (t27 != 223LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x121 = -793315;
	volatile uint64_t x122 = 2959LLU;
	uint32_t x124 = UINT32_MAX;
	uint64_t t28 = 3332126708172572229LLU;

	t28 = ((x121^(x122%x123))%x124);

	if (t28 != 4294176402LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x126 = -4548164440LL;
	int16_t x127 = INT16_MAX;
	int64_t x128 = 69662966LL;
	volatile int64_t t29 = -225099904584514916LL;

	t29 = ((x125^(x126%x127))%x128);

	if (t29 != -6558LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x129 = INT16_MIN;
	int8_t x130 = INT8_MIN;
	uint64_t x131 = 100923837LLU;
	volatile uint64_t t30 = 1184870579034LLU;

	t30 = ((x129^(x130%x131))%x132);

	if (t30 != 18446744073615958423LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x133 = INT64_MIN;
	volatile int16_t x134 = -1;
	int64_t x135 = INT64_MIN;
	int32_t x136 = -1;
	volatile int64_t t31 = -1428630LL;

	t31 = ((x133^(x134%x135))%x136);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x137 = INT16_MIN;
	uint8_t x138 = 0U;
	int64_t x139 = -1LL;
	int32_t x140 = INT32_MIN;
	int64_t t32 = 707562LL;

	t32 = ((x137^(x138%x139))%x140);

	if (t32 != -32768LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x145 = 39;
	int64_t x146 = -1LL;
	int64_t t33 = 18940LL;

	t33 = ((x145^(x146%x147))%x148);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x149 = -52;
	uint32_t x150 = 2U;
	volatile int16_t x151 = INT16_MIN;
	volatile uint16_t x152 = 3073U;
	static uint32_t t34 = 1843369U;

	t34 = ((x149^(x150%x151))%x152);

	if (t34 != 1088U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x153 = 10203U;
	int64_t x154 = INT64_MAX;
	uint64_t x155 = 27770136262LLU;
	uint64_t t35 = 63LLU;

	t35 = ((x153^(x154%x155))%x156);

	if (t35 != 6810487410LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x157 = 19;
	int8_t x158 = INT8_MIN;
	static uint64_t x159 = 1221608460769112LLU;
	static uint16_t x160 = UINT16_MAX;
	uint64_t t36 = 48361829741035820LLU;

	t36 = ((x157^(x158%x159))%x160);

	if (t36 != 4807LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x161 = -1;
	int8_t x163 = 1;
	int8_t x164 = INT8_MAX;

	t37 = ((x161^(x162%x163))%x164);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x165 = -2;
	int64_t x166 = -1LL;
	int16_t x167 = INT16_MAX;
	int32_t x168 = INT32_MIN;
	static volatile int64_t t38 = -904043312568864LL;

	t38 = ((x165^(x166%x167))%x168);

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x169 = INT32_MIN;
	volatile int64_t x170 = -1LL;
	volatile int64_t x171 = INT64_MAX;
	uint16_t x172 = 60U;

	t39 = ((x169^(x170%x171))%x172);

	if (t39 != 7LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x173 = 78942LL;
	int32_t x174 = -2;
	static uint16_t x175 = UINT16_MAX;
	uint8_t x176 = 2U;
	static int64_t t40 = -2543350616746970536LL;

	t40 = ((x173^(x174%x175))%x176);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x177 = -10;
	int32_t x178 = INT32_MIN;
	volatile int16_t x179 = INT16_MIN;
	int8_t x180 = INT8_MIN;

	t41 = ((x177^(x178%x179))%x180);

	if (t41 != -10) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x181 = INT16_MIN;
	int8_t x182 = INT8_MIN;
	int32_t x184 = 3;
	static int64_t t42 = -2LL;

	t42 = ((x181^(x182%x183))%x184);

	if (t42 != -2LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x185 = 498484431481LLU;
	static uint32_t x186 = 95U;
	uint8_t x188 = UINT8_MAX;
	uint64_t t43 = 870082357LLU;

	t43 = ((x185^(x186%x187))%x188);

	if (t43 != 113LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x189 = INT8_MAX;
	static volatile int8_t x190 = -1;
	uint64_t x191 = UINT64_MAX;
	int8_t x192 = INT8_MIN;
	uint64_t t44 = 285LLU;

	t44 = ((x189^(x190%x191))%x192);

	if (t44 != 127LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x193 = 1662;
	int64_t x194 = INT64_MIN;
	int32_t x195 = INT32_MIN;
	static uint32_t x196 = 788U;
	int64_t t45 = -9129LL;

	t45 = ((x193^(x194%x195))%x196);

	if (t45 != 86LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x197 = UINT8_MAX;
	static volatile int32_t x198 = -121955;
	volatile uint8_t x199 = UINT8_MAX;
	uint64_t x200 = 4597118LLU;
	uint64_t t46 = 822735LLU;

	t46 = ((x197^(x198%x199))%x200);

	if (t46 != 3959272LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x201 = -1;
	int16_t x202 = -1;
	int8_t x204 = INT8_MIN;
	volatile int32_t t47 = -1234741;

	t47 = ((x201^(x202%x203))%x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x209 = UINT32_MAX;
	int8_t x210 = INT8_MAX;
	int32_t x211 = INT32_MIN;
	int64_t x212 = -12LL;
	volatile int64_t t48 = -9LL;

	t48 = ((x209^(x210%x211))%x212);

	if (t48 != 8LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x217 = 1LL;
	volatile int16_t x219 = -6;
	int64_t x220 = 5727977LL;
	int64_t t49 = 2LL;

	t49 = ((x217^(x218%x219))%x220);

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x222 = 196867149359997LLU;
	int8_t x223 = INT8_MIN;
	uint8_t x224 = UINT8_MAX;
	volatile uint64_t t50 = 884646233433LLU;

	t50 = ((x221^(x222%x223))%x224);

	if (t50 != 156LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x225 = 300774617U;
	static int8_t x226 = 12;
	int8_t x227 = 4;
	volatile uint32_t t51 = 1U;

	t51 = ((x225^(x226%x227))%x228);

	if (t51 != 300774617U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x229 = INT32_MIN;
	volatile int32_t x230 = 2019595;
	int64_t x231 = INT64_MIN;
	int64_t t52 = 9104156LL;

	t52 = ((x229^(x230%x231))%x232);

	if (t52 != -2145464053LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x233 = 1U;
	int64_t x234 = INT64_MAX;
	static uint32_t x235 = 51821U;
	volatile int64_t x236 = INT64_MIN;
	volatile int64_t t53 = -14LL;

	t53 = ((x233^(x234%x235))%x236);

	if (t53 != 46901LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x246 = 41;
	volatile int64_t x247 = -58454LL;
	volatile uint32_t x248 = UINT32_MAX;
	volatile int64_t t54 = -42LL;

	t54 = ((x245^(x246%x247))%x248);

	if (t54 != 241982322LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x249 = -105839545;
	int16_t x250 = INT16_MAX;
	uint8_t x251 = 21U;
	volatile int64_t x252 = -397260967899756958LL;

	t55 = ((x249^(x250%x251))%x252);

	if (t55 != -105839552LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x253 = -13;
	int64_t x255 = -46800872703LL;
	uint64_t x256 = UINT64_MAX;
	uint64_t t56 = 11511LLU;

	t56 = ((x253^(x254%x255))%x256);

	if (t56 != 12LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x261 = -114;
	volatile uint32_t x262 = UINT32_MAX;
	volatile int8_t x264 = -1;
	uint32_t t57 = 509U;

	t57 = ((x261^(x262%x263))%x264);

	if (t57 != 4294967181U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x265 = -1;
	volatile int16_t x266 = -15045;
	int64_t x267 = -63528175278898LL;
	uint16_t x268 = 22471U;
	int64_t t58 = -118408LL;

	t58 = ((x265^(x266%x267))%x268);

	if (t58 != 15044LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x269 = -1LL;
	int64_t x270 = -2531830009LL;
	int32_t x271 = INT32_MAX;
	uint8_t x272 = 10U;
	int64_t t59 = -584039937095124LL;

	t59 = ((x269^(x270%x271))%x272);

	if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x273 = -2441464LL;
	static volatile int8_t x276 = INT8_MIN;
	int64_t t60 = -61325889LL;

	t60 = ((x273^(x274%x275))%x276);

	if (t60 != -115LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x277 = -7331;
	static uint16_t x278 = 14632U;
	uint16_t x279 = 7U;
	static uint16_t x280 = UINT16_MAX;
	static volatile int32_t t61 = 18;

	t61 = ((x277^(x278%x279))%x280);

	if (t61 != -7329) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x281 = INT16_MIN;
	uint64_t x282 = 444455554094LLU;
	int16_t x283 = -1;
	volatile int8_t x284 = INT8_MIN;
	static uint64_t t62 = 66LLU;

	t62 = ((x281^(x282%x283))%x284);

	if (t62 != 18446743629253970990LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x285 = INT32_MIN;
	uint16_t x286 = 0U;
	volatile uint32_t x288 = 135U;
	static uint64_t t63 = 626273042709LLU;

	t63 = ((x285^(x286%x287))%x288);

	if (t63 != 68LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x290 = 29LLU;
	volatile uint32_t x291 = 4614045U;
	int8_t x292 = -1;
	volatile uint64_t t64 = 93246752982341LLU;

	t64 = ((x289^(x290%x291))%x292);

	if (t64 != 18446744073709551517LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x293 = 930363008U;
	volatile uint32_t x294 = UINT32_MAX;
	static int16_t x295 = INT16_MAX;
	int32_t x296 = 333;
	volatile uint32_t t65 = 1U;

	t65 = ((x293^(x294%x295))%x296);

	if (t65 != 305U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x297 = -1;
	volatile int8_t x298 = INT8_MAX;
	volatile uint32_t x299 = 6203881U;
	uint8_t x300 = UINT8_MAX;
	uint32_t t66 = 55135338U;

	t66 = ((x297^(x298%x299))%x300);

	if (t66 != 128U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x301 = INT32_MIN;
	int64_t x302 = INT64_MIN;
	int16_t x303 = INT16_MIN;
	int64_t x304 = INT64_MIN;

	t67 = ((x301^(x302%x303))%x304);

	if (t67 != -2147483648LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x307 = INT64_MAX;
	uint64_t x308 = 34LLU;
	volatile uint64_t t68 = 1063031162690830LLU;

	t68 = ((x305^(x306%x307))%x308);

	if (t68 != 31LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x309 = -4;
	static volatile int8_t x310 = INT8_MIN;
	static int16_t x311 = INT16_MAX;
	uint32_t t69 = 193U;

	t69 = ((x309^(x310%x311))%x312);

	if (t69 != 124U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x313 = INT8_MIN;
	static int64_t x314 = INT64_MAX;
	int16_t x315 = INT16_MIN;
	int32_t x316 = INT32_MIN;

	t70 = ((x313^(x314%x315))%x316);

	if (t70 != -32641LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x317 = INT64_MAX;
	uint8_t x318 = 3U;
	uint8_t x320 = UINT8_MAX;
	int64_t t71 = 5509282575860LL;

	t71 = ((x317^(x318%x319))%x320);

	if (t71 != 124LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x322 = 8218LLU;
	uint64_t x323 = 432LLU;
	uint64_t t72 = 8456084482828209627LLU;

	t72 = ((x321^(x322%x323))%x324);

	if (t72 != 12LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x325 = -1;
	uint64_t x327 = UINT64_MAX;
	uint16_t x328 = 185U;
	uint64_t t73 = 8607421538808656LLU;

	t73 = ((x325^(x326%x327))%x328);

	if (t73 != 85LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x330 = INT8_MIN;
	static int32_t x331 = 24;
	int16_t x332 = -1;
	volatile int32_t t74 = -3;

	t74 = ((x329^(x330%x331))%x332);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x335 = 123U;
	volatile uint16_t x336 = 96U;
	uint32_t t75 = 1U;

	t75 = ((x333^(x334%x335))%x336);

	if (t75 != 81U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x337 = 116U;
	uint16_t x338 = 0U;
	int64_t x340 = INT64_MAX;
	volatile uint64_t t76 = 264342621111238736LLU;

	t76 = ((x337^(x338%x339))%x340);

	if (t76 != 116LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x341 = UINT64_MAX;
	static int8_t x342 = 8;
	int8_t x343 = -1;
	int16_t x344 = -15;
	static uint64_t t77 = 21877938350694742LLU;

	t77 = ((x341^(x342%x343))%x344);

	if (t77 != 14LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x345 = 480U;
	volatile int32_t x347 = -1;
	int16_t x348 = INT16_MIN;
	uint32_t t78 = 3U;

	t78 = ((x345^(x346%x347))%x348);

	if (t78 != 480U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x349 = INT16_MAX;
	static int32_t x350 = INT32_MIN;
	static int64_t t79 = 137129881053LL;

	t79 = ((x349^(x350%x351))%x352);

	if (t79 != -32767LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x354 = INT16_MIN;
	int16_t x356 = -347;
	uint32_t t80 = 1752U;

	t80 = ((x353^(x354%x355))%x356);

	if (t80 != 4294952511U) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x357 = -6630473LL;
	int64_t x358 = INT64_MAX;
	volatile int8_t x359 = -35;
	int32_t x360 = -1;
	int64_t t81 = -1LL;

	t81 = ((x357^(x358%x359))%x360);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x362 = UINT64_MAX;
	uint16_t x363 = 49U;
	int16_t x364 = INT16_MIN;
	uint64_t t82 = 15LLU;

	t82 = ((x361^(x362%x363))%x364);

	if (t82 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x366 = 1U;
	int32_t x368 = INT32_MIN;
	volatile int32_t t83 = -1273;

	t83 = ((x365^(x366%x367))%x368);

	if (t83 != -39) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x369 = INT16_MIN;
	int16_t x370 = -4;
	volatile int64_t x371 = 583658315879274704LL;
	int16_t x372 = INT16_MAX;
	int64_t t84 = -26161LL;

	t84 = ((x369^(x370%x371))%x372);

	if (t84 != 32764LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x373 = -52;
	volatile int64_t x374 = 7170635051LL;
	static uint8_t x375 = 59U;
	int8_t x376 = INT8_MIN;
	volatile int64_t t85 = 5009553LL;

	t85 = ((x373^(x374%x375))%x376);

	if (t85 != -34LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x377 = 10;
	volatile int32_t x378 = INT32_MIN;
	int8_t x379 = -1;
	volatile uint64_t x380 = UINT64_MAX;
	uint64_t t86 = 25340074213734210LLU;

	t86 = ((x377^(x378%x379))%x380);

	if (t86 != 10LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x381 = 12U;
	static uint8_t x382 = 24U;
	uint64_t x383 = 52400642289LLU;
	static volatile uint64_t x384 = UINT64_MAX;
	static uint64_t t87 = 1LLU;

	t87 = ((x381^(x382%x383))%x384);

	if (t87 != 20LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x385 = 60U;
	volatile int64_t x386 = INT64_MAX;
	int16_t x388 = INT16_MAX;
	int64_t t88 = -4345882251998015238LL;

	t88 = ((x385^(x386%x387))%x388);

	if (t88 != 67LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x389 = 85U;
	uint32_t x390 = 1596U;
	int32_t x391 = INT32_MAX;
	int8_t x392 = INT8_MIN;
	volatile uint32_t t89 = 941U;

	t89 = ((x389^(x390%x391))%x392);

	if (t89 != 1641U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x393 = -39LL;
	int8_t x394 = -34;
	int16_t x395 = INT16_MIN;
	volatile int64_t t90 = 59278010355982591LL;

	t90 = ((x393^(x394%x395))%x396);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x399 = -1;
	static volatile int16_t x400 = -340;

	t91 = ((x397^(x398%x399))%x400);

	if (t91 != 2210LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x401 = -1;
	int64_t x403 = INT64_MIN;
	int64_t x404 = 4139089221842LL;
	volatile int64_t t92 = 718896909078LL;

	t92 = ((x401^(x402%x403))%x404);

	if (t92 != -80LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x405 = INT64_MIN;
	int8_t x406 = 30;
	static volatile int16_t x407 = -1;
	uint16_t x408 = 193U;
	volatile int64_t t93 = -25LL;

	t93 = ((x405^(x406%x407))%x408);

	if (t93 != -42LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x409 = INT64_MIN;
	int32_t x411 = INT32_MAX;
	int64_t x412 = -1LL;
	volatile int64_t t94 = -234902568925191119LL;

	t94 = ((x409^(x410%x411))%x412);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x413 = 5275U;
	int32_t x414 = -1;
	int16_t x415 = -21;
	volatile int64_t t95 = -14074LL;

	t95 = ((x413^(x414%x415))%x416);

	if (t95 != 4294962020LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x417 = INT16_MAX;
	uint16_t x418 = UINT16_MAX;
	int32_t x419 = INT32_MAX;
	int64_t x420 = 20669904LL;

	t96 = ((x417^(x418%x419))%x420);

	if (t96 != 32768LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x421 = 24131U;
	int16_t x423 = INT16_MAX;
	static int16_t x424 = -1;

	t97 = ((x421^(x422%x423))%x424);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x425 = UINT8_MAX;
	int16_t x426 = INT16_MAX;
	static int16_t x427 = -2;
	static int16_t x428 = INT16_MIN;
	int32_t t98 = 2409;

	t98 = ((x425^(x426%x427))%x428);

	if (t98 != 254) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x429 = UINT16_MAX;
	volatile int16_t x430 = INT16_MIN;
	volatile int32_t t99 = 6862664;

	t99 = ((x429^(x430%x431))%x432);

	if (t99 != -124) { NG(); } else { ; }
	
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

