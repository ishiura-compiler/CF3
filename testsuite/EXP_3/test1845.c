#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 13U;
static volatile int16_t x13 = INT16_MAX;
int32_t x15 = INT32_MAX;
int32_t x18 = INT32_MIN;
static int32_t x22 = -1;
uint16_t x23 = 2U;
static int16_t x24 = 110;
volatile int32_t t5 = -1001;
static uint64_t x27 = 386281430LLU;
int16_t x28 = INT16_MIN;
int8_t x31 = 3;
int32_t x34 = -1;
volatile uint64_t t10 = UINT64_MAX;
int64_t x48 = 1LL;
static int16_t x54 = -4;
static uint32_t t17 = 27959740U;
int32_t x74 = INT32_MAX;
static int32_t x75 = -1;
uint32_t x78 = UINT32_MAX;
int8_t x86 = 1;
uint64_t x87 = UINT64_MAX;
int32_t x93 = 3219;
static int64_t x104 = 458997LL;
static uint32_t x108 = 15238784U;
int32_t x110 = INT32_MIN;
static volatile uint32_t t27 = 243329129U;
int8_t x113 = 0;
uint16_t x120 = 2U;
int32_t x121 = INT32_MAX;
int32_t x125 = -1;
int64_t t31 = -75635722820216453LL;
int16_t x132 = INT16_MIN;
int64_t x142 = INT64_MAX;
int64_t x147 = 596313054699339292LL;
uint16_t x151 = 13165U;
int32_t x157 = INT32_MIN;
int16_t x159 = -1;
int64_t t40 = 13244756833198LL;
int64_t t41 = -2LL;
uint8_t x171 = 1U;
volatile int64_t t42 = -1838907408947736LL;
int16_t x176 = INT16_MIN;
uint64_t x185 = 1024326883822LLU;
int32_t x188 = -1;
int16_t x190 = -1;
int8_t x196 = -1;
uint64_t t48 = 3LLU;
volatile uint8_t x197 = 1U;
int32_t x202 = INT32_MIN;
static int64_t x206 = INT64_MAX;
uint32_t x210 = 19806U;
static uint32_t t52 = 2125657006U;
volatile int32_t x223 = 148969986;
int32_t x232 = INT32_MAX;
int32_t x234 = INT32_MAX;
volatile int64_t t58 = 252LL;
int64_t x240 = -81515347LL;
volatile int32_t x246 = -1;
static uint16_t x248 = 0U;
volatile uint32_t t61 = UINT32_MAX;
int32_t x251 = 0;
volatile int16_t x252 = INT16_MIN;
int32_t t62 = -23;
static uint8_t x253 = 1U;
volatile int32_t t63 = -9004;
uint16_t x260 = UINT16_MAX;
volatile int16_t x282 = INT16_MIN;
static int8_t x285 = INT8_MAX;
volatile uint8_t x287 = 1U;
volatile uint8_t x289 = UINT8_MAX;
int64_t x303 = 380298905263LL;
static int16_t x306 = -1;
static int32_t x308 = INT32_MIN;
int8_t x310 = -1;
volatile uint16_t x327 = 111U;
int32_t x330 = INT32_MIN;
int16_t x335 = -5292;
static int64_t x337 = INT64_MIN;
int64_t x352 = -1LL;
int16_t x359 = INT16_MAX;
uint32_t x363 = UINT32_MAX;
volatile uint64_t t90 = 660239092978LLU;
uint64_t x368 = UINT64_MAX;
volatile int8_t x370 = INT8_MIN;
int32_t t92 = 699786285;
int64_t x374 = -52808540534LL;
uint8_t x375 = 1U;
int8_t x387 = -1;
int32_t x397 = -1709663;


void f0(void) {
	int8_t x2 = 1;
	volatile int32_t x3 = -126907;
	uint32_t x4 = 11374012U;
	uint32_t t0 = 7539U;

	t0 = ((x1|x2)|(x3&x4));

	if (t0 != 11272205U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 63U;
	int16_t x6 = 13422;
	uint16_t x7 = 0U;
	int64_t x8 = -39020611LL;
	volatile int64_t t1 = -1767991688690859802LL;

	t1 = ((x5|x6)|(x7&x8));

	if (t1 != 13439LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 10887U;
	static int8_t x10 = 11;
	static int16_t x11 = INT16_MIN;
	int64_t x12 = -188268852428901665LL;
	static int64_t t2 = 1333582498573284420LL;

	t2 = ((x9|x10)|(x11&x12));

	if (t2 != -188268852428920177LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x14 = 15U;
	uint32_t x16 = UINT32_MAX;
	volatile uint32_t t3 = 1093720U;

	t3 = ((x13|x14)|(x15&x16));

	if (t3 != 2147483647U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -11;
	uint32_t x19 = 26094737U;
	int64_t x20 = -23194LL;
	volatile int64_t t4 = -385309725LL;

	t4 = ((x17|x18)|(x19&x20));

	if (t4 != -11LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;

	t5 = ((x21|x22)|(x23&x24));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = UINT16_MAX;
	int32_t x26 = INT32_MIN;
	uint64_t t6 = 44LLU;

	t6 = ((x25|x26)|(x27&x28));

	if (t6 != 18446744071948402687LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x29 = 174747224766468542LLU;
	volatile int16_t x30 = -3501;
	int16_t x32 = -1;
	uint64_t t7 = 17366559090224LLU;

	t7 = ((x29|x30)|(x31&x32));

	if (t7 != 18446744073709548543LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -11552218756014715LL;
	volatile int16_t x35 = INT16_MIN;
	volatile int32_t x36 = 777496864;
	int64_t t8 = -952286712LL;

	t8 = ((x33|x34)|(x35&x36));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -1;
	static int32_t x38 = -1;
	uint32_t x39 = 17263U;
	int64_t x40 = -788276LL;
	volatile int64_t t9 = 26296920830266384LL;

	t9 = ((x37|x38)|(x39&x40));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 28LLU;
	uint32_t x42 = UINT32_MAX;
	int8_t x43 = INT8_MIN;
	volatile int64_t x44 = -1LL;

	t10 = ((x41|x42)|(x43&x44));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	uint32_t x46 = 20U;
	volatile int32_t x47 = -1;
	int64_t t11 = 2576586LL;

	t11 = ((x45|x46)|(x47&x48));

	if (t11 != 2147483647LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x49 = 39539655U;
	uint8_t x50 = UINT8_MAX;
	uint8_t x51 = 91U;
	static int32_t x52 = -1;
	uint32_t t12 = 19479U;

	t12 = ((x49|x50)|(x51&x52));

	if (t12 != 39539711U) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 1332043U;
	int8_t x55 = -1;
	uint32_t x56 = UINT32_MAX;
	volatile uint32_t t13 = UINT32_MAX;

	t13 = ((x53|x54)|(x55&x56));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = INT64_MIN;
	int64_t x58 = INT64_MAX;
	static int8_t x59 = INT8_MIN;
	static uint16_t x60 = 78U;
	int64_t t14 = 62368LL;

	t14 = ((x57|x58)|(x59&x60));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = -15;
	int16_t x62 = INT16_MIN;
	int64_t x63 = 5LL;
	int32_t x64 = -1;
	volatile int64_t t15 = 398LL;

	t15 = ((x61|x62)|(x63&x64));

	if (t15 != -11LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 1370743U;
	static volatile int64_t x66 = INT64_MIN;
	static uint16_t x67 = 28U;
	int16_t x68 = -1;
	int64_t t16 = 2966025874868922838LL;

	t16 = ((x65|x66)|(x67&x68));

	if (t16 != -9223372036853405057LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x69 = 733167U;
	uint16_t x70 = UINT16_MAX;
	uint8_t x71 = 14U;
	uint32_t x72 = 16918904U;

	t17 = ((x69|x70)|(x71&x72));

	if (t17 != 786431U) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = -1;
	int16_t x76 = INT16_MAX;
	int32_t t18 = -212615;

	t18 = ((x73|x74)|(x75&x76));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	int32_t x79 = INT32_MIN;
	uint16_t x80 = UINT16_MAX;
	volatile uint32_t t19 = UINT32_MAX;

	t19 = ((x77|x78)|(x79&x80));

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x81 = 2U;
	volatile int64_t x82 = -1LL;
	static int16_t x83 = INT16_MIN;
	int8_t x84 = INT8_MIN;
	volatile int64_t t20 = 12LL;

	t20 = ((x81|x82)|(x83&x84));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MAX;
	int32_t x88 = INT32_MAX;
	uint64_t t21 = 10334971976751073LLU;

	t21 = ((x85|x86)|(x87&x88));

	if (t21 != 2147483647LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 131768U;
	static volatile int16_t x90 = INT16_MIN;
	int8_t x91 = -38;
	static int16_t x92 = 0;
	volatile uint32_t t22 = 9U;

	t22 = ((x89|x90)|(x91&x92));

	if (t22 != 4294935224U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x94 = 205606581U;
	uint32_t x95 = UINT32_MAX;
	static volatile uint32_t x96 = 227924U;
	volatile uint32_t t23 = 429290U;

	t23 = ((x93|x94)|(x95&x96));

	if (t23 != 205750007U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x97 = UINT32_MAX;
	int16_t x98 = INT16_MIN;
	uint32_t x99 = 8U;
	static uint64_t x100 = UINT64_MAX;
	static volatile uint64_t t24 = 2062107LLU;

	t24 = ((x97|x98)|(x99&x100));

	if (t24 != 4294967295LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	static uint16_t x102 = 797U;
	uint32_t x103 = UINT32_MAX;
	volatile int64_t t25 = 157199368LL;

	t25 = ((x101|x102)|(x103&x104));

	if (t25 != -31747LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	int64_t x106 = -720855159994398976LL;
	volatile int64_t x107 = INT64_MIN;
	static int64_t t26 = 2LL;

	t26 = ((x105|x106)|(x107&x108));

	if (t26 != -720855159994398976LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -22;
	uint32_t x111 = 244484209U;
	volatile int16_t x112 = -1;

	t27 = ((x109|x110)|(x111&x112));

	if (t27 != 4294967291U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x114 = INT64_MIN;
	static int8_t x115 = 1;
	volatile int8_t x116 = 0;
	volatile int64_t t28 = INT64_MIN;

	t28 = ((x113|x114)|(x115&x116));

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 2U;
	int64_t x118 = -1LL;
	int32_t x119 = -956727;
	volatile int64_t t29 = 819948190513LL;

	t29 = ((x117|x118)|(x119&x120));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x122 = 4U;
	uint32_t x123 = 3166707U;
	volatile int64_t x124 = INT64_MIN;
	static int64_t t30 = 1100LL;

	t30 = ((x121|x122)|(x123&x124));

	if (t30 != 2147483647LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x126 = 0U;
	int64_t x127 = 98LL;
	uint8_t x128 = 120U;

	t31 = ((x125|x126)|(x127&x128));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x129 = -2;
	int16_t x130 = INT16_MAX;
	int32_t x131 = INT32_MAX;
	volatile int32_t t32 = -3;

	t32 = ((x129|x130)|(x131&x132));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = 4283U;
	uint32_t x134 = 0U;
	int16_t x135 = INT16_MIN;
	static int16_t x136 = 267;
	static volatile uint32_t t33 = 0U;

	t33 = ((x133|x134)|(x135&x136));

	if (t33 != 4283U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x137 = INT8_MIN;
	volatile int32_t x138 = INT32_MIN;
	uint32_t x139 = 474171929U;
	static int16_t x140 = INT16_MAX;
	uint32_t t34 = 1233432U;

	t34 = ((x137|x138)|(x139&x140));

	if (t34 != 4294967193U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	volatile int16_t x143 = INT16_MAX;
	int64_t x144 = -1LL;
	int64_t t35 = 2LL;

	t35 = ((x141|x142)|(x143&x144));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = UINT8_MAX;
	int64_t x146 = 13946819403082LL;
	uint64_t x148 = 96214434462603417LLU;
	static volatile uint64_t t36 = 426LLU;

	t36 = ((x145|x146)|(x147&x148));

	if (t36 != 19297181752057343LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	int32_t x150 = -776;
	uint32_t x152 = 25U;
	volatile uint32_t t37 = 21372857U;

	t37 = ((x149|x150)|(x151&x152));

	if (t37 != 4294966521U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x153 = 57U;
	volatile uint32_t x154 = UINT32_MAX;
	static int16_t x155 = 1;
	int64_t x156 = 3869674577307382LL;
	volatile int64_t t38 = -2254716260851523LL;

	t38 = ((x153|x154)|(x155&x156));

	if (t38 != 4294967295LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x158 = 2U;
	static int16_t x160 = 54;
	uint32_t t39 = 178U;

	t39 = ((x157|x158)|(x159&x160));

	if (t39 != 2147483702U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	static int16_t x162 = -1;
	int32_t x163 = 114671708;
	static int16_t x164 = -1;

	t40 = ((x161|x162)|(x163&x164));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = -55684249;
	int64_t x166 = INT64_MIN;
	volatile int8_t x167 = INT8_MAX;
	static volatile int8_t x168 = 51;

	t41 = ((x165|x166)|(x167&x168));

	if (t41 != -55684233LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x169 = INT64_MIN;
	int16_t x170 = -1;
	int16_t x172 = INT16_MAX;

	t42 = ((x169|x170)|(x171&x172));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MIN;
	uint8_t x174 = UINT8_MAX;
	int8_t x175 = INT8_MIN;
	int32_t t43 = -2306;

	t43 = ((x173|x174)|(x175&x176));

	if (t43 != -32513) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	int16_t x178 = 3243;
	int32_t x179 = -1;
	int64_t x180 = INT64_MIN;
	static int64_t t44 = 69591128788852LL;

	t44 = ((x177|x178)|(x179&x180));

	if (t44 != -29525LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint64_t x181 = 6960169882592391965LLU;
	uint8_t x182 = 2U;
	int16_t x183 = INT16_MIN;
	static uint16_t x184 = 18071U;
	volatile uint64_t t45 = 7639524LLU;

	t45 = ((x181|x182)|(x183&x184));

	if (t45 != 6960169882592391967LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x186 = UINT16_MAX;
	uint16_t x187 = UINT16_MAX;
	volatile uint64_t t46 = 763771606093567LLU;

	t46 = ((x185|x186)|(x187&x188));

	if (t46 != 1024326893567LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x189 = -1;
	static volatile int32_t x191 = INT32_MIN;
	uint64_t x192 = 34816825424891841LLU;
	volatile uint64_t t47 = UINT64_MAX;

	t47 = ((x189|x190)|(x191&x192));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -10357512;
	volatile uint64_t x194 = 10929937018953915LLU;
	int8_t x195 = INT8_MIN;

	t48 = ((x193|x194)|(x195&x196));

	if (t48 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x198 = INT64_MAX;
	int8_t x199 = -1;
	int16_t x200 = INT16_MIN;
	volatile int64_t t49 = 60079401834555LL;

	t49 = ((x197|x198)|(x199&x200));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MIN;
	int8_t x203 = INT8_MIN;
	int32_t x204 = 462363;
	int64_t t50 = -85119056532586LL;

	t50 = ((x201|x202)|(x203&x204));

	if (t50 != -2147021312LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MIN;
	int8_t x207 = 4;
	int8_t x208 = 2;
	volatile int64_t t51 = -35385LL;

	t51 = ((x205|x206)|(x207&x208));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x209 = INT32_MAX;
	int16_t x211 = -623;
	uint8_t x212 = UINT8_MAX;

	t52 = ((x209|x210)|(x211&x212));

	if (t52 != 2147483647U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x213 = INT32_MIN;
	int16_t x214 = INT16_MIN;
	int16_t x215 = 16232;
	volatile int16_t x216 = 6;
	static int32_t t53 = -28694;

	t53 = ((x213|x214)|(x215&x216));

	if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MAX;
	int16_t x218 = INT16_MIN;
	volatile uint64_t x219 = UINT64_MAX;
	int16_t x220 = 151;
	static uint64_t t54 = 1654898984896542LLU;

	t54 = ((x217|x218)|(x219&x220));

	if (t54 != 18446744073709519103LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -1;
	int8_t x222 = 1;
	int8_t x224 = 1;
	static volatile int32_t t55 = -6;

	t55 = ((x221|x222)|(x223&x224));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = 82389970U;
	volatile int8_t x226 = 2;
	uint32_t x227 = 7157U;
	static int64_t x228 = 292160994785167LL;
	volatile int64_t t56 = 654285LL;

	t56 = ((x225|x226)|(x227&x228));

	if (t56 != 82394071LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = 545U;
	volatile int64_t x230 = INT64_MIN;
	volatile uint64_t x231 = 3LLU;
	volatile uint64_t t57 = 615LLU;

	t57 = ((x229|x230)|(x231&x232));

	if (t57 != 9223372036854776355LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x233 = -1815379743815LL;
	volatile int64_t x235 = INT64_MIN;
	uint32_t x236 = 38874U;

	t58 = ((x233|x234)|(x235&x236));

	if (t58 != -1814623682561LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = 32984888549579LL;
	volatile uint8_t x238 = UINT8_MAX;
	volatile int32_t x239 = INT32_MIN;
	int64_t t59 = -116984LL;

	t59 = ((x237|x238)|(x239&x240));

	if (t59 != -460283649LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x241 = INT16_MIN;
	uint8_t x242 = 2U;
	int8_t x243 = INT8_MIN;
	volatile int16_t x244 = INT16_MIN;
	static int32_t t60 = -4600040;

	t60 = ((x241|x242)|(x243&x244));

	if (t60 != -32766) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = UINT32_MAX;
	static uint8_t x247 = UINT8_MAX;

	t61 = ((x245|x246)|(x247&x248));

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = 4;
	static int8_t x250 = INT8_MIN;

	t62 = ((x249|x250)|(x251&x252));

	if (t62 != -124) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x254 = INT16_MIN;
	int16_t x255 = INT16_MAX;
	int32_t x256 = INT32_MIN;

	t63 = ((x253|x254)|(x255&x256));

	if (t63 != -32767) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MAX;
	uint64_t x258 = 343450176LLU;
	uint8_t x259 = 4U;
	static uint64_t t64 = 445681521207LLU;

	t64 = ((x257|x258)|(x259&x260));

	if (t64 != 2147483647LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x261 = UINT32_MAX;
	uint64_t x262 = UINT64_MAX;
	int16_t x263 = -1;
	static int64_t x264 = INT64_MAX;
	volatile uint64_t t65 = UINT64_MAX;

	t65 = ((x261|x262)|(x263&x264));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x265 = 7LLU;
	int64_t x266 = INT64_MAX;
	volatile uint8_t x267 = 14U;
	int64_t x268 = INT64_MAX;
	volatile uint64_t t66 = 4LLU;

	t66 = ((x265|x266)|(x267&x268));

	if (t66 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -1;
	int16_t x270 = -8410;
	static int8_t x271 = INT8_MAX;
	int16_t x272 = -7;
	int32_t t67 = -21;

	t67 = ((x269|x270)|(x271&x272));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = UINT32_MAX;
	int16_t x274 = 0;
	int8_t x275 = INT8_MIN;
	uint64_t x276 = UINT64_MAX;
	volatile uint64_t t68 = UINT64_MAX;

	t68 = ((x273|x274)|(x275&x276));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MAX;
	uint32_t x278 = UINT32_MAX;
	volatile int32_t x279 = INT32_MAX;
	uint8_t x280 = UINT8_MAX;
	volatile uint32_t t69 = UINT32_MAX;

	t69 = ((x277|x278)|(x279&x280));

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x281 = 1586512163967888LLU;
	int32_t x283 = 467;
	int8_t x284 = -3;
	static uint64_t t70 = 512055267LLU;

	t70 = ((x281|x282)|(x283&x284));

	if (t70 != 18446744073709523921LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x286 = UINT16_MAX;
	static int32_t x288 = -117;
	int32_t t71 = -722251585;

	t71 = ((x285|x286)|(x287&x288));

	if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x290 = -1;
	int16_t x291 = -26;
	int16_t x292 = 10214;
	int32_t t72 = -715888708;

	t72 = ((x289|x290)|(x291&x292));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x293 = 1468;
	volatile int16_t x294 = INT16_MIN;
	volatile int64_t x295 = -1LL;
	int8_t x296 = INT8_MIN;
	volatile int64_t t73 = -172453367LL;

	t73 = ((x293|x294)|(x295&x296));

	if (t73 != -68LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	static int32_t x298 = INT32_MIN;
	int32_t x299 = -1;
	int32_t x300 = INT32_MIN;
	static int32_t t74 = 1908;

	t74 = ((x297|x298)|(x299&x300));

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x301 = 0U;
	int32_t x302 = INT32_MAX;
	uint16_t x304 = 214U;
	volatile int64_t t75 = 1184616127090413058LL;

	t75 = ((x301|x302)|(x303&x304));

	if (t75 != 2147483647LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -6222;
	static uint32_t x307 = 51U;
	uint32_t t76 = UINT32_MAX;

	t76 = ((x305|x306)|(x307&x308));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = 103406994;
	static volatile uint16_t x311 = 444U;
	int64_t x312 = -1LL;
	int64_t t77 = -938LL;

	t77 = ((x309|x310)|(x311&x312));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x313 = INT64_MAX;
	int8_t x314 = 0;
	volatile uint64_t x315 = UINT64_MAX;
	static uint32_t x316 = UINT32_MAX;
	volatile uint64_t t78 = 36227479LLU;

	t78 = ((x313|x314)|(x315&x316));

	if (t78 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x317 = UINT64_MAX;
	static volatile uint64_t x318 = 5680068LLU;
	int16_t x319 = INT16_MAX;
	int8_t x320 = INT8_MAX;
	static volatile uint64_t t79 = UINT64_MAX;

	t79 = ((x317|x318)|(x319&x320));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MIN;
	int64_t x322 = 100847LL;
	int8_t x323 = 3;
	int8_t x324 = -1;
	static volatile int64_t t80 = 31280594782293567LL;

	t80 = ((x321|x322)|(x323&x324));

	if (t80 != -2147382801LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = 116U;
	static int8_t x326 = -1;
	int32_t x328 = INT32_MAX;
	volatile int32_t t81 = 474039;

	t81 = ((x325|x326)|(x327&x328));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x329 = 605U;
	int32_t x331 = INT32_MIN;
	volatile int8_t x332 = -1;
	static volatile uint32_t t82 = 245U;

	t82 = ((x329|x330)|(x331&x332));

	if (t82 != 2147484253U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = 325756354U;
	static int8_t x334 = INT8_MIN;
	int64_t x336 = -1LL;
	int64_t t83 = -44216680LL;

	t83 = ((x333|x334)|(x335&x336));

	if (t83 != -42LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x338 = 44164285LLU;
	uint64_t x339 = 60570580588LLU;
	int16_t x340 = 74;
	uint64_t t84 = 797098LLU;

	t84 = ((x337|x338)|(x339&x340));

	if (t84 != 9223372036898940157LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x341 = INT32_MAX;
	int64_t x342 = INT64_MIN;
	static int64_t x343 = 1LL;
	int32_t x344 = INT32_MIN;
	int64_t t85 = 1LL;

	t85 = ((x341|x342)|(x343&x344));

	if (t85 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = UINT32_MAX;
	int16_t x346 = -1;
	static int64_t x347 = INT64_MIN;
	uint16_t x348 = 0U;
	volatile int64_t t86 = 2431101876LL;

	t86 = ((x345|x346)|(x347&x348));

	if (t86 != 4294967295LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 1U;
	uint8_t x350 = 0U;
	uint8_t x351 = 45U;
	static int64_t t87 = -5740475684594LL;

	t87 = ((x349|x350)|(x351&x352));

	if (t87 != 45LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x353 = 55504146U;
	int16_t x354 = INT16_MAX;
	int32_t x355 = INT32_MIN;
	volatile int64_t x356 = 2LL;
	int64_t t88 = -50LL;

	t88 = ((x353|x354)|(x355&x356));

	if (t88 != 55508991LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x357 = -1;
	volatile int64_t x358 = INT64_MAX;
	uint64_t x360 = 8561986021742184520LLU;
	uint64_t t89 = UINT64_MAX;

	t89 = ((x357|x358)|(x359&x360));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MIN;
	uint32_t x362 = 285228977U;
	static uint64_t x364 = 596741926LLU;

	t90 = ((x361|x362)|(x363&x364));

	if (t90 != 4294967223LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = 2461693U;
	uint64_t x366 = 7134483029512200LLU;
	volatile int64_t x367 = -4572559722809532LL;
	uint64_t t91 = 85986346030LLU;

	t91 = ((x365|x366)|(x367&x368));

	if (t91 != 18446702051726852093LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MIN;
	int32_t x371 = INT32_MIN;
	volatile int32_t x372 = INT32_MAX;

	t92 = ((x369|x370)|(x371&x372));

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x373 = INT64_MAX;
	uint32_t x376 = 9909961U;
	int64_t t93 = -520828639710071LL;

	t93 = ((x373|x374)|(x375&x376));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x377 = 1U;
	uint64_t x378 = 7609311594862632143LLU;
	int8_t x379 = INT8_MIN;
	int8_t x380 = INT8_MIN;
	uint64_t t94 = 4556LLU;

	t94 = ((x377|x378)|(x379&x380));

	if (t94 != 18446744073709551567LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MAX;
	int8_t x382 = -1;
	int32_t x383 = 100074199;
	uint16_t x384 = UINT16_MAX;
	volatile int32_t t95 = 1;

	t95 = ((x381|x382)|(x383&x384));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	int16_t x386 = INT16_MAX;
	volatile uint8_t x388 = 93U;
	int32_t t96 = 14957;

	t96 = ((x385|x386)|(x387&x388));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = -5;
	int32_t x390 = -1;
	static int32_t x391 = -1;
	static volatile uint8_t x392 = 91U;
	volatile int32_t t97 = 127654341;

	t97 = ((x389|x390)|(x391&x392));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x393 = INT64_MAX;
	int8_t x394 = -48;
	static int16_t x395 = INT16_MIN;
	volatile int8_t x396 = 0;
	volatile int64_t t98 = 66143540LL;

	t98 = ((x393|x394)|(x395&x396));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x398 = INT64_MIN;
	static int16_t x399 = -111;
	int8_t x400 = INT8_MAX;
	static volatile int64_t t99 = 1716596662LL;

	t99 = ((x397|x398)|(x399&x400));

	if (t99 != -1709647LL) { NG(); } else { ; }
	
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

