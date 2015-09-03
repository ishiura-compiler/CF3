#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x12 = UINT32_MAX;
uint32_t x14 = 4942071U;
int8_t x20 = INT8_MAX;
int16_t x24 = -1;
uint64_t t4 = 1529767288LLU;
int8_t x25 = -1;
int8_t x28 = INT8_MIN;
volatile int64_t t5 = INT64_MIN;
int32_t x30 = INT32_MIN;
volatile int64_t t6 = -4082946132509456171LL;
static volatile int32_t x34 = 2314;
int32_t t8 = -620170890;
static int8_t x41 = -1;
int64_t x45 = -1LL;
volatile int64_t t10 = -417712LL;
static int16_t x71 = -1;
int16_t x78 = 11;
uint8_t x79 = UINT8_MAX;
volatile int32_t t18 = -310317235;
int8_t x82 = -1;
uint16_t x84 = 2U;
static int32_t t19 = -3;
volatile int64_t t20 = -2LL;
static uint16_t x92 = UINT16_MAX;
int32_t x93 = 51094;
int16_t x105 = INT16_MIN;
uint8_t x113 = 23U;
int32_t x118 = INT32_MIN;
uint64_t x121 = UINT64_MAX;
static uint32_t x127 = 138856328U;
static uint64_t t30 = 1LLU;
int32_t x130 = 98315;
int32_t t32 = 104;
uint64_t x141 = UINT64_MAX;
int16_t x145 = -25;
uint8_t x148 = UINT8_MAX;
static volatile int64_t t35 = -14724274232LL;
volatile uint32_t x149 = 15U;
static volatile uint32_t t36 = 7280U;
uint64_t x153 = 37LLU;
uint64_t x158 = UINT64_MAX;
uint32_t x162 = 3706U;
uint16_t x163 = 682U;
uint32_t t39 = 3U;
int64_t t40 = 1318329261265711843LL;
static int64_t x183 = INT64_MIN;
static int64_t x199 = 817398342187LL;
uint64_t x202 = 365901076232602357LLU;
int16_t x207 = INT16_MIN;
static uint64_t t50 = 5814536583070552475LLU;
int32_t x210 = INT32_MAX;
volatile uint32_t t51 = 155U;
int32_t x217 = INT32_MAX;
uint32_t x223 = 96677081U;
volatile int32_t x233 = 73522;
int32_t t60 = 601690;
int16_t x249 = INT16_MIN;
int16_t x252 = INT16_MAX;
uint16_t x255 = 12U;
uint8_t x256 = 2U;
int16_t x258 = -1641;
uint64_t x267 = 44492586481LLU;
volatile int16_t x268 = INT16_MIN;
uint64_t x269 = 243LLU;
int8_t x271 = INT8_MAX;
volatile int64_t x272 = INT64_MAX;
static int32_t x275 = INT32_MIN;
static int64_t t68 = -47490643567LL;
int64_t x283 = -1LL;
volatile int16_t x290 = INT16_MIN;
uint16_t x293 = 187U;
int8_t x299 = INT8_MIN;
static int16_t x300 = INT16_MAX;
int16_t x301 = INT16_MAX;
uint64_t x302 = 3238274895347375421LLU;
int32_t x303 = -1;
int64_t x305 = INT64_MIN;
static int32_t x306 = -1;
volatile uint64_t x308 = 190146610LLU;
int8_t x314 = 1;
int32_t t77 = -301286;
static int32_t x324 = INT32_MAX;
int32_t x325 = INT32_MAX;
int8_t x327 = INT8_MAX;
uint64_t x331 = 48314544LLU;
uint64_t t81 = 0LLU;
static volatile int32_t x337 = INT32_MIN;
static int64_t x341 = -18LL;
volatile uint16_t x344 = 218U;
volatile uint64_t t84 = 22LLU;
uint64_t x345 = 87179752979099LLU;
int8_t x347 = 12;
int16_t x348 = -11244;
int8_t x349 = INT8_MIN;
static uint32_t x351 = 3788U;
volatile int32_t t86 = 205162;
volatile int16_t x354 = INT16_MIN;
static int16_t x355 = 1433;
int16_t x359 = -1;
int8_t x360 = INT8_MIN;
static uint16_t x370 = 216U;
static int32_t x372 = 48524729;
int64_t x375 = INT64_MIN;
static volatile uint64_t x380 = 262591013720LLU;
uint64_t x384 = 42052946LLU;
static volatile int32_t x386 = 175587;
int64_t x388 = INT64_MAX;
uint32_t x394 = UINT32_MAX;
int32_t x395 = INT32_MIN;
int64_t x396 = -1LL;
volatile uint32_t t97 = 1725535U;
uint64_t x398 = UINT64_MAX;
int8_t x399 = INT8_MIN;
volatile int32_t t99 = 265355813;


void f0(void) {
	uint32_t x5 = 17319U;
	int32_t x6 = 4604448;
	uint64_t x7 = UINT64_MAX;
	int64_t x8 = 2556717696394360135LL;
	uint32_t t0 = 985485439U;

	t0 = ((x5^x6)-(x7<=x8));

	if (t0 != 4587911U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x9 = UINT32_MAX;
	int32_t x10 = INT32_MIN;
	volatile uint16_t x11 = UINT16_MAX;
	uint32_t t1 = 30U;

	t1 = ((x9^x10)-(x11<=x12));

	if (t1 != 2147483646U) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint64_t x13 = 3489LLU;
	static int16_t x15 = -1;
	int64_t x16 = INT64_MIN;
	uint64_t t2 = 284LLU;

	t2 = ((x13^x14)-(x15<=x16));

	if (t2 != 4941142LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x17 = 1U;
	int32_t x18 = INT32_MIN;
	volatile int8_t x19 = INT8_MAX;
	static int32_t t3 = INT32_MIN;

	t3 = ((x17^x18)-(x19<=x20));

	if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint64_t x21 = 506LLU;
	int32_t x22 = -1;
	volatile int64_t x23 = INT64_MIN;

	t4 = ((x21^x22)-(x23<=x24));

	if (t4 != 18446744073709551108LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x26 = INT64_MAX;
	static uint8_t x27 = 2U;

	t5 = ((x25^x26)-(x27<=x28));

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x29 = 86165967LL;
	int8_t x31 = -1;
	int16_t x32 = 1;

	t6 = ((x29^x30)-(x31<=x32));

	if (t6 != -2061317682LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x33 = INT64_MAX;
	static uint64_t x35 = UINT64_MAX;
	volatile int32_t x36 = INT32_MIN;
	static int64_t t7 = -1LL;

	t7 = ((x33^x34)-(x35<=x36));

	if (t7 != 9223372036854773493LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x37 = INT32_MIN;
	int16_t x38 = 26;
	int64_t x39 = 18170094212208LL;
	int64_t x40 = INT64_MIN;

	t8 = ((x37^x38)-(x39<=x40));

	if (t8 != -2147483622) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x42 = INT16_MAX;
	int32_t x43 = INT32_MIN;
	int16_t x44 = 410;
	static volatile int32_t t9 = -2090083;

	t9 = ((x41^x42)-(x43<=x44));

	if (t9 != -32769) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x46 = INT8_MIN;
	volatile int16_t x47 = -1;
	uint32_t x48 = UINT32_MAX;

	t10 = ((x45^x46)-(x47<=x48));

	if (t10 != 126LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = 4339612LL;
	int16_t x50 = -1;
	volatile int32_t x51 = 30;
	int32_t x52 = -1;
	static volatile int64_t t11 = -1913LL;

	t11 = ((x49^x50)-(x51<=x52));

	if (t11 != -4339613LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = 54U;
	volatile uint8_t x54 = 0U;
	uint32_t x55 = 44267U;
	static int16_t x56 = -1;
	static int32_t t12 = -341017;

	t12 = ((x53^x54)-(x55<=x56));

	if (t12 != 53) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x57 = UINT8_MAX;
	int64_t x58 = INT64_MIN;
	static int64_t x59 = INT64_MIN;
	uint16_t x60 = 2U;
	volatile int64_t t13 = 313453232300492016LL;

	t13 = ((x57^x58)-(x59<=x60));

	if (t13 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = 0;
	int8_t x62 = -1;
	int8_t x63 = -3;
	int64_t x64 = INT64_MAX;
	volatile int32_t t14 = -134676;

	t14 = ((x61^x62)-(x63<=x64));

	if (t14 != -2) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int32_t x65 = -435616;
	int32_t x66 = -7112;
	static int32_t x67 = 1882649;
	int32_t x68 = -2;
	volatile int32_t t15 = 0;

	t15 = ((x65^x66)-(x67<=x68));

	if (t15 != 441944) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x69 = 5U;
	volatile int32_t x70 = INT32_MAX;
	int8_t x72 = INT8_MAX;
	int32_t t16 = -566858412;

	t16 = ((x69^x70)-(x71<=x72));

	if (t16 != 2147483641) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint32_t x73 = 8781558U;
	int64_t x74 = -1LL;
	int32_t x75 = INT32_MIN;
	static uint8_t x76 = 3U;
	int64_t t17 = -381409204651747098LL;

	t17 = ((x73^x74)-(x75<=x76));

	if (t17 != -8781560LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x77 = 28U;
	static int16_t x80 = -1;

	t18 = ((x77^x78)-(x79<=x80));

	if (t18 != 23) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x81 = -1;
	static int8_t x83 = -1;

	t19 = ((x81^x82)-(x83<=x84));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = 1889749517723671068LL;
	volatile int16_t x86 = INT16_MIN;
	int32_t x87 = -2212359;
	uint32_t x88 = UINT32_MAX;

	t20 = ((x85^x86)-(x87<=x88));

	if (t20 != -1889749517723690469LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x89 = UINT64_MAX;
	int64_t x90 = INT64_MIN;
	int32_t x91 = INT32_MIN;
	volatile uint64_t t21 = 36873LLU;

	t21 = ((x89^x90)-(x91<=x92));

	if (t21 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x94 = 54U;
	static int32_t x95 = INT32_MIN;
	static volatile int8_t x96 = -1;
	volatile int32_t t22 = -11;

	t22 = ((x93^x94)-(x95<=x96));

	if (t22 != 51103) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x97 = 1U;
	uint64_t x98 = UINT64_MAX;
	static uint8_t x99 = UINT8_MAX;
	uint16_t x100 = UINT16_MAX;
	uint64_t t23 = 61582LLU;

	t23 = ((x97^x98)-(x99<=x100));

	if (t23 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = -1;
	static uint8_t x102 = 4U;
	int8_t x103 = -24;
	volatile int64_t x104 = INT64_MIN;
	int32_t t24 = -217598095;

	t24 = ((x101^x102)-(x103<=x104));

	if (t24 != -5) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x106 = -343975823;
	int8_t x107 = 8;
	uint8_t x108 = UINT8_MAX;
	volatile int32_t t25 = 6;

	t25 = ((x105^x106)-(x107<=x108));

	if (t25 != 343988336) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x109 = 0U;
	static uint8_t x110 = UINT8_MAX;
	uint32_t x111 = 209U;
	int8_t x112 = -1;
	static uint32_t t26 = 108238967U;

	t26 = ((x109^x110)-(x111<=x112));

	if (t26 != 254U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x114 = INT8_MAX;
	int64_t x115 = INT64_MIN;
	int16_t x116 = INT16_MAX;
	volatile int32_t t27 = 3295713;

	t27 = ((x113^x114)-(x115<=x116));

	if (t27 != 103) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x117 = 10U;
	int32_t x119 = 15;
	volatile int32_t x120 = 0;
	int32_t t28 = -37;

	t28 = ((x117^x118)-(x119<=x120));

	if (t28 != -2147483638) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x122 = INT32_MIN;
	static int32_t x123 = INT32_MIN;
	volatile int8_t x124 = 2;
	volatile uint64_t t29 = 6058LLU;

	t29 = ((x121^x122)-(x123<=x124));

	if (t29 != 2147483646LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x125 = -4054008;
	static uint64_t x126 = 8530633LLU;
	static int8_t x128 = 0;

	t30 = ((x125^x126)-(x127<=x128));

	if (t30 != 18446744073696972481LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x129 = 12212743649058160LL;
	int64_t x131 = INT64_MIN;
	uint16_t x132 = 1570U;
	int64_t t31 = -237186814LL;

	t31 = ((x129^x130)-(x131<=x132));

	if (t31 != 12212743649025402LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x133 = UINT8_MAX;
	static int16_t x134 = INT16_MAX;
	volatile int64_t x135 = -115LL;
	int64_t x136 = 6025778983001448LL;

	t32 = ((x133^x134)-(x135<=x136));

	if (t32 != 32511) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x137 = INT16_MIN;
	int16_t x138 = INT16_MIN;
	uint16_t x139 = 103U;
	volatile int64_t x140 = INT64_MIN;
	int32_t t33 = 194386257;

	t33 = ((x137^x138)-(x139<=x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x142 = UINT8_MAX;
	int16_t x143 = INT16_MIN;
	static volatile uint16_t x144 = 1357U;
	static volatile uint64_t t34 = 15787263LLU;

	t34 = ((x141^x142)-(x143<=x144));

	if (t34 != 18446744073709551359LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x146 = INT64_MIN;
	uint16_t x147 = 583U;

	t35 = ((x145^x146)-(x147<=x148));

	if (t35 != 9223372036854775783LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x150 = -14;
	uint64_t x151 = UINT64_MAX;
	uint64_t x152 = 213696665516LLU;

	t36 = ((x149^x150)-(x151<=x152));

	if (t36 != 4294967293U) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x154 = 1057592931157947662LL;
	int16_t x155 = -7;
	volatile int64_t x156 = INT64_MAX;
	volatile uint64_t t37 = 420972973292LLU;

	t37 = ((x153^x154)-(x155<=x156));

	if (t37 != 1057592931157947690LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = INT32_MAX;
	int8_t x159 = INT8_MAX;
	uint8_t x160 = UINT8_MAX;
	uint64_t t38 = 28LLU;

	t38 = ((x157^x158)-(x159<=x160));

	if (t38 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x161 = 87U;
	int64_t x164 = -2448LL;

	t39 = ((x161^x162)-(x163<=x164));

	if (t39 != 3629U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x165 = 134;
	int64_t x166 = -1LL;
	int16_t x167 = 0;
	uint32_t x168 = 1616U;

	t40 = ((x165^x166)-(x167<=x168));

	if (t40 != -136LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x169 = 17U;
	volatile uint8_t x170 = UINT8_MAX;
	int8_t x171 = -1;
	static int32_t x172 = INT32_MIN;
	uint32_t t41 = 7421U;

	t41 = ((x169^x170)-(x171<=x172));

	if (t41 != 238U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x173 = -22;
	int32_t x174 = 3726;
	uint16_t x175 = UINT16_MAX;
	int32_t x176 = -1;
	int32_t t42 = -7165;

	t42 = ((x173^x174)-(x175<=x176));

	if (t42 != -3740) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x177 = -1;
	uint64_t x178 = 170LLU;
	uint8_t x179 = 1U;
	static int32_t x180 = INT32_MAX;
	volatile uint64_t t43 = 30889378544LLU;

	t43 = ((x177^x178)-(x179<=x180));

	if (t43 != 18446744073709551444LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x181 = -1343LL;
	static int16_t x182 = INT16_MIN;
	int16_t x184 = -18;
	volatile int64_t t44 = 0LL;

	t44 = ((x181^x182)-(x183<=x184));

	if (t44 != 31424LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x185 = 189158LLU;
	static int64_t x186 = -29762LL;
	static volatile int8_t x187 = -1;
	static uint16_t x188 = UINT16_MAX;
	static volatile uint64_t t45 = 14075037055693LLU;

	t45 = ((x185^x186)-(x187<=x188));

	if (t45 != 18446744073709381975LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = INT8_MIN;
	int16_t x190 = INT16_MAX;
	int8_t x191 = 0;
	static volatile int8_t x192 = -1;
	int32_t t46 = 645;

	t46 = ((x189^x190)-(x191<=x192));

	if (t46 != -32641) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = 41;
	volatile uint16_t x194 = UINT16_MAX;
	int64_t x195 = -1LL;
	int64_t x196 = 53LL;
	volatile int32_t t47 = 1;

	t47 = ((x193^x194)-(x195<=x196));

	if (t47 != 65493) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x197 = 1LL;
	int32_t x198 = INT32_MAX;
	uint32_t x200 = 98U;
	int64_t t48 = -5398623LL;

	t48 = ((x197^x198)-(x199<=x200));

	if (t48 != 2147483646LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x201 = INT64_MAX;
	uint32_t x203 = UINT32_MAX;
	int16_t x204 = -1;
	volatile uint64_t t49 = 11399396849754414LLU;

	t49 = ((x201^x202)-(x203<=x204));

	if (t49 != 8857470960622173449LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x205 = -3322103734650792815LL;
	static uint64_t x206 = 54575736510361LLU;
	volatile uint32_t x208 = 12U;

	t50 = ((x205^x206)-(x207<=x208));

	if (t50 != 15124694913549550344LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint32_t x209 = UINT32_MAX;
	int8_t x211 = INT8_MIN;
	int8_t x212 = -5;

	t51 = ((x209^x210)-(x211<=x212));

	if (t51 != 2147483647U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x213 = INT64_MIN;
	volatile int8_t x214 = -14;
	int8_t x215 = -1;
	int16_t x216 = -10216;
	int64_t t52 = 4703315616590125LL;

	t52 = ((x213^x214)-(x215<=x216));

	if (t52 != 9223372036854775794LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x218 = INT16_MIN;
	uint64_t x219 = UINT64_MAX;
	volatile int64_t x220 = INT64_MIN;
	volatile int32_t t53 = 93;

	t53 = ((x217^x218)-(x219<=x220));

	if (t53 != -2147450881) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x221 = -1;
	int8_t x222 = INT8_MIN;
	static volatile int32_t x224 = INT32_MIN;
	static int32_t t54 = -11859127;

	t54 = ((x221^x222)-(x223<=x224));

	if (t54 != 126) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x225 = INT64_MIN;
	static uint8_t x226 = UINT8_MAX;
	static uint8_t x227 = 0U;
	int16_t x228 = 1904;
	int64_t t55 = 679710627362452LL;

	t55 = ((x225^x226)-(x227<=x228));

	if (t55 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x229 = INT16_MAX;
	int32_t x230 = -38612;
	static int16_t x231 = INT16_MIN;
	static volatile int8_t x232 = 22;
	static int32_t t56 = 47837;

	t56 = ((x229^x230)-(x231<=x232));

	if (t56 != -59694) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x234 = UINT64_MAX;
	uint64_t x235 = 520399954841689LLU;
	int32_t x236 = INT32_MIN;
	uint64_t t57 = 53280128447992385LLU;

	t57 = ((x233^x234)-(x235<=x236));

	if (t57 != 18446744073709478092LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x237 = 4U;
	volatile uint64_t x238 = UINT64_MAX;
	int32_t x239 = INT32_MAX;
	int32_t x240 = INT32_MAX;
	volatile uint64_t t58 = 38886741555274LLU;

	t58 = ((x237^x238)-(x239<=x240));

	if (t58 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x241 = -32158409;
	int16_t x242 = -5820;
	int16_t x243 = INT16_MIN;
	int8_t x244 = -4;
	volatile int32_t t59 = -83558;

	t59 = ((x241^x242)-(x243<=x244));

	if (t59 != 32154738) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x245 = -1;
	static int8_t x246 = -1;
	int8_t x247 = INT8_MAX;
	uint8_t x248 = UINT8_MAX;

	t60 = ((x245^x246)-(x247<=x248));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x250 = INT64_MAX;
	uint32_t x251 = 24U;
	volatile int64_t t61 = 12808201103368LL;

	t61 = ((x249^x250)-(x251<=x252));

	if (t61 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x253 = UINT64_MAX;
	static uint8_t x254 = 100U;
	volatile uint64_t t62 = 4308747534867LLU;

	t62 = ((x253^x254)-(x255<=x256));

	if (t62 != 18446744073709551515LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x257 = 13305U;
	int64_t x259 = INT64_MIN;
	static int32_t x260 = INT32_MAX;
	static int32_t t63 = 134;

	t63 = ((x257^x258)-(x259<=x260));

	if (t63 != -13715) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x261 = INT8_MAX;
	uint32_t x262 = UINT32_MAX;
	uint8_t x263 = 2U;
	int8_t x264 = 24;
	uint32_t t64 = 958U;

	t64 = ((x261^x262)-(x263<=x264));

	if (t64 != 4294967167U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x265 = -287648840055819926LL;
	static int8_t x266 = INT8_MAX;
	volatile int64_t t65 = 8LL;

	t65 = ((x265^x266)-(x267<=x268));

	if (t65 != -287648840055820012LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x270 = INT8_MIN;
	volatile uint64_t t66 = 44077541LLU;

	t66 = ((x269^x270)-(x271<=x272));

	if (t66 != 18446744073709551474LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x273 = -1;
	static uint16_t x274 = 28U;
	int16_t x276 = INT16_MAX;
	volatile int32_t t67 = -22911171;

	t67 = ((x273^x274)-(x275<=x276));

	if (t67 != -30) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x277 = INT64_MAX;
	static uint32_t x278 = 40444644U;
	uint16_t x279 = 16023U;
	int64_t x280 = INT64_MIN;

	t68 = ((x277^x278)-(x279<=x280));

	if (t68 != 9223372036814331163LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x281 = INT64_MIN;
	static volatile uint8_t x282 = 60U;
	int16_t x284 = INT16_MAX;
	volatile int64_t t69 = 13930LL;

	t69 = ((x281^x282)-(x283<=x284));

	if (t69 != -9223372036854775749LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x285 = 2;
	volatile int32_t x286 = -360;
	int64_t x287 = INT64_MAX;
	volatile int16_t x288 = INT16_MAX;
	int32_t t70 = -56881;

	t70 = ((x285^x286)-(x287<=x288));

	if (t70 != -358) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x289 = -7;
	uint16_t x291 = UINT16_MAX;
	int64_t x292 = INT64_MIN;
	static volatile int32_t t71 = 35997674;

	t71 = ((x289^x290)-(x291<=x292));

	if (t71 != 32761) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x294 = INT32_MAX;
	volatile int16_t x295 = INT16_MAX;
	static int16_t x296 = -688;
	int32_t t72 = -26;

	t72 = ((x293^x294)-(x295<=x296));

	if (t72 != 2147483460) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x297 = UINT32_MAX;
	static int8_t x298 = INT8_MIN;
	static volatile uint32_t t73 = 57389365U;

	t73 = ((x297^x298)-(x299<=x300));

	if (t73 != 126U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x304 = INT16_MAX;
	uint64_t t74 = 64615LLU;

	t74 = ((x301^x302)-(x303<=x304));

	if (t74 != 3238274895347360449LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x307 = -1;
	static int64_t t75 = INT64_MAX;

	t75 = ((x305^x306)-(x307<=x308));

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x309 = 3648U;
	int8_t x310 = INT8_MIN;
	volatile int64_t x311 = INT64_MIN;
	int64_t x312 = INT64_MIN;
	int32_t t76 = 476;

	t76 = ((x309^x310)-(x311<=x312));

	if (t76 != -3649) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x313 = INT16_MAX;
	static volatile int16_t x315 = 40;
	int32_t x316 = INT32_MIN;

	t77 = ((x313^x314)-(x315<=x316));

	if (t77 != 32766) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x317 = 9U;
	volatile uint64_t x318 = 203393887576588864LLU;
	int8_t x319 = INT8_MIN;
	volatile int64_t x320 = INT64_MIN;
	volatile uint64_t t78 = 160229860496482LLU;

	t78 = ((x317^x318)-(x319<=x320));

	if (t78 != 203393887576588873LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x321 = INT16_MAX;
	int32_t x322 = INT32_MAX;
	int8_t x323 = INT8_MIN;
	static volatile int32_t t79 = -3;

	t79 = ((x321^x322)-(x323<=x324));

	if (t79 != 2147450879) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x326 = -1;
	static volatile int64_t x328 = -1LL;
	int32_t t80 = INT32_MIN;

	t80 = ((x325^x326)-(x327<=x328));

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x329 = 1511317552481466008LLU;
	int16_t x330 = -1;
	static int64_t x332 = INT64_MIN;

	t81 = ((x329^x330)-(x331<=x332));

	if (t81 != 16935426521228085606LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x333 = -1;
	static int16_t x334 = INT16_MIN;
	uint64_t x335 = 15830279661LLU;
	int64_t x336 = INT64_MIN;
	int32_t t82 = 0;

	t82 = ((x333^x334)-(x335<=x336));

	if (t82 != 32766) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x338 = INT8_MIN;
	uint8_t x339 = 15U;
	int32_t x340 = -2;
	volatile int32_t t83 = 28232;

	t83 = ((x337^x338)-(x339<=x340));

	if (t83 != 2147483520) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x342 = 500LLU;
	int32_t x343 = INT32_MIN;

	t84 = ((x341^x342)-(x343<=x344));

	if (t84 != 18446744073709551129LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x346 = UINT64_MAX;
	static volatile uint64_t t85 = 229LLU;

	t85 = ((x345^x346)-(x347<=x348));

	if (t85 != 18446656893956572516LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x350 = -1;
	uint16_t x352 = 25U;

	t86 = ((x349^x350)-(x351<=x352));

	if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x353 = INT16_MIN;
	int8_t x356 = -1;
	volatile int32_t t87 = -258014;

	t87 = ((x353^x354)-(x355<=x356));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x357 = 1U;
	int64_t x358 = 126122609464881LL;
	static volatile int64_t t88 = -3046225292LL;

	t88 = ((x357^x358)-(x359<=x360));

	if (t88 != 126122609464880LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x361 = INT16_MIN;
	int16_t x362 = -83;
	int32_t x363 = 197627;
	int64_t x364 = INT64_MAX;
	volatile int32_t t89 = 50;

	t89 = ((x361^x362)-(x363<=x364));

	if (t89 != 32684) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x365 = 23552328U;
	uint32_t x366 = 2666U;
	uint8_t x367 = 6U;
	int8_t x368 = 32;
	volatile uint32_t t90 = 176636105U;

	t90 = ((x365^x366)-(x367<=x368));

	if (t90 != 23554849U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x369 = INT64_MIN;
	static int64_t x371 = 1950924113020LL;
	int64_t t91 = 603651131LL;

	t91 = ((x369^x370)-(x371<=x372));

	if (t91 != -9223372036854775592LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x373 = 14;
	static volatile int64_t x374 = INT64_MIN;
	int64_t x376 = -1LL;
	volatile int64_t t92 = -153LL;

	t92 = ((x373^x374)-(x375<=x376));

	if (t92 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x377 = -40;
	int64_t x378 = 7LL;
	int32_t x379 = INT32_MIN;
	volatile int64_t t93 = -2024080LL;

	t93 = ((x377^x378)-(x379<=x380));

	if (t93 != -33LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x381 = 2195;
	static int8_t x382 = INT8_MAX;
	static volatile int64_t x383 = -1LL;
	volatile int32_t t94 = -27352;

	t94 = ((x381^x382)-(x383<=x384));

	if (t94 != 2284) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x385 = 1U;
	static int16_t x387 = INT16_MIN;
	int32_t t95 = -190209947;

	t95 = ((x385^x386)-(x387<=x388));

	if (t95 != 175585) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x389 = -1628843;
	int16_t x390 = -1;
	static int32_t x391 = -756994749;
	int32_t x392 = -1;
	volatile int32_t t96 = -433128;

	t96 = ((x389^x390)-(x391<=x392));

	if (t96 != 1628841) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x393 = INT32_MAX;

	t97 = ((x393^x394)-(x395<=x396));

	if (t97 != 2147483647U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x397 = INT16_MAX;
	int64_t x400 = INT64_MIN;
	uint64_t t98 = 1242486749702LLU;

	t98 = ((x397^x398)-(x399<=x400));

	if (t98 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x401 = 3337;
	int8_t x402 = INT8_MAX;
	int16_t x403 = 4738;
	static volatile int64_t x404 = 6064340710259LL;

	t99 = ((x401^x402)-(x403<=x404));

	if (t99 != 3445) { NG(); } else { ; }
	
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

