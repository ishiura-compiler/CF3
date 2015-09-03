#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x8 = UINT16_MAX;
static volatile int16_t x25 = -1;
uint32_t x26 = 58698201U;
int32_t x29 = 313903;
int16_t x31 = 9214;
volatile int32_t t7 = -54;
uint32_t x46 = 12U;
int32_t x48 = INT32_MIN;
int32_t x51 = INT32_MIN;
volatile int32_t t9 = 359;
uint8_t x54 = 0U;
static int16_t x56 = INT16_MIN;
int32_t t10 = 5042;
static int32_t x59 = -1;
static uint64_t t11 = 16703693343LLU;
int64_t t12 = 652904847758021LL;
volatile uint64_t t16 = 6LLU;
int64_t t17 = 1354103133940LL;
int64_t x99 = -88865968664878113LL;
int8_t x100 = INT8_MIN;
int16_t x113 = -1;
volatile int16_t x138 = INT16_MIN;
int32_t x140 = 1414980;
int8_t x142 = INT8_MIN;
volatile int64_t t25 = -1178445454471251489LL;
uint32_t x145 = 3342U;
static volatile uint32_t x146 = 15211234U;
int8_t x149 = 31;
static int8_t x150 = 31;
static int16_t x152 = 13649;
volatile uint64_t x153 = 2570567483359870849LLU;
int32_t x157 = 67;
volatile int8_t x158 = INT8_MAX;
static uint32_t x159 = 21396U;
static volatile uint64_t t31 = 2158622745366115LLU;
int16_t x182 = 25;
int64_t x184 = 490480490248588310LL;
volatile int32_t x187 = INT32_MAX;
static int8_t x196 = INT8_MAX;
int32_t x207 = -40076;
uint64_t x210 = 239069LLU;
uint16_t x215 = 3U;
static volatile uint64_t t39 = 274485911LLU;
uint64_t x233 = 678727548133324765LLU;
static int8_t x240 = INT8_MIN;
static int32_t x251 = INT32_MIN;
int8_t x259 = INT8_MIN;
static int64_t x261 = 622LL;
int32_t x265 = INT32_MIN;
uint64_t t50 = 163210731921LLU;
uint32_t x281 = 76U;
static int32_t x284 = INT32_MIN;
static uint32_t x288 = 32460891U;
static int8_t x298 = -7;
static volatile int64_t t56 = 38118629493LL;
int8_t x303 = INT8_MAX;
volatile int64_t t57 = 7283LL;
volatile int32_t x307 = -1;
int64_t t58 = -538LL;
uint16_t x312 = UINT16_MAX;
uint64_t t59 = 1834346298700727296LLU;
volatile int64_t t60 = 216839331676671LL;
static volatile int64_t t61 = -4375534702666LL;
uint8_t x328 = 8U;
int32_t x336 = INT32_MAX;
uint8_t x341 = 2U;
int8_t x347 = INT8_MAX;
uint32_t t67 = 184848U;
uint8_t x354 = 22U;
int64_t t69 = 248147LL;
int64_t x364 = 485377403862556376LL;
volatile uint64_t x365 = UINT64_MAX;
int64_t x373 = 2LL;
volatile uint64_t t77 = 70022LLU;
uint16_t x393 = 1U;
int32_t x394 = -1;
static int32_t x396 = INT32_MAX;
uint32_t t78 = 6U;
int64_t x408 = -1LL;
volatile int64_t t80 = 72718697984000LL;
uint64_t x422 = 16121870763293LLU;
static volatile int64_t x429 = INT64_MIN;
int16_t x430 = -1;
uint8_t x431 = 9U;
static int64_t x435 = -1LL;
static uint16_t x436 = UINT16_MAX;
int32_t x441 = INT32_MAX;
volatile int64_t t88 = -324728708401568740LL;
uint8_t x467 = 69U;
int64_t t93 = -1754LL;
static int32_t x470 = -12887548;
static volatile int16_t x473 = -26;
int64_t x475 = INT64_MIN;
int64_t x479 = INT64_MAX;
uint16_t x483 = 143U;
uint32_t x495 = 0U;


void f0(void) {
	int16_t x1 = -1;
	uint16_t x2 = 69U;
	uint16_t x3 = UINT16_MAX;
	volatile int8_t x4 = INT8_MIN;
	int32_t t0 = -657;

	t0 = (((x1-x2)&x3)-x4);

	if (t0 != 65594) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = UINT32_MAX;
	int32_t x6 = -539000;
	int32_t x7 = -10000122;
	static uint32_t t1 = 22668934U;

	t1 = (((x5-x6)&x7)-x8);

	if (t1 != 4294912263U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x13 = -1;
	int8_t x14 = 7;
	int64_t x15 = -1LL;
	uint32_t x16 = UINT32_MAX;
	volatile int64_t t2 = -4165928051231506749LL;

	t2 = (((x13-x14)&x15)-x16);

	if (t2 != -4294967303LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = UINT16_MAX;
	volatile uint16_t x18 = 252U;
	static volatile int16_t x19 = -250;
	volatile int32_t x20 = 58;
	volatile int32_t t3 = 2;

	t3 = (((x17-x18)&x19)-x20);

	if (t3 != 65224) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = -125;
	uint32_t x22 = UINT32_MAX;
	int8_t x23 = INT8_MIN;
	volatile uint16_t x24 = UINT16_MAX;
	volatile uint32_t t4 = 22045932U;

	t4 = (((x21-x22)&x23)-x24);

	if (t4 != 4294901633U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x27 = INT32_MAX;
	uint8_t x28 = UINT8_MAX;
	volatile uint32_t t5 = 623715418U;

	t5 = (((x25-x26)&x27)-x28);

	if (t5 != 2088785191U) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x30 = -1LL;
	int8_t x32 = INT8_MIN;
	int64_t t6 = 49157LL;

	t6 = (((x29-x30)&x31)-x32);

	if (t6 != 688LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x41 = 20U;
	volatile uint16_t x42 = UINT16_MAX;
	int32_t x43 = 0;
	static int8_t x44 = 9;

	t7 = (((x41-x42)&x43)-x44);

	if (t7 != -9) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x45 = -1LL;
	static volatile int32_t x47 = INT32_MIN;
	volatile int64_t t8 = -270LL;

	t8 = (((x45-x46)&x47)-x48);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x49 = 1U;
	static uint16_t x50 = UINT16_MAX;
	int8_t x52 = INT8_MIN;

	t9 = (((x49-x50)&x51)-x52);

	if (t9 != -2147483520) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x53 = INT32_MAX;
	uint8_t x55 = UINT8_MAX;

	t10 = (((x53-x54)&x55)-x56);

	if (t10 != 33023) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = INT8_MIN;
	static volatile uint64_t x58 = 772896LLU;
	uint64_t x60 = 7928939030907598809LLU;

	t11 = (((x57-x58)&x59)-x60);

	if (t11 != 10517805042801179783LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x61 = UINT16_MAX;
	int8_t x62 = -1;
	volatile uint16_t x63 = UINT16_MAX;
	int64_t x64 = 48755LL;

	t12 = (((x61-x62)&x63)-x64);

	if (t12 != -48755LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x65 = 47U;
	uint16_t x66 = 26404U;
	static int32_t x67 = -453635824;
	int64_t x68 = INT64_MIN;
	volatile int64_t t13 = -488646859829962811LL;

	t13 = (((x65-x66)&x67)-x68);

	if (t13 != 9223372036401139968LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x69 = 4653801;
	static volatile int64_t x70 = -1LL;
	volatile int32_t x71 = -260737;
	int32_t x72 = -1;
	static int64_t t14 = 9678093569096LL;

	t14 = (((x69-x70)&x71)-x72);

	if (t14 != 4456555LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x73 = INT32_MAX;
	static volatile uint8_t x74 = UINT8_MAX;
	static int64_t x75 = -102786363102211708LL;
	uint16_t x76 = UINT16_MAX;
	static int64_t t15 = 19522193879493LL;

	t15 = (((x73-x74)&x75)-x76);

	if (t15 != 1804128513LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x81 = 37926789U;
	static uint64_t x82 = UINT64_MAX;
	uint8_t x83 = UINT8_MAX;
	int16_t x84 = INT16_MIN;

	t16 = (((x81-x82)&x83)-x84);

	if (t16 != 32902LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x89 = -1;
	int64_t x90 = 851757471826859410LL;
	int16_t x91 = INT16_MIN;
	int16_t x92 = INT16_MIN;

	t17 = (((x89-x90)&x91)-x92);

	if (t17 != -851757471826837504LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x97 = -1;
	uint32_t x98 = 1515692U;
	int64_t t18 = 137547LL;

	t18 = (((x97-x98)&x99)-x100);

	if (t18 != 1359528915LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x101 = 1627444U;
	static int32_t x102 = -7;
	volatile int8_t x103 = 3;
	int8_t x104 = -1;
	volatile uint32_t t19 = 344665U;

	t19 = (((x101-x102)&x103)-x104);

	if (t19 != 4U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x105 = -1LL;
	uint64_t x106 = UINT64_MAX;
	int64_t x107 = INT64_MIN;
	uint8_t x108 = 89U;
	volatile uint64_t t20 = 65497154648308024LLU;

	t20 = (((x105-x106)&x107)-x108);

	if (t20 != 18446744073709551527LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x114 = -124270463268900LL;
	int64_t x115 = -1LL;
	uint64_t x116 = 20702297LLU;
	static volatile uint64_t t21 = 172237LLU;

	t21 = (((x113-x114)&x115)-x116);

	if (t21 != 124270442566602LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint8_t x117 = 15U;
	uint8_t x118 = UINT8_MAX;
	volatile int8_t x119 = INT8_MAX;
	static int64_t x120 = -1LL;
	static volatile int64_t t22 = 35876331LL;

	t22 = (((x117-x118)&x119)-x120);

	if (t22 != 17LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x125 = INT8_MIN;
	uint64_t x126 = 2265035213351080454LLU;
	uint8_t x127 = 0U;
	volatile int32_t x128 = INT32_MIN;
	static volatile uint64_t t23 = 2LLU;

	t23 = (((x125-x126)&x127)-x128);

	if (t23 != 2147483648LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x137 = 98770066LLU;
	uint16_t x139 = 5385U;
	uint64_t t24 = 60846LLU;

	t24 = (((x137-x138)&x139)-x140);

	if (t24 != 18446744073708141756LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x141 = INT32_MIN;
	volatile int64_t x143 = INT64_MAX;
	int16_t x144 = 2;

	t25 = (((x141-x142)&x143)-x144);

	if (t25 != 9223372034707292286LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x147 = -1;
	static int32_t x148 = -1;
	uint32_t t26 = 1809029396U;

	t26 = (((x145-x146)&x147)-x148);

	if (t26 != 4279759405U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x151 = INT32_MIN;
	int32_t t27 = 7;

	t27 = (((x149-x150)&x151)-x152);

	if (t27 != -13649) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x154 = INT64_MIN;
	volatile int8_t x155 = INT8_MIN;
	volatile uint32_t x156 = 265306U;
	static uint64_t t28 = 3343000551431015LLU;

	t28 = (((x153-x154)&x155)-x156);

	if (t28 != 11793939520214381350LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x160 = INT32_MAX;
	volatile uint32_t t29 = 691073061U;

	t29 = (((x157-x158)&x159)-x160);

	if (t29 != 2147505029U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x161 = -1;
	static uint32_t x162 = 10980U;
	int16_t x163 = INT16_MIN;
	static int64_t x164 = INT64_MAX;
	volatile int64_t t30 = 263LL;

	t30 = (((x161-x162)&x163)-x164);

	if (t30 != -9223372032559841279LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x169 = -1;
	volatile uint64_t x170 = UINT64_MAX;
	static int8_t x171 = INT8_MIN;
	static int16_t x172 = INT16_MIN;

	t31 = (((x169-x170)&x171)-x172);

	if (t31 != 32768LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x181 = 3;
	int32_t x183 = -67728;
	volatile int64_t t32 = -402810168171LL;

	t32 = (((x181-x182)&x183)-x184);

	if (t32 != -490480490248656054LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x185 = INT16_MAX;
	int8_t x186 = 1;
	volatile uint16_t x188 = 33U;
	int32_t t33 = -104870358;

	t33 = (((x185-x186)&x187)-x188);

	if (t33 != 32733) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x189 = 1U;
	int16_t x190 = INT16_MIN;
	static int16_t x191 = -1;
	int32_t x192 = INT32_MAX;
	volatile int32_t t34 = 121559;

	t34 = (((x189-x190)&x191)-x192);

	if (t34 != -2147450878) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x193 = INT16_MIN;
	static int8_t x194 = INT8_MIN;
	volatile uint64_t x195 = 10374481491LLU;
	volatile uint64_t t35 = 15804LLU;

	t35 = (((x193-x194)&x195)-x196);

	if (t35 != 10374479745LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x197 = -1LL;
	int32_t x198 = -1;
	int16_t x199 = 473;
	uint64_t x200 = 38771LLU;
	uint64_t t36 = 90726547LLU;

	t36 = (((x197-x198)&x199)-x200);

	if (t36 != 18446744073709512845LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x205 = UINT32_MAX;
	int8_t x206 = -1;
	uint64_t x208 = UINT64_MAX;
	static uint64_t t37 = 2165449514604330LLU;

	t37 = (((x205-x206)&x207)-x208);

	if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x209 = 0;
	uint64_t x211 = 139234734205746875LLU;
	int16_t x212 = 85;
	static volatile uint64_t t38 = 286278LLU;

	t38 = (((x209-x210)&x211)-x212);

	if (t38 != 139234734205573582LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x213 = 2800535382LLU;
	int8_t x214 = -4;
	static int16_t x216 = INT16_MIN;

	t39 = (((x213-x214)&x215)-x216);

	if (t39 != 32770LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x217 = INT16_MIN;
	int32_t x218 = INT32_MIN;
	int64_t x219 = 10316914074167LL;
	int8_t x220 = 10;
	int64_t t40 = 4149853LL;

	t40 = (((x217-x218)&x219)-x220);

	if (t40 != 402620406LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x225 = -226290572;
	int8_t x226 = 1;
	int64_t x227 = -2142392800000916043LL;
	uint8_t x228 = 4U;
	static int64_t t41 = -1LL;

	t41 = (((x225-x226)&x227)-x228);

	if (t41 != -2142392800136461267LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x229 = 1;
	static int8_t x230 = INT8_MAX;
	uint32_t x231 = 3407857U;
	int16_t x232 = INT16_MIN;
	volatile uint32_t t42 = 107U;

	t42 = (((x229-x230)&x231)-x232);

	if (t42 != 3440512U) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint32_t x234 = UINT32_MAX;
	uint8_t x235 = 89U;
	uint16_t x236 = 12565U;
	static volatile uint64_t t43 = 985285810882LLU;

	t43 = (((x233-x234)&x235)-x236);

	if (t43 != 18446744073709539139LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x237 = INT32_MAX;
	uint8_t x238 = 13U;
	volatile int16_t x239 = 7944;
	volatile int32_t t44 = 11;

	t44 = (((x237-x238)&x239)-x240);

	if (t44 != 8064) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x249 = 3;
	volatile int64_t x250 = INT64_MAX;
	int16_t x252 = -1;
	volatile int64_t t45 = 4360LL;

	t45 = (((x249-x250)&x251)-x252);

	if (t45 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x253 = INT16_MAX;
	int8_t x254 = INT8_MAX;
	int8_t x255 = -1;
	int8_t x256 = INT8_MAX;
	int32_t t46 = 2;

	t46 = (((x253-x254)&x255)-x256);

	if (t46 != 32513) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x257 = -1;
	int32_t x258 = INT32_MIN;
	volatile uint32_t x260 = 3487879U;
	uint32_t t47 = 41060653U;

	t47 = (((x257-x258)&x259)-x260);

	if (t47 != 2143995641U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x262 = -43;
	volatile int8_t x263 = 0;
	int16_t x264 = INT16_MIN;
	volatile int64_t t48 = -3154702228277817LL;

	t48 = (((x261-x262)&x263)-x264);

	if (t48 != 32768LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x266 = UINT32_MAX;
	volatile int32_t x267 = INT32_MIN;
	volatile int32_t x268 = -1;
	static uint32_t t49 = 51142U;

	t49 = (((x265-x266)&x267)-x268);

	if (t49 != 2147483649U) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x269 = INT16_MAX;
	uint64_t x270 = 2789224224LLU;
	volatile int32_t x271 = INT32_MAX;
	static int32_t x272 = -17261;

	t50 = (((x269-x270)&x271)-x272);

	if (t50 != 1505793100LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x273 = INT32_MAX;
	uint8_t x274 = UINT8_MAX;
	uint32_t x275 = 5720U;
	int8_t x276 = -1;
	uint32_t t51 = 77825U;

	t51 = (((x273-x274)&x275)-x276);

	if (t51 != 5633U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x277 = 44222LLU;
	int32_t x278 = INT32_MIN;
	uint16_t x279 = UINT16_MAX;
	int8_t x280 = -61;
	volatile uint64_t t52 = 18315674LLU;

	t52 = (((x277-x278)&x279)-x280);

	if (t52 != 44283LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x282 = INT16_MIN;
	static uint32_t x283 = 323049U;
	uint32_t t53 = 14850U;

	t53 = (((x281-x282)&x283)-x284);

	if (t53 != 2147516488U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x285 = INT16_MAX;
	uint8_t x286 = 10U;
	uint64_t x287 = 0LLU;
	uint64_t t54 = 136081LLU;

	t54 = (((x285-x286)&x287)-x288);

	if (t54 != 18446744073677090725LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x293 = 11U;
	volatile int32_t x294 = INT32_MAX;
	int64_t x295 = -1LL;
	int16_t x296 = 14;
	static volatile int64_t t55 = 837208LL;

	t55 = (((x293-x294)&x295)-x296);

	if (t55 != -2147483650LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x297 = INT16_MAX;
	volatile int64_t x299 = -445LL;
	uint32_t x300 = UINT32_MAX;

	t56 = (((x297-x298)&x299)-x300);

	if (t56 != -4294934525LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x301 = -9312208904382887LL;
	int16_t x302 = INT16_MIN;
	int8_t x304 = INT8_MIN;

	t57 = (((x301-x302)&x303)-x304);

	if (t57 != 217LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x305 = 470360897U;
	int64_t x306 = 125LL;
	static int16_t x308 = INT16_MIN;

	t58 = (((x305-x306)&x307)-x308);

	if (t58 != 470393540LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x309 = UINT64_MAX;
	static volatile int64_t x310 = INT64_MIN;
	int32_t x311 = INT32_MAX;

	t59 = (((x309-x310)&x311)-x312);

	if (t59 != 2147418112LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x313 = -1;
	int64_t x314 = -1LL;
	uint8_t x315 = 27U;
	static uint32_t x316 = 25U;

	t60 = (((x313-x314)&x315)-x316);

	if (t60 != -25LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x321 = INT16_MIN;
	uint8_t x322 = 0U;
	int8_t x323 = -1;
	static int64_t x324 = -1LL;

	t61 = (((x321-x322)&x323)-x324);

	if (t61 != -32767LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x325 = UINT32_MAX;
	uint16_t x326 = UINT16_MAX;
	static volatile int8_t x327 = 3;
	static volatile uint32_t t62 = 7U;

	t62 = (((x325-x326)&x327)-x328);

	if (t62 != 4294967288U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x329 = 0;
	int32_t x330 = 47;
	int8_t x331 = INT8_MAX;
	int32_t x332 = 6093054;
	volatile int32_t t63 = -235956;

	t63 = (((x329-x330)&x331)-x332);

	if (t63 != -6092973) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x333 = -129346LL;
	int64_t x334 = INT64_MIN;
	int32_t x335 = -2176891;
	static int64_t t64 = 3612LL;

	t64 = (((x333-x334)&x335)-x336);

	if (t64 != 9223372034705064069LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x342 = UINT32_MAX;
	int16_t x343 = INT16_MIN;
	static int16_t x344 = -1;
	uint32_t t65 = 6203284U;

	t65 = (((x341-x342)&x343)-x344);

	if (t65 != 1U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x345 = INT8_MAX;
	int8_t x346 = -1;
	int8_t x348 = -6;
	int32_t t66 = -6284762;

	t66 = (((x345-x346)&x347)-x348);

	if (t66 != 6) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x349 = -584060;
	uint32_t x350 = 51471020U;
	int8_t x351 = 2;
	static int32_t x352 = INT32_MIN;

	t67 = (((x349-x350)&x351)-x352);

	if (t67 != 2147483648U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x353 = 6;
	int32_t x355 = INT32_MIN;
	volatile int8_t x356 = -1;
	volatile int32_t t68 = -2162;

	t68 = (((x353-x354)&x355)-x356);

	if (t68 != -2147483647) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x357 = -9;
	int8_t x358 = 44;
	int32_t x359 = -2976257;
	volatile int64_t x360 = INT64_MIN;

	t69 = (((x357-x358)&x359)-x360);

	if (t69 != 9223372036851799499LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x361 = 1;
	static int8_t x362 = INT8_MIN;
	int16_t x363 = -1;
	static volatile int64_t t70 = -1428063279347591636LL;

	t70 = (((x361-x362)&x363)-x364);

	if (t70 != -485377403862556247LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x366 = UINT16_MAX;
	volatile int16_t x367 = -1;
	static int32_t x368 = INT32_MIN;
	static uint64_t t71 = 150425165219419LLU;

	t71 = (((x365-x366)&x367)-x368);

	if (t71 != 2147418112LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x369 = UINT32_MAX;
	int8_t x370 = INT8_MIN;
	int32_t x371 = -61;
	static volatile uint32_t x372 = UINT32_MAX;
	volatile uint32_t t72 = 382853368U;

	t72 = (((x369-x370)&x371)-x372);

	if (t72 != 68U) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x374 = INT32_MAX;
	uint16_t x375 = UINT16_MAX;
	int8_t x376 = -1;
	static int64_t t73 = 26845946205559LL;

	t73 = (((x373-x374)&x375)-x376);

	if (t73 != 4LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x377 = INT8_MIN;
	static volatile int16_t x378 = -5;
	int64_t x379 = INT64_MIN;
	int32_t x380 = INT32_MIN;
	volatile int64_t t74 = 6536LL;

	t74 = (((x377-x378)&x379)-x380);

	if (t74 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x381 = INT32_MIN;
	static volatile int64_t x382 = 987756206LL;
	static int8_t x383 = -1;
	int16_t x384 = -75;
	volatile int64_t t75 = 445917941328938758LL;

	t75 = (((x381-x382)&x383)-x384);

	if (t75 != -3135239779LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x385 = -1;
	int16_t x386 = 10576;
	int16_t x387 = INT16_MIN;
	uint32_t x388 = 3467U;
	volatile uint32_t t76 = 8706U;

	t76 = (((x385-x386)&x387)-x388);

	if (t76 != 4294931061U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x389 = 0U;
	int64_t x390 = 11671851129LL;
	int8_t x391 = INT8_MIN;
	static uint64_t x392 = 7887718207LLU;

	t77 = (((x389-x390)&x391)-x392);

	if (t77 != 18446744054149982273LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x395 = 33U;

	t78 = (((x393-x394)&x395)-x396);

	if (t78 != 2147483649U) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x397 = 0;
	volatile int64_t x398 = -710LL;
	uint32_t x399 = 2407U;
	int16_t x400 = -1;
	volatile int64_t t79 = 14488335717LL;

	t79 = (((x397-x398)&x399)-x400);

	if (t79 != 71LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x405 = -1371106761792051LL;
	static int8_t x406 = INT8_MIN;
	volatile int64_t x407 = 7414228829831573LL;

	t80 = (((x405-x406)&x407)-x408);

	if (t80 != 7318555561525254LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x409 = UINT64_MAX;
	int32_t x410 = INT32_MIN;
	int16_t x411 = INT16_MIN;
	int32_t x412 = -215;
	uint64_t t81 = 1942842220440730LLU;

	t81 = (((x409-x410)&x411)-x412);

	if (t81 != 2147451095LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x413 = 218LLU;
	int32_t x414 = -1;
	uint16_t x415 = UINT16_MAX;
	volatile int16_t x416 = -190;
	uint64_t t82 = 1132500035499LLU;

	t82 = (((x413-x414)&x415)-x416);

	if (t82 != 409LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x421 = INT32_MIN;
	static int64_t x423 = INT64_MAX;
	uint64_t x424 = 102437995440169LLU;
	volatile uint64_t t83 = 2871479359LLU;

	t83 = (((x421-x422)&x423)-x424);

	if (t83 != 9223253474841088698LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x425 = 49;
	int64_t x426 = INT64_MAX;
	volatile uint32_t x427 = 76938U;
	int32_t x428 = INT32_MIN;
	int64_t t84 = -348812274046561718LL;

	t84 = (((x425-x426)&x427)-x428);

	if (t84 != 2147483650LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x432 = UINT8_MAX;
	int64_t t85 = 1771217815540LL;

	t85 = (((x429-x430)&x431)-x432);

	if (t85 != -254LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x433 = 716710436;
	volatile uint16_t x434 = UINT16_MAX;
	static int64_t t86 = -3132830393209879LL;

	t86 = (((x433-x434)&x435)-x436);

	if (t86 != 716579366LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x437 = INT16_MIN;
	int16_t x438 = INT16_MIN;
	uint64_t x439 = UINT64_MAX;
	uint8_t x440 = 0U;
	uint64_t t87 = 508330LLU;

	t87 = (((x437-x438)&x439)-x440);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x442 = 86627U;
	int64_t x443 = INT64_MAX;
	int16_t x444 = -1647;

	t88 = (((x441-x442)&x443)-x444);

	if (t88 != 2147398667LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x445 = UINT64_MAX;
	volatile uint32_t x446 = 63122472U;
	int64_t x447 = INT64_MIN;
	int64_t x448 = INT64_MIN;
	static uint64_t t89 = 20939610641627LLU;

	t89 = (((x445-x446)&x447)-x448);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x449 = 912U;
	uint8_t x450 = 62U;
	int32_t x451 = 1;
	volatile int16_t x452 = -234;
	volatile uint32_t t90 = 27487U;

	t90 = (((x449-x450)&x451)-x452);

	if (t90 != 234U) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint64_t x453 = UINT64_MAX;
	int16_t x454 = -598;
	volatile uint32_t x455 = 28708225U;
	uint64_t x456 = UINT64_MAX;
	volatile uint64_t t91 = 940134127064909LLU;

	t91 = (((x453-x454)&x455)-x456);

	if (t91 != 2LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x457 = 1U;
	static volatile int16_t x458 = INT16_MIN;
	volatile int32_t x459 = -1;
	volatile int8_t x460 = INT8_MAX;
	volatile int32_t t92 = 97;

	t92 = (((x457-x458)&x459)-x460);

	if (t92 != 32642) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x465 = 814LL;
	volatile uint8_t x466 = UINT8_MAX;
	static int32_t x468 = 7369295;

	t93 = (((x465-x466)&x467)-x468);

	if (t93 != -7369290LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x469 = 3224;
	int64_t x471 = -1LL;
	int32_t x472 = -423717330;
	static volatile int64_t t94 = -1LL;

	t94 = (((x469-x470)&x471)-x472);

	if (t94 != 436608102LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x474 = INT8_MIN;
	int8_t x476 = INT8_MIN;
	int64_t t95 = 452826737139313647LL;

	t95 = (((x473-x474)&x475)-x476);

	if (t95 != 128LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x477 = 350U;
	uint32_t x478 = 32U;
	int8_t x480 = INT8_MIN;
	volatile int64_t t96 = -38636296LL;

	t96 = (((x477-x478)&x479)-x480);

	if (t96 != 446LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x481 = -1;
	int32_t x482 = -447099779;
	int8_t x484 = INT8_MAX;
	volatile int32_t t97 = -134;

	t97 = (((x481-x482)&x483)-x484);

	if (t97 != 3) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x485 = 54;
	static volatile int8_t x486 = INT8_MAX;
	int16_t x487 = INT16_MIN;
	volatile int16_t x488 = -1;
	int32_t t98 = -4423;

	t98 = (((x485-x486)&x487)-x488);

	if (t98 != -32767) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x493 = -9295428;
	int64_t x494 = -8258229733826LL;
	int32_t x496 = -1;
	int64_t t99 = 47019589LL;

	t99 = (((x493-x494)&x495)-x496);

	if (t99 != 1LL) { NG(); } else { ; }
	
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

