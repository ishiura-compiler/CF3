#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = -3;
static volatile int32_t t0 = 2;
int32_t x7 = 330206;
uint64_t t1 = 15500861869LLU;
uint64_t x13 = UINT64_MAX;
static volatile int64_t x24 = -1LL;
int32_t x26 = INT32_MIN;
static uint8_t x35 = 6U;
uint32_t x42 = UINT32_MAX;
int32_t t6 = -237135771;
static volatile int64_t x45 = -1LL;
int8_t x50 = -1;
int8_t x53 = 48;
static volatile int16_t x55 = INT16_MIN;
static int32_t x59 = 796;
uint64_t x60 = 2LLU;
int64_t x65 = -70784873899904063LL;
uint64_t t14 = 213243979617388LLU;
uint8_t x82 = 1U;
uint8_t x83 = UINT8_MAX;
int32_t x85 = -1;
volatile uint32_t x92 = 20U;
volatile int64_t x99 = 5955945LL;
volatile int16_t x113 = 1;
int16_t x120 = INT16_MIN;
int16_t x126 = 714;
static uint16_t x127 = 2034U;
uint64_t x139 = 170108135431LLU;
uint8_t x141 = UINT8_MAX;
int8_t x143 = INT8_MIN;
volatile int32_t t27 = 2782;
uint64_t x151 = 15966862LLU;
int64_t x154 = -1LL;
uint8_t x155 = UINT8_MAX;
static volatile int32_t t30 = -3115;
static uint64_t x173 = 9LLU;
uint32_t x180 = 44495728U;
int16_t x182 = INT16_MAX;
uint64_t x185 = 1439LLU;
uint32_t x187 = 1652U;
int16_t x189 = INT16_MAX;
int32_t x202 = 8468142;
static int8_t x214 = INT8_MAX;
static int32_t t38 = 45;
int32_t x218 = -1;
uint16_t x223 = UINT16_MAX;
uint32_t x224 = 3983038U;
volatile int64_t t41 = -103LL;
int64_t x246 = INT64_MIN;
uint16_t x248 = UINT16_MAX;
static int16_t x257 = -1;
volatile int32_t x258 = -1;
int32_t x260 = INT32_MIN;
uint8_t x263 = 4U;
uint32_t t48 = 24U;
volatile uint64_t x273 = UINT64_MAX;
volatile uint64_t x284 = 494873LLU;
int32_t t53 = 10;
static int16_t x290 = 1891;
volatile uint8_t x302 = UINT8_MAX;
static int32_t t56 = 3360540;
int8_t x305 = INT8_MIN;
int32_t x308 = -1;
volatile int32_t x338 = INT32_MIN;
uint16_t x339 = UINT16_MAX;
int32_t x351 = INT32_MIN;
int32_t t63 = -14269475;
uint64_t x368 = UINT64_MAX;
uint64_t t67 = 426289199743533LLU;
int32_t x386 = INT32_MIN;
volatile uint16_t x395 = 101U;
int32_t x403 = -1;
uint8_t x404 = UINT8_MAX;
uint64_t t74 = 297425411684941LLU;
int8_t x421 = INT8_MAX;
volatile int32_t t75 = -253;
uint32_t x430 = 0U;
volatile uint32_t t76 = 8U;
static uint8_t x435 = UINT8_MAX;
int16_t x444 = INT16_MIN;
int32_t x446 = INT32_MAX;
volatile uint16_t x453 = 1U;
volatile uint16_t x454 = 606U;
int32_t x460 = 1;
static int16_t x463 = -226;
uint32_t t84 = 472U;
uint8_t x477 = UINT8_MAX;
int64_t x479 = INT64_MAX;
volatile int32_t t89 = 7;
uint64_t x486 = 1772847045358520LLU;
uint32_t x487 = 8U;
static uint64_t t90 = 52607169606LLU;
uint64_t x489 = UINT64_MAX;
uint64_t t91 = 82823LLU;
static int64_t x495 = 1140862209933653101LL;
uint16_t x498 = 10U;
static uint32_t x503 = 30413490U;
int32_t x508 = 1;
static int16_t x509 = INT16_MIN;
int8_t x510 = INT8_MIN;
static volatile int32_t t97 = INT32_MAX;
volatile int8_t x525 = INT8_MIN;


void f0(void) {
	uint64_t x2 = UINT64_MAX;
	uint8_t x3 = 1U;
	int32_t x4 = -1;

	t0 = (x1*((x2<=x3)^x4));

	if (t0 != 3) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MIN;
	int8_t x6 = -10;
	uint64_t x8 = 2404926LLU;

	t1 = (x5*((x6<=x7)^x8));

	if (t1 != 18446743994904903680LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x14 = UINT16_MAX;
	int8_t x15 = -4;
	int8_t x16 = -19;
	uint64_t t2 = 0LLU;

	t2 = (x13*((x14<=x15)^x16));

	if (t2 != 19LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x21 = -40330944773LL;
	int16_t x22 = INT16_MAX;
	static int16_t x23 = -1;
	volatile int64_t t3 = 15932393519124006LL;

	t3 = (x21*((x22<=x23)^x24));

	if (t3 != 40330944773LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = INT8_MIN;
	uint8_t x27 = UINT8_MAX;
	static volatile uint32_t x28 = 105U;
	volatile uint32_t t4 = 20537U;

	t4 = (x25*((x26<=x27)^x28));

	if (t4 != 4294953984U) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x33 = -5;
	volatile int64_t x34 = -5728206743492359LL;
	uint32_t x36 = 445385635U;
	static uint32_t t5 = 31U;

	t5 = (x33*((x34<=x35)^x36));

	if (t5 != 2068039126U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x41 = 54U;
	int32_t x43 = -21;
	int8_t x44 = 6;

	t6 = (x41*((x42<=x43)^x44));

	if (t6 != 324) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x46 = INT32_MIN;
	static int64_t x47 = INT64_MIN;
	uint8_t x48 = 0U;
	volatile int64_t t7 = -11912LL;

	t7 = (x45*((x46<=x47)^x48));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x49 = 9U;
	volatile int8_t x51 = INT8_MAX;
	volatile uint16_t x52 = 39U;
	uint32_t t8 = 679590775U;

	t8 = (x49*((x50<=x51)^x52));

	if (t8 != 342U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x54 = INT32_MIN;
	int64_t x56 = -33LL;
	static volatile int64_t t9 = -3LL;

	t9 = (x53*((x54<=x55)^x56));

	if (t9 != -1632LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x57 = 17U;
	int8_t x58 = INT8_MIN;
	uint64_t t10 = 102977LLU;

	t10 = (x57*((x58<=x59)^x60));

	if (t10 != 51LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x61 = INT16_MIN;
	int8_t x62 = INT8_MIN;
	uint16_t x63 = 1U;
	uint16_t x64 = UINT16_MAX;
	volatile int32_t t11 = 381;

	t11 = (x61*((x62<=x63)^x64));

	if (t11 != -2147418112) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x66 = INT32_MIN;
	static int16_t x67 = -1;
	int32_t x68 = -1;
	volatile int64_t t12 = 308791584541799LL;

	t12 = (x65*((x66<=x67)^x68));

	if (t12 != 141569747799808126LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x69 = -1;
	volatile int64_t x70 = INT64_MIN;
	int64_t x71 = INT64_MIN;
	int16_t x72 = 8;
	static volatile int32_t t13 = -660;

	t13 = (x69*((x70<=x71)^x72));

	if (t13 != -9) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x73 = 6780267275057205LLU;
	volatile uint64_t x74 = 0LLU;
	int16_t x75 = 11;
	uint16_t x76 = UINT16_MAX;

	t14 = (x73*((x74<=x75)^x76));

	if (t14 != 1616177834569633686LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x77 = -3969;
	static volatile int32_t x78 = -1;
	uint64_t x79 = 126299113LLU;
	uint64_t x80 = 82764920704588439LLU;
	static uint64_t t15 = 7983LLU;

	t15 = (x77*((x78<=x79)^x80));

	if (t15 != 3547423050260414697LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x81 = UINT32_MAX;
	volatile int16_t x84 = -1;
	uint32_t t16 = 0U;

	t16 = (x81*((x82<=x83)^x84));

	if (t16 != 2U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x86 = UINT8_MAX;
	uint32_t x87 = UINT32_MAX;
	volatile int32_t x88 = INT32_MAX;
	volatile int32_t t17 = -199155607;

	t17 = (x85*((x86<=x87)^x88));

	if (t17 != -2147483646) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint16_t x89 = 5U;
	int64_t x90 = INT64_MIN;
	int64_t x91 = INT64_MIN;
	volatile uint32_t t18 = 1U;

	t18 = (x89*((x90<=x91)^x92));

	if (t18 != 105U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x97 = 1547760LLU;
	uint16_t x98 = 81U;
	int32_t x100 = INT32_MAX;
	volatile uint64_t t19 = 4236713452729361LLU;

	t19 = (x97*((x98<=x99)^x100));

	if (t19 != 3323789287932960LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x101 = 394001U;
	uint8_t x102 = UINT8_MAX;
	int32_t x103 = INT32_MIN;
	uint16_t x104 = UINT16_MAX;
	volatile uint32_t t20 = 352U;

	t20 = (x101*((x102<=x103)^x104));

	if (t20 != 51051759U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x114 = 16U;
	int8_t x115 = INT8_MIN;
	uint16_t x116 = 799U;
	volatile int32_t t21 = 30771793;

	t21 = (x113*((x114<=x115)^x116));

	if (t21 != 799) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x117 = INT8_MIN;
	uint32_t x118 = 141U;
	int16_t x119 = INT16_MAX;
	int32_t t22 = 936089712;

	t22 = (x117*((x118<=x119)^x120));

	if (t22 != 4194176) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x125 = INT16_MAX;
	uint32_t x128 = 1868U;
	volatile uint32_t t23 = 111U;

	t23 = (x125*((x126<=x127)^x128));

	if (t23 != 61241523U) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x129 = -1;
	static int16_t x130 = -1;
	int8_t x131 = INT8_MAX;
	volatile int16_t x132 = INT16_MAX;
	int32_t t24 = -25928814;

	t24 = (x129*((x130<=x131)^x132));

	if (t24 != -32766) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x137 = 746;
	int32_t x138 = 315;
	int8_t x140 = -1;
	static int32_t t25 = -1;

	t25 = (x137*((x138<=x139)^x140));

	if (t25 != -1492) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x142 = UINT8_MAX;
	int64_t x144 = 2143890837780LL;
	volatile int64_t t26 = -6520313082LL;

	t26 = (x141*((x142<=x143)^x144));

	if (t26 != 546692163633900LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x145 = -398;
	static int32_t x146 = -1946653;
	static int8_t x147 = INT8_MAX;
	uint16_t x148 = 10U;

	t27 = (x145*((x146<=x147)^x148));

	if (t27 != -4378) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x149 = INT16_MIN;
	static uint32_t x150 = UINT32_MAX;
	int16_t x152 = -3;
	static int32_t t28 = 101564;

	t28 = (x149*((x150<=x151)^x152));

	if (t28 != 98304) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x153 = 56;
	static volatile int16_t x156 = -1;
	volatile int32_t t29 = 241632;

	t29 = (x153*((x154<=x155)^x156));

	if (t29 != -112) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x169 = UINT8_MAX;
	static int8_t x170 = 1;
	int64_t x171 = 116086353066LL;
	uint8_t x172 = 20U;

	t30 = (x169*((x170<=x171)^x172));

	if (t30 != 5355) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x174 = INT32_MIN;
	int16_t x175 = -1;
	volatile int32_t x176 = 1217;
	volatile uint64_t t31 = 14085779410LLU;

	t31 = (x173*((x174<=x175)^x176));

	if (t31 != 10944LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x177 = UINT32_MAX;
	static int16_t x178 = 1266;
	int32_t x179 = -12465;
	volatile uint32_t t32 = 34462U;

	t32 = (x177*((x178<=x179)^x180));

	if (t32 != 4250471568U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x181 = 11;
	int64_t x183 = 19378635958LL;
	uint8_t x184 = 0U;
	int32_t t33 = 0;

	t33 = (x181*((x182<=x183)^x184));

	if (t33 != 11) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x186 = INT32_MAX;
	int16_t x188 = INT16_MAX;
	uint64_t t34 = 107686LLU;

	t34 = (x185*((x186<=x187)^x188));

	if (t34 != 47151713LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x190 = -1;
	static int8_t x191 = -5;
	uint64_t x192 = UINT64_MAX;
	uint64_t t35 = 22115938925688690LLU;

	t35 = (x189*((x190<=x191)^x192));

	if (t35 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x193 = INT16_MAX;
	uint64_t x194 = UINT64_MAX;
	uint32_t x195 = 139U;
	int8_t x196 = 12;
	int32_t t36 = -23556;

	t36 = (x193*((x194<=x195)^x196));

	if (t36 != 393204) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x201 = -1;
	uint16_t x203 = UINT16_MAX;
	uint64_t x204 = 389148LLU;
	static volatile uint64_t t37 = 3471LLU;

	t37 = (x201*((x202<=x203)^x204));

	if (t37 != 18446744073709162468LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x213 = 208;
	int64_t x215 = INT64_MIN;
	static uint8_t x216 = 14U;

	t38 = (x213*((x214<=x215)^x216));

	if (t38 != 2912) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x217 = 0U;
	uint16_t x219 = 57U;
	int16_t x220 = -1;
	static int32_t t39 = -48863858;

	t39 = (x217*((x218<=x219)^x220));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x221 = 1641733019871793LLU;
	volatile int64_t x222 = 172287481769769838LL;
	uint64_t t40 = 475796816067148LLU;

	t40 = (x221*((x222<=x223)^x224));

	if (t40 != 8937601910925375070LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint8_t x225 = UINT8_MAX;
	volatile int8_t x226 = INT8_MAX;
	int8_t x227 = 1;
	int64_t x228 = -1LL;

	t41 = (x225*((x226<=x227)^x228));

	if (t41 != -255LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x229 = INT8_MAX;
	int64_t x230 = -12593LL;
	static int16_t x231 = -1;
	static int8_t x232 = 4;
	volatile int32_t t42 = 51758;

	t42 = (x229*((x230<=x231)^x232));

	if (t42 != 635) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x237 = -12;
	volatile uint64_t x238 = 1762001390133858LLU;
	static uint64_t x239 = 7421451405096LLU;
	int64_t x240 = 1471LL;
	static volatile int64_t t43 = -1041712548182LL;

	t43 = (x237*((x238<=x239)^x240));

	if (t43 != -17652LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x241 = INT8_MAX;
	int8_t x242 = 0;
	int16_t x243 = INT16_MIN;
	static volatile int16_t x244 = 12482;
	volatile int32_t t44 = 23742890;

	t44 = (x241*((x242<=x243)^x244));

	if (t44 != 1585214) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x245 = UINT32_MAX;
	int8_t x247 = 17;
	volatile uint32_t t45 = 25665U;

	t45 = (x245*((x246<=x247)^x248));

	if (t45 != 4294901762U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x249 = INT8_MIN;
	uint16_t x250 = 14154U;
	volatile uint16_t x251 = 25U;
	uint64_t x252 = UINT64_MAX;
	static volatile uint64_t t46 = 464537700334LLU;

	t46 = (x249*((x250<=x251)^x252));

	if (t46 != 128LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x259 = UINT64_MAX;
	volatile int32_t t47 = INT32_MAX;

	t47 = (x257*((x258<=x259)^x260));

	if (t47 != INT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x261 = 3222U;
	uint64_t x262 = 1504279747043LLU;
	uint32_t x264 = 46801U;

	t48 = (x261*((x262<=x263)^x264));

	if (t48 != 150792822U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x265 = -1;
	static uint16_t x266 = 58U;
	uint8_t x267 = UINT8_MAX;
	uint16_t x268 = UINT16_MAX;
	volatile int32_t t49 = 173959042;

	t49 = (x265*((x266<=x267)^x268));

	if (t49 != -65534) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x274 = INT64_MIN;
	static int64_t x275 = -17440943124558LL;
	uint32_t x276 = 1U;
	volatile uint64_t t50 = 1LLU;

	t50 = (x273*((x274<=x275)^x276));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x277 = 195LLU;
	volatile int8_t x278 = INT8_MIN;
	volatile int32_t x279 = INT32_MAX;
	int32_t x280 = -1;
	uint64_t t51 = 68827749LLU;

	t51 = (x277*((x278<=x279)^x280));

	if (t51 != 18446744073709551226LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x281 = -58;
	uint32_t x282 = 632U;
	uint8_t x283 = 89U;
	volatile uint64_t t52 = 10104208741LLU;

	t52 = (x281*((x282<=x283)^x284));

	if (t52 != 18446744073680848982LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x285 = UINT8_MAX;
	uint8_t x286 = 1U;
	static uint32_t x287 = UINT32_MAX;
	volatile int16_t x288 = -8164;

	t53 = (x285*((x286<=x287)^x288));

	if (t53 != -2081565) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x289 = 95U;
	uint8_t x291 = UINT8_MAX;
	int16_t x292 = INT16_MAX;
	uint32_t t54 = 12U;

	t54 = (x289*((x290<=x291)^x292));

	if (t54 != 3112865U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x293 = 2450LLU;
	int16_t x294 = 1;
	uint8_t x295 = UINT8_MAX;
	int32_t x296 = INT32_MAX;
	uint64_t t55 = 3855648179696977851LLU;

	t55 = (x293*((x294<=x295)^x296));

	if (t55 != 5261334932700LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x301 = -1;
	volatile int32_t x303 = -1;
	static uint8_t x304 = 82U;

	t56 = (x301*((x302<=x303)^x304));

	if (t56 != -82) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x306 = 0LL;
	int64_t x307 = INT64_MIN;
	volatile int32_t t57 = 8107;

	t57 = (x305*((x306<=x307)^x308));

	if (t57 != 128) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x317 = 544079752921LLU;
	int16_t x318 = INT16_MIN;
	uint16_t x319 = 487U;
	uint16_t x320 = UINT16_MAX;
	volatile uint64_t t58 = 20300079506867498LLU;

	t58 = (x317*((x318<=x319)^x320));

	if (t58 != 35655722527924814LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x325 = 1507863716835LLU;
	int64_t x326 = INT64_MIN;
	static volatile int8_t x327 = INT8_MIN;
	static volatile uint64_t x328 = 23322059LLU;
	volatile uint64_t t59 = 251LLU;

	t59 = (x325*((x326<=x327)^x328));

	if (t59 != 16719740986411894814LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x337 = UINT16_MAX;
	uint64_t x340 = 20551LLU;
	volatile uint64_t t60 = 545904478023318LLU;

	t60 = (x337*((x338<=x339)^x340));

	if (t60 != 1346744250LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x341 = 147LLU;
	static volatile int64_t x342 = INT64_MAX;
	volatile int8_t x343 = INT8_MAX;
	int16_t x344 = 917;
	uint64_t t61 = 5534LLU;

	t61 = (x341*((x342<=x343)^x344));

	if (t61 != 134799LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint16_t x345 = 14U;
	volatile uint16_t x346 = 5126U;
	uint64_t x347 = 19064729500868LLU;
	uint32_t x348 = 417540463U;
	uint32_t t62 = 237083U;

	t62 = (x345*((x346<=x347)^x348));

	if (t62 != 1550599172U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x349 = -1;
	static uint16_t x350 = UINT16_MAX;
	volatile int8_t x352 = INT8_MIN;

	t63 = (x349*((x350<=x351)^x352));

	if (t63 != 128) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x353 = 15399587326LLU;
	static int32_t x354 = 19568129;
	static uint64_t x355 = UINT64_MAX;
	static int64_t x356 = INT64_MIN;
	uint64_t t64 = 274827577643250LLU;

	t64 = (x353*((x354<=x355)^x356));

	if (t64 != 15399587326LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x357 = -1;
	volatile int64_t x358 = INT64_MIN;
	int8_t x359 = -1;
	uint32_t x360 = 875U;
	static uint32_t t65 = 128212723U;

	t65 = (x357*((x358<=x359)^x360));

	if (t65 != 4294966422U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x361 = UINT32_MAX;
	uint16_t x362 = UINT16_MAX;
	uint64_t x363 = 35169571874LLU;
	volatile int8_t x364 = INT8_MIN;
	uint32_t t66 = 143363811U;

	t66 = (x361*((x362<=x363)^x364));

	if (t66 != 127U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x365 = INT64_MIN;
	int8_t x366 = 2;
	volatile uint32_t x367 = 1840442U;

	t67 = (x365*((x366<=x367)^x368));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x373 = 23U;
	static int16_t x374 = INT16_MIN;
	int64_t x375 = 0LL;
	uint64_t x376 = 70023831457319LLU;
	static uint64_t t68 = 37228LLU;

	t68 = (x373*((x374<=x375)^x376));

	if (t68 != 1610548123518314LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x377 = 8812714U;
	int32_t x378 = -1;
	static int16_t x379 = INT16_MIN;
	volatile int64_t x380 = -125LL;
	volatile int64_t t69 = -1301LL;

	t69 = (x377*((x378<=x379)^x380));

	if (t69 != -1101589250LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x385 = UINT64_MAX;
	int16_t x387 = INT16_MIN;
	static int8_t x388 = INT8_MIN;
	volatile uint64_t t70 = 17396083LLU;

	t70 = (x385*((x386<=x387)^x388));

	if (t70 != 127LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x389 = -1;
	static volatile int64_t x390 = 22597917145099LL;
	uint32_t x391 = 812392838U;
	uint64_t x392 = 128721LLU;
	volatile uint64_t t71 = 217649271781622274LLU;

	t71 = (x389*((x390<=x391)^x392));

	if (t71 != 18446744073709422895LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x393 = INT8_MIN;
	int32_t x394 = INT32_MAX;
	static int8_t x396 = INT8_MAX;
	int32_t t72 = -5340348;

	t72 = (x393*((x394<=x395)^x396));

	if (t72 != -16256) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x397 = INT8_MIN;
	volatile int16_t x398 = 4726;
	static uint32_t x399 = UINT32_MAX;
	uint64_t x400 = 823587688583952LLU;
	uint64_t t73 = 6958372LLU;

	t73 = (x397*((x398<=x399)^x400));

	if (t73 != 18341324849570805632LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x401 = 213581891600622787LLU;
	uint16_t x402 = 71U;

	t74 = (x401*((x402<=x403)^x404));

	if (t74 != 17569894210739707453LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x422 = -1;
	int16_t x423 = INT16_MAX;
	volatile uint8_t x424 = 36U;

	t75 = (x421*((x422<=x423)^x424));

	if (t75 != 4699) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x429 = 5677;
	volatile int8_t x431 = INT8_MIN;
	uint32_t x432 = UINT32_MAX;

	t76 = (x429*((x430<=x431)^x432));

	if (t76 != 4294955942U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x433 = 47U;
	int16_t x434 = INT16_MAX;
	static volatile uint64_t x436 = UINT64_MAX;
	volatile uint64_t t77 = 61825974438230LLU;

	t77 = (x433*((x434<=x435)^x436));

	if (t77 != 18446744073709551569LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x437 = 2U;
	volatile int16_t x438 = INT16_MIN;
	int32_t x439 = -1;
	static int8_t x440 = INT8_MIN;
	volatile int32_t t78 = -115435;

	t78 = (x437*((x438<=x439)^x440));

	if (t78 != -254) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x441 = 0;
	static int8_t x442 = -1;
	static int8_t x443 = -55;
	static int32_t t79 = 5413620;

	t79 = (x441*((x442<=x443)^x444));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x445 = INT16_MIN;
	static uint64_t x447 = 12LLU;
	volatile int32_t x448 = 31016;
	int32_t t80 = -73937061;

	t80 = (x445*((x446<=x447)^x448));

	if (t80 != -1016332288) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x449 = 475961U;
	int16_t x450 = INT16_MIN;
	volatile uint8_t x451 = UINT8_MAX;
	uint32_t x452 = UINT32_MAX;
	volatile uint32_t t81 = 8911691U;

	t81 = (x449*((x450<=x451)^x452));

	if (t81 != 4294015374U) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x455 = UINT16_MAX;
	static int8_t x456 = -1;
	int32_t t82 = 308206460;

	t82 = (x453*((x454<=x455)^x456));

	if (t82 != -2) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x457 = -1;
	int16_t x458 = -1;
	volatile int8_t x459 = INT8_MIN;
	int32_t t83 = 112077;

	t83 = (x457*((x458<=x459)^x460));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x461 = 1U;
	int8_t x462 = -1;
	uint32_t x464 = 113U;

	t84 = (x461*((x462<=x463)^x464));

	if (t84 != 113U) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x465 = UINT8_MAX;
	volatile int32_t x466 = INT32_MIN;
	volatile int32_t x467 = -1;
	static uint64_t x468 = 846614604060781LLU;
	volatile uint64_t t85 = 43915LLU;

	t85 = (x465*((x466<=x467)^x468));

	if (t85 != 215886724035498900LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x469 = -20;
	volatile int64_t x470 = INT64_MIN;
	int32_t x471 = -1;
	int32_t x472 = 0;
	static volatile int32_t t86 = -2;

	t86 = (x469*((x470<=x471)^x472));

	if (t86 != -20) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x473 = -1LL;
	static volatile uint16_t x474 = UINT16_MAX;
	volatile uint8_t x475 = 3U;
	uint32_t x476 = UINT32_MAX;
	volatile int64_t t87 = -49141580444010LL;

	t87 = (x473*((x474<=x475)^x476));

	if (t87 != -4294967295LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x478 = INT64_MAX;
	int16_t x480 = INT16_MIN;
	volatile int32_t t88 = 124;

	t88 = (x477*((x478<=x479)^x480));

	if (t88 != -8355585) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x481 = -59;
	uint16_t x482 = UINT16_MAX;
	int64_t x483 = -1LL;
	volatile int8_t x484 = -1;

	t89 = (x481*((x482<=x483)^x484));

	if (t89 != 59) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x485 = 448709616643LL;
	volatile uint64_t x488 = UINT64_MAX;

	t90 = (x485*((x486<=x487)^x488));

	if (t90 != 18446743624999934973LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x490 = INT16_MIN;
	uint8_t x491 = UINT8_MAX;
	uint16_t x492 = UINT16_MAX;

	t91 = (x489*((x490<=x491)^x492));

	if (t91 != 18446744073709486082LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x493 = -1;
	int32_t x494 = -1;
	int64_t x496 = -954708555LL;
	int64_t t92 = -45202997420LL;

	t92 = (x493*((x494<=x495)^x496));

	if (t92 != 954708556LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x497 = -1;
	static int8_t x499 = -1;
	uint64_t x500 = 49120919184989664LLU;
	volatile uint64_t t93 = 61015527159LLU;

	t93 = (x497*((x498<=x499)^x500));

	if (t93 != 18397623154524561952LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x501 = 113651U;
	int32_t x502 = INT32_MAX;
	static int8_t x504 = INT8_MIN;
	static volatile uint32_t t94 = 12U;

	t94 = (x501*((x502<=x503)^x504));

	if (t94 != 4280419968U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x505 = INT64_MIN;
	uint32_t x506 = 1503U;
	uint16_t x507 = 175U;
	volatile int64_t t95 = INT64_MIN;

	t95 = (x505*((x506<=x507)^x508));

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x511 = INT8_MIN;
	int16_t x512 = INT16_MIN;
	int32_t t96 = -350576;

	t96 = (x509*((x510<=x511)^x512));

	if (t96 != 1073709056) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x513 = -1;
	static int64_t x514 = -1LL;
	int8_t x515 = -1;
	static int32_t x516 = INT32_MIN;

	t97 = (x513*((x514<=x515)^x516));

	if (t97 != INT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x526 = -3823765489859535LL;
	int8_t x527 = 49;
	uint32_t x528 = 1229U;
	static uint32_t t98 = 131666U;

	t98 = (x525*((x526<=x527)^x528));

	if (t98 != 4294810112U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x533 = -9;
	int8_t x534 = INT8_MAX;
	uint32_t x535 = 1U;
	int8_t x536 = -1;
	static int32_t t99 = -6050;

	t99 = (x533*((x534<=x535)^x536));

	if (t99 != 9) { NG(); } else { ; }
	
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

