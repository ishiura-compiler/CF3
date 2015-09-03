#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MAX;
int16_t x3 = 29;
static int32_t t0 = -2107;
uint8_t x11 = 1U;
volatile uint16_t x13 = 23U;
uint8_t x16 = 10U;
volatile int8_t x18 = -53;
volatile int64_t x22 = 0LL;
static int8_t x25 = INT8_MAX;
volatile int64_t t6 = -1272556868016605LL;
int64_t x30 = INT64_MIN;
int32_t x32 = INT32_MIN;
static uint8_t x35 = UINT8_MAX;
static volatile int32_t x36 = 29966064;
uint32_t x41 = 2U;
uint16_t x46 = 18U;
volatile uint32_t x47 = UINT32_MAX;
int8_t x48 = INT8_MAX;
volatile uint8_t x62 = 57U;
int32_t x66 = -1;
volatile int64_t t17 = -48006LL;
static volatile int8_t x81 = -1;
uint64_t t18 = 786077720LLU;
int64_t x90 = -1LL;
volatile int64_t x96 = INT64_MIN;
uint64_t x97 = 711759507LLU;
int32_t x99 = INT32_MIN;
volatile uint64_t t23 = 222178408601LLU;
static uint64_t t24 = 28LLU;
uint16_t x109 = UINT16_MAX;
int16_t x110 = -1;
uint8_t x112 = 30U;
static int64_t t25 = 206332686549LL;
int64_t x122 = -1LL;
int16_t x128 = INT16_MAX;
int8_t x130 = INT8_MIN;
int32_t t30 = -12;
int32_t x135 = INT32_MIN;
uint8_t x138 = 4U;
static volatile int64_t x142 = INT64_MIN;
int64_t x144 = INT64_MIN;
int16_t x147 = -1;
int32_t x150 = INT32_MAX;
volatile uint64_t t35 = 13947205150920LLU;
static int64_t x155 = 3627024742933LL;
volatile uint32_t x158 = UINT32_MAX;
static int32_t x177 = INT32_MIN;
int8_t x195 = 0;
int32_t x199 = -1;
uint8_t x207 = 6U;
static volatile int64_t t49 = -194647654982LL;
int32_t x217 = -17;
static int8_t x226 = -17;
volatile int8_t x227 = 11;
volatile int32_t x228 = -1;
volatile int32_t t52 = -1943;
int32_t x229 = -11485;
uint64_t x232 = 266428115284396LLU;
int32_t x241 = -1598;
uint64_t x244 = 824LLU;
int32_t t57 = -44333;
int64_t t59 = 2064689506LL;
int8_t x257 = -19;
static volatile int8_t x258 = INT8_MIN;
int64_t x260 = -2804545759642677LL;
int32_t x261 = INT32_MAX;
int64_t x263 = INT64_MAX;
uint16_t x264 = 5U;
static int64_t x269 = 2054710LL;
uint8_t x278 = 74U;
static volatile uint32_t x284 = 2175865U;
int8_t x289 = -1;
int16_t x293 = -1;
static int64_t x296 = INT64_MIN;
int64_t x304 = INT64_MIN;
uint16_t x305 = 1U;
int32_t x307 = INT32_MIN;
static uint64_t x309 = UINT64_MAX;
volatile uint16_t x313 = UINT16_MAX;
int64_t t75 = -331252379580LL;
int32_t x322 = INT32_MIN;
uint64_t t76 = UINT64_MAX;
uint16_t x332 = 1U;
uint32_t x337 = 41431669U;
static volatile uint64_t x357 = 220LLU;
volatile int64_t x358 = -755LL;
volatile int8_t x363 = INT8_MAX;
int16_t x364 = INT16_MAX;
int32_t t84 = 1083536;
int8_t x371 = INT8_MIN;
uint32_t x374 = UINT32_MAX;
static int64_t x377 = INT64_MIN;
static uint16_t x387 = 3563U;
uint64_t x388 = UINT64_MAX;
static uint64_t t89 = 80396LLU;
int32_t x390 = -8565301;
int64_t t91 = -669539074894353271LL;
uint16_t x408 = UINT16_MAX;
int64_t x413 = 3340936357843307LL;
volatile int16_t x418 = 0;
int32_t x422 = -35;
uint16_t x424 = UINT16_MAX;
int64_t x427 = -1LL;
int64_t t98 = -15018153372LL;
uint32_t x432 = 59549728U;
volatile uint32_t t99 = 365718378U;


void f0(void) {
	int32_t x2 = -1;
	int8_t x4 = -1;

	t0 = (x1+((x2|x3)^x4));

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = 18642702906225433LLU;
	int64_t x6 = 49052867541813LL;
	static uint32_t x7 = 131796U;
	uint32_t x8 = 46255772U;
	static volatile uint64_t t1 = 7512351351043227LLU;

	t1 = (x5+((x6|x7)^x8));

	if (t1 != 18691755736066178LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -6;
	static uint32_t x10 = UINT32_MAX;
	int32_t x12 = INT32_MIN;
	volatile uint32_t t2 = 1U;

	t2 = (x9+((x10|x11)^x12));

	if (t2 != 2147483641U) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x14 = UINT64_MAX;
	volatile int32_t x15 = INT32_MAX;
	volatile uint64_t t3 = 76967109174552276LLU;

	t3 = (x13+((x14|x15)^x16));

	if (t3 != 12LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 22732977U;
	uint8_t x19 = 120U;
	int64_t x20 = -1LL;
	int64_t t4 = 246061304463LL;

	t4 = (x17+((x18|x19)^x20));

	if (t4 != 22732981LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	uint64_t x23 = 2311705377529822LLU;
	int64_t x24 = INT64_MIN;
	uint64_t t5 = 14247413371255691LLU;

	t5 = (x21+((x22|x23)^x24));

	if (t5 != 9225683742232305502LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x26 = 2U;
	uint16_t x27 = UINT16_MAX;
	int64_t x28 = -1LL;

	t6 = (x25+((x26|x27)^x28));

	if (t6 != -65409LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -536236534;
	int32_t x31 = INT32_MIN;
	static int64_t t7 = -2470216027266517056LL;

	t7 = (x29+((x30|x31)^x32));

	if (t7 != -536236534LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -6;
	volatile int16_t x34 = -1;
	int32_t t8 = 76026;

	t8 = (x33+((x34|x35)^x36));

	if (t8 != -29966071) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = -1LL;
	int8_t x38 = 0;
	int8_t x39 = 0;
	int16_t x40 = INT16_MIN;
	volatile int64_t t9 = -3926079276982665LL;

	t9 = (x37+((x38|x39)^x40));

	if (t9 != -32769LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x42 = 8095U;
	int8_t x43 = -1;
	static int32_t x44 = -25;
	uint32_t t10 = 2135247482U;

	t10 = (x41+((x42|x43)^x44));

	if (t10 != 26U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 2U;
	uint32_t t11 = 277623U;

	t11 = (x45+((x46|x47)^x48));

	if (t11 != 4294967170U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = INT8_MAX;
	int64_t x54 = INT64_MIN;
	int8_t x55 = INT8_MIN;
	int64_t x56 = INT64_MAX;
	volatile int64_t t12 = -417LL;

	t12 = (x53+((x54|x55)^x56));

	if (t12 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = -2;
	int16_t x58 = -1;
	uint16_t x59 = 222U;
	volatile int16_t x60 = 11;
	static volatile int32_t t13 = -8740;

	t13 = (x57+((x58|x59)^x60));

	if (t13 != -14) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = 7;
	int8_t x63 = INT8_MIN;
	int32_t x64 = INT32_MIN;
	int32_t t14 = -65277682;

	t14 = (x61+((x62|x63)^x64));

	if (t14 != 2147483584) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = 1U;
	volatile int8_t x67 = INT8_MIN;
	static int8_t x68 = -1;
	uint32_t t15 = 4191U;

	t15 = (x65+((x66|x67)^x68));

	if (t15 != 1U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x69 = UINT32_MAX;
	static int16_t x70 = 224;
	int64_t x71 = -1LL;
	static int8_t x72 = INT8_MAX;
	int64_t t16 = 2611522328LL;

	t16 = (x69+((x70|x71)^x72));

	if (t16 != 4294967167LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = -31;
	static int64_t x74 = INT64_MAX;
	uint8_t x75 = 8U;
	uint8_t x76 = UINT8_MAX;

	t17 = (x73+((x74|x75)^x76));

	if (t17 != 9223372036854775521LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x82 = 101178247LLU;
	static uint16_t x83 = 46U;
	uint16_t x84 = UINT16_MAX;

	t18 = (x81+((x82|x83)^x84));

	if (t18 != 101131343LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x85 = 13;
	static int16_t x86 = INT16_MIN;
	uint32_t x87 = 28395U;
	int8_t x88 = -1;
	uint32_t t19 = 262454U;

	t19 = (x85+((x86|x87)^x88));

	if (t19 != 4385U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = INT8_MIN;
	static volatile int32_t x91 = 160889;
	uint32_t x92 = 1523U;
	volatile int64_t t20 = 60450LL;

	t20 = (x89+((x90|x91)^x92));

	if (t20 != -1652LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x93 = 28U;
	uint32_t x94 = 66373U;
	int8_t x95 = -1;
	static volatile int64_t t21 = -1084819291664LL;

	t21 = (x93+((x94|x95)^x96));

	if (t21 != -9223372032559808485LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x98 = UINT64_MAX;
	int8_t x100 = -1;
	static uint64_t t22 = 687498122500LLU;

	t22 = (x97+((x98|x99)^x100));

	if (t22 != 711759507LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = 414LL;
	volatile uint64_t x102 = UINT64_MAX;
	int32_t x103 = INT32_MAX;
	int8_t x104 = INT8_MIN;

	t23 = (x101+((x102|x103)^x104));

	if (t23 != 541LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x105 = UINT64_MAX;
	static volatile int8_t x106 = INT8_MAX;
	static uint32_t x107 = UINT32_MAX;
	int32_t x108 = 235;

	t24 = (x105+((x106|x107)^x108));

	if (t24 != 4294967059LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x111 = 5381LL;

	t25 = (x109+((x110|x111)^x112));

	if (t25 != 65504LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x113 = 121LL;
	uint64_t x114 = 85646486270LLU;
	volatile int8_t x115 = 3;
	static int16_t x116 = INT16_MAX;
	uint64_t t26 = 4LLU;

	t26 = (x113+((x114|x115)^x116));

	if (t26 != 85646497145LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = 140LL;
	int8_t x118 = INT8_MAX;
	uint32_t x119 = UINT32_MAX;
	int64_t x120 = INT64_MIN;
	volatile int64_t t27 = 16862231LL;

	t27 = (x117+((x118|x119)^x120));

	if (t27 != -9223372032559808373LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x121 = -367476057;
	static uint64_t x123 = 122857363812016LLU;
	int16_t x124 = INT16_MIN;
	uint64_t t28 = 890113251565706LLU;

	t28 = (x121+((x122|x123)^x124));

	if (t28 != 18446744073342108326LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x125 = -5884453LL;
	int32_t x126 = INT32_MIN;
	uint16_t x127 = 665U;
	volatile int64_t t29 = 7LL;

	t29 = (x125+((x126|x127)^x128));

	if (t29 != -2153335999LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = INT8_MIN;
	static int8_t x131 = -1;
	int16_t x132 = 3;

	t30 = (x129+((x130|x131)^x132));

	if (t30 != -132) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x133 = -1;
	int64_t x134 = -497LL;
	int64_t x136 = -1LL;
	volatile int64_t t31 = -2159988637294478827LL;

	t31 = (x133+((x134|x135)^x136));

	if (t31 != 495LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x137 = INT16_MAX;
	uint32_t x139 = UINT32_MAX;
	static int16_t x140 = 29;
	static uint32_t t32 = 12655467U;

	t32 = (x137+((x138|x139)^x140));

	if (t32 != 32737U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x141 = 7;
	int32_t x143 = -123436;
	volatile int64_t t33 = 4250474788372801873LL;

	t33 = (x141+((x142|x143)^x144));

	if (t33 != 9223372036854652379LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = INT32_MIN;
	volatile uint8_t x146 = UINT8_MAX;
	int64_t x148 = -1LL;
	volatile int64_t t34 = -10361098LL;

	t34 = (x145+((x146|x147)^x148));

	if (t34 != -2147483648LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x149 = 975220965LLU;
	static int64_t x151 = INT64_MAX;
	int16_t x152 = INT16_MIN;

	t35 = (x149+((x150|x151)^x152));

	if (t35 != 9223372037830029540LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x153 = INT64_MAX;
	int32_t x154 = INT32_MIN;
	uint64_t x156 = 181707783719275230LLU;
	volatile uint64_t t36 = 7836032952341336LLU;

	t36 = (x153+((x154|x155)^x156));

	if (t36 != 9041664253194907850LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x157 = 4004535234914LL;
	uint8_t x159 = 37U;
	int16_t x160 = INT16_MAX;
	int64_t t37 = 46431862LL;

	t37 = (x157+((x158|x159)^x160));

	if (t37 != 4008830169442LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x161 = 16U;
	int32_t x162 = 239;
	int64_t x163 = -1LL;
	static int32_t x164 = 456;
	volatile int64_t t38 = 1242573321262610743LL;

	t38 = (x161+((x162|x163)^x164));

	if (t38 != -441LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x169 = UINT16_MAX;
	uint32_t x170 = 7763315U;
	uint64_t x171 = UINT64_MAX;
	int8_t x172 = INT8_MIN;
	volatile uint64_t t39 = 197LLU;

	t39 = (x169+((x170|x171)^x172));

	if (t39 != 65662LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x173 = INT64_MIN;
	int8_t x174 = -1;
	static uint64_t x175 = 55381095958982636LLU;
	static int32_t x176 = -9354973;
	volatile uint64_t t40 = 2547LLU;

	t40 = (x173+((x174|x175)^x176));

	if (t40 != 9223372036864130780LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x178 = -284346156LL;
	static int8_t x179 = -1;
	uint32_t x180 = UINT32_MAX;
	int64_t t41 = -360355995830LL;

	t41 = (x177+((x178|x179)^x180));

	if (t41 != -6442450944LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x181 = INT64_MIN;
	static int16_t x182 = -1;
	volatile int16_t x183 = INT16_MAX;
	int8_t x184 = INT8_MIN;
	volatile int64_t t42 = -51996LL;

	t42 = (x181+((x182|x183)^x184));

	if (t42 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int64_t x185 = 397LL;
	volatile int16_t x186 = -69;
	volatile int64_t x187 = -1LL;
	volatile int16_t x188 = INT16_MIN;
	volatile int64_t t43 = -5699613358222470LL;

	t43 = (x185+((x186|x187)^x188));

	if (t43 != 33164LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x189 = 12986079689632LLU;
	static int32_t x190 = -3;
	uint8_t x191 = UINT8_MAX;
	static uint16_t x192 = UINT16_MAX;
	uint64_t t44 = 613844LLU;

	t44 = (x189+((x190|x191)^x192));

	if (t44 != 12986079624096LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x193 = -1;
	int16_t x194 = INT16_MAX;
	int16_t x196 = INT16_MIN;
	volatile int32_t t45 = -118099487;

	t45 = (x193+((x194|x195)^x196));

	if (t45 != -2) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x197 = 646109374280LLU;
	int32_t x198 = -237972;
	int16_t x200 = INT16_MAX;
	uint64_t t46 = 271860963354LLU;

	t46 = (x197+((x198|x199)^x200));

	if (t46 != 646109341512LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x201 = 111669238;
	static volatile int64_t x202 = INT64_MAX;
	int16_t x203 = INT16_MIN;
	int16_t x204 = INT16_MAX;
	volatile int64_t t47 = 3919LL;

	t47 = (x201+((x202|x203)^x204));

	if (t47 != 111636470LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x205 = 7;
	int16_t x206 = -29;
	volatile int16_t x208 = INT16_MIN;
	volatile int32_t t48 = 9;

	t48 = (x205+((x206|x207)^x208));

	if (t48 != 32750) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x209 = 197LL;
	int64_t x210 = 252961375532447LL;
	int16_t x211 = INT16_MIN;
	int8_t x212 = -4;

	t49 = (x209+((x210|x211)^x212));

	if (t49 != 19240LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x218 = INT16_MIN;
	int32_t x219 = INT32_MAX;
	uint64_t x220 = UINT64_MAX;
	volatile uint64_t t50 = 5094022LLU;

	t50 = (x217+((x218|x219)^x220));

	if (t50 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x221 = -16LL;
	int16_t x222 = 10;
	static int8_t x223 = INT8_MIN;
	int16_t x224 = INT16_MIN;
	static int64_t t51 = 5080221647621049LL;

	t51 = (x221+((x222|x223)^x224));

	if (t51 != 32634LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x225 = -9;

	t52 = (x225+((x226|x227)^x228));

	if (t52 != 7) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x230 = -1;
	volatile int8_t x231 = -1;
	volatile uint64_t t53 = 486574614LLU;

	t53 = (x229+((x230|x231)^x232));

	if (t53 != 18446477645594255734LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x233 = 4U;
	int16_t x234 = INT16_MIN;
	volatile uint32_t x235 = 12462U;
	uint32_t x236 = UINT32_MAX;
	static volatile uint32_t t54 = 171410U;

	t54 = (x233+((x234|x235)^x236));

	if (t54 != 20309U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x237 = 1;
	int8_t x238 = -1;
	volatile int64_t x239 = 29879425335LL;
	volatile uint16_t x240 = UINT16_MAX;
	static volatile int64_t t55 = 262542341233LL;

	t55 = (x237+((x238|x239)^x240));

	if (t55 != -65535LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x242 = INT64_MIN;
	static int32_t x243 = INT32_MIN;
	static uint64_t t56 = 78LLU;

	t56 = (x241+((x242|x243)^x244));

	if (t56 != 18446744071562067194LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x245 = 121U;
	uint16_t x246 = 418U;
	uint8_t x247 = 3U;
	int16_t x248 = INT16_MIN;

	t57 = (x245+((x246|x247)^x248));

	if (t57 != -32228) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x249 = INT64_MAX;
	static uint64_t x250 = 1LLU;
	int64_t x251 = INT64_MIN;
	static int8_t x252 = -4;
	uint64_t t58 = 257374116956422LLU;

	t58 = (x249+((x250|x251)^x252));

	if (t58 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x253 = 371U;
	volatile int32_t x254 = INT32_MAX;
	int64_t x255 = INT64_MAX;
	int16_t x256 = -1479;

	t59 = (x253+((x254|x255)^x256));

	if (t59 != -9223372036854773959LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x259 = INT32_MIN;
	volatile int64_t t60 = -6LL;

	t60 = (x257+((x258|x259)^x260));

	if (t60 != 2804545759642680LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x262 = -1;
	volatile int64_t t61 = -164393LL;

	t61 = (x261+((x262|x263)^x264));

	if (t61 != 2147483641LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x265 = 1805LL;
	int64_t x266 = -1LL;
	uint16_t x267 = 6873U;
	uint8_t x268 = UINT8_MAX;
	volatile int64_t t62 = 16363909892188LL;

	t62 = (x265+((x266|x267)^x268));

	if (t62 != 1549LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x270 = INT8_MAX;
	int64_t x271 = 17392804773898LL;
	int8_t x272 = INT8_MAX;
	static int64_t t63 = -2120418402LL;

	t63 = (x269+((x270|x271)^x272));

	if (t63 != 17392806828598LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x273 = -1;
	static int64_t x274 = INT64_MIN;
	int8_t x275 = INT8_MIN;
	uint32_t x276 = 0U;
	volatile int64_t t64 = -527397977100LL;

	t64 = (x273+((x274|x275)^x276));

	if (t64 != -129LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x277 = 2U;
	volatile uint32_t x279 = UINT32_MAX;
	int64_t x280 = -1LL;
	volatile int64_t t65 = -132272609928090LL;

	t65 = (x277+((x278|x279)^x280));

	if (t65 != -4294967294LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x281 = -1039589042;
	int32_t x282 = -1;
	int8_t x283 = INT8_MIN;
	uint32_t t66 = 156U;

	t66 = (x281+((x282|x283)^x284));

	if (t66 != 3253202388U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x285 = 12895U;
	volatile int8_t x286 = 0;
	uint16_t x287 = 4068U;
	int32_t x288 = INT32_MIN;
	volatile int32_t t67 = -63;

	t67 = (x285+((x286|x287)^x288));

	if (t67 != -2147466685) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x290 = 0;
	int8_t x291 = INT8_MIN;
	volatile int16_t x292 = INT16_MIN;
	volatile int32_t t68 = 169;

	t68 = (x289+((x290|x291)^x292));

	if (t68 != 32639) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x294 = -1LL;
	uint64_t x295 = 18279LLU;
	uint64_t t69 = 923494825383LLU;

	t69 = (x293+((x294|x295)^x296));

	if (t69 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x297 = 105U;
	int32_t x298 = 1217527;
	uint8_t x299 = 0U;
	int64_t x300 = 247LL;
	volatile int64_t t70 = -12788644LL;

	t70 = (x297+((x298|x299)^x300));

	if (t70 != 1217385LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x301 = -50;
	int64_t x302 = INT64_MIN;
	volatile int16_t x303 = INT16_MIN;
	int64_t t71 = -75207LL;

	t71 = (x301+((x302|x303)^x304));

	if (t71 != 9223372036854742990LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x306 = INT16_MIN;
	static int16_t x308 = INT16_MAX;
	volatile int32_t t72 = -3356;

	t72 = (x305+((x306|x307)^x308));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x310 = INT32_MAX;
	int32_t x311 = INT32_MAX;
	int64_t x312 = INT64_MIN;
	volatile uint64_t t73 = 154LLU;

	t73 = (x309+((x310|x311)^x312));

	if (t73 != 9223372039002259454LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x314 = INT8_MIN;
	static volatile int16_t x315 = -1;
	int8_t x316 = -5;
	int32_t t74 = -4;

	t74 = (x313+((x314|x315)^x316));

	if (t74 != 65539) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x317 = 7U;
	int64_t x318 = -9966643604LL;
	uint32_t x319 = 258757998U;
	uint32_t x320 = 2U;

	t75 = (x317+((x318|x319)^x320));

	if (t75 != -9932286093LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x321 = -1;
	static int64_t x323 = -1LL;
	uint64_t x324 = UINT64_MAX;

	t76 = (x321+((x322|x323)^x324));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x329 = 3028U;
	int16_t x330 = INT16_MAX;
	int16_t x331 = -29;
	volatile int32_t t77 = 0;

	t77 = (x329+((x330|x331)^x332));

	if (t77 != 3026) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x333 = UINT8_MAX;
	int8_t x334 = 1;
	int32_t x335 = INT32_MIN;
	volatile uint64_t x336 = 14021658LLU;
	volatile uint64_t t78 = 761LLU;

	t78 = (x333+((x334|x335)^x336));

	if (t78 != 18446744071576089882LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x338 = 382759LLU;
	int16_t x339 = INT16_MIN;
	static uint16_t x340 = UINT16_MAX;
	uint64_t t79 = 5263599669660LLU;

	t79 = (x337+((x338|x339)^x340));

	if (t79 != 41376589LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x345 = 4LLU;
	uint32_t x346 = 119U;
	int8_t x347 = INT8_MAX;
	uint64_t x348 = 238752423LLU;
	uint64_t t80 = 4039574031383333293LLU;

	t80 = (x345+((x346|x347)^x348));

	if (t80 != 238752476LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x349 = 2964;
	static int8_t x350 = INT8_MIN;
	int64_t x351 = INT64_MAX;
	uint8_t x352 = 40U;
	static int64_t t81 = 3238684296LL;

	t81 = (x349+((x350|x351)^x352));

	if (t81 != 2923LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x353 = 145U;
	int16_t x354 = 956;
	int32_t x355 = INT32_MIN;
	uint64_t x356 = UINT64_MAX;
	volatile uint64_t t82 = 2209895764596412LLU;

	t82 = (x353+((x354|x355)^x356));

	if (t82 != 2147482836LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x359 = 54U;
	int64_t x360 = -1LL;
	uint64_t t83 = 896394741LLU;

	t83 = (x357+((x358|x359)^x360));

	if (t83 != 924LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x361 = INT8_MAX;
	volatile int8_t x362 = -1;

	t84 = (x361+((x362|x363)^x364));

	if (t84 != -32641) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x365 = 8385480LLU;
	int64_t x366 = INT64_MIN;
	uint64_t x367 = 841LLU;
	uint16_t x368 = 3225U;
	uint64_t t85 = 4069431378LLU;

	t85 = (x365+((x366|x367)^x368));

	if (t85 != 9223372036863165336LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x369 = 3U;
	uint8_t x370 = 63U;
	int16_t x372 = INT16_MIN;
	uint32_t t86 = 1U;

	t86 = (x369+((x370|x371)^x372));

	if (t86 != 32706U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x373 = 0;
	static volatile int8_t x375 = INT8_MIN;
	int32_t x376 = -1;
	uint32_t t87 = 653398U;

	t87 = (x373+((x374|x375)^x376));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x378 = UINT64_MAX;
	uint8_t x379 = 3U;
	uint32_t x380 = 401784U;
	uint64_t t88 = 3667174449835145582LLU;

	t88 = (x377+((x378|x379)^x380));

	if (t88 != 9223372036854374023LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x385 = UINT8_MAX;
	static volatile int8_t x386 = INT8_MIN;

	t89 = (x385+((x386|x387)^x388));

	if (t89 != 275LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x389 = -1;
	int64_t x391 = INT64_MAX;
	int64_t x392 = INT64_MIN;
	int64_t t90 = 526814484454374LL;

	t90 = (x389+((x390|x391)^x392));

	if (t90 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x397 = -164;
	int64_t x398 = -1LL;
	int64_t x399 = INT64_MIN;
	volatile int64_t x400 = -1LL;

	t91 = (x397+((x398|x399)^x400));

	if (t91 != -164LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x401 = -51LL;
	int64_t x402 = -632LL;
	static volatile int16_t x403 = INT16_MIN;
	volatile int32_t x404 = INT32_MIN;
	int64_t t92 = 31LL;

	t92 = (x401+((x402|x403)^x404));

	if (t92 != 2147482965LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x405 = INT16_MAX;
	int16_t x406 = INT16_MIN;
	volatile int8_t x407 = -1;
	int32_t t93 = 478;

	t93 = (x405+((x406|x407)^x408));

	if (t93 != -32769) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x409 = INT16_MIN;
	int32_t x410 = -1;
	int64_t x411 = 404864377087LL;
	uint32_t x412 = 117242U;
	volatile int64_t t94 = 3975273270LL;

	t94 = (x409+((x410|x411)^x412));

	if (t94 != -150011LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x414 = 9;
	int8_t x415 = -1;
	int16_t x416 = 0;
	volatile int64_t t95 = 158013478821LL;

	t95 = (x413+((x414|x415)^x416));

	if (t95 != 3340936357843306LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x417 = 29118;
	volatile int64_t x419 = 11299782856275040LL;
	static uint32_t x420 = 374207676U;
	static volatile int64_t t96 = -360010LL;

	t96 = (x417+((x418|x419)^x420));

	if (t96 != 11299782490485402LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x421 = 98736LL;
	int16_t x423 = -1;
	volatile int64_t t97 = -8713044813429LL;

	t97 = (x421+((x422|x423)^x424));

	if (t97 != 33200LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x425 = INT8_MIN;
	int8_t x426 = 13;
	int32_t x428 = 208109427;

	t98 = (x425+((x426|x427)^x428));

	if (t98 != -208109556LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x429 = INT32_MIN;
	volatile int16_t x430 = -907;
	uint16_t x431 = 5577U;

	t99 = (x429+((x430|x431)^x432));

	if (t99 != 2087933405U) { NG(); } else { ; }
	
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

