#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x1 = -34;
volatile uint64_t t0 = 57LLU;
uint32_t x11 = 652056953U;
static volatile int8_t x18 = 10;
int64_t x20 = INT64_MIN;
volatile int32_t t4 = 195;
int16_t x27 = 126;
uint32_t x33 = 1026601889U;
static int64_t x34 = INT64_MIN;
int64_t t8 = -400180700357742LL;
uint32_t x37 = UINT32_MAX;
int64_t x39 = INT64_MAX;
volatile uint32_t x42 = UINT32_MAX;
int32_t x48 = INT32_MIN;
volatile int64_t x56 = 31278LL;
static int64_t x75 = INT64_MAX;
volatile int64_t t18 = 4112LL;
static int32_t t19 = 1043838;
int8_t x82 = INT8_MIN;
static uint32_t x83 = 6U;
int32_t x85 = -1;
int8_t x91 = 0;
static int64_t x92 = -1LL;
volatile int32_t t23 = 1810671;
static int16_t x108 = INT16_MAX;
uint16_t x112 = UINT16_MAX;
int32_t t27 = 102;
static int16_t x114 = -677;
int32_t t28 = 46461;
uint16_t x119 = 15U;
static volatile uint16_t x120 = 4948U;
volatile int64_t x126 = INT64_MAX;
uint64_t x127 = 17214303018LLU;
uint8_t x131 = UINT8_MAX;
int16_t x138 = 0;
volatile int32_t t34 = 5;
volatile int32_t t35 = 27629107;
uint64_t x145 = UINT64_MAX;
static uint64_t x155 = 1809877LLU;
int8_t x158 = -1;
int16_t x164 = INT16_MIN;
uint8_t x169 = UINT8_MAX;
static volatile int32_t t42 = -729198600;
int64_t x173 = INT64_MIN;
int32_t x178 = INT32_MAX;
static uint16_t x180 = 206U;
static volatile int32_t t44 = 7;
int8_t x183 = INT8_MAX;
static volatile uint32_t x186 = UINT32_MAX;
int64_t x190 = 4249657897770LL;
int8_t x196 = INT8_MIN;
volatile int64_t t48 = 1709878439351LL;
uint32_t x198 = UINT32_MAX;
int64_t x200 = 1472090588483010LL;
volatile int32_t t50 = 4761;
int64_t x214 = INT64_MIN;
int16_t x218 = INT16_MIN;
static uint32_t x219 = 228U;
static int32_t x220 = -1;
int64_t x224 = INT64_MAX;
volatile uint64_t t55 = 248465497488863113LLU;
volatile int16_t x228 = INT16_MIN;
uint16_t x230 = UINT16_MAX;
uint16_t x242 = 0U;
volatile uint16_t x246 = 11U;
int64_t x251 = INT64_MIN;
uint16_t x257 = 0U;
int64_t x258 = -49LL;
static uint64_t x265 = UINT64_MAX;
volatile uint64_t x266 = UINT64_MAX;
volatile int64_t x268 = -1LL;
uint32_t x269 = 157333988U;
int64_t x272 = INT64_MIN;
static volatile uint16_t x280 = 5390U;
int64_t x282 = INT64_MAX;
static int64_t x285 = 77892024LL;
int64_t x286 = -1LL;
uint16_t x289 = UINT16_MAX;
uint8_t x290 = UINT8_MAX;
int16_t x297 = INT16_MIN;
uint16_t x298 = 0U;
uint32_t x302 = UINT32_MAX;
int32_t x318 = 3087;
static int32_t x326 = -82;
int8_t x327 = INT8_MIN;
volatile uint64_t x329 = 12265344899344LLU;
int64_t x333 = -1LL;
int16_t x354 = -14643;
static int16_t x356 = -1;
volatile int32_t t88 = -86783;
int32_t x358 = -6;
int8_t x367 = -1;
uint16_t x370 = UINT16_MAX;
uint16_t x371 = UINT16_MAX;
static int32_t t92 = -1024;
int32_t x377 = -1;
uint8_t x380 = UINT8_MAX;
static uint32_t x382 = 60U;
uint64_t x383 = UINT64_MAX;
uint32_t t95 = 215U;
int64_t x387 = -1153LL;
int16_t x395 = INT16_MAX;
uint32_t x396 = 9967294U;


void f0(void) {
	uint64_t x2 = 7724237157LLU;
	volatile uint16_t x3 = 178U;
	volatile int32_t x4 = INT32_MIN;

	t0 = ((x1^x2)&(x3<=x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int32_t x6 = INT32_MIN;
	static uint64_t x7 = UINT64_MAX;
	int8_t x8 = INT8_MIN;
	int32_t t1 = 823;

	t1 = ((x5^x6)&(x7<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = -1;
	int32_t x10 = -67590761;
	int8_t x12 = 2;
	volatile int32_t t2 = -31971;

	t2 = ((x9^x10)&(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	static int32_t x14 = -1;
	int64_t x15 = -53079259372LL;
	int8_t x16 = INT8_MIN;
	volatile int64_t t3 = -78366541200401563LL;

	t3 = ((x13^x14)&(x15<=x16));

	if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	int16_t x19 = -1;

	t4 = ((x17^x18)&(x19<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	int64_t x22 = INT64_MIN;
	static int32_t x23 = -1;
	volatile uint16_t x24 = UINT16_MAX;
	volatile uint64_t t5 = 275841LLU;

	t5 = ((x21^x22)&(x23<=x24));

	if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x25 = INT64_MIN;
	int32_t x26 = INT32_MAX;
	int32_t x28 = INT32_MIN;
	volatile int64_t t6 = 108154540792651712LL;

	t6 = ((x25^x26)&(x27<=x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 251147017LLU;
	static volatile uint64_t x30 = 1606881993725373LLU;
	static volatile int8_t x31 = INT8_MAX;
	int64_t x32 = 2764650872LL;
	volatile uint64_t t7 = 402417583277335124LLU;

	t7 = ((x29^x30)&(x31<=x32));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x35 = 60U;
	static int64_t x36 = -1LL;

	t8 = ((x33^x34)&(x35<=x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x38 = UINT32_MAX;
	static uint64_t x40 = UINT64_MAX;
	static uint32_t t9 = 30818U;

	t9 = ((x37^x38)&(x39<=x40));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x41 = 846042718299254LLU;
	int16_t x43 = INT16_MIN;
	volatile int32_t x44 = INT32_MAX;
	volatile uint64_t t10 = 137389931LLU;

	t10 = ((x41^x42)&(x43<=x44));

	if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1;
	int16_t x46 = 1;
	volatile int32_t x47 = INT32_MAX;
	int32_t t11 = -2331840;

	t11 = ((x45^x46)&(x47<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = 1;
	int64_t x50 = -1LL;
	volatile uint16_t x51 = 196U;
	int8_t x52 = INT8_MAX;
	static volatile int64_t t12 = 446112LL;

	t12 = ((x49^x50)&(x51<=x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = 0LL;
	int64_t x54 = -1LL;
	uint16_t x55 = 428U;
	volatile int64_t t13 = -1560667792667399LL;

	t13 = ((x53^x54)&(x55<=x56));

	if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = INT32_MIN;
	static int64_t x58 = INT64_MIN;
	int64_t x59 = 359062042619542LL;
	uint64_t x60 = 15690332645968LLU;
	int64_t t14 = 6300303457LL;

	t14 = ((x57^x58)&(x59<=x60));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	uint64_t x62 = UINT64_MAX;
	uint32_t x63 = 1623802447U;
	uint32_t x64 = UINT32_MAX;
	volatile uint64_t t15 = 1830455162595490LLU;

	t15 = ((x61^x62)&(x63<=x64));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = 170;
	static uint16_t x66 = 2043U;
	static uint32_t x67 = 1U;
	int64_t x68 = -1LL;
	int32_t t16 = 250;

	t16 = ((x65^x66)&(x67<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	int64_t x70 = -5521353016LL;
	static volatile int64_t x71 = INT64_MAX;
	uint32_t x72 = 39454030U;
	int64_t t17 = -61662915403661893LL;

	t17 = ((x69^x70)&(x71<=x72));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x73 = INT32_MAX;
	int64_t x74 = INT64_MIN;
	static volatile int8_t x76 = 0;

	t18 = ((x73^x74)&(x75<=x76));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -52;
	volatile int16_t x78 = 445;
	int16_t x79 = -55;
	volatile uint16_t x80 = 5U;

	t19 = ((x77^x78)&(x79<=x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = 1;
	volatile uint32_t x84 = 3796U;
	volatile int32_t t20 = 63943;

	t20 = ((x81^x82)&(x83<=x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x86 = INT16_MIN;
	static int64_t x87 = -179014747080LL;
	int32_t x88 = INT32_MIN;
	volatile int32_t t21 = 1;

	t21 = ((x85^x86)&(x87<=x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = INT8_MIN;
	int8_t x90 = INT8_MAX;
	int32_t t22 = -1955001;

	t22 = ((x89^x90)&(x91<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x93 = 19580U;
	uint16_t x94 = 5518U;
	int32_t x95 = -1;
	uint8_t x96 = 61U;

	t23 = ((x93^x94)&(x95<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = 15917LL;
	static volatile int16_t x98 = -1;
	uint8_t x99 = UINT8_MAX;
	volatile int8_t x100 = -29;
	static int64_t t24 = -3941501529LL;

	t24 = ((x97^x98)&(x99<=x100));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = UINT64_MAX;
	static int32_t x102 = INT32_MIN;
	static uint32_t x103 = 110864U;
	uint64_t x104 = 15LLU;
	volatile uint64_t t25 = 1194665947LLU;

	t25 = ((x101^x102)&(x103<=x104));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 2904U;
	int16_t x106 = INT16_MIN;
	volatile uint16_t x107 = UINT16_MAX;
	int32_t t26 = -462432;

	t26 = ((x105^x106)&(x107<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x109 = -1;
	volatile int32_t x110 = 60162565;
	int64_t x111 = -1LL;

	t27 = ((x109^x110)&(x111<=x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 14U;
	static int32_t x115 = -1;
	int64_t x116 = -3984171492790967631LL;

	t28 = ((x113^x114)&(x115<=x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x117 = INT16_MAX;
	int16_t x118 = INT16_MIN;
	int32_t t29 = -14399785;

	t29 = ((x117^x118)&(x119<=x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = UINT8_MAX;
	uint8_t x122 = 1U;
	uint64_t x123 = UINT64_MAX;
	volatile int32_t x124 = -107;
	static int32_t t30 = -71;

	t30 = ((x121^x122)&(x123<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x125 = INT32_MAX;
	uint16_t x128 = UINT16_MAX;
	volatile int64_t t31 = 3255LL;

	t31 = ((x125^x126)&(x127<=x128));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 8U;
	static volatile uint32_t x130 = 6359U;
	int8_t x132 = -1;
	volatile uint32_t t32 = 6U;

	t32 = ((x129^x130)&(x131<=x132));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x133 = UINT16_MAX;
	int32_t x134 = INT32_MIN;
	int64_t x135 = -1262688232283LL;
	volatile int32_t x136 = -7442;
	int32_t t33 = -202226076;

	t33 = ((x133^x134)&(x135<=x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	int32_t x139 = -1;
	uint32_t x140 = UINT32_MAX;

	t34 = ((x137^x138)&(x139<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -58031;
	int8_t x142 = -4;
	static int64_t x143 = -1LL;
	int8_t x144 = INT8_MIN;

	t35 = ((x141^x142)&(x143<=x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x146 = INT8_MAX;
	uint32_t x147 = 30U;
	int64_t x148 = INT64_MIN;
	uint64_t t36 = 42738779879714746LLU;

	t36 = ((x145^x146)&(x147<=x148));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 2U;
	int16_t x150 = INT16_MIN;
	uint64_t x151 = UINT64_MAX;
	int64_t x152 = INT64_MAX;
	static int32_t t37 = -2725;

	t37 = ((x149^x150)&(x151<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = 0;
	volatile int16_t x154 = -1;
	static int32_t x156 = INT32_MAX;
	int32_t t38 = 1;

	t38 = ((x153^x154)&(x155<=x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 36316U;
	volatile uint32_t x159 = UINT32_MAX;
	int64_t x160 = -1LL;
	uint32_t t39 = 361307055U;

	t39 = ((x157^x158)&(x159<=x160));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x161 = -1;
	uint8_t x162 = 19U;
	int8_t x163 = INT8_MIN;
	volatile int32_t t40 = -1;

	t40 = ((x161^x162)&(x163<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MAX;
	int8_t x166 = -1;
	volatile uint64_t x167 = 514442511325LLU;
	uint8_t x168 = 1U;
	int64_t t41 = -106927014643679712LL;

	t41 = ((x165^x166)&(x167<=x168));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x170 = INT32_MIN;
	int64_t x171 = INT64_MAX;
	static int32_t x172 = INT32_MIN;

	t42 = ((x169^x170)&(x171<=x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x174 = 1141709212076LLU;
	uint64_t x175 = 1317574790194645LLU;
	int16_t x176 = -1;
	static volatile uint64_t t43 = 1475891497749LLU;

	t43 = ((x173^x174)&(x175<=x176));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 5U;
	static int8_t x179 = INT8_MAX;

	t44 = ((x177^x178)&(x179<=x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint16_t x181 = 1152U;
	static int32_t x182 = -410216310;
	uint16_t x184 = 15U;
	volatile int32_t t45 = 5;

	t45 = ((x181^x182)&(x183<=x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MAX;
	static int16_t x187 = INT16_MAX;
	uint32_t x188 = UINT32_MAX;
	volatile uint32_t t46 = 1U;

	t46 = ((x185^x186)&(x187<=x188));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x189 = INT32_MAX;
	uint32_t x191 = UINT32_MAX;
	int64_t x192 = INT64_MIN;
	volatile int64_t t47 = -17342592376814000LL;

	t47 = ((x189^x190)&(x191<=x192));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	int64_t x194 = INT64_MIN;
	volatile int8_t x195 = INT8_MIN;

	t48 = ((x193^x194)&(x195<=x196));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MIN;
	uint8_t x199 = 0U;
	volatile uint32_t t49 = 778819U;

	t49 = ((x197^x198)&(x199<=x200));

	if (t49 != 1U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = 0;
	int32_t x202 = 1;
	int8_t x203 = 1;
	uint64_t x204 = 23LLU;

	t50 = ((x201^x202)&(x203<=x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MIN;
	int16_t x206 = 942;
	int8_t x207 = 1;
	volatile int32_t x208 = INT32_MIN;
	volatile int32_t t51 = -1;

	t51 = ((x205^x206)&(x207<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = 125U;
	static volatile int32_t x210 = 6;
	int8_t x211 = 6;
	static uint64_t x212 = 1055290560406147LLU;
	volatile uint32_t t52 = 569U;

	t52 = ((x209^x210)&(x211<=x212));

	if (t52 != 1U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = UINT8_MAX;
	int8_t x215 = 12;
	int64_t x216 = INT64_MIN;
	int64_t t53 = 25893136332455770LL;

	t53 = ((x213^x214)&(x215<=x216));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	int32_t t54 = 0;

	t54 = ((x217^x218)&(x219<=x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = -5;
	uint64_t x222 = 1LLU;
	uint64_t x223 = 63687LLU;

	t55 = ((x221^x222)&(x223<=x224));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MIN;
	int64_t x226 = INT64_MAX;
	volatile int64_t x227 = INT64_MIN;
	int64_t t56 = 129158711886517LL;

	t56 = ((x225^x226)&(x227<=x228));

	if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x229 = INT16_MIN;
	uint64_t x231 = 1027461LLU;
	static uint32_t x232 = UINT32_MAX;
	int32_t t57 = -5877807;

	t57 = ((x229^x230)&(x231<=x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x233 = UINT8_MAX;
	static int16_t x234 = INT16_MIN;
	static uint64_t x235 = 10885650983LLU;
	uint64_t x236 = 20862LLU;
	int32_t t58 = -48444;

	t58 = ((x233^x234)&(x235<=x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = 5;
	int16_t x238 = -9;
	static uint8_t x239 = 1U;
	uint64_t x240 = 856175362LLU;
	int32_t t59 = -209916330;

	t59 = ((x237^x238)&(x239<=x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = 19677625718LLU;
	int8_t x243 = -1;
	int8_t x244 = INT8_MAX;
	uint64_t t60 = 2736LLU;

	t60 = ((x241^x242)&(x243<=x244));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MAX;
	int8_t x247 = 8;
	int32_t x248 = INT32_MAX;
	int64_t t61 = -532140631LL;

	t61 = ((x245^x246)&(x247<=x248));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MIN;
	uint32_t x250 = UINT32_MAX;
	volatile uint64_t x252 = UINT64_MAX;
	volatile uint32_t t62 = 26397273U;

	t62 = ((x249^x250)&(x251<=x252));

	if (t62 != 1U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = -1LL;
	int64_t x254 = -2288151314665200811LL;
	int32_t x255 = INT32_MAX;
	int8_t x256 = INT8_MIN;
	volatile int64_t t63 = -341540860044895224LL;

	t63 = ((x253^x254)&(x255<=x256));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x259 = 2034;
	int64_t x260 = INT64_MIN;
	volatile int64_t t64 = 7287194092LL;

	t64 = ((x257^x258)&(x259<=x260));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x261 = 1689253;
	uint16_t x262 = 0U;
	static int64_t x263 = INT64_MIN;
	static volatile uint8_t x264 = 1U;
	int32_t t65 = -325161;

	t65 = ((x261^x262)&(x263<=x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x267 = -1LL;
	static uint64_t t66 = 1871768808834665161LLU;

	t66 = ((x265^x266)&(x267<=x268));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x270 = INT64_MIN;
	uint8_t x271 = UINT8_MAX;
	volatile int64_t t67 = -1LL;

	t67 = ((x269^x270)&(x271<=x272));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MAX;
	int16_t x274 = INT16_MIN;
	uint8_t x275 = 2U;
	int64_t x276 = INT64_MAX;
	int64_t t68 = 25493830015210LL;

	t68 = ((x273^x274)&(x275<=x276));

	if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = 13U;
	static uint16_t x278 = UINT16_MAX;
	int16_t x279 = INT16_MAX;
	int32_t t69 = -1403;

	t69 = ((x277^x278)&(x279<=x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = -1;
	int32_t x283 = 223517;
	volatile uint8_t x284 = UINT8_MAX;
	int64_t t70 = -3264281285046LL;

	t70 = ((x281^x282)&(x283<=x284));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x287 = -1454569;
	uint64_t x288 = 336308LLU;
	volatile int64_t t71 = -122898133222488460LL;

	t71 = ((x285^x286)&(x287<=x288));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x291 = UINT8_MAX;
	int32_t x292 = INT32_MIN;
	int32_t t72 = -189;

	t72 = ((x289^x290)&(x291<=x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MIN;
	int32_t x294 = -1;
	uint32_t x295 = 2027U;
	int32_t x296 = INT32_MAX;
	volatile int32_t t73 = 210724;

	t73 = ((x293^x294)&(x295<=x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x299 = 1956777;
	static volatile int32_t x300 = -1;
	volatile int32_t t74 = -1399;

	t74 = ((x297^x298)&(x299<=x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MAX;
	volatile uint16_t x303 = UINT16_MAX;
	static int32_t x304 = -2;
	volatile uint32_t t75 = 16U;

	t75 = ((x301^x302)&(x303<=x304));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	int16_t x306 = 180;
	int8_t x307 = -15;
	int8_t x308 = INT8_MIN;
	volatile int32_t t76 = -50838;

	t76 = ((x305^x306)&(x307<=x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	int32_t x310 = -1;
	uint16_t x311 = 30531U;
	int8_t x312 = INT8_MAX;
	volatile int32_t t77 = 251440;

	t77 = ((x309^x310)&(x311<=x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 343U;
	uint64_t x314 = 54348530606LLU;
	static int8_t x315 = INT8_MAX;
	int8_t x316 = INT8_MIN;
	uint64_t t78 = 42435625223983039LLU;

	t78 = ((x313^x314)&(x315<=x316));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x317 = INT16_MIN;
	int16_t x319 = INT16_MAX;
	uint64_t x320 = UINT64_MAX;
	volatile int32_t t79 = -448557;

	t79 = ((x317^x318)&(x319<=x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x321 = INT32_MIN;
	static volatile uint16_t x322 = UINT16_MAX;
	uint8_t x323 = UINT8_MAX;
	volatile uint32_t x324 = UINT32_MAX;
	volatile int32_t t80 = 25517;

	t80 = ((x321^x322)&(x323<=x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = 120U;
	uint8_t x328 = 123U;
	volatile int32_t t81 = -14622553;

	t81 = ((x325^x326)&(x327<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x330 = INT8_MIN;
	int32_t x331 = INT32_MIN;
	int32_t x332 = 20;
	uint64_t t82 = 230534363820LLU;

	t82 = ((x329^x330)&(x331<=x332));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x334 = INT32_MIN;
	int16_t x335 = -1;
	static int64_t x336 = INT64_MAX;
	int64_t t83 = 80786483984LL;

	t83 = ((x333^x334)&(x335<=x336));

	if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = -1;
	int64_t x338 = 597LL;
	uint64_t x339 = 1LLU;
	int8_t x340 = INT8_MIN;
	static volatile int64_t t84 = 220990551647071372LL;

	t84 = ((x337^x338)&(x339<=x340));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -1;
	uint32_t x342 = UINT32_MAX;
	int64_t x343 = -91077LL;
	int8_t x344 = -5;
	uint32_t t85 = 3997U;

	t85 = ((x341^x342)&(x343<=x344));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = 33;
	int16_t x346 = -60;
	int64_t x347 = 17253129677256LL;
	volatile uint64_t x348 = UINT64_MAX;
	int32_t t86 = -53905;

	t86 = ((x345^x346)&(x347<=x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x349 = UINT32_MAX;
	uint16_t x350 = 667U;
	int16_t x351 = 1;
	static volatile int32_t x352 = INT32_MIN;
	uint32_t t87 = 945629358U;

	t87 = ((x349^x350)&(x351<=x352));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x353 = INT32_MIN;
	int64_t x355 = INT64_MAX;

	t88 = ((x353^x354)&(x355<=x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x357 = INT64_MIN;
	int8_t x359 = -7;
	static uint16_t x360 = 1U;
	int64_t t89 = 0LL;

	t89 = ((x357^x358)&(x359<=x360));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x361 = INT8_MAX;
	int8_t x362 = INT8_MIN;
	static uint32_t x363 = 499553U;
	static int32_t x364 = 167621778;
	int32_t t90 = 21937;

	t90 = ((x361^x362)&(x363<=x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x365 = 2102;
	volatile int16_t x366 = 571;
	static uint16_t x368 = UINT16_MAX;
	volatile int32_t t91 = 21;

	t91 = ((x365^x366)&(x367<=x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x369 = -137453;
	int8_t x372 = INT8_MAX;

	t92 = ((x369^x370)&(x371<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x373 = UINT64_MAX;
	int16_t x374 = -1;
	uint16_t x375 = 10U;
	int32_t x376 = INT32_MIN;
	uint64_t t93 = 1LLU;

	t93 = ((x373^x374)&(x375<=x376));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x378 = INT16_MIN;
	int8_t x379 = 1;
	int32_t t94 = 69987842;

	t94 = ((x377^x378)&(x379<=x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = 28876296;
	static volatile int8_t x384 = INT8_MIN;

	t95 = ((x381^x382)&(x383<=x384));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x385 = UINT32_MAX;
	int16_t x386 = 50;
	static uint8_t x388 = 36U;
	volatile uint32_t t96 = 137017U;

	t96 = ((x385^x386)&(x387<=x388));

	if (t96 != 1U) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = 1583175U;
	uint16_t x390 = 28U;
	uint8_t x391 = 2U;
	volatile int64_t x392 = 338LL;
	uint32_t t97 = 17U;

	t97 = ((x389^x390)&(x391<=x392));

	if (t97 != 1U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = 8;
	static int16_t x394 = 339;
	int32_t t98 = -764881;

	t98 = ((x393^x394)&(x395<=x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = -1;
	volatile uint64_t x398 = UINT64_MAX;
	int8_t x399 = -1;
	uint8_t x400 = 44U;
	uint64_t t99 = 4402930074534LLU;

	t99 = ((x397^x398)&(x399<=x400));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

