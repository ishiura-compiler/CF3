#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x14 = 385198209917052LLU;
int16_t x18 = -1;
static int32_t x26 = INT32_MIN;
int16_t x27 = INT16_MIN;
int32_t x29 = 93631;
int16_t x36 = -15630;
int8_t x38 = INT8_MIN;
int8_t x41 = -11;
uint8_t x45 = 21U;
static uint64_t x47 = 0LLU;
static volatile uint16_t x48 = 1675U;
uint64_t x52 = 8140124LLU;
int64_t x61 = 401053938724LL;
volatile int32_t x73 = INT32_MIN;
int8_t x78 = -7;
int64_t t18 = 7524867535LL;
int32_t x88 = -5997227;
uint64_t t20 = 1866LLU;
static volatile uint8_t x89 = UINT8_MAX;
volatile int8_t x90 = -4;
uint8_t x94 = 15U;
int32_t x95 = 61009691;
uint64_t x96 = 266LLU;
volatile uint64_t t24 = 5472LLU;
int64_t x105 = -1LL;
static volatile int8_t x107 = -3;
int16_t x108 = -1326;
int32_t t27 = 147;
static int16_t x118 = INT16_MAX;
uint8_t x119 = UINT8_MAX;
static uint32_t t28 = 31858039U;
uint16_t x124 = 27U;
volatile uint8_t x131 = 4U;
int16_t x134 = INT16_MIN;
uint64_t t33 = 3235793058083397323LLU;
int8_t x141 = -6;
static volatile int16_t x145 = -1;
uint16_t x154 = 206U;
int8_t x169 = -1;
uint64_t x171 = 3163LLU;
volatile int8_t x175 = INT8_MAX;
static int64_t t42 = 719377454091758LL;
int8_t x181 = INT8_MIN;
volatile int64_t x187 = INT64_MIN;
volatile int64_t x188 = INT64_MAX;
int64_t t44 = 12036894622LL;
volatile int8_t x198 = -1;
static int8_t x204 = 0;
int64_t x214 = 1596754131568729427LL;
uint64_t x215 = 325048655426453638LLU;
volatile uint64_t t51 = 184579386618167LLU;
static int8_t x217 = 23;
uint32_t x218 = 1U;
static uint32_t x225 = 1162934U;
static int32_t x232 = INT32_MIN;
uint16_t x233 = 1539U;
volatile int64_t x254 = INT64_MIN;
static int32_t x276 = INT32_MIN;
int8_t x278 = INT8_MAX;
int16_t x279 = 15557;
static volatile int8_t x280 = -1;
int64_t t67 = 1392299079210348873LL;
int16_t x281 = -1;
static uint64_t t69 = 38LLU;
uint8_t x292 = 39U;
static uint32_t x294 = UINT32_MAX;
int32_t x295 = INT32_MIN;
uint64_t t72 = 1LLU;
uint16_t x301 = UINT16_MAX;
uint64_t x302 = 549200125514192LLU;
uint32_t x303 = 97481U;
int16_t x305 = -1;
int8_t x306 = INT8_MAX;
uint32_t t75 = 5U;
int16_t x314 = -1;
volatile int64_t t78 = -500089858581645LL;
int16_t x326 = INT16_MIN;
int64_t x331 = INT64_MAX;
int16_t x335 = INT16_MIN;
int32_t x341 = 5539868;
int8_t x342 = INT8_MIN;
static uint64_t t84 = 565709LLU;
volatile uint32_t t85 = 4799839U;
static uint64_t x361 = UINT64_MAX;
uint16_t x364 = UINT16_MAX;
volatile int16_t x365 = 2401;
uint32_t x372 = 410758U;
uint32_t t90 = 1609U;
uint16_t x387 = 6349U;
static uint16_t x398 = 489U;
int32_t t97 = 1;
volatile int64_t t98 = 57936741244919300LL;
uint32_t x407 = 7431717U;
uint8_t x408 = 11U;


void f0(void) {
	static int64_t x1 = INT64_MAX;
	int64_t x2 = -1LL;
	int8_t x3 = 6;
	uint32_t x4 = 3489U;
	volatile int64_t t0 = 1LL;

	t0 = ((x1%x2)^(x3^x4));

	if (t0 != 3495LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	int8_t x6 = -43;
	uint32_t x7 = 188903835U;
	int32_t x8 = INT32_MIN;
	uint32_t t1 = 1197933486U;

	t1 = ((x5%x6)^(x7^x8));

	if (t1 != 1958579812U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	static int16_t x10 = 127;
	int32_t x11 = 5997294;
	uint32_t x12 = 83707371U;
	volatile int64_t t2 = -1LL;

	t2 = ((x9%x10)^(x11^x12));

	if (t2 != 78038789LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 2046;
	int32_t x15 = 46;
	static uint32_t x16 = 1U;
	uint64_t t3 = 14252764LLU;

	t3 = ((x13%x14)^(x15^x16));

	if (t3 != 2001LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = -23;
	static uint8_t x19 = 0U;
	int32_t x20 = -1;
	volatile int32_t t4 = -232613;

	t4 = ((x17%x18)^(x19^x20));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = 3249741883776697860LLU;
	static int8_t x28 = -23;
	volatile uint64_t t5 = 0LLU;

	t5 = ((x25%x26)^(x27^x28));

	if (t5 != 3249741883776727533LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x30 = INT64_MAX;
	int64_t x31 = INT64_MAX;
	volatile int64_t x32 = INT64_MIN;
	int64_t t6 = -414766LL;

	t6 = ((x29%x30)^(x31^x32));

	if (t6 != -93632LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = -1;
	volatile int64_t x34 = -1128542728847352LL;
	static int64_t x35 = INT64_MIN;
	int64_t t7 = 25591085056LL;

	t7 = ((x33%x34)^(x35^x36));

	if (t7 != -9223372036854760179LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x37 = -2;
	static int16_t x39 = 1;
	static int64_t x40 = -1LL;
	int64_t t8 = -174867717790864LL;

	t8 = ((x37%x38)^(x39^x40));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x42 = -1LL;
	uint32_t x43 = 1U;
	uint16_t x44 = UINT16_MAX;
	volatile int64_t t9 = -1990182544956LL;

	t9 = ((x41%x42)^(x43^x44));

	if (t9 != 65534LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x46 = 111U;
	uint64_t t10 = 50LLU;

	t10 = ((x45%x46)^(x47^x48));

	if (t10 != 1694LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x49 = -1LL;
	int16_t x50 = 2;
	volatile uint32_t x51 = UINT32_MAX;
	static volatile uint64_t t11 = 123261257217LLU;

	t11 = ((x49%x50)^(x51^x52));

	if (t11 != 18446744069422724444LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = INT8_MIN;
	volatile int32_t x54 = INT32_MIN;
	int32_t x55 = -1;
	uint8_t x56 = 56U;
	volatile int32_t t12 = -2701;

	t12 = ((x53%x54)^(x55^x56));

	if (t12 != 71) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x57 = INT32_MIN;
	uint32_t x58 = 1U;
	int64_t x59 = INT64_MIN;
	uint8_t x60 = 12U;
	int64_t t13 = -17973117LL;

	t13 = ((x57%x58)^(x59^x60));

	if (t13 != -9223372036854775796LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x62 = INT8_MIN;
	static volatile uint16_t x63 = 3U;
	int8_t x64 = INT8_MIN;
	volatile int64_t t14 = 24704LL;

	t14 = ((x61%x62)^(x63^x64));

	if (t14 != -89LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint64_t x65 = UINT64_MAX;
	int32_t x66 = INT32_MIN;
	int8_t x67 = -1;
	int64_t x68 = -1LL;
	volatile uint64_t t15 = 41237044316318410LLU;

	t15 = ((x65%x66)^(x67^x68));

	if (t15 != 2147483647LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x69 = 5119136LLU;
	uint8_t x70 = 1U;
	int32_t x71 = 3868;
	uint16_t x72 = 2U;
	uint64_t t16 = 4307569114506329LLU;

	t16 = ((x69%x70)^(x71^x72));

	if (t16 != 3870LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x74 = 32U;
	int32_t x75 = -35687;
	volatile int64_t x76 = -1400995628LL;
	static int64_t t17 = 23244807431312209LL;

	t17 = ((x73%x74)^(x75^x76));

	if (t17 != 1401025613LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x77 = 445352440118625LL;
	int16_t x79 = 31;
	volatile int64_t x80 = INT64_MAX;

	t18 = ((x77%x78)^(x79^x80));

	if (t18 != 9223372036854775780LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x81 = INT32_MIN;
	int32_t x82 = INT32_MAX;
	volatile uint64_t x83 = UINT64_MAX;
	int32_t x84 = 0;
	volatile uint64_t t19 = 52888897207LLU;

	t19 = ((x81%x82)^(x83^x84));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x85 = -1LL;
	static int16_t x86 = INT16_MAX;
	volatile uint64_t x87 = 117885155784LLU;

	t20 = ((x85%x86)^(x87^x88));

	if (t20 != 117891087202LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x91 = -1LL;
	int8_t x92 = INT8_MIN;
	int64_t t21 = 0LL;

	t21 = ((x89%x90)^(x91^x92));

	if (t21 != 124LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = -1;
	static volatile uint64_t t22 = 213208LLU;

	t22 = ((x93%x94)^(x95^x96));

	if (t22 != 18446744073648542190LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = INT32_MAX;
	int32_t x98 = INT32_MIN;
	uint64_t x99 = 387281642174139LLU;
	volatile uint64_t x100 = 24432999100430LLU;
	volatile uint64_t t23 = 376LLU;

	t23 = ((x97%x98)^(x99^x100));

	if (t23 != 411233311340874LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x101 = 1788866489150338612LLU;
	int64_t x102 = -3LL;
	volatile int64_t x103 = INT64_MIN;
	static int8_t x104 = 50;

	t24 = ((x101%x102)^(x103^x104));

	if (t24 != 11012238526005114374LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x106 = 12041U;
	int64_t t25 = 216025468535697LL;

	t25 = ((x105%x106)^(x107^x108));

	if (t25 != -1328LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x109 = 3481LLU;
	int8_t x110 = INT8_MAX;
	int32_t x111 = INT32_MIN;
	static int8_t x112 = INT8_MIN;
	uint64_t t26 = 169646825309615LLU;

	t26 = ((x109%x110)^(x111^x112));

	if (t26 != 2147483572LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x113 = 18257U;
	static int8_t x114 = INT8_MIN;
	int16_t x115 = INT16_MIN;
	volatile int8_t x116 = -1;

	t27 = ((x113%x114)^(x115^x116));

	if (t27 != 32686) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = INT32_MIN;
	static uint32_t x120 = UINT32_MAX;

	t28 = ((x117%x118)^(x119^x120));

	if (t28 != 254U) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x121 = INT8_MIN;
	static uint64_t x122 = UINT64_MAX;
	uint8_t x123 = UINT8_MAX;
	uint64_t t29 = 10764LLU;

	t29 = ((x121%x122)^(x123^x124));

	if (t29 != 18446744073709551460LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = -1;
	static int8_t x126 = -1;
	static volatile uint32_t x127 = 2622U;
	volatile int64_t x128 = -238184LL;
	int64_t t30 = -26411188476847LL;

	t30 = ((x125%x126)^(x127^x128));

	if (t30 != -239706LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x129 = 3LLU;
	uint8_t x130 = 7U;
	volatile int64_t x132 = -22177LL;
	uint64_t t31 = 119LLU;

	t31 = ((x129%x130)^(x131^x132));

	if (t31 != 18446744073709529432LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = -1LL;
	int8_t x135 = -1;
	uint32_t x136 = 369673U;
	static int64_t t32 = -73409LL;

	t32 = ((x133%x134)^(x135^x136));

	if (t32 != -4294597623LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x137 = INT8_MIN;
	int32_t x138 = INT32_MAX;
	uint8_t x139 = 12U;
	uint64_t x140 = 3448259002551991444LLU;

	t33 = ((x137%x138)^(x139^x140));

	if (t33 != 14998485071157560088LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x142 = 12097260378480LL;
	volatile int64_t x143 = INT64_MAX;
	uint16_t x144 = 55U;
	volatile int64_t t34 = -36831748952LL;

	t34 = ((x141%x142)^(x143^x144));

	if (t34 != -9223372036854775758LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x146 = -104;
	int16_t x147 = INT16_MIN;
	int16_t x148 = INT16_MAX;
	volatile int32_t t35 = 1;

	t35 = ((x145%x146)^(x147^x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = INT64_MAX;
	volatile uint16_t x150 = 248U;
	static volatile uint8_t x151 = 3U;
	uint16_t x152 = UINT16_MAX;
	volatile int64_t t36 = 80273260857847LL;

	t36 = ((x149%x150)^(x151^x152));

	if (t36 != 65531LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x153 = 228102936U;
	int16_t x155 = INT16_MAX;
	int16_t x156 = INT16_MIN;
	uint32_t t37 = 250402263U;

	t37 = ((x153%x154)^(x155^x156));

	if (t37 != 4294967129U) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x157 = 206;
	static volatile int32_t x158 = INT32_MIN;
	uint8_t x159 = UINT8_MAX;
	int16_t x160 = 1436;
	int32_t t38 = 1;

	t38 = ((x157%x158)^(x159^x160));

	if (t38 != 1453) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x161 = -24811LL;
	uint16_t x162 = 1327U;
	volatile int64_t x163 = -2734175249LL;
	static int8_t x164 = INT8_MIN;
	int64_t t39 = 3LL;

	t39 = ((x161%x162)^(x163^x164));

	if (t39 != -2734176244LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x170 = INT32_MAX;
	uint32_t x172 = UINT32_MAX;
	static volatile uint64_t t40 = 6263286628647039LLU;

	t40 = ((x169%x170)^(x171^x172));

	if (t40 != 18446744069414587483LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x173 = 10U;
	uint16_t x174 = 58U;
	static volatile int16_t x176 = -45;
	int32_t t41 = -97012;

	t41 = ((x173%x174)^(x175^x176));

	if (t41 != -90) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x177 = UINT16_MAX;
	int64_t x178 = INT64_MAX;
	uint16_t x179 = UINT16_MAX;
	int8_t x180 = -1;

	t42 = ((x177%x178)^(x179^x180));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x182 = INT16_MAX;
	static int64_t x183 = 307244581295491931LL;
	uint32_t x184 = 946982U;
	volatile int64_t t43 = -105919004778873LL;

	t43 = ((x181%x182)^(x183^x184));

	if (t43 != -307244581295388675LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x185 = -7;
	int8_t x186 = -2;

	t44 = ((x185%x186)^(x187^x188));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x189 = 1LL;
	uint16_t x190 = 234U;
	static int32_t x191 = 2829945;
	int8_t x192 = INT8_MIN;
	volatile int64_t t45 = 1659964571130725LL;

	t45 = ((x189%x190)^(x191^x192));

	if (t45 != -2829832LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x193 = -43231914390LL;
	volatile int8_t x194 = INT8_MIN;
	uint32_t x195 = 15909936U;
	int32_t x196 = INT32_MIN;
	int64_t t46 = 24281938236430LL;

	t46 = ((x193%x194)^(x195^x196));

	if (t46 != -2163393574LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x197 = 106275379905402238LL;
	int16_t x199 = INT16_MIN;
	int8_t x200 = INT8_MIN;
	static volatile int64_t t47 = 190286860674504467LL;

	t47 = ((x197%x198)^(x199^x200));

	if (t47 != 32640LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x201 = 288U;
	int64_t x202 = INT64_MIN;
	volatile int8_t x203 = -2;
	volatile int64_t t48 = -219461801409LL;

	t48 = ((x201%x202)^(x203^x204));

	if (t48 != -290LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x205 = UINT32_MAX;
	int8_t x206 = INT8_MIN;
	int8_t x207 = INT8_MAX;
	uint16_t x208 = UINT16_MAX;
	uint32_t t49 = 11U;

	t49 = ((x205%x206)^(x207^x208));

	if (t49 != 65535U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x209 = UINT64_MAX;
	int32_t x210 = INT32_MAX;
	int32_t x211 = INT32_MAX;
	int32_t x212 = -2151268;
	static volatile uint64_t t50 = 1712887591LLU;

	t50 = ((x209%x210)^(x211^x212));

	if (t50 != 18446744071564219232LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x213 = INT8_MAX;
	int8_t x216 = INT8_MIN;

	t51 = ((x213%x214)^(x215^x216));

	if (t51 != 18121695418283097977LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x219 = INT8_MAX;
	int16_t x220 = INT16_MIN;
	uint32_t t52 = 2732U;

	t52 = ((x217%x218)^(x219^x220));

	if (t52 != 4294934655U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x221 = -1;
	volatile int16_t x222 = INT16_MAX;
	int64_t x223 = -52190055224417795LL;
	int64_t x224 = INT64_MIN;
	volatile int64_t t53 = -15003576466LL;

	t53 = ((x221%x222)^(x223^x224));

	if (t53 != -9171181981630358014LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x226 = -1LL;
	static int16_t x227 = 406;
	uint8_t x228 = 2U;
	int64_t t54 = -65539769705LL;

	t54 = ((x225%x226)^(x227^x228));

	if (t54 != 404LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x229 = INT32_MIN;
	volatile uint16_t x230 = 7U;
	volatile int8_t x231 = 1;
	int32_t t55 = INT32_MAX;

	t55 = ((x229%x230)^(x231^x232));

	if (t55 != INT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x234 = 5613824LLU;
	int64_t x235 = -151347334924LL;
	volatile int8_t x236 = INT8_MIN;
	volatile uint64_t t56 = 23117LLU;

	t56 = ((x233%x234)^(x235^x236));

	if (t56 != 151347333495LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x237 = 37U;
	uint16_t x238 = UINT16_MAX;
	uint16_t x239 = 3329U;
	volatile uint64_t x240 = 2203342LLU;
	uint64_t t57 = 1087642984965492458LLU;

	t57 = ((x237%x238)^(x239^x240));

	if (t57 != 2200554LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x241 = 7U;
	int32_t x242 = -1;
	int8_t x243 = 17;
	int32_t x244 = INT32_MIN;
	uint32_t t58 = 422U;

	t58 = ((x241%x242)^(x243^x244));

	if (t58 != 2147483670U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x245 = INT32_MIN;
	uint64_t x246 = UINT64_MAX;
	int32_t x247 = INT32_MIN;
	static uint64_t x248 = 18003459LLU;
	volatile uint64_t t59 = 75LLU;

	t59 = ((x245%x246)^(x247^x248));

	if (t59 != 18003459LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x249 = -3;
	volatile int64_t x250 = INT64_MAX;
	uint32_t x251 = 0U;
	static uint16_t x252 = UINT16_MAX;
	static volatile int64_t t60 = -130616458954LL;

	t60 = ((x249%x250)^(x251^x252));

	if (t60 != -65534LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x253 = 42U;
	int32_t x255 = INT32_MIN;
	int32_t x256 = INT32_MIN;
	static int64_t t61 = 105333311337LL;

	t61 = ((x253%x254)^(x255^x256));

	if (t61 != 42LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x257 = INT8_MIN;
	volatile int64_t x258 = INT64_MIN;
	int16_t x259 = INT16_MIN;
	int8_t x260 = -1;
	volatile int64_t t62 = -15802367393LL;

	t62 = ((x257%x258)^(x259^x260));

	if (t62 != -32641LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x261 = -1LL;
	volatile int8_t x262 = 24;
	int16_t x263 = INT16_MAX;
	uint8_t x264 = 2U;
	volatile int64_t t63 = 1LL;

	t63 = ((x261%x262)^(x263^x264));

	if (t63 != -32766LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x265 = 2196016U;
	volatile uint64_t x266 = UINT64_MAX;
	uint32_t x267 = 30969U;
	volatile uint16_t x268 = UINT16_MAX;
	static uint64_t t64 = 6LLU;

	t64 = ((x265%x266)^(x267^x268));

	if (t64 != 2164022LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x269 = 2LLU;
	int8_t x270 = INT8_MIN;
	uint64_t x271 = 12278275LLU;
	static int8_t x272 = INT8_MIN;
	volatile uint64_t t65 = 3947980150552267LLU;

	t65 = ((x269%x270)^(x271^x272));

	if (t65 != 18446744073697273217LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x273 = 1;
	volatile uint16_t x274 = 61U;
	uint64_t x275 = 66LLU;
	volatile uint64_t t66 = 139LLU;

	t66 = ((x273%x274)^(x275^x276));

	if (t66 != 18446744071562068035LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x277 = -78923611LL;

	t67 = ((x277%x278)^(x279^x280));

	if (t67 != 15514LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x282 = INT32_MIN;
	uint8_t x283 = 3U;
	uint64_t x284 = 1LLU;
	volatile uint64_t t68 = 3110867091453LLU;

	t68 = ((x281%x282)^(x283^x284));

	if (t68 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x285 = 3145;
	int64_t x286 = -1LL;
	uint64_t x287 = 277338766819453LLU;
	volatile int8_t x288 = INT8_MIN;

	t69 = ((x285%x286)^(x287^x288));

	if (t69 != 18446466734942732285LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x289 = INT64_MIN;
	uint16_t x290 = UINT16_MAX;
	volatile int8_t x291 = 1;
	int64_t t70 = -28LL;

	t70 = ((x289%x290)^(x291^x292));

	if (t70 != -32730LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x293 = 1883359072132015594LLU;
	int64_t x296 = -1LL;
	uint64_t t71 = 428410084758579203LLU;

	t71 = ((x293%x294)^(x295^x296));

	if (t71 != 1726796028LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x297 = 2491U;
	int64_t x298 = INT64_MAX;
	uint64_t x299 = 3899LLU;
	uint64_t x300 = 6308778LLU;

	t72 = ((x297%x298)^(x299^x300));

	if (t72 != 6309162LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x304 = UINT16_MAX;
	volatile uint64_t t73 = 6561003604968838LLU;

	t73 = ((x301%x302)^(x303^x304));

	if (t73 != 97481LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x307 = -1;
	static uint16_t x308 = UINT16_MAX;
	int32_t t74 = -255202333;

	t74 = ((x305%x306)^(x307^x308));

	if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x309 = 48U;
	uint32_t x310 = 5246305U;
	int32_t x311 = -1;
	int8_t x312 = -11;

	t75 = ((x309%x310)^(x311^x312));

	if (t75 != 58U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x313 = 931282079688641299LLU;
	int32_t x315 = -1;
	static int8_t x316 = INT8_MAX;
	uint64_t t76 = 985460379684070908LLU;

	t76 = ((x313%x314)^(x315^x316));

	if (t76 != 17515461994020910227LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x317 = 38U;
	int8_t x318 = INT8_MIN;
	static uint8_t x319 = UINT8_MAX;
	volatile uint8_t x320 = 0U;
	int32_t t77 = 0;

	t77 = ((x317%x318)^(x319^x320));

	if (t77 != 217) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x321 = INT64_MIN;
	int32_t x322 = INT32_MIN;
	uint16_t x323 = 18675U;
	int64_t x324 = -3105730688078905741LL;

	t78 = ((x321%x322)^(x323^x324));

	if (t78 != -3105730688078924160LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x325 = INT16_MIN;
	static int16_t x327 = -260;
	volatile int16_t x328 = -1;
	volatile int32_t t79 = -437903;

	t79 = ((x325%x326)^(x327^x328));

	if (t79 != 259) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x329 = 351015876193447LLU;
	static uint16_t x330 = 12U;
	volatile int32_t x332 = INT32_MAX;
	uint64_t t80 = 38LLU;

	t80 = ((x329%x330)^(x331^x332));

	if (t80 != 9223372034707292167LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x333 = UINT8_MAX;
	volatile uint8_t x334 = 21U;
	volatile int16_t x336 = INT16_MIN;
	int32_t t81 = 37850;

	t81 = ((x333%x334)^(x335^x336));

	if (t81 != 3) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x337 = INT64_MAX;
	uint16_t x338 = 2U;
	uint16_t x339 = 0U;
	int16_t x340 = -1;
	volatile int64_t t82 = 5062749488LL;

	t82 = ((x337%x338)^(x339^x340));

	if (t82 != -2LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x343 = UINT16_MAX;
	uint32_t x344 = UINT32_MAX;
	volatile uint32_t t83 = 22285U;

	t83 = ((x341%x342)^(x343^x344));

	if (t83 != 4294901788U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x345 = UINT64_MAX;
	int16_t x346 = INT16_MIN;
	int32_t x347 = 1;
	int8_t x348 = INT8_MIN;

	t84 = ((x345%x346)^(x347^x348));

	if (t84 != 18446744073709518974LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x349 = 2;
	int8_t x350 = 62;
	uint16_t x351 = UINT16_MAX;
	static volatile uint32_t x352 = 48U;

	t85 = ((x349%x350)^(x351^x352));

	if (t85 != 65485U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x353 = INT32_MAX;
	volatile uint16_t x354 = 6509U;
	int64_t x355 = INT64_MIN;
	int8_t x356 = INT8_MIN;
	volatile int64_t t86 = 32LL;

	t86 = ((x353%x354)^(x355^x356));

	if (t86 != 9223372036854773918LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x357 = UINT16_MAX;
	static uint16_t x358 = 29U;
	volatile int16_t x359 = 1;
	uint8_t x360 = 2U;
	static int32_t t87 = -399135;

	t87 = ((x357%x358)^(x359^x360));

	if (t87 != 27) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x362 = INT32_MIN;
	int8_t x363 = -3;
	static uint64_t t88 = 6569718439LLU;

	t88 = ((x361%x362)^(x363^x364));

	if (t88 != 18446744071562133501LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x366 = 1770U;
	uint64_t x367 = 45109328750LLU;
	static int8_t x368 = -1;
	volatile uint64_t t89 = 2116323LLU;

	t89 = ((x365%x366)^(x367^x368));

	if (t89 != 18446744028600223462LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x369 = -2689005;
	int32_t x370 = 37124195;
	volatile int16_t x371 = 1;

	t90 = ((x369%x370)^(x371^x372));

	if (t90 != 4291869844U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x373 = INT64_MIN;
	int64_t x374 = -1LL;
	int64_t x375 = -94687161LL;
	static uint8_t x376 = 77U;
	volatile int64_t t91 = 15681107957859307LL;

	t91 = ((x373%x374)^(x375^x376));

	if (t91 != -94687222LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x377 = 3U;
	int64_t x378 = INT64_MIN;
	volatile uint16_t x379 = UINT16_MAX;
	int32_t x380 = -287;
	volatile int64_t t92 = 573LL;

	t92 = ((x377%x378)^(x379^x380));

	if (t92 != -65251LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x381 = INT32_MIN;
	int64_t x382 = INT64_MIN;
	int8_t x383 = INT8_MIN;
	uint16_t x384 = 9342U;
	int64_t t93 = 11752282805263LL;

	t93 = ((x381%x382)^(x383^x384));

	if (t93 != 2147474430LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x385 = 1815;
	static uint64_t x386 = UINT64_MAX;
	int16_t x388 = -30;
	uint64_t t94 = 671618007673806474LLU;

	t94 = ((x385%x386)^(x387^x388));

	if (t94 != 18446744073709543480LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x389 = INT64_MAX;
	int64_t x390 = INT64_MIN;
	volatile int8_t x391 = 4;
	int64_t x392 = 14543LL;
	int64_t t95 = 384LL;

	t95 = ((x389%x390)^(x391^x392));

	if (t95 != 9223372036854761268LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint8_t x393 = 7U;
	static int64_t x394 = INT64_MAX;
	volatile uint64_t x395 = 20929409551457LLU;
	static int64_t x396 = -1LL;
	uint64_t t96 = 368745169558583LLU;

	t96 = ((x393%x394)^(x395^x396));

	if (t96 != 18446723144300000153LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x397 = -903;
	static int16_t x399 = INT16_MAX;
	int16_t x400 = -17;

	t97 = ((x397%x398)^(x399^x400));

	if (t97 != 32370) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x401 = 270U;
	int16_t x402 = INT16_MIN;
	int8_t x403 = 55;
	volatile int64_t x404 = 6060059764716115LL;

	t98 = ((x401%x402)^(x403^x404));

	if (t98 != 6060059764716394LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x405 = INT16_MIN;
	int64_t x406 = INT64_MIN;
	static volatile int64_t t99 = -1124017401750132219LL;

	t99 = ((x405%x406)^(x407^x408));

	if (t99 != -7412178LL) { NG(); } else { ; }
	
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

